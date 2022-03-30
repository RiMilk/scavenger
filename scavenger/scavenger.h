#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_scavenger.h"

class scavenger : public QMainWindow
{
    Q_OBJECT

public:
    scavenger(QWidget *parent = Q_NULLPTR);

private:
    Ui::scavengerClass ui;
};
