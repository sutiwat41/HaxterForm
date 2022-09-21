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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QWidget *YesNoQuestionPage;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QLabel *questionLabel;
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
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *exportFile;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_8;
    QWidget *LastPage;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_10;
    QLabel *label_2;
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
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(720, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

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
        label_welcome->setStyleSheet(QString::fromUtf8("font: 400 48pt \"JasmineUPC\";\n"
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
"	font: 400 30pt \"JasmineUPC\";\n"
"   border: 3px solid #4cc19e;\n"
"   border-radius:30px;\n"
"\n"
"\n"
"  padding: 20px;\n"
"  width: 150px;\n"
"  height: 50px;\n"
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

        stackedWidget->addWidget(HomePage);
        YesNoQuestionPage = new QWidget();
        YesNoQuestionPage->setObjectName(QString::fromUtf8("YesNoQuestionPage"));
        verticalLayout_4 = new QVBoxLayout(YesNoQuestionPage);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        questionLabel = new QLabel(YesNoQuestionPage);
        questionLabel->setObjectName(QString::fromUtf8("questionLabel"));
        questionLabel->setStyleSheet(QString::fromUtf8("font: 400 36pt \"JasmineUPC\";\n"
" color: #4cc19e;"));
        questionLabel->setAlignment(Qt::AlignCenter);
        questionLabel->setWordWrap(true);

        verticalLayout_4->addWidget(questionLabel);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        yesButton = new QPushButton(YesNoQuestionPage);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));
        yesButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 30pt \"JasmineUPC\";\n"
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
"	font: 400 30pt \"JasmineUPC\";\n"
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
"	font: 400 30pt \"JasmineUPC\";\n"
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
        summaryPage = new QWidget();
        summaryPage->setObjectName(QString::fromUtf8("summaryPage"));
        verticalLayout_5 = new QVBoxLayout(summaryPage);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(summaryPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 400 36pt \"JasmineUPC\";\n"
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
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(summaryTable->sizePolicy().hasHeightForWidth());
        summaryTable->setSizePolicy(sizePolicy);
        summaryTable->setContextMenuPolicy(Qt::DefaultContextMenu);
        summaryTable->setLayoutDirection(Qt::LeftToRight);
        summaryTable->setStyleSheet(QString::fromUtf8("font: 400 18pt \"JasmineUPC\";\n"
""));
        summaryTable->setTextElideMode(Qt::ElideLeft);

        horizontalLayout_9->addWidget(summaryTable);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);


        verticalLayout_5->addLayout(horizontalLayout_9);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_5->addItem(verticalSpacer_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        pushButton_4 = new QPushButton(summaryPage);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_6->addWidget(pushButton_4);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        exportFile = new QPushButton(summaryPage);
        exportFile->setObjectName(QString::fromUtf8("exportFile"));
        exportFile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 30pt \"JasmineUPC\";\n"
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
        LastPage = new QWidget();
        LastPage->setObjectName(QString::fromUtf8("LastPage"));
        gridLayout = new QGridLayout(LastPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_10, 4, 0, 1, 1);

        label_2 = new QLabel(LastPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 400 48pt \"JasmineUPC\";\n"
" color: #4cc19e;"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_11, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        printAgain = new QPushButton(LastPage);
        printAgain->setObjectName(QString::fromUtf8("printAgain"));
        printAgain->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 400 30pt \"JasmineUPC\";\n"
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
"	font: 400 30pt \"JasmineUPC\";\n"
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

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("MainWindow", "Back to Home", nullptr));
        label_welcome->setText(QCoreApplication::translate("MainWindow", "\340\270\252\340\270\247\340\270\261\340\270\252\340\270\224\340\270\265\340\270\204\340\271\211\340\270\262\340\270\232\340\270\232\340\270\232\340\270\232\340\270\232", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "\340\271\200\340\270\243\340\270\264\340\271\210\340\270\241\340\270\225\340\271\211\340\270\231", nullptr));
        questionLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        yesButton->setText(QCoreApplication::translate("MainWindow", "\340\271\203\340\270\212\340\271\210", nullptr));
        notSureButton->setText(QCoreApplication::translate("MainWindow", "\340\271\204\340\270\241\340\271\210\340\271\201\340\270\231\340\271\210\340\271\203\340\270\210", nullptr));
        noButton->setText(QCoreApplication::translate("MainWindow", "\340\271\204\340\270\241\340\271\210", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\340\270\252\340\270\243\340\270\270\340\270\233\340\270\234\340\270\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem = summaryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\340\270\202\340\271\211\340\270\255\340\270\227\340\270\265\340\271\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = summaryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\340\270\204\340\270\263\340\270\225\340\270\255\340\270\232", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        exportFile->setText(QCoreApplication::translate("MainWindow", "\340\270\236\340\270\264\340\270\241\340\270\236\340\271\214\340\271\200\340\270\255\340\270\201\340\270\252\340\270\262\340\270\243", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\340\270\201\340\270\243\340\270\270\340\270\223\340\270\262\340\270\231\340\270\263\340\270\201\340\270\243\340\270\260\340\270\224\340\270\262\340\270\251\340\270\204\340\270\263\340\270\225\340\270\255\340\270\232 \340\270\252\340\271\210\340\270\207\340\271\200\340\270\210\340\271\211\340\270\262\340\270\253\340\270\231\340\271\211\340\270\262\340\270\227\340\270\265\340\271\210", nullptr));
        printAgain->setText(QCoreApplication::translate("MainWindow", "\340\270\236\340\270\264\340\270\241\340\270\236\340\271\214\340\270\255\340\270\265\340\270\201\340\270\204\340\270\243\340\270\261\340\271\211\340\270\207", nullptr));
        bigBacktoHomeBTN->setText(QCoreApplication::translate("MainWindow", "\340\270\201\340\270\245\340\270\261\340\270\232\340\270\252\340\270\271\340\271\210\340\270\253\340\270\231\340\271\211\340\270\262\340\270\253\340\270\245\340\270\261\340\270\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
