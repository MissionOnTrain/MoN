#ifndef ENEMY1_H
#define ENEMY1_H
#include"person.h"
#include "weapon1.h"
#include"heart.h"
#include"diamond.h"
#include<QGraphicsPixmapItem>
class enemy1// : public person
{
public:
    QGraphicsPixmapItem*en1;
    weapon1 we1;
    heart h1;
    enemy1();


};

#endif // ENEMY1_H
