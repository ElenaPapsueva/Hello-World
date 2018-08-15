#ifndef STRINGCOUNT_H
#define STRINGCOUNT_H

#include <QtGui>
#include <QtCore>

namespace Ui {
class StringCount;
}

class StringCount : public QWidget
{
    Q_OBJECT
    
public:
    explicit StringCount(QWidget *parent = 0);
    ~StringCount();

private slots:
    void on_pushButton_clicked();
    void on_tableWidget_itemSelectionChanged();

    void on_tableWidget_itemDoubleClicked(QTableWidgetItem *item);

private:
    Ui::StringCount *ui;
};

#endif // STRINGCOUNT_H
