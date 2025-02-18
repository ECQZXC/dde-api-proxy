/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.InputDevices1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.InputDevices1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.InputDevices1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_INPUTDEVICES1ADAPTOR_H
#define ORG_DEEPIN_DDE_INPUTDEVICES1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.InputDevices1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.InputDevices1
 */
class InputDevices1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.InputDevices1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.InputDevices1\">\n"
"    <property access=\"read\" type=\"a(ss)\" name=\"Infos\">\n"
"      <annotation value=\"InputDeviceList\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"WheelSpeed\"/>\n"
"  </interface>\n"
        "")
public:
    InputDevices1Adaptor(QObject *parent);
    virtual ~InputDevices1Adaptor();

public: // PROPERTIES
    Q_PROPERTY(InputDeviceList Infos READ infos)
    InputDeviceList infos() const;

    Q_PROPERTY(uint WheelSpeed READ wheelSpeed WRITE setWheelSpeed)
    uint wheelSpeed() const;
    void setWheelSpeed(uint value);

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
};

#endif
