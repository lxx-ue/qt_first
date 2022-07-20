#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton *button_quit = new QPushButton("Exit");
    QObject::connect(button_quit, SIGNAL(clicked()), &a, SLOT(quit()));
    button_quit->show();
    return a.exec();
}
