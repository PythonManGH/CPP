#include "PMHeaderVIew.h"
#include<QPainter>
#include<QApplication>
PMHeaderVIew::PMHeaderVIew(Qt::Orientation orientation, QWidget *parent)
    :QHeaderView(orientation,parent)
{

}

void PMHeaderVIew::paintSection(QPainter *painter, const QRect &rect, int logicalIndex) const
{/*
    //painter->save();
    painter->setRenderHint(QPainter::Antialiasing);
    painter->setOpacity(1);

    QStyle *style = dynamic_cast<QStyle *>(QApplication::style());
    QStyleOptionHeader option;
    initStyleOption(&option);
    //int margin = style->pixelMetric(QStyle::PM_ContentsMargins, &option);
    int margin = 10;

    // title
    QRect contentRect(rect.x(), rect.y(), rect.width(), rect.height() - 1);
    QRect hSpacingRect(rect.x(), contentRect.height(), rect.width(),
                       rect.height() - contentRect.height());

    //QBrush contentBrush(QColor(255,0,0));
    // horizontal spacing
    QBrush hSpacingBrush(QColor(255,0,0)); // 表头下面的线
    // vertical spacing
    QBrush vSpacingBrush(QColor(0,0,0));
    QRectF vSpacingRect(rect.x(), rect.y() + 1, 1,
                        rect.height() - 1 * 2);
    QBrush clearBrush(QColor(0,0,0));

    painter->fillRect(hSpacingRect, clearBrush);
    painter->fillRect(hSpacingRect, hSpacingBrush);

    if (visualIndex(logicalIndex) > 0) {
        painter->fillRect(vSpacingRect, clearBrush);
        painter->fillRect(vSpacingRect, vSpacingBrush);
    }

    QPen forground;
    forground.setColor(QColor(0,0,0));
    // TODO: dropdown icon (8x5)
    QRect textRect;
    if (sortIndicatorSection() == logicalIndex) {
        textRect = {contentRect.x() + margin, contentRect.y(), contentRect.width() - margin * 3 - 8,
                    contentRect.height()};
    } else {
        textRect = {contentRect.x() + margin, contentRect.y(), contentRect.width() - margin,
                    contentRect.height()};
    }
    QString title = model()->headerData(logicalIndex, orientation(), Qt::DisplayRole).toString();
    //    int align = model()->headerData(logicalIndex, orientation(),
    //    Qt::TextAlignmentRole).toInt();
    int align = Qt::AlignLeft | Qt::AlignVCenter;

    painter->setPen(forground);

    if (logicalIndex == 0) {
        QRect col0Rect = textRect;
        col0Rect.setX(textRect.x() + margin - 2);
        painter->drawText(col0Rect, static_cast<int>(align), title);
    } else {
        painter->drawText(textRect, static_cast<int>(align), title);
    }

    // sort indicator
    if (isSortIndicatorShown() && logicalIndex == sortIndicatorSection()) {
        // TODO: arrow size (8x5)
        QRect sortIndicator(textRect.x() + textRect.width() + margin,
                            textRect.y() + (textRect.height() - 5) / 2, 8, 5);
        option.rect = sortIndicator;
        if (sortIndicatorOrder() == Qt::DescendingOrder) {
            style->drawPrimitive(QStyle::PE_IndicatorArrowDown, &option, painter, this);
        } else if (sortIndicatorOrder() == Qt::AscendingOrder) {
            style->drawPrimitive(QStyle::PE_IndicatorArrowUp, &option, painter, this);
        }
    }

    //painter->restore();*/
//    QHeaderView::paintSection(painter,rect,logicalIndex);

    painter->setRenderHint(QPainter::Antialiasing);
    painter->setOpacity(1);

    painter->setPen(QColor(0,0,0,0));
    painter->drawRect(rect);
    painter->setPen(QColor(255,0,0));
    painter->drawLine(QPoint(rect.x(),rect.y()+rect.height()),QPoint(rect.x()+rect.width(),rect.y()+rect.height()));


    QString title = model()->headerData(logicalIndex, orientation(), Qt::DisplayRole).toString();
    int align = Qt::AlignLeft | Qt::AlignVCenter;

    painter->setPen(QPen(QColor(0,0,0)));
    painter->drawText(rect, static_cast<int>(align), title);
}
void PMHeaderVIew::paintEvent(QPaintEvent *e)
{
    QPainter painter(viewport());
    painter.save();
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QColor(255,0,0,0));

    QBrush bgBrush(QColor(255,255,255));
    int radius = 10;

    QRect rect = viewport()->rect();

    QRect doubleRect(rect.x(), rect.y(), rect.width(), rect.height() * 2);
    QRect extraRect(rect.x(), rect.y(), rect.width(), rect.height());

    QPainterPath path;
    path.addRoundedRect(doubleRect,radius,radius);
    QPainterPath extraPath;
    extraPath.addRect(extraRect);

    path.subtracted(extraPath);
    painter.fillPath(path,bgBrush);
    //painter.drawPath(path);

    painter.restore();
    QHeaderView::paintEvent(e);
}
