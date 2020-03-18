#include "PMTableWidget.h"
#include<QPainter>
PMTableWidget::PMTableWidget(QWidget* parent)
    :QTableWidget(parent)
{
    this->setWindowFlags(Qt::FramelessWindowHint);
}

void PMTableWidget::paintEvent(QPaintEvent *e)
{
//    QPainter painter(viewport());
//    painter.save();

//    QRect rect = viewport()->rect();
//    QPainterPath path;
//    path.addRoundedRect(rect,50,50);
//    painter.setPen(QColor(255,0,0,0));
//    painter.fillPath(path,QBrush(QColor(255,0,0)));

//    painter.restore();
    QTableWidget::paintEvent(e);
}
