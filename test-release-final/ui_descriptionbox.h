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
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
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
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DescriptionBox)
    {
        if (DescriptionBox->objectName().isEmpty())
            DescriptionBox->setObjectName(QString::fromUtf8("DescriptionBox"));
        DescriptionBox->resize(525, 336);
        verticalLayout_2 = new QVBoxLayout(DescriptionBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        descriptionImage = new QLabel(DescriptionBox);
        descriptionImage->setObjectName(QString::fromUtf8("descriptionImage"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(descriptionImage->sizePolicy().hasHeightForWidth());
        descriptionImage->setSizePolicy(sizePolicy);
        descriptionImage->setStyleSheet(QString::fromUtf8("font: 36pt \"Segoe UI\";"));

        horizontalLayout->addWidget(descriptionImage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DescriptionBox);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(DescriptionBox);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DescriptionBox, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DescriptionBox, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DescriptionBox);
    } // setupUi

    void retranslateUi(QDialog *DescriptionBox)
    {
        DescriptionBox->setWindowTitle(QCoreApplication::translate("DescriptionBox", "Dialog", nullptr));
        descriptionImage->setText(QCoreApplication::translate("DescriptionBox", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DescriptionBox: public Ui_DescriptionBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESCRIPTIONBOX_H
