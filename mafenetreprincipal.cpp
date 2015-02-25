#include "mafenetreprincipal.h"
#include "ui_mafenetreprincipal.h"

mafenetreprincipal::mafenetreprincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mafenetreprincipal)
{
    ui->setupUi(this);
}

mafenetreprincipal::~mafenetreprincipal()
{
    delete ui;
}

void mafenetreprincipal::on_pushButton_clicked()
{
    qApp ->quit();
}
