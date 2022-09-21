#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QTimer>

#include <QPrinter>
#include <QPrintDialog>
#include <QTextEdit>
#include <QFile>
#include <QPainter>


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
    void nextPage();
    bool printDocument();

    QMediaPlayer *player;
    QAudioOutput *audioOutput;
    QTimer *timer;

private slots:
    void playedMusic();


    void on_startButton_clicked();

    void on_yesButton_clicked();

    void on_notSureButton_clicked();

    void on_noButton_clicked();

    void on_exportFile_clicked();

    void on_backButton_clicked();

    void on_bigBacktoHomeBTN_clicked();

    void on_printAgain_clicked();

    void on_passPage_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
