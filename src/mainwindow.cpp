#include "mainwindow.h"

#include <QLabel>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
    setWindowTitle(QStringLiteral("Heurika"));
    resize(900, 600);

    QLabel *label = new QLabel(QStringLiteral("Up and running!"), this);
    label->setAlignment(Qt::AlignCenter);
    setCentralWidget(label);
}
