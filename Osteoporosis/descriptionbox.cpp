#include "descriptionbox.h"
#include "ui_descriptionbox.h"

DescriptionBox::DescriptionBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DescriptionBox)
{

    ui->setupUi(this);
    connect(ui->closeButton,SIGNAL(clicked()),this,SLOT(reject()));
}

DescriptionBox::~DescriptionBox()
{
    delete ui;
}

void DescriptionBox::updateBox()
{

    //old function don't use any more
    QPixmap helloImageFile("resources/image/description box/no4.png");

//    ui->helloImage->setPixmap(helloImageFile);
    ui->descriptionImage->setPixmap(helloImageFile);

}

void DescriptionBox::updateBox(QString imageFile)
{

    QPixmap popupImageFile(imageFile);
     ui->descriptionImage->setPixmap(popupImageFile);


}

