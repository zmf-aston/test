#include "mywidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;//下面执行Mywidget的构造函数


    w.show();

    return a.exec();
}
