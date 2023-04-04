#ifndef DESCRIPTIONBOX_H
#define DESCRIPTIONBOX_H

#include <QDialog>

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

private:
    Ui::DescriptionBox *ui;
};

#endif // DESCRIPTIONBOX_H
