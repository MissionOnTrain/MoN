#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QLabel>
#include "train.h"
#include "player.h"
#include <QGraphicsRectItem>

#include<QMediaPlayer>
#include<QGraphicsScene>
#include<QGraphicsView>
class train;
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
    //resize(700,500);
   scene->setSceneRect(0,0,800,600);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(800,600);
    im=scene->addPixmap(QPixmap(":/new/prefix1/background3.jpg").scaled(1500,600));
    im->setPos(-700,0);
    im3=scene->addPixmap(QPixmap(":/new/prefix1/background3.jpg").scaled(1500,600));
    im4=im;
    im1=im3;


   //user s;
   //s.Userpic = scene->addPixmap(QPixmap(":/new/prefix1/user.png").scaled(40,25));
   //s.Userpic->setPos(0,405);

    //im2=scene->addPixmap(QPixmap(":/new/prefix1/tr.png").scaled(800,60));
   // im2->setPos(-40,350);
    t1=new QTimer;
    t1->setInterval(20);
    t1->start();
    connect(t1,SIGNAL(timeout()),this,SLOT(move()));

    Trainn->trn = scene->addPixmap(QPixmap(":/new/prefix1/tr.png").scaled(800,60));
    Trainn->trn->setPos(-40,350);
    im2=scene->addPixmap(QPixmap(":/new/prefix1/player1.png").scaled(50,50));
    im2->setPos(50,319);
    /*t4=new QTimer;
    t4->setInterval(20);
    t4->start();
    connect(t1,SIGNAL(timeout()),this,SLOT(move()));*/

    /*im5=scene->addPixmap(QPixmap(":/new/prefix1/user.png").scaled(40,25));
    im5.setPos(20,405);
    use.Userpic=scene->addPixmap(QPixmap(":/new/prefix1/user.png").scaled(40,25));
    use.Userpic->setPos(0,405);*/


    //Playing background sound
    QMediaPlayer * music = new QMediaPlayer();
    music->setMedia(QUrl("qrc:/new/prefix2/trains003.wav"));

    music->play();

}

MainWindow::~MainWindow()
{
    delete ui;
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
    if(key->key()==Qt::Key_6){
        if(b==0){
            y=im2->pos().x();
        im2->setPos(-1350,319);
        b=1;
        im2=scene->addPixmap(QPixmap(":/new/prefix1/player1.png").scaled(50,50));
        im2->setPos(y,319);
        }
        t2=new QTimer;
        t2->setInterval(10);
        t2->start();
        x=im2->pos().x();
        connect(t2,SIGNAL(timeout()),this,SLOT(go_right()));
    }
    if(key->key()==Qt::Key_4){
        if(b==1){
            y=im2->pos().x();
        im2->setPos(-1350,319);
        b=0;
        im2=scene->addPixmap(QPixmap(":/new/prefix1/player 2.png").scaled(50,50));
        im2->setPos(y,319);
        }
        t3=new QTimer;
        t3->setInterval(10);
        t3->start();
        x=im2->pos().x();
        connect(t3,SIGNAL(timeout()),this,SLOT(go_left()));
    }
}
void MainWindow::go_right()
{

    im2->setPos(im2->pos().x()+7,im2->pos().y());
    if(im2->pos().x()-x>8||im2->pos().x()-x<-8){
        t2->stop();
    }

}

void MainWindow::go_left()
{

    im2->setPos(im2->pos().x()-7,im2->pos().y());
    if(im2->pos().x()-x>8||im2->pos().x()-x<-8){
        t3->stop();
    }

}
