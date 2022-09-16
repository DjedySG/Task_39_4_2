#include "checkphonenumbers.h"
#include "ui_checkphonenumbers.h"
#include <QRegularExpression>

checkPhoneNumbers::checkPhoneNumbers(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::checkPhoneNumbers)
{
    ui->setupUi(this);
    connect(ui->lineEdit, &QLineEdit::textEdited, [this](QString text) {
        QRegularExpression exp("^\\+[0-9]{11}$");
        if (exp.match(text).hasMatch())
            setOkLabel();
        else
            setNOkLabel();
        });
}

checkPhoneNumbers::~checkPhoneNumbers()
{
    delete ui;
}

void checkPhoneNumbers::setOkLabel()
{
    ui -> label -> setText("OK");
    ui -> label -> setStyleSheet ("QLabel {color : green;}");
}

void checkPhoneNumbers::setNOkLabel()
{
    ui -> label -> setText("NOK");
    ui -> label -> setStyleSheet ("QLabel {color : red;}");
}

