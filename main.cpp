#include <QCoreApplication>
#include <Manager/manager.h>

int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);
    Manager manager;
    return a.exec();
}
