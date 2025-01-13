/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/session/com.deepin.daemon.Audio.Source.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Audio.SourceAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Audio.Source.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.daemon.Audio.SourceAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class SourceAdaptor
 */

SourceAdaptor::SourceAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

SourceAdaptor::~SourceAdaptor()
{
    // destructor
}

AudioPort SourceAdaptor::activePort() const
{
    // get the value of property ActivePort
    return qvariant_cast< AudioPort >(parent()->property("ActivePort"));
}

double SourceAdaptor::balance() const
{
    // get the value of property Balance
    return qvariant_cast< double >(parent()->property("Balance"));
}

double SourceAdaptor::baseVolume() const
{
    // get the value of property BaseVolume
    return qvariant_cast< double >(parent()->property("BaseVolume"));
}

uint SourceAdaptor::card() const
{
    // get the value of property Card
    return qvariant_cast< uint >(parent()->property("Card"));
}

QString SourceAdaptor::description() const
{
    // get the value of property Description
    return qvariant_cast< QString >(parent()->property("Description"));
}

double SourceAdaptor::fade() const
{
    // get the value of property Fade
    return qvariant_cast< double >(parent()->property("Fade"));
}

bool SourceAdaptor::mute() const
{
    // get the value of property Mute
    return qvariant_cast< bool >(parent()->property("Mute"));
}

QString SourceAdaptor::name() const
{
    // get the value of property Name
    return qvariant_cast< QString >(parent()->property("Name"));
}

AudioPortList SourceAdaptor::ports() const
{
    // get the value of property Ports
    return qvariant_cast< AudioPortList >(parent()->property("Ports"));
}

bool SourceAdaptor::supportBalance() const
{
    // get the value of property SupportBalance
    return qvariant_cast< bool >(parent()->property("SupportBalance"));
}

bool SourceAdaptor::supportFade() const
{
    // get the value of property SupportFade
    return qvariant_cast< bool >(parent()->property("SupportFade"));
}

double SourceAdaptor::volume() const
{
    // get the value of property Volume
    return qvariant_cast< double >(parent()->property("Volume"));
}

QDBusObjectPath SourceAdaptor::GetMeter()
{
    // handle method call com.deepin.daemon.Audio.Source.GetMeter
    QDBusObjectPath out0;
    QMetaObject::invokeMethod(parent(), "GetMeter", Q_RETURN_ARG(QDBusObjectPath, out0));
    return out0;
}

void SourceAdaptor::SetBalance(double in0, bool in1)
{
    // handle method call com.deepin.daemon.Audio.Source.SetBalance
    QMetaObject::invokeMethod(parent(), "SetBalance", Q_ARG(double, in0), Q_ARG(bool, in1));
}

void SourceAdaptor::SetFade(double in0)
{
    // handle method call com.deepin.daemon.Audio.Source.SetFade
    QMetaObject::invokeMethod(parent(), "SetFade", Q_ARG(double, in0));
}

void SourceAdaptor::SetMute(bool in0)
{
    // handle method call com.deepin.daemon.Audio.Source.SetMute
    QMetaObject::invokeMethod(parent(), "SetMute", Q_ARG(bool, in0));
}

void SourceAdaptor::SetPort(const QString &in0)
{
    // handle method call com.deepin.daemon.Audio.Source.SetPort
    QMetaObject::invokeMethod(parent(), "SetPort", Q_ARG(QString, in0));
}

void SourceAdaptor::SetVolume(double in0, bool in1)
{
    // handle method call com.deepin.daemon.Audio.Source.SetVolume
    QMetaObject::invokeMethod(parent(), "SetVolume", Q_ARG(double, in0), Q_ARG(bool, in1));
}

