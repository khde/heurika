#pragma once

#include <QMenuBar>

class MainMenuBar : public QMenuBar
{
    Q_OBJECT

public:
    explicit MainMenuBar(QWidget *parent = nullptr);

private slots:
    void onFileExit();
    void onHelpAbout();
};
