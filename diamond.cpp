#include "diamond.h"
 #include <QFont>


 diamond::diamond(){//: QGraphicsTextItem(parent){
     // initialize the score to 0
     diamondVal = 0;


     // draw the text
    /* TI=new QGraphicsTextItem;
    TI->setPlainText(QString("Diamond: ") + QString::number(diamondVal));
    TI->setPos(5,5);
     TI->setDefaultTextColor(Qt::yellow);
     TI->setFont(QFont("times",16));*/
 }


 void diamond::increase(){
    diamondVal++;
     //TI->setPlainText(QString("Diamond: ") + QString::number(diamondVal));
 }

 /*int diamond::getDiamond(){
     return diamondVal;
 }*/


