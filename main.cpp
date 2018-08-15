#include <QtGui/QApplication>
#include "stringcount.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StringCount w;
    w.show();
    
    return a.exec();
}
