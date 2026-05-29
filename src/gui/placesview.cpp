#include "placesview.h"

#include <QListWidget>
#include <QVBoxLayout>

PlacesView::PlacesView(QWidget *parent): QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setContentsMargins(4,4,4,4);

    QListWidget *list = new QListWidget(this);
    list->addItem(QStringLiteral("Home"));
    list->addItem(QStringLiteral("Root"));
    list->addItem(QStringLiteral("Documents"));

    layout->addWidget(list);
}
