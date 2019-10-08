#ifndef MW_H
#define MW_H

#include <QMainWindow>
#include<QSettings>


#include"getinfo.h"

namespace Ui {
class MW;
}

class MW : public QMainWindow
{
    Q_OBJECT

public:
    explicit MW(QWidget *parent = nullptr);
    ~MW();

private:
    Ui::MW *ui;
};

#endif // MW_H
