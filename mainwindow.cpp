#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Chargez les images et associez-les au bouton pushButton_17
   /* cardImages.push_back(QPixmap(":/Cards/1_batons.png"));
    cardImages.push_back(QPixmap(":/Cards/1_coupes.png"));
    cardImages.push_back(QPixmap(":/Cards/1_denier.png"));
    cardImages.push_back(QPixmap(":/Cards/1_epees.png"));
    cardImages.push_back(QPixmap(":/Cards/2_batons.png"));
    cardImages.push_back(QPixmap(":/Cards/2_coupes.png"));
    cardImages.push_back(QPixmap(":/Cards/2_denier.png"));
    cardImages.push_back(QPixmap(":/Cards/2_epees.png"));
    cardImages.push_back(QPixmap(":/Cards/3_batons.png"));
    cardImages.push_back(QPixmap(":/Cards/3_coupes.png"));
    cardImages.push_back(QPixmap(":/Cards/3_denier.png"));
    cardImages.push_back(QPixmap(":/Cards/3_epees.png"));
    cardImages.push_back(QPixmap(":/Cards/4_batons.png"));
    cardImages.push_back(QPixmap(":/Cards/4_coupes.png"));
    cardImages.push_back(QPixmap(":/Cards/4_epees.png"));
    cardImages.push_back(QPixmap(":/Cards/5_batons.png"));
    cardImages.push_back(QPixmap(":/Cards/5_coupes.png"));
    cardImages.push_back(QPixmap(":/Cards/5_denier.png"));
    cardImages.push_back(QPixmap(":/Cards/5_epees.png"));
    cardImages.push_back(QPixmap(":/Cards/6_batons.png"));
    cardImages.push_back(QPixmap("::/Cards/6_denier.png"));
    cardImages.push_back(QPixmap(":/Cards/6_epees.png"));
    cardImages.push_back(QPixmap(":/Cards/7_batons.png"));
    cardImages.push_back(QPixmap(":/Cards/7_coupes.png"));
    cardImages.push_back(QPixmap(":/Cards/7_denier.png"));
    cardImages.push_back(QPixmap(":/Cards/7_epees.png"));
    cardImages.push_back(QPixmap(":/Cards/10_batons.png"));
    cardImages.push_back(QPixmap(":/Cards/10_coupes.png"));
    cardImages.push_back(QPixmap(":/Cards/10_denier.png"));
    cardImages.push_back(QPixmap(":/Cards/10_epees.png"));
    cardImages.push_back(QPixmap(":/Cards/11_batons.png"));
    cardImages.push_back(QPixmap(":/Cards/11_coupes.png"));
    cardImages.push_back(QPixmap(":/Cards/11_denier.png"));
    cardImages.push_back(QPixmap(":/Cards/11_epees.png"));
    cardImages.push_back(QPixmap(":/Cards/12_batons.png"));
    cardImages.push_back(QPixmap(":/Cards/12_coupes.png"));
    cardImages.push_back(QPixmap(":/Cards/12_denier.png"));
    cardImages.push_back(QPixmap(":/Cards/12_epees.png"));*/


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_2_clicked()
{
      ui->stackedWidget->setCurrentIndex(1);
}

