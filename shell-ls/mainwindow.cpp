#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <qtextedit.h>
#include <qprogressbar.h>
#include <qtimer.h>
#include <qapplication.h>
#include <qmessagebox.h>
#include <qstringlist.h>


#include "stdio.h"
#include "stdlib.h"
#include "fcntl.h"
#include "unistd.h"
#include "math.h"
#include "string.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lsButton_clicked()
{

    char line[300];
    memset(line,0,300);

    ui->m_receive->setPlainText("");
    FILE *fd;
    if ((fd = popen("ls", "r")) == NULL) {
           printf("popen error");

       }
    while(fgets(line, sizeof(line)-1, fd) != NULL){
        printf("%s",line);
        ui->m_receive->setText(ui->m_receive->toPlainText()+line);
    }
    pclose(fd);
}
