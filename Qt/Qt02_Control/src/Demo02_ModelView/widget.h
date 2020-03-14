#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QStandardItemModel>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    void initModel();
private slots:
    void slotComboBox(const QString& arg);

private:
    Ui::Widget *ui;
    QStandardItemModel* m_pModel;

    QStandardItemModel* m_pStuModel;
    QStandardItemModel* m_pTeacherModel;
    QStandardItemModel* m_pWorkerModel;
};

#endif // WIDGET_H
