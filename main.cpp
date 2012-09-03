#include <QApplication>
#include "brkdpencere.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    brkdpencere w;
    w.show();
    
    return a.exec();
}
