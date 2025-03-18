#include "PixApp.h"

PixApp PixApp::self;

PixApp::PixApp() :
	m_settings(std::make_shared<QSettings>("Pixonomy.ini", QSettings::IniFormat)) {
}

PixApp::~PixApp() {
}

std::shared_ptr<QSettings> PixApp::getSettings() {
	return self.m_settings;
}
