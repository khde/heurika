#include "mainwindow.h"
#include "mainmenubar.h"

#include <QLabel>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
    setWindowTitle(QStringLiteral("Heurika"));
    resize(900, 600);

    setMenuBar(new MainMenuBar(this));

    QLabel *label = new QLabel(QStringLiteral("Up and running!"), this);
    label->setAlignment(Qt::AlignCenter);
    setCentralWidget(label);
}
