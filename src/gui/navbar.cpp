#include "navbar.h"

#include <QHBoxLayout>
#include <QToolButton>
#include <QLineEdit>

NavBar::NavBar(QWidget *parent): QWidget(parent)
{
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->setContentsMargins(4,4,4,4);

    QToolButton *back = new QToolButton(this);
    back->setText(QStringLiteral("◀"));
    layout->addWidget(back);

    QToolButton *forward = new QToolButton(this);
    forward->setText(QStringLiteral("▶"));
    layout->addWidget(forward);

    QToolButton *up = new QToolButton(this);
    up->setText(QStringLiteral("⬆"));
    layout->addWidget(up);

    QLineEdit *pathEdit = new QLineEdit(this);
    pathEdit->setPlaceholderText(QStringLiteral("Path"));
    layout->addWidget(pathEdit, 1);
}
