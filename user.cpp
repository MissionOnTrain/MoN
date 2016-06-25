#include "user.h"
#include "person.h"
#include"heart.h"
class person;


user::user()
{
    //&( h3.getHeart())=200;
    //h3(200);
    h3.heartVal=200;
    x=0;
}
void user::move(){
    x=0;
    //y=0;
}
/*void user::keyPressEvent(QKeyEvent*key){
    if(key->key()==Qt::Key_6){
        if(b==0){
            y=pic->pos().x();
        pic->setPos(-1350,319);
        b=1;
        pic=scene->addPixmap(QPixmap(":/new/prefix1/player1.png").scaled(50,50));
        pic->setPos(y,319);
        }
        t2=new QTimer;
        t2->setInterval(10);
        t2->start();
        x=pic->pos().x();
        connect(t2,SIGNAL(timeout()),this,SLOT(go_right()));
    }
    if(key->key()==Qt::Key_4){
        if(b==1){
            y=pic->pos().x();
        pic->setPos(-1350,319);
        b=0;
        pic=scene->addPixmap(QPixmap(":/new/prefix1/player 2.png").scaled(50,50));
        pic->setPos(y,319);
        }
        t3=new QTimer;
        t3->setInterval(10);
        t3->start();
        x=pic->pos().x();
        connect(t3,SIGNAL(timeout()),this,SLOT(go_left()));
    }
}
void user::go_right()
{

    pic->setPos(pic->pos().x()+7,pic->pos().y());
    if(pic->pos().x()-x>8||pic->pos().x()-x<-8){
        t2->stop();
    }

}

void user::go_left()
{

    pic->setPos(pic->pos().x()-7,pic->pos().y());
    if(pic->pos().x()-x>8||pic->pos().x()-x<-8){
        t3->stop();
    }

}*/
