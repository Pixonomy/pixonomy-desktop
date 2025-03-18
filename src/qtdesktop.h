#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtdesktop.h"

class qtdesktop : public QMainWindow
{
    Q_OBJECT

public:
    qtdesktop(QWidget *parent = nullptr);
    ~qtdesktop();

private:
    Ui::qtdesktopClass ui;
};
