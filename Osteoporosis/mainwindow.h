#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QTimer>
#include <QKeyEvent>
#include <QPageSize>
#include <QCursor>
#include <QPrinter>
#include <QPrintDialog>
#include <QTextEdit>
#include <QFile>
#include <QPainter>
#include <QVideoWidget>
#include <QLabel>

#include <QGraphicsDropShadowEffect>
#include <QJsonDocument>
#include <QJsonObject>


#include <QGridLayout>
#include "descriptionbox.h"

#include <QInputMethod>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int numPage = 0;
    int soundVolume  = 100;
    QString selectedPrinter = "Microsoft Print to PDF";
    QString currentTrack = "";

    bool isSound = true;
    bool isAudio = false; // true -> audio, false -> video
    bool isLoopAudio = true;
    bool isVideoFirstPage = false;
    bool isDescriptionShow = false;


    void nextPage();
    bool printDocument();
    void setSound();

    void keyPressEvent(QKeyEvent *event);
    void HNNumPadConnect();


    QTimer *m_barcodeTimer; // timer for barcode reader
    QString barcodeNum = ""; //Read From Barcode will change when read barcode and clear after read finish
    QString HNNumber= ""; // change when read finish and clear when all process finish

    QCursor cursor;
    QString styleSheet;
    QPrinter printer;

    QLabel *imageLabel;
    QVideoWidget *videoWidget;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
    QTimer *timer;

    QGraphicsDropShadowEffect *effect;

    DescriptionBox *showBox;

    struct questionInfo{
        int noQuestion;
        QString question,questionType,audioMainFileName,questionForPrint,resourceJson,NoteForDisplay;
        QString currentPlaySound;
        QJsonDocument jsonDocument; // = QJsonDocument::fromJson(resourceJson.toUtf8());
        QJsonObject jsonObject; // = jsonDocument.object(),innerObj;

    };

    questionInfo currentPageQuestion;


private slots:
    void showBarcode();

    void playedMusic();
    void mediaAndPage();
    void showDescription(const QString &link);
    void closeDescription();
    void HNNumPressed();
    void editScaleToFULL();


    void on_startButton_clicked();

    void on_yesButton_clicked();

    void on_notSureButton_clicked();

    void on_noButton_clicked();

    void on_exportFile_clicked();

    void on_backButton_clicked();

    void on_bigBacktoHomeBTN_clicked();

    void on_printAgain_clicked();

    void on_passPage_clicked();

    void on_soundControl_clicked();

    void on_pushButton_clicked();

    void on_soundSlider_valueChanged(int value);

    void on_printerSettingBtn_clicked();

//    void on_playVideoButton_clicked();

    void on_videoPlayerBox_clicked();



    void on_closeProgramBtn_pressed();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
