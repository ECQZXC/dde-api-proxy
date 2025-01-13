/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/system/com.deepin.daemon.Timedated.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.TimedatedAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Timedated.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DAEMON_TIMEDATEDADAPTOR_H
#define COM_DEEPIN_DAEMON_TIMEDATEDADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Timedated.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.daemon.Timedated
 */
class TimedatedAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.daemon.Timedated")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.daemon.Timedated\">\n"
"    <method name=\"SetLocalRTC\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"SetNTP\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"SetNTPServer\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"SetTime\">\n"
"      <arg direction=\"in\" type=\"x\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"SetTimezone\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <property access=\"read\" type=\"s\" name=\"NTPServer\"/>\n"
"  </interface>\n"
        "")
public:
    TimedatedAdaptor(QObject *parent);
    virtual ~TimedatedAdaptor();

public: // PROPERTIES
    Q_PROPERTY(QString NTPServer READ nTPServer)
    QString nTPServer() const;

public Q_SLOTS: // METHODS
    void SetLocalRTC(bool in0, bool in1, const QString &in2);
    void SetNTP(bool in0, const QString &in1);
    void SetNTPServer(const QString &in0, const QString &in1);
    void SetTime(qlonglong in0, bool in1, const QString &in2);
    void SetTimezone(const QString &in0, const QString &in1);
Q_SIGNALS: // SIGNALS
};

#endif
