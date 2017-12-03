#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QCoreApplication> //for app to function properly
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
 //   ,ui(new Ui::MainWindow)
{

   // ui->setupUi(this);
    display();
}

MainWindow::~MainWindow()
{
    //delete ui;
}

void MainWindow::display()
{
    hwl[0] = new QLabel ("HW1", this);
    hwl[1] = new QLabel ("HW2", this);
    hwl[2] = new QLabel ("HW3", this);
    hwl[3] = new QLabel ("HW4", this);
    hwl[4] = new QLabel ("HW5", this);
    hwl[5] = new QLabel ("HW6", this);
    hwl[6] = new QLabel ("HW7", this);
    hwl[7] = new QLabel ("HW8", this);

    for (int i = 0; i < HW_NUM; i++)
    {
        hwl[i]->setGeometry (QRect(QPoint(50, 50), QSize(50, 200)));
    }

    coursel = new QLabel ("Course:", this);
    midterml[0] = new QLabel ("Midterm 1", this);
    midterml[1] = new QLabel ("Midterm 2", this);
    finall = new QLabel ("Final Exam", this);
    schemal[0] = new QLabel ("Schema A", this);
    schemal[1] = new QLabel ("Schema B", this);

    scorel = new QLabel ("Overall Score: ", this);

    QWidget* score = new QWidget (this);
    score->setObjectName("0.0");



}
