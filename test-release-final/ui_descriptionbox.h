/********************************************************************************
** Form generated from reading UI file 'descriptionbox.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESCRIPTIONBOX_H
#define UI_DESCRIPTIONBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DescriptionBox
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *descriptionImage;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeButton;

    void setupUi(QDialog *DescriptionBox)
    {
        if (DescriptionBox->objectName().isEmpty())
            DescriptionBox->setObjectName(QString::fromUtf8("DescriptionBox"));
        DescriptionBox->resize(525, 336);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DescriptionBox->sizePolicy().hasHeightForWidth());
        DescriptionBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(DescriptionBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        descriptionImage = new QLabel(DescriptionBox);
        descriptionImage->setObjectName(QString::fromUtf8("descriptionImage"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(descriptionImage->sizePolicy().hasHeightForWidth());
        descriptionImage->setSizePolicy(sizePolicy1);
        descriptionImage->setStyleSheet(QString::fromUtf8("font: 36pt \"Segoe UI\";"));

        horizontalLayout->addWidget(descriptionImage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        closeButton = new QPushButton(DescriptionBox);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy2);
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton { \n"
"padding: 10px;\n"
"height :40px;\n"
"width: 70px;\n"
"   border-radius:10px;\n"
"font: 400 32pt \"JasmineUPC\";\n"
"border: 2px solid #E5E5EA;\n"
"color: rgb(0, 0, 0);\n"
"background-color:  #E5E5EA ;\n"
"}\n"
"\n"
"QPushButton:hover ,pressed{\n"
"	background-color:  #D1D1D6;\n"
"	border: 2px solid #D1D1D6;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(DescriptionBox);

        QMetaObject::connectSlotsByName(DescriptionBox);
    } // setupUi

    void retranslateUi(QDialog *DescriptionBox)
    {
        DescriptionBox->setWindowTitle(QCoreApplication::translate("DescriptionBox", "Dialog", nullptr));
        descriptionImage->setText(QCoreApplication::translate("DescriptionBox", "Test", nullptr));
        closeButton->setText(QCoreApplication::translate("DescriptionBox", "\340\270\233\340\270\264\340\270\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DescriptionBox: public Ui_DescriptionBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESCRIPTIONBOX_H
