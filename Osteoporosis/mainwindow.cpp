#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "csvhandler.h"
#include <QAudioDevice>
#include <QAudioSink>


csvhandler openCSV;
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //------------------- load qustion and Printer -------------------//
    openCSV.loadQuestion();

    numPage = 0;
    selectedPrinter = openCSV.loadPrinter();
    ui->printerLabel->setText(selectedPrinter);

    //------------------- config css style -------------------//
    QFile file("resources/stylesheet.qss");
    file.open(QFile::ReadOnly);
    styleSheet = QLatin1String(file.readAll());
//    this->setStyleSheet(styleSheet);
    ui->stackedWidget->setStyleSheet(styleSheet);

    //------------------- set up sound -------------------//
    player = new QMediaPlayer;
    audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(soundVolume); //set Max =100


    //------------------- set up video --------------------//

    if(isVideoFirstPage){
        videoWidget = new QVideoWidget;
        QGridLayout *layout;
        layout = new QGridLayout(this);
        layout->addWidget(videoWidget);
        ui->videoPlayerBox->setLayout(layout);
    }
    else{
//        QPixmap pixmap("resources/image/หุ่นยนต์กะทิ HERO II.png"); // Load the image from file
//        QIcon buttonIcon(pixmap); // Create an icon from the image
//        ui->videoPlayerBox->setIcon(buttonIcon); // Set the button icon
//        ui->videoPlayerBox->setIconSize(ui->videoPlayerBox->size()); // Set the icon size to match the button size


        ui->videoPlayerBox->setStyleSheet("QPushButton { border-image: url(resources/image/หุ่นยนต์กะทิ HERO II.png) 0 0 0 0 stretch stretch; \
                                                         border: 2px solid black;}");


    }



    //------------------- play media --------------------//
    playedMusic();
    QPixmap helloImageFile("resources/image/สวัสดีจ้า น้องกะทิ.png");
    QPixmap thankYouImageFile("resources/image/ขอบคุณ กะทิ.png");
    QPixmap goodluckImageFile("resources/image/เฮง เฮง.png");
    QPixmap godImageFile("resources/image/บุญรักษา กะทิ.png");
    ui->helloImage->setPixmap(helloImageFile);
    ui->thankYouImage->setPixmap(thankYouImageFile);
    ui->goodLuckImage->setPixmap(goodluckImageFile);
    ui->godImage->setPixmap(godImageFile);

//    ui->userName->setGraphicsEffect(effect);
//    qDebug() << ui->stackedWidget->currentWidget()->objectName().compare("restPage", Qt::CaseInsensitive) ;

//    connect(player,SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus)),this,SLOT(playedMusic()));

    // ----------------- set click pop up -------------------//
    showBox = new DescriptionBox(this);
    ui->questionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);         //
    connect(ui->questionLabel,SIGNAL(linkActivated(QString)),this,SLOT(showDescription(QString))  );
    connect(showBox,SIGNAL(rejected()),this,SLOT(closeDescription())); //stop sound when box close

    // ----------------- set audio slot -------------------//
    connect(player,SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus)),this,SLOT(mediaAndPage()));
//    connect(audioOutput,SIGNAL(volumeChanged(float)),SLOT(soundDeviceChange()));

    HNNumPadConnect();
    //------------------- set barcode --------------------//
    m_barcodeTimer = new QTimer;
    connect(m_barcodeTimer, SIGNAL(timeout()), this,SLOT(showBarcode()));

//    this->
    //------------------- set maximum --------------------//
//    this->showMaximized();
    this->showFullScreen();

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::playedMusic()
{
//      player->setAudioOutput(audioOutput);
//    player->stop();

     QString fileName;


    if(isAudio){

        if(numPage == 0){

            qDebug() << ui->stackedWidget->currentWidget();
            if(ui->stackedWidget->currentWidget() == ui->HomePage) fileName = "intro.mp3";
            else if(ui->stackedWidget->currentWidget() == ui->HNpage ){
                fileName = "barcode_instruction.m4a";
                qDebug() << "barcode sound";
            }
        }
        else if(0< numPage && numPage <= openCSV.maxQuestion){

            // for switch sound main <-> description
            if(showBox->isActiveWindow())  fileName = currentPageQuestion.currentPlaySound;
            else fileName = currentPageQuestion.audioMainFileName;

        }
        else if(numPage == openCSV.maxQuestion+1){
            fileName = "end_01_print.mp3";
        }
        else if(numPage == openCSV.maxQuestion+2){
             fileName = "end_02_edit.mp3";
        }

        currentTrack = fileName;
        fileName = "resources/audio/"+fileName;
    }
    else{
        player->stop();

        if(isVideoFirstPage){
            fileName = "ความงดงามแห่งการให้.mp4";
            currentTrack = fileName;
            fileName = "resources/video/" + fileName;
            player->setVideoOutput(videoWidget);
        }
        else{
            fileName = "ความงดงามแห่งการให้.mp3";
            currentTrack = fileName;
            fileName = "resources/audio/"+fileName;
//            ui->videoPlayerBox->setIcon(QIcon("resources/image/หุ่นยนต์กะทิ HERO II.png"));
//            QPixmap frontImage("resources/image/หุ่นยนต์กะทิ HERO II.png");
//            this->imageLabel->setPixmap(frontImage);
//            imageLabel->setScaledContents(true);
//            imageLabel->resize(videoWidget->size());

//            // Show the video widget and start playing the video
//            videoWidget->show();

        }


    }

//    qDebug() << "played";

    player->setSource(QUrl::fromLocalFile(fileName));
    player->play();


}

void MainWindow::mediaAndPage()
{
//    ui->stackedWidget->currentWidget();
    if(int(player->playbackState()) == 0){ // loop if audio stopped

        if(isLoopAudio){
            if(ui->stackedWidget->currentWidget() == ui->HomePage){
                 nextPage();
            }
            playedMusic();
        }
        else{
            if(ui->stackedWidget->currentWidget() == ui->HomePage){
                playedMusic();
                isLoopAudio = true;
            }
        }
    }

}

void MainWindow::showDescription(const QString &link)
{
    qDebug() << "clicked!!!" << link;


//    QString jsonString = get<1>(openCSV.newQuestionArr[numPage-1])[4].c_str();
//    jsonString.replace("|",",").replace("\'","\"");
//    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonString.toUtf8());

    cursor.setPos(100,100);
    QJsonObject innerObj;
    innerObj =  currentPageQuestion.jsonObject[link].toObject();
    QString image_des_file = innerObj["image"].toString();
    currentPageQuestion.currentPlaySound = innerObj["sound"].toString();
    showBox->resize(QSize(100,100));
    showBox->updateBox("resources/image/description box/"+image_des_file);
    if (!showBox->isActiveWindow()){
        showBox->close();
    }

    showBox->open();

    player->stop();
    playedMusic();
}

void MainWindow::closeDescription()
{
    player->stop();
    playedMusic();
}

void MainWindow::HNNumPressed()
{
    QPushButton *tmpBtn = (QPushButton *)sender();
    if(tmpBtn->objectName() == "hn_confirm"){
            qDebug() << "confirm";

            ui->HNnumberLabel->setText(this->HNNumber);
            ui->homeHNLabel->setText(this->HNNumber);

            player->stop();
            isAudio = true;
            isLoopAudio = false;
            ui->stackedWidget->setCurrentWidget(ui->HomePage);
            playedMusic();


    }
    else if(tmpBtn->objectName() == "hn_delete"){
        qDebug() << "delete";
        if(this->HNNumber.size() > 0){
            this->HNNumber.chop(1);
            ui->HNnumberLabel->setText(this->HNNumber);
        }
    }
    else{
        qDebug() << "test" << tmpBtn->text();
        this->HNNumber += tmpBtn->text();
        ui->HNnumberLabel->setText(this->HNNumber);
    }

}

void MainWindow::nextPage(){
    numPage++;
    player->stop();
    ui->stackedWidget->setStyleSheet(styleSheet);
    ui->summaryTable->setStyleSheet("font: 400 36pt \"JasmineUPC\"; text-align: center;padding-right:10px; QHeaderView::section { padding-right: 50px; background-color: #6ed0b3;}");
     cursor.setPos(100,100);
    if(numPage == openCSV.maxQuestion+1){
//        qDebug() << "summary page";
        ui->stackedWidget->setCurrentWidget(ui->summaryPage);
        for(int i = 0;i<openCSV.maxQuestion;i++){

                ui->summaryTable->insertRow(i);
                //------------------------ get answer from user ---------------------------/
                // (int,vector<str>): vector<str> question,questionType,audioFileName,questionForPrint,resource,NoteForDisplay;

                string ans ="";
                if(get<1>(openCSV.answerArr[i]).compare("yes") == 0) ans = "ใช่";
                else if(get<1>(openCSV.answerArr[i]).compare("no") == 0) ans = "ไม่";
                else ans = "ไม่แน่ใจ";

                // single columns
//                ui->summaryTable->setItem(i,0, new QTableWidgetItem(to_string( i+1 ).c_str()));
//                ui->summaryTable->setItem(i,1, new QTableWidgetItem(ans.c_str()));

                //double columns
                int halfNumQuestion = openCSV.maxQuestion/2;
                if(openCSV.maxQuestion%2 == 1) halfNumQuestion++;
                ui->summaryTable->setItem(i%halfNumQuestion,0+2*(i/halfNumQuestion), new QTableWidgetItem(to_string( i+1 ).c_str()));
                ui->summaryTable->setItem(i%halfNumQuestion,1+2*(i/halfNumQuestion), new QTableWidgetItem(ans.c_str()));
                ui->summaryTable->item(i%halfNumQuestion,0+2*(i/halfNumQuestion))->setTextAlignment(Qt::AlignCenter);
                ui->summaryTable->item(i%halfNumQuestion,1+2*(i/halfNumQuestion))->setTextAlignment(Qt::AlignCenter);
                if( (i%halfNumQuestion)%2 == 0 ){
                    ui->summaryTable->item(i%halfNumQuestion,0+2*(i/halfNumQuestion))->setBackground(QColor("#6ed0b3"));
                    ui->summaryTable->item(i%halfNumQuestion,1+2*(i/halfNumQuestion))->setBackground(QColor("#6ed0b3"));
                }
        }
//        numPage = 0;

    }
    else if(numPage == openCSV.maxQuestion+2){
        qDebug() << "last page";
        ui->stackedWidget->setCurrentWidget(ui->LastPage);
    }
    else{

        // ------------------  get current page info ----------------------------//
        vector<string> questionVec; // question,questionType,audioFileName,questionForPrint,resource,NoteForDisplay;
        tie(this->currentPageQuestion.noQuestion, questionVec) = openCSV.newQuestionArr[numPage-1];
        this->currentPageQuestion.question = questionVec[0].c_str();
        this->currentPageQuestion.questionType = questionVec[1].c_str();
        this->currentPageQuestion.audioMainFileName = questionVec[2].c_str();
        this->currentPageQuestion.resourceJson = questionVec[4].c_str();
        this->currentPageQuestion.NoteForDisplay =questionVec[5].c_str();

        currentPageQuestion.resourceJson.replace("|",",").replace("\'","\"");
        currentPageQuestion.jsonDocument = QJsonDocument::fromJson(currentPageQuestion.resourceJson.toUtf8());
        currentPageQuestion.jsonObject = currentPageQuestion.jsonDocument.object();



        //----------------------- display question ----------------------------//

        if(currentPageQuestion.questionType.compare("yesno") == 0){
            currentPageQuestion.question = QString::number( currentPageQuestion.noQuestion)  +  ". "+currentPageQuestion.question;
            ui->questionLabel->setText(currentPageQuestion.question);
            ui->stackedWidget->setCurrentWidget(ui->YesNoQuestionPage);
            ui->noteLabel->setText(currentPageQuestion.NoteForDisplay);
//            ui->
//            ui->progressBar->setValue((int)((numPage-1)*100/openCSV.maxQuestion));
        }
    }

}

bool MainWindow::printDocument()
{
    string outputStrPaper = "<html>";
    outputStrPaper = outputStrPaper + "<meta name=\"qrichtext\" content=1>";
    outputStrPaper = outputStrPaper + " <head> <style> table, tr, td {font-size: 12pt; padding:1pt; vertical-align: middle; border: 1px; border-style: solid; border-collapse: collapse;   cellspacing='0'; }\
            span {    height: 12pt;  width: 10pt; background-color: #ddd; border: 1px; border-color:black; border-style: solid; \
              padding-left:2pt; padding-right:2pt;  \
                border-collapse: collapse;  border-radius: 1pt; \
              }    \
             #tableA {  border: 1px; border-style: solid; border-collapse: collapse;  }       \
 </style> </head><body>";

    outputStrPaper = outputStrPaper + "<h1 style =\"text-align: center;\">กระดาษคำตอบ แบบประเมินโอกาสเสี่ยงการเกิดกระดูกหักที่ระยะเวลา 10 ปี </h1>";
    outputStrPaper = outputStrPaper + "<p style = \"font-size: 16pt;\"> เลขประจำตัวโรงพยาบาล(HN) "+ this->HNNumber.toStdString();

//    outputStrPaper = outputStrPaper + "<p style = \"font-size: 22pt;\">ชื่อ-นามสกุล………………………………………………………เลขประจำตัวโรงพยาบาล…………………………อายุ………………ปี</p>\
//                                        <p style = \"font-size: 22pt;\">เพศ <span> \t </span> หญิง <span> \t  </span> ชาย    น้ำหนัก……………………กิโลกรัม  ส่วนสูง………………………เซนติเมตร</p>";


    for(int i = 0;i<openCSV.maxQuestion;i++){
            string ans ="";
            vector<string> xAns = {" "," "," "};
            if(get<1>(openCSV.answerArr[i]).compare("yes") == 0) {
                ans = "ใช่";
                xAns[0] = "X";
            }
            else if(get<1>(openCSV.answerArr[i]).compare("no") == 0) {
                ans = "ไม่";
                xAns[2] = "X";
            }
            else {
                ans = "ไม่แน่ใจ";
                xAns[1] = "X";
            }

            string question = get<1>(openCSV.newQuestionArr[i])[3];
            outputStrPaper = outputStrPaper +"<p>" + to_string(i+1) +".  "+question.c_str()+"</p>";
            outputStrPaper = outputStrPaper + "<table > <tr> \
                                              <td> <span>    <b style = \"font-size: 10pt;\">"+xAns[0].c_str()+"</b >   </span> ใช่ </td> \
                                              <td> <span >   <b style = \"font-size: 10pt;\">"+xAns[1].c_str()+"</b>   </span> ไม่แน่ใจ </td> \
                                              <td> <span >   <b style = \"font-size: 10pt;\">"+xAns[2].c_str()+"</b>   </span>  ไม่ </td> \
                                              </tr> </table>";
    }
    outputStrPaper = outputStrPaper +"<p>หากท่านต้องการ<u>แก้ไขคำตอบ</u> ท่านสามารถแก้ไขในกระดาษคำตอบนี้ได้ \
    เมื่อเสร็จเรียบร้อยแล้ว ให้ท่าน<u>ส่งกระดาษคำตอบให้กับเจ้าหน้าที่</u> เพื่อนำข้อมูลไปเข้าโปรแกรมคำนวณโอกาสเสี่ยงการเกิดกระดูกหักต่อไป</p>";
    outputStrPaper+= "</body></html>";




    printer.setFullPage(true);
    printer.setPrinterName(selectedPrinter);


//    QPrintDialog dialog(&printer,this);
//    dialog.setWindowTitle("Print Document");
//    if( dialog.exec() == QDialog::Rejected) return false;

    QTextDocument document;

    document.setDefaultStyleSheet(" body {font-size: 12pt; font-family:TH Sarabun New} h1 {font-size: 20pt;} p {font-size: 12pt;} b {font-size:12pt;}");
    document.setHtml(outputStrPaper.c_str());

//    document.setDocumentMargin(2);
//    printer.setFullPage(true);

    document.setDocumentMargin(1);
    printer.setPageSize(QPageSize::A4);
    //    printer.setPageSize(QPageSize::Letter);
//    printer.setPageMargins(QMarginsF(0, -10, 1, 0));

    document.print(&printer);

    return true;
}

void MainWindow::setSound()
{
    if(isSound){
        if(soundVolume == 0){
            audioOutput->setVolume(1);
            ui->soundSlider->setValue(100);
        }
        else audioOutput->setVolume(soundVolume/100.0);

    }
    else{
        audioOutput->setVolume(0);
    }
}



void MainWindow::on_startButton_clicked()
{

    this->nextPage();


}


void MainWindow::on_yesButton_clicked()
{
    int noQuestion = numPage;
    string answer = "yes";
    openCSV.answerArr.push_back(tie(noQuestion,answer));

    this->nextPage();
}


void MainWindow::on_notSureButton_clicked()
{
    int noQuestion = numPage;
    string answer = "not sure";
    openCSV.answerArr.push_back(tie(noQuestion,answer));

    this->nextPage();
}




void MainWindow::on_noButton_clicked()
{
    int noQuestion = numPage;
    string answer = "no";
    openCSV.answerArr.push_back(tie(noQuestion,answer));

    this->nextPage();
}


void MainWindow::on_exportFile_clicked()
{
    // set HN number
    openCSV.HNNumber = this->HNNumber;

    openCSV.exportCSV();
    if(printDocument()){
        this->nextPage();
    }

}


void MainWindow::on_backButton_clicked()
{
//    ui->stackedWidget->setCurrentWidget(ui->HomePage);

    if(ui->stackedWidget->currentWidget()->objectName().compare("SettingPage", Qt::CaseInsensitive) == 0 && numPage > 0){
        numPage--;
        nextPage();
    }
    else{
        ui->stackedWidget->setCurrentWidget(ui->restPage);
        numPage = 0;
        ui->summaryTable->setRowCount(0);
        openCSV.answerArr.clear();
        isAudio = false;
    //    player->stop();
    //    ui->numericDisplay->display(0);
        playedMusic();

        ui->HNnumberLabel->setText("");
        this->HNNumber = "";
    }


}


void MainWindow::on_bigBacktoHomeBTN_clicked()
{
    on_backButton_clicked();
}


void MainWindow::on_printAgain_clicked()
{
    printDocument();
}


void MainWindow::on_passPage_clicked()
{
    this->nextPage();
}


void MainWindow::on_soundControl_clicked()
{
    if(isSound){
        isSound = false;
        ui->soundControl->setStyleSheet(" border-image: url(resources/image/mute.png);  height: 50px; width: 50px;");

    }
    else{
        isSound = true;

        ui->soundControl->setStyleSheet(" border-image: url(resources/image/volume.png);  height: 50px; width: 50px;");
    }
    setSound();
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->SettingPage);
}


void MainWindow::on_soundSlider_valueChanged(int value)
{
   soundVolume = ui->soundSlider->value();
   ui->soundVolumeLabel->setText(to_string(soundVolume).c_str());
   audioOutput->setVolume(soundVolume/100.0);
   if(soundVolume == 0){
       ui->soundControl->setStyleSheet(" border-image: url(resources/image/mute.png);  height: 50px; width: 50px;");
   }
   else{
       ui->soundControl->setStyleSheet(" border-image: url(resources/image/volume.png);  height: 50px; width: 50px;");
   }

}


void MainWindow::on_printerSettingBtn_clicked()
{

    QPrintDialog dialog(&printer,this);

    dialog.setWindowTitle("Print Document");
    if( dialog.exec() == QDialog::Rejected) return;
    ui->printerLabel->setText(printer.printerName());
    selectedPrinter =  printer.printerName();
    openCSV.savePrinter(selectedPrinter);

}


//void MainWindow::on_playVideoButton_clicked()
//{

//    isAudio = false;
//    ui->stackedWidget->setCurrentWidget(ui->restPage);
//    playedMusic();
//}


void MainWindow::on_videoPlayerBox_clicked()
{

//    ui->stackedWidget->setCurrentWidget(ui->HomePage);
    ui->stackedWidget->setCurrentWidget(ui->HNpage);
    isAudio = true;
    playedMusic();

}


void MainWindow::showBarcode(){


//    qDebug() << "time:" << m_barcodeTimer->remainingTime()<< "|" << m_barcodeTimer->timerId();
    qDebug() << "end: " << this->barcodeNum;

    if( ui->stackedWidget->currentWidget()->objectName().compare(ui->HNpage->objectName(), Qt::CaseInsensitive) == 0){
         qDebug() << "read: " << this->barcodeNum;
         ui->HNnumberLabel->setText(this->barcodeNum);
         ui->homeHNLabel->setText(this->barcodeNum);
         this->HNNumber = this->barcodeNum;


         player->stop();
         isAudio = true;
         isLoopAudio = false;
         ui->stackedWidget->setCurrentWidget(ui->HomePage);
         playedMusic();


    }

//    i)
    this->m_barcodeTimer->stop();
    this->barcodeNum = "";
}


void MainWindow::keyPressEvent(QKeyEvent *event){

    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
//        qDebug()  << "end:" <<event->text();
    }
    else   {
//        qDebug()  << event->text();
        barcodeNum+= event->text();
        if(this->m_barcodeTimer->isActive()){
            this->m_barcodeTimer->stop();
            this->m_barcodeTimer->start(50);
//            qDebug() << "stop";
        }
        else {
//            qDebug() << this->m_barcodeTimer->isActive() << "start";
            this->m_barcodeTimer->start(50);
        }
    }



}

void MainWindow::HNNumPadConnect()
{
//    ui->
    for(int i =0;i<10;i++){
        QString btnName = "hn_"+QString::number(i);
        QPushButton* tmpBtn;
        tmpBtn = MainWindow::findChild<QPushButton *>(btnName);
        connect(tmpBtn,SIGNAL(released()),this,SLOT(HNNumPressed()));
    }
    QString btnName = "hn_confirm";
    QPushButton* tmpBtn = MainWindow::findChild<QPushButton *>(btnName);
    connect(tmpBtn,SIGNAL(released()),this,SLOT(HNNumPressed()));

    QString btnName2 = "hn_delete";
    QPushButton* tmpBtn2 = MainWindow::findChild<QPushButton *>(btnName2);
    connect(tmpBtn2,SIGNAL(released()),this,SLOT(HNNumPressed()));
}


void MainWindow::on_closeProgramBtn_pressed()
{
    QMainWindow::close();
}

