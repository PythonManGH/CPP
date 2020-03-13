#ifndef MENUWIDGET_H
#define MENUWIDGET_H

#include <QWidget>

namespace Ui {
class MenuWidget;
}

class MenuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWidget(QWidget *parent = 0);
    ~MenuWidget();

private slots:
    void slotHover(QAction*);
    void slotTragger(QAction*);

private:
    Ui::MenuWidget *ui;
};

#endif // MENUWIDGET_H
