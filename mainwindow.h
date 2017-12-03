#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QPushButton>
#include <QLabel>
#include "globals.h"
//#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots: //find
    void display();
private:
    //Ui::MainWindow *ui; DELETED
    //LABELS:
    QLabel* coursel;
    QLabel* hwl [8];
    QLabel* midterml [2];
    QLabel* finall;
    QLabel* settingl;
    QLabel* schemal[2];
    QLabel* scorel;
    QLabel* scorenum;

    QPushButton* grade_b;
    QPushButton* dist_b;


};

#endif // MAINWINDOW_H
