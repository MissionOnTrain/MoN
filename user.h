#ifndef USER_H
#define USER_H
//#include <train.h>
#include "person.h"
#include "weapon1.h"
#include "weapon2.h"
#include"heart.h"
#include"diamond.h"
#include"heart.h"
#include <QGraphicsPixmapItem>
 //class person;
class user //: public person
{
public:
    QGraphicsPixmapItem*pic;
    user();
    diamond d;
    heart h3;
    weapon1 weap1;
    weapon2 weap2;
     int x;
     void move();
    void shoot();

};

#endif // USER_H
