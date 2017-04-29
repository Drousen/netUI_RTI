#include <QApplication>
#include "task.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Task task;

    return a.exec();
}
