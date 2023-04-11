#ifndef DESCRIPTIONBOX_H
#define DESCRIPTIONBOX_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class DescriptionBox;
}

class DescriptionBox : public QDialog
{
    Q_OBJECT

public:
    explicit DescriptionBox(QWidget *parent = nullptr);
    ~DescriptionBox();

    void updateBox();
    void updateBox(QString imageFile);


private:
    Ui::DescriptionBox *ui;
};

#endif // DESCRIPTIONBOX_H
