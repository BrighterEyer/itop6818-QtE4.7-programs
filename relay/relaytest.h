#ifndef RELAYTEST_H
#define RELAYTEST_H

#include <QDialog>

namespace Ui {
class relaytest;
}

class relaytest : public QDialog
{
    Q_OBJECT

public:
    explicit relaytest(QWidget *parent = 0);
    ~relaytest();

private slots:

    void on_RELAY_Button_clicked();

private:
    Ui::relaytest *ui;
};

#endif // RELAYTEST_H
