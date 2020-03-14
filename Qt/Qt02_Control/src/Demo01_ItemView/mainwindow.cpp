#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    testListView();
    testTreeView();
    testTableView();
}

void MainWindow::testListView()
{
    // QStringListModel
    QStringList strList;
    strList << "a" << "b" << "c";
    m_StringListModel.setStringList(strList);
    ui->listView->setModel(&m_StringListModel);


    // QStandItemModel
    m_StandListItemModel.appendRow(new QStandardItem(QIcon("../../resource/list.png"),"手机"));
    m_StandListItemModel.appendRow(new QStandardItem(QIcon("../../resource/list.png"),"手机"));
    m_StandListItemModel.appendRow(new QStandardItem(QIcon("../../resource/list.png"),"手机"));
    ui->listView_2->setModel(&m_StandListItemModel);
}

void MainWindow::testTreeView()
{

    // QStandItemModel 下面添加子节点 用在树里面
    QStandardItem* item1 = new QStandardItem(QIcon("../../resource/list.png"),"级别一");
    item1->appendRow(new QStandardItem("child1"));
    item1->appendRow(new QStandardItem("child2"));
    item1->appendRow(new QStandardItem("child3"));
    m_StandTreeItemModel.appendRow(item1);

    QStandardItem* item2 = new QStandardItem(QIcon("../../resource/list.png"),"级别二");\
    item2->appendRow(new QStandardItem("child1"));
    item2->appendRow(new QStandardItem("child2"));
    item2->appendRow(new QStandardItem("child3"));
    m_StandTreeItemModel.appendRow(item2);

    QStandardItem* item3 = new QStandardItem(QIcon("../../resource/list.png"),"级别三");
    item3->appendRow(new QStandardItem("child1"));
    item3->appendRow(new QStandardItem("child2"));
    item3->appendRow(new QStandardItem("child3"));
    m_StandTreeItemModel.appendRow(item3);

    ui->treeView->setModel(&m_StandTreeItemModel);
}

void MainWindow::testTableView()
{
    int row = 3,column = 5;
    //m_StandTableItemModel.setColumnCount(column);
    //m_StandTableItemModel.setRowCount(row);

    for(int r = 0; r < row; r++){
        QList<QStandardItem*> items;
        for(int c = 0; c < column; c++){
            items << new QStandardItem(QIcon("../../resource/list.png"),"row:"+QString::number(r)+" | column:"+QString::number(c));
        }
        m_StandTableItemModel.appendRow(items);
    }

    ui->tableView->setModel(&m_StandTableItemModel);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
}

MainWindow::~MainWindow()
{
    delete ui;
}
