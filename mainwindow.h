#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <train.h>
//#include <user.h>
#include <QGraphicsScene>
#include "player.h"
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include<QTimer>
#include <QKeyEvent>
class train;
class user;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    void keyPressEvent(QKeyEvent *key);

public:
    int x;
    int b=1;
    int y;
    QGraphicsPixmapItem*im,*im1,*im2,*im3,*im4,im5;
    QTimer*t1,*t2,*t3,*t4;
    //user *use(im2);
    train *Trainn;
    QGraphicsView * view;
    QGraphicsScene * scene;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void move();
    void go_right();
    void go_left();
};
/*class person{
    int x,y;

};

class user:public person{
    char name[10];
//public slots:
  //  void go_up();
    //void go_right();
    //void go_left();
};
class weapon{

};*/

#endif // MAINWINDOW_H
