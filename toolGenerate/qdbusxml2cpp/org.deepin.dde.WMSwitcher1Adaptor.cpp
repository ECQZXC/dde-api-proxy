/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.WMSwitcher1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.WMSwitcher1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.WMSwitcher1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.WMSwitcher1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class WMSwitcher1Adaptor
 */

WMSwitcher1Adaptor::WMSwitcher1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

WMSwitcher1Adaptor::~WMSwitcher1Adaptor()
{
    // destructor
}

bool WMSwitcher1Adaptor::AllowSwitch()
{
    // handle method call org.deepin.dde.WMSwitcher1.AllowSwitch
    bool out0;
    QMetaObject::invokeMethod(parent(), "AllowSwitch", Q_RETURN_ARG(bool, out0));
    return out0;
}

QString WMSwitcher1Adaptor::CurrentWM()
{
    // handle method call org.deepin.dde.WMSwitcher1.CurrentWM
    QString out0;
    QMetaObject::invokeMethod(parent(), "CurrentWM", Q_RETURN_ARG(QString, out0));
    return out0;
}

void WMSwitcher1Adaptor::RequestSwitchWM()
{
    // handle method call org.deepin.dde.WMSwitcher1.RequestSwitchWM
    QMetaObject::invokeMethod(parent(), "RequestSwitchWM");
}

void WMSwitcher1Adaptor::RestartWM()
{
    // handle method call org.deepin.dde.WMSwitcher1.RestartWM
    QMetaObject::invokeMethod(parent(), "RestartWM");
}

void WMSwitcher1Adaptor::Start2DWM()
{
    // handle method call org.deepin.dde.WMSwitcher1.Start2DWM
    QMetaObject::invokeMethod(parent(), "Start2DWM");
}

