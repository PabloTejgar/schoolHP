#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Esto es parte de la rama inicial antes de crear el Branch.";
    qDebug() << "Esto es parte de la rama inicial después de crear el Branch.";
    qDebug() << "Aunque parezca mentira, esto es parte de mi tag SchoolTag.";

    return a.exec();
}
