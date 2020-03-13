#include "menuwidget.h"
#include "ui_menuwidget.h"
#include<QMenuBar>

MenuWidget::MenuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWidget)
{
    ui->setupUi(this);

    // 插入 QMenuBar
    QMenuBar* menuBar = new QMenuBar(this);
    menuBar->resize(width(),menuBar->height());

    // 向 menuBar 中添加菜单
    QMenu* menu1 = menuBar->addMenu(QString::fromLocal8Bit("菜单1"));
    // 向menu1中添加按钮
    QAction* action1 = menu1->addAction(QString::fromLocal8Bit("按钮1"));

    // 向 menuBar 中添加菜单
    QMenu* menu2 = menuBar->addMenu(QString::fromLocal8Bit("菜单2"));
    // 向 menu 中添加 二级菜单
    QMenu* menu22 = menu2->addMenu(QString::fromLocal8Bit("菜单22"));
    // 给menu22设置图标
    menu22->setIcon(QIcon("../../resource/list.png"));

    QMenu* menu3 = menuBar->addMenu(QString::fromLocal8Bit("菜单3"));
    // 给menu3设置图标，不过这个图标设置的结果与我预期的不一样
    menu3->setIcon(QIcon("../../resource/list.png"));

    // QMenu和QAction 两个最常用的 信号
    connect(menu3,SIGNAL(triggered(QAction*)),this,SLOT(slotTragger(QAction*));
    connect(menu3,SIGNAL(hoverd(QAction*)),this,SLOT(slotTragger(QAction*));





}

void MenuWidget::slotHover(QAction*)
{

}

void MenuWidget::slotTragger(QAction*)
{

}

MenuWidget::~MenuWidget()
{
    delete ui;
}
