/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.InputDevice1.Wacom.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.InputDevice1.WacomAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.InputDevice1.Wacom.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_INPUTDEVICE1_WACOMADAPTOR_H
#define ORG_DEEPIN_DDE_INPUTDEVICE1_WACOMADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.InputDevice1.Wacom.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.InputDevice1.Wacom
 */
class WacomAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.InputDevice1.Wacom")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.InputDevice1.Wacom\">\n"
"    <method name=\"Reset\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"LeftHanded\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"CursorMode\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"KeyUpAction\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"KeyDownAction\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"MapOutput\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"Suppress\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"StylusPressureSensitive\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"EraserPressureSensitive\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"StylusRawSample\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"EraserRawSample\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"StylusThreshold\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"EraserThreshold\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"DeviceList\"/>\n"
"    <property access=\"read\" type=\"a(ss)\" name=\"ActionInfos\">\n"
"      <annotation value=\"WacomDeviceList\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"b\" name=\"Exist\"/>\n"
"  </interface>\n"
        "")
public:
    WacomAdaptor(QObject *parent);
    virtual ~WacomAdaptor();

public: // PROPERTIES
    Q_PROPERTY(WacomDeviceList ActionInfos READ actionInfos)
    WacomDeviceList actionInfos() const;

    Q_PROPERTY(bool CursorMode READ cursorMode WRITE setCursorMode)
    bool cursorMode() const;
    void setCursorMode(bool value);

    Q_PROPERTY(QString DeviceList READ deviceList)
    QString deviceList() const;

    Q_PROPERTY(uint EraserPressureSensitive READ eraserPressureSensitive WRITE setEraserPressureSensitive)
    uint eraserPressureSensitive() const;
    void setEraserPressureSensitive(uint value);

    Q_PROPERTY(uint EraserRawSample READ eraserRawSample WRITE setEraserRawSample)
    uint eraserRawSample() const;
    void setEraserRawSample(uint value);

    Q_PROPERTY(uint EraserThreshold READ eraserThreshold WRITE setEraserThreshold)
    uint eraserThreshold() const;
    void setEraserThreshold(uint value);

    Q_PROPERTY(bool Exist READ exist)
    bool exist() const;

    Q_PROPERTY(QString KeyDownAction READ keyDownAction WRITE setKeyDownAction)
    QString keyDownAction() const;
    void setKeyDownAction(const QString &value);

    Q_PROPERTY(QString KeyUpAction READ keyUpAction WRITE setKeyUpAction)
    QString keyUpAction() const;
    void setKeyUpAction(const QString &value);

    Q_PROPERTY(bool LeftHanded READ leftHanded WRITE setLeftHanded)
    bool leftHanded() const;
    void setLeftHanded(bool value);

    Q_PROPERTY(QString MapOutput READ mapOutput WRITE setMapOutput)
    QString mapOutput() const;
    void setMapOutput(const QString &value);

    Q_PROPERTY(uint StylusPressureSensitive READ stylusPressureSensitive WRITE setStylusPressureSensitive)
    uint stylusPressureSensitive() const;
    void setStylusPressureSensitive(uint value);

    Q_PROPERTY(uint StylusRawSample READ stylusRawSample WRITE setStylusRawSample)
    uint stylusRawSample() const;
    void setStylusRawSample(uint value);

    Q_PROPERTY(uint StylusThreshold READ stylusThreshold WRITE setStylusThreshold)
    uint stylusThreshold() const;
    void setStylusThreshold(uint value);

    Q_PROPERTY(uint Suppress READ suppress WRITE setSuppress)
    uint suppress() const;
    void setSuppress(uint value);

public Q_SLOTS: // METHODS
    void Reset();
Q_SIGNALS: // SIGNALS
};

#endif
