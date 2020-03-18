#ifndef PMTABLEWIDGET_H
#define PMTABLEWIDGET_H

#include<QTableWidget>

class PMTableWidget : public QTableWidget
{
public:
    PMTableWidget(QWidget* parent = nullptr);
protected:
    virtual void paintEvent(QPaintEvent *e);
};

#endif // PMTABLEWIDGET_H
