/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.StartManager1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.StartManager1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.StartManager1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.StartManager1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class StartManager1Adaptor
 */

StartManager1Adaptor::StartManager1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

StartManager1Adaptor::~StartManager1Adaptor()
{
    // destructor
}

qulonglong StartManager1Adaptor::neededMemory() const
{
    // get the value of property NeededMemory
    return qvariant_cast< qulonglong >(parent()->property("NeededMemory"));
}

bool StartManager1Adaptor::AddAutostart(const QString &in0)
{
    // handle method call org.deepin.dde.StartManager1.AddAutostart
    bool out0;
    QMetaObject::invokeMethod(parent(), "AddAutostart", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

QStringList StartManager1Adaptor::AutostartList()
{
    // handle method call org.deepin.dde.StartManager1.AutostartList
    QStringList out0;
    QMetaObject::invokeMethod(parent(), "AutostartList", Q_RETURN_ARG(QStringList, out0));
    return out0;
}

AppsCGroupInfo StartManager1Adaptor::GetApps()
{
    // handle method call org.deepin.dde.StartManager1.GetApps
    AppsCGroupInfo out0;
    QMetaObject::invokeMethod(parent(), "GetApps", Q_RETURN_ARG(AppsCGroupInfo, out0));
    return out0;
}

bool StartManager1Adaptor::IsAutostart(const QString &in0)
{
    // handle method call org.deepin.dde.StartManager1.IsAutostart
    bool out0;
    QMetaObject::invokeMethod(parent(), "IsAutostart", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

bool StartManager1Adaptor::IsMemSufficient()
{
    // handle method call org.deepin.dde.StartManager1.IsMemSufficient
    bool out0;
    QMetaObject::invokeMethod(parent(), "IsMemSufficient", Q_RETURN_ARG(bool, out0));
    return out0;
}

bool StartManager1Adaptor::Launch(const QString &in0)
{
    // handle method call org.deepin.dde.StartManager1.Launch
    bool out0;
    QMetaObject::invokeMethod(parent(), "Launch", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

void StartManager1Adaptor::LaunchApp(const QString &in0, uint in1, const QStringList &in2)
{
    // handle method call org.deepin.dde.StartManager1.LaunchApp
    QMetaObject::invokeMethod(parent(), "LaunchApp", Q_ARG(QString, in0), Q_ARG(uint, in1), Q_ARG(QStringList, in2));
}

void StartManager1Adaptor::LaunchAppAction(const QString &in0, const QString &in1, uint in2)
{
    // handle method call org.deepin.dde.StartManager1.LaunchAppAction
    QMetaObject::invokeMethod(parent(), "LaunchAppAction", Q_ARG(QString, in0), Q_ARG(QString, in1), Q_ARG(uint, in2));
}

bool StartManager1Adaptor::LaunchWithTimestamp(const QString &in0, uint in1)
{
    // handle method call org.deepin.dde.StartManager1.LaunchWithTimestamp
    bool out0;
    QMetaObject::invokeMethod(parent(), "LaunchWithTimestamp", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0), Q_ARG(uint, in1));
    return out0;
}

bool StartManager1Adaptor::RemoveAutostart(const QString &in0)
{
    // handle method call org.deepin.dde.StartManager1.RemoveAutostart
    bool out0;
    QMetaObject::invokeMethod(parent(), "RemoveAutostart", Q_RETURN_ARG(bool, out0), Q_ARG(QString, in0));
    return out0;
}

void StartManager1Adaptor::RunCommand(const QString &in0, const QStringList &in1)
{
    // handle method call org.deepin.dde.StartManager1.RunCommand
    QMetaObject::invokeMethod(parent(), "RunCommand", Q_ARG(QString, in0), Q_ARG(QStringList, in1));
}

void StartManager1Adaptor::TryAgain(bool in0)
{
    // handle method call org.deepin.dde.StartManager1.TryAgain
    QMetaObject::invokeMethod(parent(), "TryAgain", Q_ARG(bool, in0));
}

