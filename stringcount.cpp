#include "stringcount.h"
#include "ui_stringcount.h"
#include <QFileSystemModel>
#include <QDir>
StringCount::StringCount(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StringCount)
{
//    QString str=QFileDialog::getExistingDirectory(0,"Change the folder");
    QString str = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::DontResolveSymlinks);
    QDir d;

    d.setPath(str);
    QStringList filters;
        filters << "*.cpp" << "*.h" ;
        d.setNameFilters(filters);

    d.setFilter(QDir::NoDotAndDotDot|QDir::Files);
    QStringList strL=d.entryList();
    ui->setupUi(this);

    int r=0;
    ui->tableWidget->setRowCount(strL.count());
    for(int i=0;i<strL.count();i++)
    {
        QFile f(str+'/'+strL.at(i));
        f.open(QIODevice::ReadOnly|QIODevice::Text);
        QString s=f.readAll();
        int ss=s.split("\n").length();


        QTableWidgetItem *item=new QTableWidgetItem();
        item->setText(strL.at(i));
        ui->tableWidget->setItem(i,0,item);
        QTableWidgetItem *item1=new QTableWidgetItem();
        item1->setText(QString::number(ss));
        ui->tableWidget->setItem(i,1,item1);
        r=r+ss;
        f.close();
    }
    ui->lineEdit->setText(QString::number(r));
    ui->tableWidget->resizeColumnsToContents();

}

StringCount::~StringCount()
{
    delete ui;
}


void StringCount::on_pushButton_clicked()
{
    ui->tableWidget->clear();
//    QString str=QFileDialog::getExistingDirectory(0,"Change the folder");
    QString str = QFileDialog::getExistingDirectory(this, tr("Open Directory"),"/home",QFileDialog::DontResolveSymlinks);
    QDir d;
    d.setPath(str);
    QStringList filters;
        filters << "*.cpp" << "*.h" ;
        d.setNameFilters(filters);
    d.setFilter(QDir::NoDotAndDotDot|QDir::Files);
    QStringList strL=d.entryList();
    int r=0;
    ui->tableWidget->setRowCount(strL.count());
    for(int i=0;i<strL.count();i++)
    {
        QFile f(str+'/'+strL.at(i));
        f.open(QIODevice::ReadOnly|QIODevice::Text);
        QString s=f.readAll();
        int ss=s.split("\n").length();
        QTableWidgetItem *item=new QTableWidgetItem();
        item->setText(strL.at(i));
        ui->tableWidget->setItem(i,0,item);
        QTableWidgetItem *item1=new QTableWidgetItem();
        item1->setText(QString::number(ss));
        ui->tableWidget->setItem(i,1,item1);
        r=r+ss;
        f.close();
    }
    ui->lineEdit->setText(QString::number(r));
        ui->tableWidget->resizeColumnsToContents();
}


void StringCount::on_tableWidget_itemSelectionChanged()
{
    int r=0;
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        if(ui->tableWidget->item(i,0)->isSelected())
            r=r+ui->tableWidget->item(i,1)->text().toInt();
    }
    ui->lineEdit->setText(QString::number(r));
}

void StringCount::on_tableWidget_itemDoubleClicked(QTableWidgetItem *item)
{
    int r=0;
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        r=r+ui->tableWidget->item(i,1)->text().toInt();
        ui->tableWidget->item(i,0)->setSelected(false);
        ui->tableWidget->item(i,1)->setSelected(false);
    }
    ui->lineEdit->setText(QString::number(r));
}
