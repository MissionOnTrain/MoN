#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "train.h"
#include "user.h"
#include "weapon1.h"
#include "weapon2.h"
#include"enemy1.h"
#include"enemy2.h"
#include"heart.h"
#include"diamond.h"
#include <QMediaPlayer>
#include <QMessageBox>
#include<stdlib.h>
class train;
//weapon1 w;
user s;
enemy1 e1,e12;
enemy2 e2;
int m;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    view=new QGraphicsView;
    scene=new QGraphicsScene;
    //QLabel *lb=new QLabel("hi");
    //lb->show();
    setCentralWidget(view);
    view->setScene(scene);
    resize(700,500);
    scene->setSceneRect(0,0,800,600);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(800,600);
    im=scene->addPixmap(QPixmap(":/new/prefix1/background3.jpg").scaled(1500,600));
    im->setPos(-700,0);
    im3=scene->addPixmap(QPixmap(":/new/prefix1/background3.jpg").scaled(1500,600));
    im4=im;
    im1=im3;
    Trainn->trn = scene->addPixmap(QPixmap(":/new/prefix1/tr.png").scaled(1000,80));
    Trainn->trn->setPos(-60,315);


   s.pic = scene->addPixmap(QPixmap(":/new/prefix1/player1.png").scaled(50,50));
   s.pic->setPos(10,285);
   //s.move();
   s.weap1.weappic=scene->addPixmap(QPixmap(":/new/prefix1/weapon1.png").scaled(30,30));
   s.weap1.weappic->setPos(13,300);

   s.weap1.g.shotpic=scene->addPixmap(QPixmap(":/new/prefix1/weapon1.png").scaled(10,5));///////////////*********
   s.weap1.g.shotpic->setPos(13,300);

    //im2=scene->addPixmap(QPixmap(":/new/prefix1/tr.png").scaled(800,60));
   // im2->setPos(-40,350);
    t1=new QTimer;
    t1->setInterval(20);
    t1->start();
    connect(t1,SIGNAL(timeout()),this,SLOT(move()));

    int u1=rand()%700;
    e1.en1=scene->addPixmap(QPixmap(":/new/prefix1/enemy1.png").scaled(50,50));
    e1.en1->setPos(u1,285);
e1.we1.weappic=scene->addPixmap(QPixmap(":/new/prefix1/weapon1l.png").scaled(30,30));
 e1.we1.weappic->setPos(u1,285);
 e1.we1.g.shotpic=scene->addPixmap(QPixmap(":/new/prefix1/weapon1.png").scaled(10,5));////////////////**********
 e1.we1.g.shotpic->setPos(13,300);
 t10=new QTimer;
 t10->setInterval(100);
 t10->start();
 m=e1.en1->pos().x();
 connect(t10,SIGNAL(timeout()),this,SLOT(en1_mover()));


    /*e1.en1=scene->addPixmap(QPixmap(":/new/prefix1/enemy1.png").scaled(50,50));
    t7=new QTimer;
    t7->setInterval(10000);
    t7->start();
    //m=e1.en1->pos().x();
    e1.en1->setPos(60,285);
    connect(t7,SIGNAL(timeout()),this,SLOT(en1_exist()));*/

    int u=rand()%700;
    e12.en1=scene->addPixmap(QPixmap(":/new/prefix1/enemy1.png").scaled(50,50));
    e12.en1->setPos(u,285);
e12.we1.weappic=scene->addPixmap(QPixmap(":/new/prefix1/weapon1l.png").scaled(30,30));
 e12.we1.weappic->setPos(u,285);
 e12.we1.g.shotpic=scene->addPixmap(QPixmap(":/new/prefix1/weapon1.png").scaled(10,5));///////////***********
 e12.we1.g.shotpic->setPos(13,300);
 t15=new QTimer;
 t15->setInterval(100);
 t15->start();
 m=e12.en1->pos().x();
 connect(t15,SIGNAL(timeout()),this,SLOT(en12_mover()));

    /*e12.en1=scene->addPixmap(QPixmap(":/new/prefix1/enemy1.png").scaled(50,50));
    t14=new QTimer;
    t14->setInterval(10000);
    t14->start();
    //m=e1.en1->pos().x();
    e12.en1->setPos(60,285);
    connect(t14,SIGNAL(timeout()),this,SLOT(en12_exist()));*/

    /*e12.en1=scene->addPixmap(QPixmap(":/new/prefix1/enemy1.png").scaled(50,50));
    t7=new QTimer;
    t7->setInterval(10000);
    t7->start();
    //m=e1.en1->pos().x();
    e12.en1->setPos(60,285);
    connect(t7,SIGNAL(timeout()),this,SLOT(en1_exist(e12)));

    e13.en1=scene->addPixmap(QPixmap(":/new/prefix1/enemy1.png").scaled(50,50));
    t7=new QTimer;
    t7->setInterval(10000);
    t7->start();
    //m=e1.en1->pos().x();
    e13.en1->setPos(60,285);
    connect(t7,SIGNAL(timeout()),this,SLOT(en1_exist(e13)));
*/
 int u2=rand()%700;
 e2.en2=scene->addPixmap(QPixmap(":/new/prefix1/enemy2.png").scaled(50,50));
 e2.en2->setPos(u2,285);
e2.we2.weappic=scene->addPixmap(QPixmap(":/new/prefix1/weapon2l.png").scaled(30,30));
e2.we2.weappic->setPos(u2,285);
e2.we2.g.shotpic=scene->addPixmap(QPixmap(":/new/prefix1/weapon1.png").scaled(10,5));//////////*********
e2.we2.g.shotpic->setPos(13,300);
t12=new QTimer;
t12->setInterval(100);
t12->start();
m=e2.en2->pos().y();
connect(t12,SIGNAL(timeout()),this,SLOT(en2_moveu()));


    /*e2.en2=scene->addPixmap(QPixmap(":/new/prefix1/enemy2.png").scaled(50,50));
    t9=new QTimer;
    t9->setInterval(10000);
    t9->start();
    //m=e2.en2->pos().y();
    e2.en2->setPos(70,285);
    connect(t9,SIGNAL(timeout()),this,SLOT(en2_exist()));
*/


    /*im2=scene->addPixmap(QPixmap(":/new/prefix1/player1.png").scaled(50,50));
    im2->setPos(50,319);*/
   //// weapon1 ss(im2);
    /*t4=new QTimer;
    t4->start();
    connect(t1,SIGNAL(timeout()),this,SLOT(move()));*/
    //weapon2(user.png )
    /*im5=scene->addPixmap(QPixmap(":/new/prefix1/user.png").scaled(40,25));
    im5.setPos(20,405);*/
    /*use->pic=scene->addPi
    t4->setInterval(20);xmap(QPixmap(":/new/prefix1/user.png").scaled(40,25));
    use->pic->setPos(0,405);*/
    //use->x=0;

    //setting diamond:
    s.d.Diamond=scene->addPixmap(QPixmap(":/new/prefix1/diamond.png").scaled(50,50));
    t8=new QTimer;
    t8->setInterval(25000);
    t8->start();
    connect(t8,SIGNAL(timeout()),this,SLOT(di_exist()));

    TI=new QGraphicsTextItem;
    TI->setPlainText(QString::number(s.d.diamondVal));//QString("Diamond: ") +
         TI->setPos(55,5);
         TI->setDefaultTextColor(Qt::yellow);
         TI->setFont(QFont("times",16));
         scene->addItem(TI);

    //playing background music:
    QMediaPlayer*music=new QMediaPlayer();
    music->setMedia(QUrl("grc:/new/prefix2/train.wav"));


    //setting  heart:
    s.h3.Heart=scene->addPixmap(QPixmap(":/new/prefix1/heart.png").scaled(50,50));
    s.h3.Heart->setPos(0,55);
   // t17=new QTimer;
  //  t17->setInterval();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::di_exist(){
    int u=rand()%700;
    s.d.Diamond=scene->addPixmap(QPixmap(":/new/prefix1/diamond.png").scaled(50,50));
    s.d.Diamond->setPos(u,285);
}

/*void MainWindow::en12_exist(){

}*/
void MainWindow::en12_mover(){
    e12.en1->setPos(e12.en1->pos().x()+5,e12.en1->pos().y());
    e12.we1.weappic->setPos(e12.we1.weappic->pos().x()+5,e12.we1.weappic->pos().y());
    e12.we1.g.shotpic->setPos(e12.we1.g.shotpic->pos().x()+5,e12.we1.g.shotpic->pos().y());
    e12.we1.g.shotpic->setPos(e12.we1.g.shotpic->pos().x()-10,e12.we1.g.shotpic->pos().y());
    if(e12.en1->pos().x()-m>10||e12.en1->pos().x()-m<-10){
        t15->stop();
        t16=new QTimer;
        t16->setInterval(100);
        t16->start();
        m=e12.en1->pos().x();
        connect(t16,SIGNAL(timeout()),this,SLOT(en12_movel()));
        if(e12.we1.g.shotpic->collidesWithItem(s.pic)){
            s.h3.heartVal-=e12.we1.g.power;
            if(s.h3.heartVal<=0){
                QMessageBox::about(this,"GAME OVER","GAME OVER");
                this->close();
            }
        }
    }
}
void MainWindow::en12_movel(){
    e12.en1->setPos(e12.en1->pos().x()-5,e12.en1->pos().y());
    e12.we1.weappic->setPos(e12.we1.weappic->pos().x()-5,e12.we1.weappic->pos().y());
    e12.we1.g.shotpic->setPos(e12.we1.g.shotpic->pos().x()-5,e12.we1.g.shotpic->pos().y());
    e12.we1.g.shotpic->setPos(e12.we1.g.shotpic->pos().x()-10,e12.we1.g.shotpic->pos().y());
    if(e12.en1->pos().x()-m>10||e12.en1->pos().x()-m<-10){
        t16->stop();
        t15=new QTimer;
        t15->setInterval(100);
        t15->start();
        m=e12.en1->pos().x();
        connect(t15,SIGNAL(timeout()),this,SLOT(en12_mover()));
        if(e12.we1.g.shotpic->collidesWithItem(s.pic)){
            s.h3.heartVal-=e12.we1.g.power;
            if(s.h3.heartVal<=0){
                QMessageBox::about(this,"GAME OVER","GAME OVER");
                this->close();
            }
        }
    }
}
/*void MainWindow::en1_exist(){
    ///////////////////im4->setPos(im4->pos().x()+5,im4->pos().y());
}*/
void MainWindow::en1_mover(){
    e1.en1->setPos(e1.en1->pos().x()+5,e1.en1->pos().y());
    e1.we1.weappic->setPos(e1.we1.weappic->pos().x()+5,e1.we1.weappic->pos().y());
    e1.we1.g.shotpic->setPos(e1.we1.g.shotpic->pos().x()+5,e1.we1.g.shotpic->pos().y());
    e1.we1.g.shotpic->setPos(e1.we1.g.shotpic->pos().x()-10,e1.we1.g.shotpic->pos().y());
    if(e1.en1->pos().x()-m>10||e1.en1->pos().x()-m<-10){
        t10->stop();
        t11=new QTimer;
        t11->setInterval(100);
        t11->start();
        m=e1.en1->pos().x();
        connect(t11,SIGNAL(timeout()),this,SLOT(en1_movel()));
        if(e1.we1.g.shotpic->collidesWithItem(s.pic)){
            s.h3.heartVal-=e1.we1.g.power;
            if(s.h3.heartVal<=0){
                QMessageBox::about(this,"GAME OVER","GAME OVER");
                this->close();
            }
        }
    }
}
void MainWindow::en1_movel(){
    e1.en1->setPos(e1.en1->pos().x()-5,e1.en1->pos().y());
    e1.we1.weappic->setPos(e1.we1.weappic->pos().x()-5,e1.we1.weappic->pos().y());
    e1.we1.g.shotpic->setPos(e1.we1.g.shotpic->pos().x()-5,e1.we1.g.shotpic->pos().y());
    e1.we1.g.shotpic->setPos(e1.we1.g.shotpic->pos().x()-10,e1.we1.g.shotpic->pos().y());
    if(e1.en1->pos().x()-m>10||e1.en1->pos().x()-m<-10){
        t11->stop();
        t10=new QTimer;
        t10->setInterval(100);
        t10->start();
        m=e1.en1->pos().x();
        connect(t10,SIGNAL(timeout()),this,SLOT(en1_mover()));
        if(e1.we1.g.shotpic->collidesWithItem(s.pic)){
            s.h3.heartVal-=e1.we1.g.power;
            if(s.h3.heartVal<=0){
                QMessageBox::about(this,"GAME OVER","GAME OVER");
                this->close();
            }
        }
    }
}

/*void MainWindow::en2_exist(){
   ///////////////////im4->setPos(im4->pos().x()+5,im4->pos().y());
}*/
void MainWindow::en2_moveu(){
    m=e1.en1->pos().y();
    e2.en2->setPos(e2.en2->pos().x(),e2.en2->pos().y()+5);
    e2.we2.weappic->setPos(e2.we2.weappic->pos().x(),e2.we2.weappic->pos().y()+5);
    e2.we2.g.shotpic->setPos(e2.we2.g.shotpic->pos().x(),e2.we2.g.shotpic->pos().y()+5);
    e2.we2.g.shotpic->setPos(e2.we2.g.shotpic->pos().x()-10,e2.we2.g.shotpic->pos().y());
    if(e2.en2->pos().y()-m>10||e2.en2->pos().y()-m<-10){
        t12->stop();
        t13=new QTimer;
        t13->setInterval(100);
        t13->start();
        m=e1.en1->pos().y();
        connect(t13,SIGNAL(timeout()),this,SLOT(en2_moved()));
        if(e2.we2.g.shotpic->collidesWithItem(s.pic)){
            s.h3.heartVal-=e2.we2.g.power;
            if(s.h3.heartVal<=0){
                QMessageBox::about(this,"GAME OVER","GAME OVER");
                this->close();
            }
        }
    }
}
void MainWindow::en2_moved(){
    e2.en2->setPos(e2.en2->pos().x(),e2.en2->pos().y()-5);
    e2.we2.weappic->setPos(e2.we2.weappic->pos().x(),e2.we2.weappic->pos().y()-5);
    e2.we2.g.shotpic->setPos(e2.we2.g.shotpic->pos().x(),e2.we2.g.shotpic->pos().y()-5);
    e2.we2.g.shotpic->setPos(e2.we2.g.shotpic->pos().x()-10,e2.we2.g.shotpic->pos().y());
    if(e2.en2->pos().y()-m>10||e2.en2->pos().y()-m<-10){
        t13->stop();
        t12=new QTimer;
        t12->setInterval(100);
        t12->start();
        m=e1.en1->pos().y();
        connect(t12,SIGNAL(timeout()),this,SLOT(en2_moveu()));
        if(e2.we2.g.shotpic->collidesWithItem(s.pic)){
            s.h3.heartVal-=e2.we2.g.power;
            if(s.h3.heartVal<=0){
                QMessageBox::about(this,"GAME OVER","GAME OVER");
                this->close();
            }
        }
    }
}

void MainWindow::move(){
   // while(1){
    im4->setPos(im4->pos().x()+5,im4->pos().y());
    im1->setPos(im1->pos().x()+5,im1->pos().y());
    if(im->pos().x()==0){
        im3->setPos(-1500,0);
        im1=im3;
    }
    if(im3->pos().x()==0){
        im->setPos(-1500,0);
        im4=im;
    }
    // }
}



void MainWindow::keyPressEvent(QKeyEvent*key){
    if(wep==0){
    if(key->key()==Qt::Key_6){
        if(b==0){
            y=s.pic->pos().x();
        s.pic->setPos(-1350,285);
        s.weap1.weappic->setPos(-1350,300);
        b=1;
        s.pic=scene->addPixmap(QPixmap(":/new/prefix1/player1.png").scaled(50,50));
        s.pic->setPos(y,285);
        s.weap1.weappic=scene->addPixmap(QPixmap(":/new/prefix1/weapon1r.png").scaled(30,30));
        s.weap1.weappic->setPos(y,300);
        }
        t2=new QTimer;
        t2->setInterval(10);
        t2->start();
        x=s.pic->pos().x();
        connect(t2,SIGNAL(timeout()),this,SLOT(go_right1()));
    }
    if(key->key()==Qt::Key_4){
        if(b==1){
            y=s.pic->pos().x();
        s.pic->setPos(-1350,285);
        s.weap1.weappic->setPos(-1350,300);
        b=0;
        s.pic=scene->addPixmap(QPixmap(":/new/prefix1/player 2.png").scaled(50,50));
        s.pic->setPos(y,285);
        s.weap1.weappic=scene->addPixmap(QPixmap(":/new/prefix1/weapon1l.png").scaled(30,30));
        s.weap1.weappic->setPos(y,300);
        }
        t3=new QTimer;
        t3->setInterval(10);
        t3->start();
        x=s.pic->pos().x();
        connect(t3,SIGNAL(timeout()),this,SLOT(go_left1()));
    }
    }
    else{
        if(key->key()==Qt::Key_6){
            //s.weap1.weappic->setPos(-1350,300);
            //scene->removeItem(s.weap1.weappic);
            if(b==0){
                y=s.pic->pos().x();
            s.pic->setPos(-1350,285);
            s.weap2.weappic->setPos(-1350,300);
            b=1;
            s.pic=scene->addPixmap(QPixmap(":/new/prefix1/player1.png").scaled(50,50));
            s.pic->setPos(y,285);
            s.weap2.weappic=scene->addPixmap(QPixmap(":/new/prefix1/weapon2r.png").scaled(30,30));
            s.weap2.weappic->setPos(y,300);
            /*s.weap2.g.shotpic=scene->addPixmap(QPixmap(":/new/prefix1/gunshot.png").scaled(10,10));
            s.weap2.g.shotpic->setPos(y,300);*/
            }
            t5=new QTimer;
            t5->setInterval(10);
            t5->start();
            x=s.pic->pos().x();
            connect(t5,SIGNAL(timeout()),this,SLOT(go_right2()));
        }
        if(key->key()==Qt::Key_4){
            //s.weap1.weappic->setPos(-1350,300);
            //scene->removeItem(s.weap1.weappic);
            if(b==1){
                y=s.pic->pos().x();
            s.pic->setPos(-1350,285);
            s.weap2.weappic->setPos(-1350,300);
            b=0;
            s.pic=scene->addPixmap(QPixmap(":/new/prefix1/player 2.png").scaled(50,50));
            s.pic->setPos(y,285);
            s.weap2.weappic=scene->addPixmap(QPixmap(":/new/prefix1/weapon2l.png").scaled(30,30));
            s.weap2.weappic->setPos(y,300);
           /* s.weap2.g.shotpic=scene->addPixmap(QPixmap(":/new/prefix1/gunshot.png").scaled(10,10));
            s.weap2.g.shotpic->setPos(y,300);*/
            }
            t6=new QTimer;
            t6->setInterval(10);
            t6->start();
            x=s.pic->pos().x();
            connect(t6,SIGNAL(timeout()),this,SLOT(go_left2()));
        }
    }
    if(key->key()==Qt::Key_Space){
        if((wep==0)){//diamond==5//(d_is_5==1)
            wep=1;
            s.weap1.weappic->setPos(-1300,300);
            //scene->removeItem(s.weap1.weappic);
            //scene()
            y=s.pic->pos().x();
            if(b==1){
            s.weap2.weappic=scene->addPixmap(QPixmap(":/new/prefix1/weapon2r.png").scaled(30,30));
            s.weap2.weappic->setPos(y+5,300);
            }
            else{
                s.weap2.weappic=scene->addPixmap(QPixmap(":/new/prefix1/weapon2l.png").scaled(30,30));
                s.weap2.weappic->setPos(y+5,300);
            }
        }
        }
    if(key->key()==Qt::Key_3){
        if(wep==0){
        if(b==1){
            s.weap1.g.shotpic->setPos(s.pic->x(),s.pic->y());
            s.weap1.g.shotpic->setPos(s.weap1.g.shotpic->pos().x()+10,s.weap1.g.shotpic->pos().y());
        }
        if(b==0){
            s.weap1.g.shotpic->setPos(s.weap1.g.shotpic->pos().x()-10,s.weap1.g.shotpic->pos().y());
        }
        }
        if(wep==1){
            if(b==1){
                s.weap2.g.shotpic->setPos(s.weap2.g.shotpic->pos().x()+10,s.weap2.g.shotpic->pos().y());
            }
            if(b==0){
                s.weap2.g.shotpic->setPos(s.weap2.g.shotpic->pos().x()-10,s.weap2.g.shotpic->pos().y());
            }
        }
        if(s.weap2.g.shotpic->collidesWithItem(e1.en1)){
            e1.h1.heartVal-=s.weap2.g.power;
            if(e1.h1.heartVal<=0){
                scene->removeItem(e1.en1);
               // scene->removeItem(e1);

            }
        }
        if(s.weap2.g.shotpic->collidesWithItem(e12.en1)){
            e12.h1.heartVal-=s.weap2.g.power;
            if(e12.h1.heartVal<=0){
                scene->removeItem(e12.en1);
               // scene->removeItem(e12);

            }
        }
        if(s.weap2.g.shotpic->collidesWithItem(e2.en2)){
            e2.h2.heartVal-=s.weap2.g.power;
            if(e2.h2.heartVal<=0){
                scene->removeItem(e2.en2);
                //scene->removeItem(e2);

            }
        }
        if(s.weap1.g.shotpic->collidesWithItem(e1.en1)){
            e1.h1.heartVal-=s.weap1.g.power;
            if(e1.h1.heartVal<=0){
                scene->removeItem(e1.en1);
                //scene->removeItem(e1);

            }
        }
        if(s.weap1.g.shotpic->collidesWithItem(e12.en1)){
            e12.h1.heartVal-=s.weap1.g.power;
            if(e12.h1.heartVal<=0){
                scene->removeItem(e12.en1);
                //scene->removeItem(e12);

            }
        }
        if(s.weap1.g.shotpic->collidesWithItem(e2.en2)){
            e2.h2.heartVal-=s.weap1.g.power;
            if(e2.h2.heartVal<=0){
                scene->removeItem(e2.en2);
                //scene->removeItem(e2);

            }
        }
    }
}
void MainWindow::go_right1()
{

    s.pic->setPos(s.pic->pos().x()+7,s.pic->pos().y());
    s.weap1.weappic->setPos(s.pic->pos().x()+7,300);
    s.weap1.g.shotpic->setPos(s.pic->pos().x()+7,300);
    if(s.pic->collidesWithItem(s.d.Diamond)){//????????????????????????????????
        s.d.increase();
        TI->setPlainText(QString::number(s.d.diamondVal));//QString("Diamond: ") +
        TI->setPos(55,5);
        TI->setDefaultTextColor(Qt::yellow);
        TI->setFont(QFont("times",16));
        scene->addItem(TI);
        int op=s.d.diamondVal;
        if(op==5){
            d_is_5=1;
        }
        s.d.Diamond->setPos(-1300,285);
        //scene->removeItem(s.d.Diamond);
    }
    if(s.pic->pos().x()-x>8||s.pic->pos().x()-x<-8){
        t2->stop();
    }

}

void MainWindow::go_left1()
{

    s.pic->setPos(s.pic->pos().x()-7,s.pic->pos().y());
    s.weap1.weappic->setPos(s.pic->pos().x()-7,300);
    s.weap1.g.shotpic->setPos(s.pic->pos().x()-7,300);
    if(s.pic->collidesWithItem(s.d.Diamond)){//????????????????????????????????
        s.d.increase();
        TI->setPlainText(QString::number(s.d.diamondVal));//QString("Diamond: ") +
        TI->setPos(55,5);
        TI->setDefaultTextColor(Qt::yellow);
        TI->setFont(QFont("times",16));
        scene->addItem(TI);
        int op=s.d.diamondVal;
        if(op==5){
            d_is_5=1;
        }
        s.d.Diamond->setPos(-1300,285);
        //scene->removeItem(s.d.Diamond);
    }
    if(s.pic->pos().x()-x>8||s.pic->pos().x()-x<-8){
        t3->stop();
    }

}
void MainWindow::go_right2()
{

    s.pic->setPos(s.pic->pos().x()+7,s.pic->pos().y());
    s.weap2.weappic->setPos(s.pic->pos().x()+7,300);
    s.weap2.g.shotpic->setPos(s.pic->pos().x()+7,300);
    if(s.pic->pos().x()-x>8||s.pic->pos().x()-x<-8){
        t5->stop();
    }

}

void MainWindow::go_left2()
{

    s.pic->setPos(s.pic->pos().x()-7,s.pic->pos().y());
    s.weap2.weappic->setPos(s.pic->pos().x()-7,300);
    s.weap2.g.shotpic->setPos(s.pic->pos().x()-7,300);
    if(s.pic->pos().x()-x>8||s.pic->pos().x()-x<-8){
        t6->stop();
    }

}

/*void user::move(){

}*/
