#include <QApplication>
#include <QLabel>
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QLabel label("¡Hola Mundo desde Qt!");
    label.setAlignment(Qt::AlignCenter);
    label.resize(400, 200);

    QFont fuente("Georgia", 28, QFont::Bold);
    fuente.setStyleHint(QFont::Serif);
    label.setFont(fuente);

    label.setStyleSheet(
        "QLabel { color: #9370DB; "
        "background-color: #F5EFFF; "
        "border-radius: 15px; "
        "padding: 20px; }"
    );

    label.show();

    return app.exec();
}
