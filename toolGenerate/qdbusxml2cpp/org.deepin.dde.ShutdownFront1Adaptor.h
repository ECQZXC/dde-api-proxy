/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.ShutdownFront1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.ShutdownFront1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.ShutdownFront1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_SHUTDOWNFRONT1ADAPTOR_H
#define ORG_DEEPIN_DDE_SHUTDOWNFRONT1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.ShutdownFront1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.ShutdownFront1
 */
class ShutdownFront1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.ShutdownFront1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.ShutdownFront1\">\n"
"    <signal name=\"ChangKey\">\n"
"      <arg type=\"s\" name=\"keyEvent\"/>\n"
"    </signal>\n"
"    <method name=\"Hibernate\"/>\n"
"    <method name=\"Lock\"/>\n"
"    <method name=\"Logout\"/>\n"
"    <method name=\"Restart\"/>\n"
"    <method name=\"Show\"/>\n"
"    <method name=\"Shutdown\"/>\n"
"    <method name=\"Suspend\"/>\n"
"    <method name=\"SwitchUser\"/>\n"
"  </interface>\n"
        "")
public:
    ShutdownFront1Adaptor(QObject *parent);
    virtual ~ShutdownFront1Adaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Hibernate();
    void Lock();
    void Logout();
    void Restart();
    void Show();
    void Shutdown();
    void Suspend();
    void SwitchUser();
Q_SIGNALS: // SIGNALS
    void ChangKey(const QString &keyEvent);
};

#endif
