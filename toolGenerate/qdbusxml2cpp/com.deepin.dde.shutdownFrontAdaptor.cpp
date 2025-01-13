/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.dde.shutdownFront.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.shutdownFrontAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.shutdownFront.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.dde.shutdownFrontAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ShutdownFrontAdaptor
 */

ShutdownFrontAdaptor::ShutdownFrontAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ShutdownFrontAdaptor::~ShutdownFrontAdaptor()
{
    // destructor
}

void ShutdownFrontAdaptor::Hibernate()
{
    // handle method call com.deepin.dde.shutdownFront.Hibernate
    QMetaObject::invokeMethod(parent(), "Hibernate");
}

void ShutdownFrontAdaptor::Lock()
{
    // handle method call com.deepin.dde.shutdownFront.Lock
    QMetaObject::invokeMethod(parent(), "Lock");
}

void ShutdownFrontAdaptor::Logout()
{
    // handle method call com.deepin.dde.shutdownFront.Logout
    QMetaObject::invokeMethod(parent(), "Logout");
}

void ShutdownFrontAdaptor::Restart()
{
    // handle method call com.deepin.dde.shutdownFront.Restart
    QMetaObject::invokeMethod(parent(), "Restart");
}

void ShutdownFrontAdaptor::Show()
{
    // handle method call com.deepin.dde.shutdownFront.Show
    QMetaObject::invokeMethod(parent(), "Show");
}

void ShutdownFrontAdaptor::Shutdown()
{
    // handle method call com.deepin.dde.shutdownFront.Shutdown
    QMetaObject::invokeMethod(parent(), "Shutdown");
}

void ShutdownFrontAdaptor::Suspend()
{
    // handle method call com.deepin.dde.shutdownFront.Suspend
    QMetaObject::invokeMethod(parent(), "Suspend");
}

void ShutdownFrontAdaptor::SwitchUser()
{
    // handle method call com.deepin.dde.shutdownFront.SwitchUser
    QMetaObject::invokeMethod(parent(), "SwitchUser");
}

