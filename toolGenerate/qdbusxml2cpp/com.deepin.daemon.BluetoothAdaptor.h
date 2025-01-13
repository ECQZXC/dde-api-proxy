/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.daemon.Bluetooth.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.BluetoothAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Bluetooth.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef COM_DEEPIN_DAEMON_BLUETOOTHADAPTOR_H
#define COM_DEEPIN_DAEMON_BLUETOOTHADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Bluetooth.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.daemon.Bluetooth
 */
class BluetoothAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.daemon.Bluetooth")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.daemon.Bluetooth\">\n"
"    <method name=\"CancelTransferSession\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"sessionPath\"/>\n"
"    </method>\n"
"    <method name=\"ClearUnpairedDevice\"/>\n"
"    <method name=\"Confirm\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"device\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"accept\"/>\n"
"    </method>\n"
"    <method name=\"ConnectDevice\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"device\"/>\n"
"      <arg direction=\"in\" type=\"o\" name=\"adapter\"/>\n"
"    </method>\n"
"    <method name=\"DebugInfo\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"info\"/>\n"
"    </method>\n"
"    <method name=\"DisconnectDevice\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"device\"/>\n"
"    </method>\n"
"    <method name=\"FeedPasskey\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"device\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"accept\"/>\n"
"      <arg direction=\"in\" type=\"u\" name=\"passkey\"/>\n"
"    </method>\n"
"    <method name=\"FeedPinCode\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"device\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"accept\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"pinCode\"/>\n"
"    </method>\n"
"    <method name=\"GetAdapters\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"adaptersJSON\"/>\n"
"    </method>\n"
"    <method name=\"GetDevices\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"adapter\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"devicesJSON\"/>\n"
"    </method>\n"
"    <method name=\"RemoveDevice\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"adapter\"/>\n"
"      <arg direction=\"in\" type=\"o\" name=\"device\"/>\n"
"    </method>\n"
"    <method name=\"RequestDiscovery\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"adapter\"/>\n"
"    </method>\n"
"    <method name=\"SendFiles\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"device\"/>\n"
"      <arg direction=\"in\" type=\"as\" name=\"files\"/>\n"
"      <arg direction=\"out\" type=\"o\" name=\"sessionPath\"/>\n"
"    </method>\n"
"    <method name=\"SetAdapterAlias\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"adapter\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"alias\"/>\n"
"    </method>\n"
"    <method name=\"SetAdapterDiscoverable\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"adapter\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"discoverable\"/>\n"
"    </method>\n"
"    <method name=\"SetAdapterDiscoverableTimeout\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"adapter\"/>\n"
"      <arg direction=\"in\" type=\"u\" name=\"timeout\"/>\n"
"    </method>\n"
"    <method name=\"SetAdapterDiscovering\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"adapter\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"discovering\"/>\n"
"    </method>\n"
"    <method name=\"SetAdapterPowered\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"adapter\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"powered\"/>\n"
"    </method>\n"
"    <method name=\"SetDeviceAlias\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"device\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"alias\"/>\n"
"    </method>\n"
"    <method name=\"SetDeviceTrusted\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"device\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"trusted\"/>\n"
"    </method>\n"
"    <signal name=\"AdapterAdded\">\n"
"      <arg type=\"s\" name=\"adapterJSON\"/>\n"
"    </signal>\n"
"    <signal name=\"AdapterRemoved\">\n"
"      <arg type=\"s\" name=\"adapterJSON\"/>\n"
"    </signal>\n"
"    <signal name=\"AdapterPropertiesChanged\">\n"
"      <arg type=\"s\" name=\"adapterJSON\"/>\n"
"    </signal>\n"
"    <signal name=\"DeviceAdded\">\n"
"      <arg type=\"s\" name=\"devJSON\"/>\n"
"    </signal>\n"
"    <signal name=\"DeviceRemoved\">\n"
"      <arg type=\"s\" name=\"devJSON\"/>\n"
"    </signal>\n"
"    <signal name=\"DevicePropertiesChanged\">\n"
"      <arg type=\"s\" name=\"devJSON\"/>\n"
"    </signal>\n"
"    <signal name=\"DisplayPinCode\">\n"
"      <arg type=\"o\" name=\"device\"/>\n"
"      <arg type=\"s\" name=\"pinCode\"/>\n"
"    </signal>\n"
"    <signal name=\"DisplayPasskey\">\n"
"      <arg type=\"o\" name=\"device\"/>\n"
"      <arg type=\"u\" name=\"passkey\"/>\n"
"      <arg type=\"u\" name=\"entered\"/>\n"
"    </signal>\n"
"    <signal name=\"RequestConfirmation\">\n"
"      <arg type=\"o\" name=\"device\"/>\n"
"      <arg type=\"s\" name=\"passkey\"/>\n"
"    </signal>\n"
"    <signal name=\"RequestAuthorization\">\n"
"      <arg type=\"o\" name=\"device\"/>\n"
"    </signal>\n"
"    <signal name=\"RequestPinCode\">\n"
"      <arg type=\"o\" name=\"device\"/>\n"
"    </signal>\n"
"    <signal name=\"RequestPasskey\">\n"
"      <arg type=\"o\" name=\"device\"/>\n"
"    </signal>\n"
"    <signal name=\"Cancelled\">\n"
"      <arg type=\"o\" name=\"device\"/>\n"
"    </signal>\n"
"    <signal name=\"ObexSessionCreated\">\n"
"      <arg type=\"o\" name=\"sessionPath\"/>\n"
"    </signal>\n"
"    <signal name=\"ObexSessionRemoved\">\n"
"      <arg type=\"o\" name=\"sessionPath\"/>\n"
"    </signal>\n"
"    <signal name=\"ObexSessionProgress\">\n"
"      <arg type=\"o\" name=\"sessionPath\"/>\n"
"      <arg type=\"t\" name=\"totalSize\"/>\n"
"      <arg type=\"t\" name=\"transferred\"/>\n"
"      <arg type=\"i\" name=\"currentIdx\"/>\n"
"    </signal>\n"
"    <signal name=\"TransferCreated\">\n"
"      <arg type=\"s\" name=\"file\"/>\n"
"      <arg type=\"o\" name=\"transferPath\"/>\n"
"      <arg type=\"o\" name=\"sessionPath\"/>\n"
"    </signal>\n"
"    <signal name=\"TransferRemoved\">\n"
"      <arg type=\"s\" name=\"file\"/>\n"
"      <arg type=\"o\" name=\"transferPath\"/>\n"
"      <arg type=\"o\" name=\"sessionPath\"/>\n"
"      <arg type=\"b\" name=\"done\"/>\n"
"    </signal>\n"
"    <signal name=\"TransferFailed\">\n"
"      <arg type=\"s\" name=\"file\"/>\n"
"      <arg type=\"o\" name=\"sessionPath\"/>\n"
"      <arg type=\"s\" name=\"errInfo\"/>\n"
"    </signal>\n"
"    <signal name=\"ConnectFailed\">\n"
"      <arg type=\"o\" name=\"device\"/>\n"
"    </signal>\n"
"    <property access=\"read\" type=\"u\" name=\"State\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"DisplaySwitch\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"Transportable\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanSendFile\"/>\n"
"  </interface>\n"
        "")
public:
    BluetoothAdaptor(QObject *parent);
    virtual ~BluetoothAdaptor();

public: // PROPERTIES
    Q_PROPERTY(bool CanSendFile READ canSendFile)
    bool canSendFile() const;

    Q_PROPERTY(bool DisplaySwitch READ displaySwitch WRITE setDisplaySwitch)
    bool displaySwitch() const;
    void setDisplaySwitch(bool value);

    Q_PROPERTY(uint State READ state)
    uint state() const;

    Q_PROPERTY(bool Transportable READ transportable)
    bool transportable() const;

public Q_SLOTS: // METHODS
    void CancelTransferSession(const QDBusObjectPath &sessionPath);
    void ClearUnpairedDevice();
    void Confirm(const QDBusObjectPath &device, bool accept);
    void ConnectDevice(const QDBusObjectPath &device, const QDBusObjectPath &adapter);
    QString DebugInfo();
    void DisconnectDevice(const QDBusObjectPath &device);
    void FeedPasskey(const QDBusObjectPath &device, bool accept, uint passkey);
    void FeedPinCode(const QDBusObjectPath &device, bool accept, const QString &pinCode);
    QString GetAdapters();
    QString GetDevices(const QDBusObjectPath &adapter);
    void RemoveDevice(const QDBusObjectPath &adapter, const QDBusObjectPath &device);
    void RequestDiscovery(const QDBusObjectPath &adapter);
    QDBusObjectPath SendFiles(const QString &device, const QStringList &files);
    void SetAdapterAlias(const QDBusObjectPath &adapter, const QString &alias);
    void SetAdapterDiscoverable(const QDBusObjectPath &adapter, bool discoverable);
    void SetAdapterDiscoverableTimeout(const QDBusObjectPath &adapter, uint timeout);
    void SetAdapterDiscovering(const QDBusObjectPath &adapter, bool discovering);
    void SetAdapterPowered(const QDBusObjectPath &adapter, bool powered);
    void SetDeviceAlias(const QDBusObjectPath &device, const QString &alias);
    void SetDeviceTrusted(const QDBusObjectPath &device, bool trusted);
Q_SIGNALS: // SIGNALS
    void AdapterAdded(const QString &adapterJSON);
    void AdapterPropertiesChanged(const QString &adapterJSON);
    void AdapterRemoved(const QString &adapterJSON);
    void Cancelled(const QDBusObjectPath &device);
    void ConnectFailed(const QDBusObjectPath &device);
    void DeviceAdded(const QString &devJSON);
    void DevicePropertiesChanged(const QString &devJSON);
    void DeviceRemoved(const QString &devJSON);
    void DisplayPasskey(const QDBusObjectPath &device, uint passkey, uint entered);
    void DisplayPinCode(const QDBusObjectPath &device, const QString &pinCode);
    void ObexSessionCreated(const QDBusObjectPath &sessionPath);
    void ObexSessionProgress(const QDBusObjectPath &sessionPath, qulonglong totalSize, qulonglong transferred, int currentIdx);
    void ObexSessionRemoved(const QDBusObjectPath &sessionPath);
    void RequestAuthorization(const QDBusObjectPath &device);
    void RequestConfirmation(const QDBusObjectPath &device, const QString &passkey);
    void RequestPasskey(const QDBusObjectPath &device);
    void RequestPinCode(const QDBusObjectPath &device);
    void TransferCreated(const QString &file, const QDBusObjectPath &transferPath, const QDBusObjectPath &sessionPath);
    void TransferFailed(const QString &file, const QDBusObjectPath &sessionPath, const QString &errInfo);
    void TransferRemoved(const QString &file, const QDBusObjectPath &transferPath, const QDBusObjectPath &sessionPath, bool done);
};

#endif
