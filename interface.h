#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>

class Interface : public QWidget
{
    Q_OBJECT

public:
    Interface(QWidget *parent = 0);
    ~Interface();
};

#endif // INTERFACE_H
