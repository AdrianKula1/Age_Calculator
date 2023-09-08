#include "Age_calculator.h"

Age_calculator::Age_calculator(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);


    types.insert("Fish", 2);
    types.insert("Cat", 7);
    types.insert("Dog", 5);
    types.insert("Mice", 15);
    

    ui.cmbType->addItems(types.keys());
    ui.cmbType->setCurrentIndex(0);
    /*ui.comboBox->addItems(types.keys());
    ui.comboBox->setCurrentIndex(0);*/

}

Age_calculator::~Age_calculator()
{}





void Age_calculator::on_cmbType_currentIndexChanged(int index) {
    Q_UNUSED(index);

    int multiplier = types.value(ui.cmbType->currentText());

    ui.leMultiplier->setText(QString::number(multiplier));
}


void Age_calculator::on_btnCalculate_clicked()
{
    bool ok = false;
    int value = ui.leValue->text().toInt(&ok);
    if (!ok) ui.leValue->setText("0");


    int multiplier = ui.leMultiplier->text().toInt(&ok);
    if (!ok) ui.leMultiplier->setText("0");

    int result = value * multiplier;
    ui.leResult->setText(QString::number(result));

}