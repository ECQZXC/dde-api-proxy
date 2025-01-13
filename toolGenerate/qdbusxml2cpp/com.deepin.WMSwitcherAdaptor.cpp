/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.WMSwitcher.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.WMSwitcherAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.WMSwitcher.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.WMSwitcherAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class WMSwitcherAdaptor
 */

WMSwitcherAdaptor::WMSwitcherAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

WMSwitcherAdaptor::~WMSwitcherAdaptor()
{
    // destructor
}

bool WMSwitcherAdaptor::AllowSwitch()
{
    // handle method call com.deepin.WMSwitcher.AllowSwitch
    bool out0;
    QMetaObject::invokeMethod(parent(), "AllowSwitch", Q_RETURN_ARG(bool, out0));
    return out0;
}

QString WMSwitcherAdaptor::CurrentWM()
{
    // handle method call com.deepin.WMSwitcher.CurrentWM
    QString out0;
    QMetaObject::invokeMethod(parent(), "CurrentWM", Q_RETURN_ARG(QString, out0));
    return out0;
}

void WMSwitcherAdaptor::RequestSwitchWM()
{
    // handle method call com.deepin.WMSwitcher.RequestSwitchWM
    QMetaObject::invokeMethod(parent(), "RequestSwitchWM");
}

void WMSwitcherAdaptor::RestartWM()
{
    // handle method call com.deepin.WMSwitcher.RestartWM
    QMetaObject::invokeMethod(parent(), "RestartWM");
}

void WMSwitcherAdaptor::Start2DWM()
{
    // handle method call com.deepin.WMSwitcher.Start2DWM
    QMetaObject::invokeMethod(parent(), "Start2DWM");
}

