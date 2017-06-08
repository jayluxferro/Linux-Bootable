#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDir"
#include "QFileInfo"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //adding select option for bootable image creation
    ui->bootableSelect->addItem("ISO Image");
    ui->bootableSelect->addItem("DD Image");
    //end of select option for bootable image creation

    //listing drives
    foreach( QFileInfo drive, QDir::drives() )
      {
        ui->listDrives->addItem(drive.absolutePath());
      }

    setWindowFlags( (windowFlags() | Qt::CustomizeWindowHint) & ~Qt::WindowMaximizeButtonHint);
}

MainWindow::~MainWindow()
{
    delete ui;
}
