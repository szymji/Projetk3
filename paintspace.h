#ifndef PAINTSPACE_H
#define PAINTSPACE_H

#include <QWidget>
#include <QPaintEvent>

class PaintSpace : public QWidget
{

  // void paintEvent(QPaintEvent*);
   int n;

public:
    PaintSpace(QWidget *parent = 0);
    ~PaintSpace();
};

#endif // PAINTSPACE_H
