#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Age_calculator.h"

#include <QMap>

class Age_calculator : public QMainWindow
{
    Q_OBJECT

public:
    Age_calculator(QWidget *parent = nullptr);
    ~Age_calculator();

private:
    Ui::Age_calculatorClass ui;
    
    QMap<QString, int> types;


signals:

private slots:
    void on_cmbType_currentIndexChanged(int index);
    void on_btnCalculate_clicked();
};
