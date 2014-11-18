#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Esto es parte de la rama inicial antes de crear el Branch.";
    qDebug() << "Este es el primer cambio del branch... shhhh";

    return a.exec();
}
