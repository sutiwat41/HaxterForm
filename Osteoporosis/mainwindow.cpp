#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "csvhandler.h"

csvhandler openCSV;
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    openCSV.loadQuestion();

    numPage = 0;
    selectedPrinter = openCSV.loadPrinter();
    ui->printerLabel->setText(selectedPrinter);

    player = new QMediaPlayer;
    audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(soundVolume); //set Max =100

    player->setSource(QUrl::fromLocalFile("resources/audio/intro.mp3"));
    player->play();

    connect(player,SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus)),this,SLOT(playedMusic()));

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::playedMusic()
{

//    player->stop();
    int noQuestion;
    string question,questionType,fileName;
//    qDebug() << numPage;

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

    fileName = "resources/audio/"+fileName;
//    qDebug() << "played";

    player->setSource(QUrl::fromLocalFile(fileName.c_str()));
    player->play();


}


void MainWindow::nextPage(){
    numPage++;
    player->stop();
//    playedMusic();
    if(numPage == openCSV.maxQuestion+1){
//        qDebug() << "summary page";
        ui->stackedWidget->setCurrentWidget(ui->summaryPage);
        for(int i = 0;i<openCSV.maxQuestion;i++){
                ui->summaryTable->insertRow(i);
                ui->summaryTable->setItem(i,0, new QTableWidgetItem(to_string( i+1 ).c_str()));
                string ans ="";
                if(get<1>(openCSV.answerArr[i]).compare("yes") == 0) ans = "ใช่";
                else if(get<1>(openCSV.answerArr[i]).compare("no") == 0) ans = "ไม่";
                else ans = "ไม่แน่ใจ";

                ui->summaryTable->setItem(i,1, new QTableWidgetItem(ans.c_str()));
//                qDebug() << get<1>(openCSV.answerArr[i]).c_str();


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
    string outputStrPaper = "<body>";
    for(int i = 0;i<openCSV.maxQuestion;i++){
//            qDebug() << i+1 << get<1>(openCSV.answerArr[i]).c_str();
            string ans ="";
            if(get<1>(openCSV.answerArr[i]).compare("yes") == 0) ans = "ใช่";
            else if(get<1>(openCSV.answerArr[i]).compare("no") == 0) ans = "ไม่";
            else ans = "ไม่แน่ใจ";

            string question = get<1>(openCSV.questionArr[i]);
            outputStrPaper = outputStrPaper +  to_string(i+1) +".  "+question.c_str()+"<br>";
            outputStrPaper = outputStrPaper+ "ตอบ" + "\t"+ans.c_str() +"<br>";
    }
    outputStrPaper+= "</body>";


    printer.setPageSize(QPageSize::A4);
    printer.setPrinterName(selectedPrinter);


//    QPrintDialog dialog(&printer,this);
//    dialog.setWindowTitle("Print Document");
//    if( dialog.exec() == QDialog::Rejected) return false;

    QTextDocument document;
    document.setDefaultStyleSheet(" body {font-size: 20px; font-family: Times New Roman,JasmineUPC}");
    document.setHtml(outputStrPaper.c_str());

    document.print(&printer);
    return true;
}

void MainWindow::setSound()
{
    if(isSound){
        audioOutput->setVolume(100);
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
    ui->stackedWidget->setCurrentWidget(ui->HomePage);
    numPage = 0;
    ui->summaryTable->setRowCount(0);
    openCSV.answerArr.clear();
//    ui->numericDisplay->display(0);
    playedMusic();
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

