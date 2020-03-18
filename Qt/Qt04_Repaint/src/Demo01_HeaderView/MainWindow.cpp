#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "PMHeaderVIew.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    PMHeaderVIew* headerView = new PMHeaderVIew(Qt::Horizontal);
    headerView->setFrameShape(QFrame::NoFrame);
    headerView->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableWidget->setHorizontalHeader(headerView);
    ui->tableWidget->setFrameShape(QFrame::NoFrame);
}

MainWindow::~MainWindow()
{
    delete ui;
}
