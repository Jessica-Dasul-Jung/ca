#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QCoreApplication> //for app to function properly
#include <string>

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent)
    ,ui(new Ui::MainWindow)
{

   ui->setupUi(this);


   //connect slider with box:
   connect (ui->hw1_slider, SIGNAL(valueChanged(int)), ui->hw1_box, SLOT(setValue(int)) );
   connect (ui->hw2_slider, SIGNAL(valueChanged(int)), ui->hw2_box, SLOT(setValue(int)) );
   connect (ui->hw3_slider, SIGNAL(valueChanged(int)), ui->hw3_box, SLOT(setValue(int)) );
   connect (ui->hw4_slider, SIGNAL(valueChanged(int)), ui->hw4_box, SLOT(setValue(int)) );
   connect (ui->hw5_slider, SIGNAL(valueChanged(int)), ui->hw5_box, SLOT(setValue(int)) );
   connect (ui->hw6_slider, SIGNAL(valueChanged(int)), ui->hw6_box, SLOT(setValue(int)) );
   connect (ui->hw7_slider, SIGNAL(valueChanged(int)), ui->hw7_box, SLOT(setValue(int)) );
   connect (ui->hw8_slider, SIGNAL(valueChanged(int)), ui->hw8_box, SLOT(setValue(int)) );
   connect (ui->mt1_slider, SIGNAL(valueChanged(int)), ui->mt1_box, SLOT(setValue(int)) );
   connect (ui->mt2_slider, SIGNAL(valueChanged(int)), ui->mt2_box, SLOT(setValue(int)) );
   connect (ui->final_slider, SIGNAL(valueChanged(int)), ui->final_box, SLOT(setValue(int)) );


   connect (ui->schemaA, SIGNAL(clicked(bool)), this, SLOT(useSchemaA()) );
   connect (ui->schemaB, SIGNAL(clicked(bool)), this, SLOT(useSchemaB()) );

   connect(ui->calc_b, SIGNAL(released()), this, SLOT(calculate()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::calculate()
{
    m_hw [0] = ui->hw1_box->value();
    m_hw [1] = ui->hw2_box->value();
    m_hw [2] = ui->hw3_box->value();
    m_hw [3] = ui->hw4_box->value();
    m_hw [4] = ui->hw5_box->value();
    m_hw [5] = ui->hw6_box->value();
    m_hw [6] = ui->hw7_box->value();
    m_hw [7] = ui->hw8_box->value();

    m_mt [0] = ui->mt1_box->value();
    m_mt [1] = ui->mt2_box->value();
    m_final = ui->final_box->value();


}

void MainWindow::useSchemaA()
{
    m_calc->setSchema(SCHEMA_A);
}

void MainWindow::useSchemaB()
{
    m_calc->setSchema(SCHEMA_B);
}

void MainWindow::display()
{
    /*
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


    //QVBoxLayout* vbox = new QVBoxLayout (this);

    hws[0] = new QSlider (Qt::Horizontal);
    //hws[0]->setFocusPolicy (Qt::StrongFocus);
    hws[0]->setTickPosition (QSlider::TicksBelow);
    hws[0]->setTickInterval(10);
    //hws[0]->setSingleStep(1);
    hws[0]->setMinimum(0);
    hws[0]->setMaximum(100);
    //hws[0]->setGeometry(QRect(QPoint(50, 50), QSize(200, 10)));


    //vbox->addWidget(hws[0]);
    hwb[0] = new QScrollBar (Qt::Horizontal);
    hwb[0]->setMinimum(0);
    hwb[0]->setMaximum(100);

    auto layout = new QGridLayout(this);
    layout->addWidget(hws[0]);
    layout->addWidget(hwb[0]);
 //   hwb[0]->setFocusPolicy (Qt::StrongFocus);
   // hwb[0]->setGeometry(QRect(QPoint(100, 100), QSize(50, 200)));

   // connect (hws[0], SIGNAL(valueChanged(int)), hwb[0], SLOT(setValue(int)));

    */
}
