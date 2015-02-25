#ifndef MAFENETREPRINCIPAL_H
#define MAFENETREPRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class mafenetreprincipal;
}

class mafenetreprincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit mafenetreprincipal(QWidget *parent = 0);
    ~mafenetreprincipal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mafenetreprincipal *ui;
};

#endif // MAFENETREPRINCIPAL_H
