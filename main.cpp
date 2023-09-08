#include "Age_calculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Age_calculator w;
    w.show();
    return a.exec();
}
