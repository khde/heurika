#include "mainmenubar.h"

#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>

MainMenuBar::MainMenuBar(QWidget *parent): QMenuBar(parent)
{
    QMenu *fileMenu = addMenu(QStringLiteral("File"));
    QAction *exitAction = fileMenu->addAction(QStringLiteral("Exit"));
    connect(exitAction, &QAction::triggered, this, &MainMenuBar::onFileExit);

    QMenu *helpMenu = addMenu(QStringLiteral("Help"));
    QAction *aboutAction = helpMenu->addAction(QStringLiteral("About"));
    connect(aboutAction, &QAction::triggered, this, &MainMenuBar::onHelpAbout);
}

void MainMenuBar::onFileExit()
{
    QApplication::quit();
}

void MainMenuBar::onHelpAbout()
{
    QDialog *aboutDialog = new QDialog(parentWidget());
    aboutDialog->setWindowTitle(QStringLiteral("About"));
    aboutDialog->setFixedSize(300, 150);

    QLabel *titleLabel = new QLabel(QStringLiteral("<b>Heurika</b>"));
    titleLabel->setAlignment(Qt::AlignCenter);

    QLabel *linkLabel = new QLabel(QStringLiteral("<a href=\"https://github.com/khde/heurika\">https://github.com/khde/heurika</a>"));
    linkLabel->setAlignment(Qt::AlignCenter);
    linkLabel->setOpenExternalLinks(true);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(titleLabel);
    layout->addWidget(linkLabel);
    layout->addStretch();

    aboutDialog->setLayout(layout);
    aboutDialog->exec();
}
