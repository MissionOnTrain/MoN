#ifndef HEART_H
#define HEART_H

#include <QGraphicsPixmapItem>


#include <QGraphicsTextItem>


 class heart//: public QGraphicsTextItem
 {
 public:
     QGraphicsPixmapItem* Heart;
     heart();
     void decrease();
     //int getHeart();
     int heartVal;
};

//QGraphicsItem * parent=0

#endif // HEART_H

