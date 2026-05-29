#include "fileview.h"

#include <QStandardItemModel>
#include <QTreeView>
#include <QVBoxLayout>

FileView::FileView(QWidget *parent): QWidget(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setContentsMargins(4,4,4,4);

    QStandardItemModel *model = new QStandardItemModel(this);
    model->setHorizontalHeaderLabels(QStringList() << QStringLiteral("Name"));

    QStandardItem *sampleFile = new QStandardItem(QStringLiteral("sample.txt"));
    model->appendRow(sampleFile);

    QTreeView *view = new QTreeView(this);
    view->setModel(model);
    view->setHeaderHidden(true);

    layout->addWidget(view);

    connect(view, &QTreeView::doubleClicked, this, [this](const QModelIndex &index){
        if (!index.isValid()) return;
    });
}
