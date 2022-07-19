#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel lbl("test");
    lbl.show();
    return a.exec();
}
