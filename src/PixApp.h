#pragma once

#include<memory>
#include <QSettings>

class PixApp {
public:
	PixApp(PixApp const&) = delete;
	void operator=(PixApp const&) = delete;

private:
	std::shared_ptr<QSettings> m_settings;

	PixApp();
	~PixApp();

	static PixApp self;

public:
	static std::shared_ptr<QSettings> getSettings();
};
