#include "qtdesktop.h"
#include "PixApp.h"

qtdesktop::qtdesktop(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::qtdesktopClass) {
    ui->setupUi(this);

    // Restore UI state
    restoreUIState();
}

qtdesktop::~qtdesktop() {
    saveUIState();
}

// Save UI layout between runs
void qtdesktop::saveUIState() {
    std::shared_ptr<QSettings> settings = PixApp::getSettings();
    settings->setValue("mainWindowGeometry", saveGeometry());
    settings->setValue("mainWindowState", saveState());
}

// Restore UI layout between runs
void qtdesktop::restoreUIState() {
    std::shared_ptr<QSettings> settings = PixApp::getSettings();
    restoreGeometry(settings->value("mainWindowGeometry").toByteArray());
    restoreState(settings->value("mainWindowState").toByteArray());
}
