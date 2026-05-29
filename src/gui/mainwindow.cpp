#include "mainwindow.h"
#include "appmenubar.h"
#include "navbar.h"
#include "placesview.h"
#include "fileview.h"

#include <QSplitter>
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
    setWindowTitle(QStringLiteral("Heurika"));
    resize(1000, 700);

    setMenuBar(new AppMenuBar(this));

    QWidget *central = new QWidget(this);
    QVBoxLayout *vlay = new QVBoxLayout(central);
    vlay->setContentsMargins(0,0,0,0);
    vlay->setSpacing(0);

    NavBar *nav = new NavBar(central);
    nav->setMaximumHeight(40);
    vlay->addWidget(nav, 0);

    QSplitter *split = new QSplitter(central);
    PlacesView *places = new PlacesView(split);
    FileView *files = new FileView(split);

    split->addWidget(places);
    split->addWidget(files);
    split->setStretchFactor(0, 0);
    split->setStretchFactor(1, 1);

    vlay->addWidget(split, 1);

    setCentralWidget(central);
}
