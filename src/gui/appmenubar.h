#ifndef APPMENUBAR_H
#define APPMENUBAR_H

#include <QMenuBar>

class AppMenuBar : public QMenuBar
{
    Q_OBJECT

public:
    explicit AppMenuBar(QWidget *parent = nullptr);

private slots:
    void onFileExit();
    void onHelpAbout();
};

#endif
