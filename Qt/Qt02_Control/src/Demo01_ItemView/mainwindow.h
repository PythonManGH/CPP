#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QStringListModel>
#include<QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void testListView();
    void testTreeView();
    void testTableView();

private:
    Ui::MainWindow *ui;
    QStringListModel m_StringListModel;
    QStandardItemModel m_StandListItemModel;
    QStandardItemModel m_StandTreeItemModel;
    QStandardItemModel m_StandTableItemModel;
};

#endif // MAINWINDOW_H
