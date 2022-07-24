#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *window = new QWidget;
    window->setWindowTitle("Программа ползунок");
    QSpinBox *spinBox = new QSpinBox;
    QSlider *sliderH = new QSlider(Qt::Horizontal);
    QSlider *sliderV = new QSlider(Qt::Vertical);
    QPushButton *button_quit = new QPushButton("Выход");

    spinBox->setRange(0, 150);
    sliderH->setRange(0, 150);
    sliderV->setRange(0, 150);
    // Соединение горизонтального слайдера со спинбоксом
    QObject::connect(spinBox, SIGNAL(valueChanged(int)), sliderH, SLOT(setValue(int)));
    QObject::connect(sliderH, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

    // Соединение вертикального слайдера со спинбоксом
    QObject::connect(spinBox, SIGNAL(valueChanged(int)), sliderV, SLOT(setValue(int)));
    QObject::connect(sliderV, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

    // Соединение кнопки действия
    QObject::connect(button_quit, SIGNAL(clicked()), &app, SLOT(quit()));

    spinBox->setValue(50);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(sliderH);
    layout->addWidget(sliderV);
    layout->addWidget(button_quit);
    window->setLayout(layout);
    window->show();
    return app.exec();
}
