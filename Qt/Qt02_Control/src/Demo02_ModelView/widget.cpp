#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_pModel = new QStandardItemModel(20,5);
    m_pModel->setHorizontalHeaderLabels(QStringList() << "Name"<<"Class"<<"Age"<<"Sex"<<"Grade");

    ui->tableView->setModel(m_pModel);
    ui->tableView->horizontalHeader()->setAlternatingRowColors(true);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_2->setModel(m_pModel);

    initModel();
    ui->listView->setModel(m_pStuModel);
    connect(ui->comboBox,SIGNAL(currentTextChanged(QString)),this,SLOT(slotComboBox(QString)));



void Widget::initModel()
{
    m_pStuModel = new QStandardItemModel();
    m_pTeacherModel = new QStandardItemModel();
    m_pWorkerModel = new QStandardItemModel();
    for(int i = 0; i < 10; i++){
        QStandardItem* itemStu = new QStandardItem(QString("学生").arg(i));
        itemStu->setCheckable(true);
        itemStu->setCheckState(Qt::Checked);
        m_pStuModel->appendRow(itemStu);

        QStandardItem* itemTea = new QStandardItem(QString("老师").arg(i));
        itemTea->setCheckable(true);
        itemTea->setCheckState(Qt::Checked);
        m_pTeacherModel->appendRow(itemTea);

        QStandardItem* itemWorker = new QStandardItem(QString("工人").arg(i));
        itemWorker->setCheckable(true);
        itemWorker->setCheckState(Qt::Checked);
        m_pWorkerModel->appendRow(itemWorker);
    }
}

void Widget::slotComboBox(const QString& arg)
{
    if(arg.contains("学生")){
        ui->listView->setModel(m_pStuModel);
    }else if(arg.contains("老师")){
        ui->listView->setModel(m_pTeacherModel);
    }else{
        ui->listView->setModel(m_pWorkerModel);
    }
}

Widget::~Widget()
{
    delete ui;
}
