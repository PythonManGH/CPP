#ifndef PMHEADERVIEW_H
#define PMHEADERVIEW_H

#include<QHeaderView>

class PMHeaderVIew : public QHeaderView
{
public:
    PMHeaderVIew(Qt::Orientation orientation, QWidget *parent = Q_NULLPTR);

protected:
    virtual void paintSection(QPainter *painter, const QRect &rect, int logicalIndex) const;
    virtual void paintEvent(QPaintEvent *e);
};

#endif // PMHEADERVIEW_H
