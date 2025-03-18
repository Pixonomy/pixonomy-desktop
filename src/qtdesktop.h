#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtdesktop.h"
#include <memory>

class qtdesktop : public QMainWindow {
    Q_OBJECT

public:
    qtdesktop(QWidget *parent = nullptr);
    ~qtdesktop();

private:
    std::shared_ptr<Ui::qtdesktopClass> ui;
    void saveUIState();
    void restoreUIState();
};
