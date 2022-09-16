#ifndef CHECKPHONENUMBERS_H
#define CHECKPHONENUMBERS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class checkPhoneNumbers; }
QT_END_NAMESPACE

class checkPhoneNumbers : public QMainWindow
{
    Q_OBJECT

public:
    checkPhoneNumbers(QWidget *parent = nullptr);
    ~checkPhoneNumbers();

public slots:
    void setOkLabel();
    void setNOkLabel();

private:
    Ui::checkPhoneNumbers *ui;
};
#endif // CHECKPHONENUMBERS_H
