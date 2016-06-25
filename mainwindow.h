#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <train.h>
#include <QPixmap>
#include <enemy1.h>
#include <QMessageBox>
#include <enemy2.h>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include<QTimer>
#include <QKeyEvent>
#include<QGraphicsTextItem>
class train;
class user;
class enemy1;
class enemy2;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    void keyPressEvent(QKeyEvent *key);
    
public:
    bool wep=0;
    bool d_is_5=0;
    int x;
    //int m;
    int b=1;
    int y;
    QGraphicsPixmapItem*im,*im1,*im2,*im3,*im4,im5;
    //QGraphicsPixmapItem*e1,*e2,*e3,*e4,*e5,*e6,*e7,*e8,*e9,*e10;
    QTimer*t1,*t2,*t3,*t4,*t5,*t6,*t7,*t8,*t9,*t10,*t11,*t12,*t13,*t14,*t15,*t16,*t17;
    QGraphicsTextItem*TI;
    //user *use;
    train *Trainn;
    QGraphicsView*view;
    QGraphicsScene*scene;
    /*enemy1 e1;
    enemy1 e12;
    enemy1 e13;
    enemy2 e2,e22;*/
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
private slots:
    void move();
    void go_right1();
    void go_left1();
    void go_right2();
    void go_left2();
    //void en1_exist();
    //void en12_exist();
   // void en2_exist();
    void di_exist();
    void en1_mover();
    void en1_movel();
    void en12_mover();
    void en12_movel();
    void en2_moveu();
    void en2_moved();
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
