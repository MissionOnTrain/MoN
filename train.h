#ifndef TRAIN_H
#define TRAIN_H
#include<QGraphicsPixmapItem>
#include"mainwindow.h"
//class MainWindow;
class train
{
public:
    train();
    QGraphicsPixmapItem *trn;
int x;
int y;
void move();
};
#endif // TRAIN_H
