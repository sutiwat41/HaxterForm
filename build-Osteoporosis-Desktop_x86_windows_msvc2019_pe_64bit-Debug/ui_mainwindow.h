/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *soundControl;
    QSpacerItem *horizontalSpacer;
    QPushButton *backButton;
    QStackedWidget *stackedWidget;
    QWidget *HomePage;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_welcome;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *pushButton;
    QWidget *YesNoQuestionPage;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_17;
    QLabel *questionLabel;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *yesButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *notSureButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *noButton;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QWidget *SettingPage;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_25;
    QLabel *settingLabel;
    QSpacerItem *horizontalSpacer_26;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_27;
    QLabel *soundLabel;
    QSpacerItem *horizontalSpacer_28;
    QSlider *soundSlider;
    QLabel *soundVolumeLabel;
    QSpacerItem *horizontalSpacer_29;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_30;
    QLabel *curretPrinterLabel;
    QSpacerItem *horizontalSpacer_31;
    QLabel *printerLabel;
    QSpacerItem *horizontalSpacer_32;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_33;
    QPushButton *printerSettingBtn;
    QSpacerItem *horizontalSpacer_34;
    QSpacerItem *verticalSpacer_14;
    QWidget *summaryPage;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_14;
    QTableWidget *summaryTable;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *passPage;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *exportFile;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_8;
    QWidget *numericQuestionPage;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_18;
    QLabel *numericLabel;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_20;
    QLCDNumber *lcdNumber;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_22;
    QGridLayout *gridLayout_4;
    QPushButton *num_2;
    QPushButton *num_9;
    QPushButton *num_7;
    QPushButton *num_4;
    QPushButton *num_6;
    QPushButton *num_3;
    QPushButton *num_1;
    QPushButton *num_5;
    QPushButton *num_8;
    QPushButton *deleteButton;
    QPushButton *num_0;
    QPushButton *confirmButton;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *verticalSpacer_13;
    QWidget *LastPage;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_10;
    QLabel *endLabel;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *printAgain;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *bigBacktoHomeBTN;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 766);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        soundControl = new QPushButton(centralwidget);
        soundControl->setObjectName(QString::fromUtf8("soundControl"));
        soundControl->setStyleSheet(QString::fromUtf8("border-image: url(resources/image/volume.png);\n"
"height: 50px;\n"
"width: 50px;"));

        horizontalLayout->addWidget(soundControl);

        horizontalSpacer = new QSpacerItem(680, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);
        backButton->setStyleSheet(QString::fromUtf8("border-image: url(resources/image/previous.png);\n"
"height: 50px;\n"
"width: 50px;"));

        horizontalLayout->addWidget(backButton);


        verticalLayout_2->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        HomePage = new QWidget();
        HomePage->setObjectName(QString::fromUtf8("HomePage"));
        verticalLayout_3 = new QVBoxLayout(HomePage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_welcome = new QLabel(HomePage);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setStyleSheet(QString::fromUtf8("font: 400 100pt \"JasmineUPC\";\n"
" color: #4cc19e;"));
        label_welcome->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_welcome);

        verticalSpacer_3 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        startButton = new QPushButton(HomePage);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 60pt \"JasmineUPC\";\n"
"   border: 3px solid #4cc19e;\n"
"   border-radius:30px;\n"
"\n"
"\n"
"  padding: 20px;\n"
"\n"
"  color: #4cc19e;\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover ,pressed{\n"
" color: rgb(255, 255, 255) ;\n"
"background-color:  #4cc19e;\n"
" \n"
"}\n"
"\n"
""));

        horizontalLayout_2->addWidget(startButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_24);

        pushButton = new QPushButton(HomePage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(resources/image/gear.png);\n"
"height: 50px;\n"
"width: 50px;"));

        horizontalLayout_11->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_11);

        stackedWidget->addWidget(HomePage);
        YesNoQuestionPage = new QWidget();
        YesNoQuestionPage->setObjectName(QString::fromUtf8("YesNoQuestionPage"));
        verticalLayout_4 = new QVBoxLayout(YesNoQuestionPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_17 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_17);

        questionLabel = new QLabel(YesNoQuestionPage);
        questionLabel->setObjectName(QString::fromUtf8("questionLabel"));
        questionLabel->setStyleSheet(QString::fromUtf8("font: 400 84pt \"JasmineUPC\";\n"
" color: #4cc19e;"));
        questionLabel->setAlignment(Qt::AlignCenter);
        questionLabel->setWordWrap(true);

        horizontalLayout_4->addWidget(questionLabel);

        horizontalSpacer_16 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_16);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        yesButton = new QPushButton(YesNoQuestionPage);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));
        yesButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 60pt \"JasmineUPC\";\n"
"   border: 2px solid rgb(110, 208, 179);\n"
"   border-radius:20px;\n"
"\n"
"\n"
"  padding: 15px;\n"
"padding-left: 40px;\n"
"padding-right: 40px;\n"
"  color: rgb(110, 208, 179);\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover ,pressed{\n"
" color: rgb(255, 255, 255) ;\n"
"background-color:  rgb(110, 208, 179);\n"
" \n"
"}\n"
"\n"
""));

        horizontalLayout_3->addWidget(yesButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        notSureButton = new QPushButton(YesNoQuestionPage);
        notSureButton->setObjectName(QString::fromUtf8("notSureButton"));
        notSureButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 60pt \"JasmineUPC\";\n"
"   border: 2px solid rgb(110, 208, 179);\n"
"   border-radius:20px;\n"
"\n"
"\n"
"  padding: 15px;\n"
"  color: rgb(110, 208, 179);\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover ,pressed{\n"
" color: rgb(255, 255, 255) ;\n"
"background-color:  rgb(110, 208, 179);\n"
" \n"
"}\n"
"\n"
""));

        horizontalLayout_3->addWidget(notSureButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        noButton = new QPushButton(YesNoQuestionPage);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        noButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 60pt \"JasmineUPC\";\n"
"   border: 2px solid rgb(110, 208, 179);\n"
"   border-radius:20px;\n"
"\n"
"\n"
"  padding: 15px;\n"
"padding-left: 40px;\n"
"padding-right: 40px;\n"
"  color: rgb(110, 208, 179);\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover ,pressed{\n"
" color: rgb(255, 255, 255) ;\n"
"background-color:  rgb(110, 208, 179);\n"
" \n"
"}\n"
"\n"
""));

        horizontalLayout_3->addWidget(noButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        stackedWidget->addWidget(YesNoQuestionPage);
        SettingPage = new QWidget();
        SettingPage->setObjectName(QString::fromUtf8("SettingPage"));
        verticalLayout_6 = new QVBoxLayout(SettingPage);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_25);

        settingLabel = new QLabel(SettingPage);
        settingLabel->setObjectName(QString::fromUtf8("settingLabel"));
        settingLabel->setStyleSheet(QString::fromUtf8("font: 400 72pt \"JasmineUPC\";\n"
" color: #4cc19e;"));

        horizontalLayout_12->addWidget(settingLabel);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_26);


        verticalLayout_6->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, 15, -1, -1);
        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_27);

        soundLabel = new QLabel(SettingPage);
        soundLabel->setObjectName(QString::fromUtf8("soundLabel"));
        soundLabel->setStyleSheet(QString::fromUtf8("font: 400 36pt \"JasmineUPC\";\n"
" color: #4cc19e;"));

        horizontalLayout_13->addWidget(soundLabel);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_28);

        soundSlider = new QSlider(SettingPage);
        soundSlider->setObjectName(QString::fromUtf8("soundSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(soundSlider->sizePolicy().hasHeightForWidth());
        soundSlider->setSizePolicy(sizePolicy1);
        soundSlider->setMaximum(100);
        soundSlider->setValue(100);
        soundSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_13->addWidget(soundSlider);

        soundVolumeLabel = new QLabel(SettingPage);
        soundVolumeLabel->setObjectName(QString::fromUtf8("soundVolumeLabel"));
        soundVolumeLabel->setStyleSheet(QString::fromUtf8("font: 400 36pt \"JasmineUPC\";\n"
" color: #4cc19e;"));

        horizontalLayout_13->addWidget(soundVolumeLabel);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_29);


        verticalLayout_6->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, 19, -1, -1);
        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_30);

        curretPrinterLabel = new QLabel(SettingPage);
        curretPrinterLabel->setObjectName(QString::fromUtf8("curretPrinterLabel"));
        curretPrinterLabel->setStyleSheet(QString::fromUtf8("font: 400 36pt \"JasmineUPC\";\n"
" color: #4cc19e;"));

        horizontalLayout_14->addWidget(curretPrinterLabel);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_31);

        printerLabel = new QLabel(SettingPage);
        printerLabel->setObjectName(QString::fromUtf8("printerLabel"));
        printerLabel->setStyleSheet(QString::fromUtf8("font: 400 36pt \"JasmineUPC\";\n"
" color: #4cc19e;"));

        horizontalLayout_14->addWidget(printerLabel);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_32);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(-1, 15, -1, -1);
        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_33);

        printerSettingBtn = new QPushButton(SettingPage);
        printerSettingBtn->setObjectName(QString::fromUtf8("printerSettingBtn"));
        printerSettingBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 36pt \"JasmineUPC\";\n"
"   border: 2px solid rgb(110, 208, 179);\n"
"   border-radius:20px;\n"
"\n"
"\n"
"  padding: 15px;\n"
"  color: rgb(110, 208, 179);\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover ,pressed{\n"
" color: rgb(255, 255, 255) ;\n"
"background-color:  rgb(110, 208, 179);\n"
" \n"
"}\n"
"\n"
""));

        horizontalLayout_15->addWidget(printerSettingBtn);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_34);


        verticalLayout_6->addLayout(horizontalLayout_15);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_14);

        stackedWidget->addWidget(SettingPage);
        summaryPage = new QWidget();
        summaryPage->setObjectName(QString::fromUtf8("summaryPage"));
        verticalLayout_5 = new QVBoxLayout(summaryPage);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(summaryPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 400 72pt \"JasmineUPC\";\n"
" color: #4cc19e;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);

        summaryTable = new QTableWidget(summaryPage);
        if (summaryTable->columnCount() < 2)
            summaryTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        summaryTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        summaryTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        summaryTable->setObjectName(QString::fromUtf8("summaryTable"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(summaryTable->sizePolicy().hasHeightForWidth());
        summaryTable->setSizePolicy(sizePolicy2);
        summaryTable->setContextMenuPolicy(Qt::DefaultContextMenu);
        summaryTable->setLayoutDirection(Qt::LeftToRight);
        summaryTable->setStyleSheet(QString::fromUtf8("font: 400 18pt \"JasmineUPC\";\n"
""));
        summaryTable->setTextElideMode(Qt::ElideLeft);
        summaryTable->verticalHeader()->setVisible(false);

        horizontalLayout_9->addWidget(summaryTable, 0, Qt::AlignHCenter);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);


        verticalLayout_5->addLayout(horizontalLayout_9);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        passPage = new QPushButton(summaryPage);
        passPage->setObjectName(QString::fromUtf8("passPage"));
        passPage->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 60pt \"JasmineUPC\";\n"
"   border: 2px solid rgb(110, 208, 179);\n"
"   border-radius:20px;\n"
"\n"
"\n"
"  padding: 15px;\n"
" padding-left: 40px; \n"
"padding-right: 40px;\n"
"  color: rgb(110, 208, 179);\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover ,pressed{\n"
" color: rgb(255, 255, 255) ;\n"
"background-color:  rgb(110, 208, 179);\n"
" \n"
"}\n"
"\n"
""));

        horizontalLayout_6->addWidget(passPage);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        exportFile = new QPushButton(summaryPage);
        exportFile->setObjectName(QString::fromUtf8("exportFile"));
        exportFile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 60pt \"JasmineUPC\";\n"
"   border: 2px solid rgb(110, 208, 179);\n"
"   border-radius:20px;\n"
"\n"
"\n"
"  padding: 15px;\n"
"  color: rgb(110, 208, 179);\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover ,pressed{\n"
" color: rgb(255, 255, 255) ;\n"
"background-color:  rgb(110, 208, 179);\n"
" \n"
"}\n"
"\n"
""));

        horizontalLayout_6->addWidget(exportFile);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        verticalLayout_5->addLayout(horizontalLayout_6);

        verticalSpacer_8 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer_8);

        stackedWidget->addWidget(summaryPage);
        numericQuestionPage = new QWidget();
        numericQuestionPage->setObjectName(QString::fromUtf8("numericQuestionPage"));
        verticalLayout = new QVBoxLayout(numericQuestionPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_18);

        numericLabel = new QLabel(numericQuestionPage);
        numericLabel->setObjectName(QString::fromUtf8("numericLabel"));
        numericLabel->setStyleSheet(QString::fromUtf8("font: 400 84pt \"JasmineUPC\";\n"
" color: #4cc19e;"));

        horizontalLayout_7->addWidget(numericLabel);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_19);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);

        lcdNumber = new QLCDNumber(numericQuestionPage);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout_10->addWidget(lcdNumber);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_21);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_22);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, -1, 0, -1);
        num_2 = new QPushButton(numericQuestionPage);
        num_2->setObjectName(QString::fromUtf8("num_2"));

        gridLayout_4->addWidget(num_2, 2, 1, 1, 1);

        num_9 = new QPushButton(numericQuestionPage);
        num_9->setObjectName(QString::fromUtf8("num_9"));

        gridLayout_4->addWidget(num_9, 0, 2, 1, 1);

        num_7 = new QPushButton(numericQuestionPage);
        num_7->setObjectName(QString::fromUtf8("num_7"));

        gridLayout_4->addWidget(num_7, 0, 0, 1, 1);

        num_4 = new QPushButton(numericQuestionPage);
        num_4->setObjectName(QString::fromUtf8("num_4"));

        gridLayout_4->addWidget(num_4, 1, 0, 1, 1);

        num_6 = new QPushButton(numericQuestionPage);
        num_6->setObjectName(QString::fromUtf8("num_6"));

        gridLayout_4->addWidget(num_6, 1, 2, 1, 1);

        num_3 = new QPushButton(numericQuestionPage);
        num_3->setObjectName(QString::fromUtf8("num_3"));

        gridLayout_4->addWidget(num_3, 2, 2, 1, 1);

        num_1 = new QPushButton(numericQuestionPage);
        num_1->setObjectName(QString::fromUtf8("num_1"));
        num_1->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"font: 400 24pt \"JasmineUPC\";"));

        gridLayout_4->addWidget(num_1, 2, 0, 1, 1);

        num_5 = new QPushButton(numericQuestionPage);
        num_5->setObjectName(QString::fromUtf8("num_5"));

        gridLayout_4->addWidget(num_5, 1, 1, 1, 1);

        num_8 = new QPushButton(numericQuestionPage);
        num_8->setObjectName(QString::fromUtf8("num_8"));

        gridLayout_4->addWidget(num_8, 0, 1, 1, 1);

        deleteButton = new QPushButton(numericQuestionPage);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setStyleSheet(QString::fromUtf8("padding: 5px;\n"
"height :40px;\n"
"width: 65px;\n"
"font: 400 24pt \"JasmineUPC\";\n"
"border: 2px solid  rgb(255, 152, 152);\n"
"color: rgb(255, 152, 152);\n"
"\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
""));

        gridLayout_4->addWidget(deleteButton, 3, 0, 1, 1);

        num_0 = new QPushButton(numericQuestionPage);
        num_0->setObjectName(QString::fromUtf8("num_0"));
        num_0->setStyleSheet(QString::fromUtf8("padding: 5 px;\n"
"height :40px;\n"
"width: 60px;\n"
"font: 400 24pt \"JasmineUPC\";\n"
"border: 2px solid rgb(110, 208, 179);\n"
"  color: rgb(110, 208, 179);\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
""));

        gridLayout_4->addWidget(num_0, 3, 1, 1, 1);

        confirmButton = new QPushButton(numericQuestionPage);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setStyleSheet(QString::fromUtf8("padding: 5px;\n"
"\n"
"\n"
"height :40px;\n"
"width: 65px;\n"
"font: 400 24pt \"JasmineUPC\";\n"
"border: 2px solid rgb(110, 208, 179);\n"
"  color: rgb(110, 208, 179);\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
""));

        gridLayout_4->addWidget(confirmButton, 3, 2, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_4);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_23);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_13 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_13);

        stackedWidget->addWidget(numericQuestionPage);
        LastPage = new QWidget();
        LastPage->setObjectName(QString::fromUtf8("LastPage"));
        gridLayout = new QGridLayout(LastPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_10, 4, 0, 1, 1);

        endLabel = new QLabel(LastPage);
        endLabel->setObjectName(QString::fromUtf8("endLabel"));
        endLabel->setStyleSheet(QString::fromUtf8("font: 400 72pt \"JasmineUPC\";\n"
" color: #4cc19e;"));
        endLabel->setAlignment(Qt::AlignCenter);
        endLabel->setWordWrap(true);

        gridLayout->addWidget(endLabel, 1, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_11, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        printAgain = new QPushButton(LastPage);
        printAgain->setObjectName(QString::fromUtf8("printAgain"));
        printAgain->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 48pt \"JasmineUPC\";\n"
"   border: 2px solid rgb(110, 208, 179);\n"
"   border-radius:20px;\n"
"\n"
"\n"
"  padding: 15px;\n"
"  color: rgb(110, 208, 179);\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover ,pressed{\n"
" color: rgb(255, 255, 255) ;\n"
"background-color:  rgb(110, 208, 179);\n"
" \n"
"}\n"
"\n"
""));

        horizontalLayout_8->addWidget(printAgain);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        bigBacktoHomeBTN = new QPushButton(LastPage);
        bigBacktoHomeBTN->setObjectName(QString::fromUtf8("bigBacktoHomeBTN"));
        bigBacktoHomeBTN->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 48pt \"JasmineUPC\";\n"
"   border: 2px solid rgb(110, 208, 179);\n"
"   border-radius:20px;\n"
"\n"
"\n"
"  padding: 15px;\n"
"  color: rgb(110, 208, 179);\n"
"   \n"
"  background-color:  rgb(255, 255, 255) ;\n"
"\n"
"\n"
"}\n"
"QPushButton:hover ,pressed{\n"
" color: rgb(255, 255, 255) ;\n"
"background-color:  rgb(110, 208, 179);\n"
" \n"
"}\n"
"\n"
""));

        horizontalLayout_8->addWidget(bigBacktoHomeBTN);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);


        gridLayout->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_12, 2, 0, 1, 1);

        stackedWidget->addWidget(LastPage);

        verticalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        soundControl->setText(QString());
        backButton->setText(QString());
        label_welcome->setText(QCoreApplication::translate("MainWindow", "\340\270\252\340\270\247\340\270\261\340\270\252\340\270\224\340\270\265\340\270\204\340\271\210\340\270\260", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "\340\271\200\340\270\243\340\270\264\340\271\210\340\270\241\340\270\225\340\271\211\340\270\231", nullptr));
        pushButton->setText(QString());
        questionLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        yesButton->setText(QCoreApplication::translate("MainWindow", "\340\271\203\340\270\212\340\271\210", nullptr));
        notSureButton->setText(QCoreApplication::translate("MainWindow", "\340\271\204\340\270\241\340\271\210\340\271\201\340\270\231\340\271\210\340\271\203\340\270\210", nullptr));
        noButton->setText(QCoreApplication::translate("MainWindow", "\340\271\204\340\270\241\340\271\210", nullptr));
        settingLabel->setText(QCoreApplication::translate("MainWindow", "Setting", nullptr));
        soundLabel->setText(QCoreApplication::translate("MainWindow", "Sound", nullptr));
        soundVolumeLabel->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        curretPrinterLabel->setText(QCoreApplication::translate("MainWindow", "Current Printer:", nullptr));
        printerLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        printerSettingBtn->setText(QCoreApplication::translate("MainWindow", "set printer", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\340\270\252\340\270\243\340\270\270\340\270\233\340\270\234\340\270\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem = summaryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\340\270\202\340\271\211\340\270\255\340\270\227\340\270\265\340\271\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = summaryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\340\270\204\340\270\263\340\270\225\340\270\255\340\270\232", nullptr));
        passPage->setText(QCoreApplication::translate("MainWindow", "\340\270\202\340\271\211\340\270\262\340\270\241", nullptr));
        exportFile->setText(QCoreApplication::translate("MainWindow", "\340\270\236\340\270\264\340\270\241\340\270\236\340\271\214\340\271\200\340\270\255\340\270\201\340\270\252\340\270\262\340\270\243", nullptr));
        numericLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        num_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        num_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        num_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        num_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        num_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        num_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        num_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        num_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        num_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "delete", nullptr));
        num_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        confirmButton->setText(QCoreApplication::translate("MainWindow", "confirm", nullptr));
        endLabel->setText(QCoreApplication::translate("MainWindow", "\340\270\201\340\270\243\340\270\270\340\270\223\340\270\262\340\270\231\340\270\263\340\270\201\340\270\243\340\270\260\340\270\224\340\270\262\340\270\251\340\270\204\340\270\263\340\270\225\340\270\255\340\270\232 \340\270\252\340\271\210\340\270\207\340\271\200\340\270\210\340\271\211\340\270\262\340\270\253\340\270\231\340\271\211\340\270\262\340\270\227\340\270\265\340\271\210", nullptr));
        printAgain->setText(QCoreApplication::translate("MainWindow", "\340\270\236\340\270\264\340\270\241\340\270\236\340\271\214\340\270\255\340\270\265\340\270\201\340\270\204\340\270\243\340\270\261\340\271\211\340\270\207", nullptr));
        bigBacktoHomeBTN->setText(QCoreApplication::translate("MainWindow", "\340\270\201\340\270\245\340\270\261\340\270\232\340\270\252\340\270\271\340\271\210\340\270\253\340\270\231\340\271\211\340\270\262\340\270\253\340\270\245\340\270\261\340\270\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
