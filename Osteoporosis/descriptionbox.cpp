#include "descriptionbox.h"
#include "ui_descriptionbox.h"

DescriptionBox::DescriptionBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DescriptionBox)
{
    ui->setupUi(this);
}

DescriptionBox::~DescriptionBox()
{
    delete ui;
}

void DescriptionBox::updateBox()
{

    QPixmap helloImageFile("resources/image/description box/no4.png");

//    ui->helloImage->setPixmap(helloImageFile);
    ui->descriptionImage->setPixmap(helloImageFile);

//    ui->label
}
