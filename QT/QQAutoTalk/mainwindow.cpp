#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   QString name=ui->textEdit->toPlainText();
    int speed=0;
     if(ui->radioButton->isChecked())
     {
         speed=1000;
     }
     if(ui->radioButton_2->isChecked())
     {
         speed=500;
     }
     if(ui->radioButton_3->isChecked())
     {
         speed=50;
     }
     int i=0;
     int num=ui->spinBox->text().toInt();
     HWND wnd;
     LPCWSTR App = reinterpret_cast <LPCWSTR>(name.data());
     wnd =FindWindow(NULL,App);
      Sleep(1000);
     while (i < num)
      {
         SendMessage(wnd, WM_PASTE, 0, 0);
                 keybd_event(VK_RETURN, 0, 0, 0);
                 i++;
                 Sleep(speed);
      }
}
