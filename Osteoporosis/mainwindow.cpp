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

    videoWidget = new QVideoWidget;
    QGridLayout *layout;
    layout = new QGridLayout(this);
    layout->addWidget(videoWidget);
    ui->videoPlayerBox->setLayout(layout);

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

    ui->questionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    connect(ui->questionLabel,SIGNAL(linkActivated(QString)),this,SLOT(showDescription(QString))  );
    connect(player,SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus)),this,SLOT(mediaAndPage()));


//    connect(audioOutput,SIGNAL(volumeChanged(float)),SLOT(soundDeviceChange()));
    this->showMaximized();
//    this->showFullScreen();

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::playedMusic()
{
//      player->setAudioOutput(audioOutput);
//    player->stop();
      string question,questionType,fileName;
    if(isAudio){

        int noQuestion;


        if(numPage == 0){

            fileName = "intro.mp3";
        }
        else if(0< numPage && numPage <= openCSV.maxQuestion){
            tie(noQuestion,question,questionType,fileName) = openCSV.questionArr[numPage-1];
        }
        else if(numPage == openCSV.maxQuestion+1){
            fileName = "end_01_print.mp3";
        }
        else if(numPage == openCSV.maxQuestion+2){
             fileName = "end_02_edit.mp3";
        }
        currentTrack = fileName.c_str();
        fileName = "resources/audio/"+fileName;
    }
    else{
        player->stop();
        fileName = "ความงดงามแห่งการให้.mp4";
        currentTrack = fileName.c_str();
        fileName = "resources/video/" + fileName;
        player->setVideoOutput(videoWidget);
    }

//    qDebug() << "played";

    player->setSource(QUrl::fromLocalFile(fileName.c_str()));
    player->play();


}

void MainWindow::mediaAndPage()
{
//    ui->stackedWidget->currentWidget();
    if(int(player->playbackState()) == 0){
//        qDebug() << "1 st layer" <<currentTrack << player->playbackState();
        if(ui->stackedWidget->currentWidget()->objectName().compare("HomePage", Qt::CaseInsensitive) == 0){
//            qDebug() << currentTrack << player->playbackState() << int(player->playbackState());

            if(currentTrack.compare("ความงดงามแห่งการให้.mp4", Qt::CaseInsensitive) == 0 && int(player->playbackState()) == 0 ){
                  playedMusic();
            }
            else{
                nextPage();
                playedMusic();
            }

//            qDebug() << currentTrack <<  player->playbackState();
        }
        else{
            playedMusic();
        }
    }

}

void MainWindow::showDescription(const QString &link)
{
    qDebug() << "clicked!!!" << link;
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

                string ans ="";
                if(get<1>(openCSV.answerArr[i]).compare("yes") == 0) ans = "ใช่";
                else if(get<1>(openCSV.answerArr[i]).compare("no") == 0) ans = "ไม่";
                else ans = "ไม่แน่ใจ";

                // single columns
//                ui->summaryTable->setItem(i,0, new QTableWidgetItem(to_string( i+1 ).c_str()));
//                ui->summaryTable->setItem(i,1, new QTableWidgetItem(ans.c_str()));

                //double columns
                int halfNumQuestion = openCSV.maxQuestion/2;
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
//        qDebug() << "last page";
        ui->stackedWidget->setCurrentWidget(ui->LastPage);
    }
    else{
        int noQuestion;
        string question,questionType,fileName;
        tie(noQuestion,question,questionType,fileName) = openCSV.questionArr[numPage-1];
        if(questionType.compare("yesno") == 0){
//            qDebug() << "yesno";
            question = to_string( noQuestion ) +". "+question;
            ui->questionLabel->setText(question.c_str());
            ui->stackedWidget->setCurrentWidget(ui->YesNoQuestionPage);

//            ui->progressBar->setValue((int)((numPage-1)*100/openCSV.maxQuestion));

        }
    }





}

bool MainWindow::printDocument()
{
    string outputStrPaper = "<html>";
    outputStrPaper = outputStrPaper + "<meta name=\"qrichtext\" content=1>";
    outputStrPaper = outputStrPaper + " <head> <style> table, tr, td {font-size: 18x; padding:2px; vertical-align: middle; border: 1px; border-style: solid; border-collapse: collapse;   cellspacing='0'; }\
            span {    height: 10px;  width: 10px; background-color: #ddd; border: 1px; border-color:black; border-style: solid; \
              padding-left:2px; padding-right:2px;  \
                border-collapse: collapse;  border-radius: 3px; \
              }    \
             #tableA {  border: 1px; border-style: solid; border-collapse: collapse;  }       \
 </style> </head><body>";

    outputStrPaper = outputStrPaper + "<h1 style =\"text-align: center;\">กระดาษคำตอบ แบบประเมินโอกาสเสี่ยงการเกิดกระดูกหักที่ระยะเวลา 10 ปี </h1>";
    outputStrPaper = outputStrPaper + "<p style = \"font-size: 22px;\">ชื่อ-นามสกุล………………………………………………………เลขประจำตัวโรงพยาบาล…………………………อายุ………………ปี</p>\
                                        <p style = \"font-size: 22px;\">เพศ <span> \t </span> หญิง <span> \t  </span> ชาย    น้ำหนัก……………………กิโลกรัม  ส่วนสูง………………………เซนติเมตร</p>";
    for(int i = 0;i<openCSV.maxQuestion;i++){
//            qDebug() << i+1 << get<1>(openCSV.answerArr[i]).c_str();
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

            string question = get<1>(openCSV.questionArr[i]);
            outputStrPaper = outputStrPaper +"<p>" + to_string(i+1) +".  "+question.c_str()+"</p>";
//            outputStrPaper = outputStrPaper+ "ตอบ" + "\t"+ans.c_str() +"<br>";
            outputStrPaper = outputStrPaper + "<table > <tr> \
                                              <td> <span>    <b style = \"font-size: 18px;\">"+xAns[0].c_str()+"</b >   </span> ใช่ </td> \
                                              <td> <span >   <b style = \"font-size: 18px;\">"+xAns[1].c_str()+"</b>   </span> ไม่แน่ใจ </td> \
                                              <td> <span >   <b style = \"font-size: 18px;\">"+xAns[2].c_str()+"</b>   </span>  ไม่ </td> \
                                              </tr> </table>";
    }
    outputStrPaper = outputStrPaper +"<p>\tหากท่านต้องการแก้ไขคำตอบ  ท่านสามารถแก้ไขในกระดาษคำตอบนี้ได้ \
    หากเสร็จเรียบร้อยแล้ว  ให้ท่านส่งกระดาษคำตอบให้กับเจ้าหน้าที่     เพื่อนำข้อมูลไปเข้าโปรแกรมคำนวณโอกาสเสี่ยงการเกิดกระดูกหัก   ต่อไป</p>";
    outputStrPaper+= "</body></html>";


    printer.setPageSize(QPageSize::A4);
//    printer.setPageSize(QPageSize::Letter);

    printer.setFullPage(true);
    printer.setPrinterName(selectedPrinter);


//    QPrintDialog dialog(&printer,this);
//    dialog.setWindowTitle("Print Document");
//    if( dialog.exec() == QDialog::Rejected) return false;

    QTextDocument document;
//    document.setPageSize(QSizeF(595,842));
//    document.setDefaultStyleSheet(" body {font-size: 20px; font-family: Times New Roman,JasmineUPC}");
    document.setDefaultStyleSheet(" body {font-size: 18px; font-family:TH Sarabun New} h1 {font-size: 30 px;} p {font-size: 18px;}");
    document.setHtml(outputStrPaper.c_str());

//    document.setDocumentMargin(2);
//    printer.setFullPage(true);

    document.setDocumentMargin(1);
    printer.setPageSize(QPageSize::A4);
//    printer.setPageSize(QPageSize::Legal);

    printer.setPageMargins(QMarginsF(0, -10, 1, 0));


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
    isAudio = true;
//    qDebug() << "clicked";
    playedMusic();
    ui->stackedWidget->setCurrentWidget(ui->HomePage);

}

