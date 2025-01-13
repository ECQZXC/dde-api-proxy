/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.Appearance1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Appearance1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Appearance1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Appearance1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class Appearance1Adaptor
 */

Appearance1Adaptor::Appearance1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

Appearance1Adaptor::~Appearance1Adaptor()
{
    // destructor
}

QString Appearance1Adaptor::background() const
{
    // get the value of property Background
    return qvariant_cast< QString >(parent()->property("Background"));
}

QString Appearance1Adaptor::cursorTheme() const
{
    // get the value of property CursorTheme
    return qvariant_cast< QString >(parent()->property("CursorTheme"));
}

double Appearance1Adaptor::fontSize() const
{
    // get the value of property FontSize
    return qvariant_cast< double >(parent()->property("FontSize"));
}

void Appearance1Adaptor::setFontSize(double value)
{
    // set the value of property FontSize
    parent()->setProperty("FontSize", QVariant::fromValue(value));
}

QString Appearance1Adaptor::globalTheme() const
{
    // get the value of property GlobalTheme
    return qvariant_cast< QString >(parent()->property("GlobalTheme"));
}

QString Appearance1Adaptor::gtkTheme() const
{
    // get the value of property GtkTheme
    return qvariant_cast< QString >(parent()->property("GtkTheme"));
}

QString Appearance1Adaptor::iconTheme() const
{
    // get the value of property IconTheme
    return qvariant_cast< QString >(parent()->property("IconTheme"));
}

QString Appearance1Adaptor::monospaceFont() const
{
    // get the value of property MonospaceFont
    return qvariant_cast< QString >(parent()->property("MonospaceFont"));
}

double Appearance1Adaptor::opacity() const
{
    // get the value of property Opacity
    return qvariant_cast< double >(parent()->property("Opacity"));
}

void Appearance1Adaptor::setOpacity(double value)
{
    // set the value of property Opacity
    parent()->setProperty("Opacity", QVariant::fromValue(value));
}

QString Appearance1Adaptor::qtActiveColor() const
{
    // get the value of property QtActiveColor
    return qvariant_cast< QString >(parent()->property("QtActiveColor"));
}

void Appearance1Adaptor::setQtActiveColor(const QString &value)
{
    // set the value of property QtActiveColor
    parent()->setProperty("QtActiveColor", QVariant::fromValue(value));
}

QString Appearance1Adaptor::standardFont() const
{
    // get the value of property StandardFont
    return qvariant_cast< QString >(parent()->property("StandardFont"));
}

QString Appearance1Adaptor::wallpaperSlideShow() const
{
    // get the value of property WallpaperSlideShow
    return qvariant_cast< QString >(parent()->property("WallpaperSlideShow"));
}

void Appearance1Adaptor::setWallpaperSlideShow(const QString &value)
{
    // set the value of property WallpaperSlideShow
    parent()->setProperty("WallpaperSlideShow", QVariant::fromValue(value));
}

QString Appearance1Adaptor::wallpaperURls() const
{
    // get the value of property WallpaperURls
    return qvariant_cast< QString >(parent()->property("WallpaperURls"));
}

int Appearance1Adaptor::windowRadius() const
{
    // get the value of property WindowRadius
    return qvariant_cast< int >(parent()->property("WindowRadius"));
}

void Appearance1Adaptor::setWindowRadius(int value)
{
    // set the value of property WindowRadius
    parent()->setProperty("WindowRadius", QVariant::fromValue(value));
}

void Appearance1Adaptor::Delete(const QString &ty, const QString &name)
{
    // handle method call org.deepin.dde.Appearance1.Delete
    QMetaObject::invokeMethod(parent(), "Delete", Q_ARG(QString, ty), Q_ARG(QString, name));
}

QString Appearance1Adaptor::GetCurrentWorkspaceBackground()
{
    // handle method call org.deepin.dde.Appearance1.GetCurrentWorkspaceBackground
    QString uri;
    QMetaObject::invokeMethod(parent(), "GetCurrentWorkspaceBackground", Q_RETURN_ARG(QString, uri));
    return uri;
}

QString Appearance1Adaptor::GetCurrentWorkspaceBackgroundForMonitor(const QString &strMonitorName)
{
    // handle method call org.deepin.dde.Appearance1.GetCurrentWorkspaceBackgroundForMonitor
    QString uri;
    QMetaObject::invokeMethod(parent(), "GetCurrentWorkspaceBackgroundForMonitor", Q_RETURN_ARG(QString, uri), Q_ARG(QString, strMonitorName));
    return uri;
}

double Appearance1Adaptor::GetScaleFactor()
{
    // handle method call org.deepin.dde.Appearance1.GetScaleFactor
    double scaleFactor;
    QMetaObject::invokeMethod(parent(), "GetScaleFactor", Q_RETURN_ARG(double, scaleFactor));
    return scaleFactor;
}

QString Appearance1Adaptor::GetWallpaperSlideShow(const QString &monitorName)
{
    // handle method call org.deepin.dde.Appearance1.GetWallpaperSlideShow
    QString slideShow;
    QMetaObject::invokeMethod(parent(), "GetWallpaperSlideShow", Q_RETURN_ARG(QString, slideShow), Q_ARG(QString, monitorName));
    return slideShow;
}

QString Appearance1Adaptor::GetWorkspaceBackgroundForMonitor(int index, const QString &strMonitorName)
{
    // handle method call org.deepin.dde.Appearance1.GetWorkspaceBackgroundForMonitor
    QString uri;
    QMetaObject::invokeMethod(parent(), "GetWorkspaceBackgroundForMonitor", Q_RETURN_ARG(QString, uri), Q_ARG(int, index), Q_ARG(QString, strMonitorName));
    return uri;
}

QString Appearance1Adaptor::List(const QString &ty)
{
    // handle method call org.deepin.dde.Appearance1.List
    QString list;
    QMetaObject::invokeMethod(parent(), "List", Q_RETURN_ARG(QString, list), Q_ARG(QString, ty));
    return list;
}

void Appearance1Adaptor::Reset()
{
    // handle method call org.deepin.dde.Appearance1.Reset
    QMetaObject::invokeMethod(parent(), "Reset");
}

void Appearance1Adaptor::Set(const QString &ty, const QString &value)
{
    // handle method call org.deepin.dde.Appearance1.Set
    QMetaObject::invokeMethod(parent(), "Set", Q_ARG(QString, ty), Q_ARG(QString, value));
}

void Appearance1Adaptor::SetCurrentWorkspaceBackground(const QString &uri)
{
    // handle method call org.deepin.dde.Appearance1.SetCurrentWorkspaceBackground
    QMetaObject::invokeMethod(parent(), "SetCurrentWorkspaceBackground", Q_ARG(QString, uri));
}

void Appearance1Adaptor::SetCurrentWorkspaceBackgroundForMonitor(const QString &uri, const QString &strMonitorName)
{
    // handle method call org.deepin.dde.Appearance1.SetCurrentWorkspaceBackgroundForMonitor
    QMetaObject::invokeMethod(parent(), "SetCurrentWorkspaceBackgroundForMonitor", Q_ARG(QString, uri), Q_ARG(QString, strMonitorName));
}

void Appearance1Adaptor::SetMonitorBackground(const QString &monitorName, const QString &imageGile)
{
    // handle method call org.deepin.dde.Appearance1.SetMonitorBackground
    QMetaObject::invokeMethod(parent(), "SetMonitorBackground", Q_ARG(QString, monitorName), Q_ARG(QString, imageGile));
}

void Appearance1Adaptor::SetScaleFactor(double scale)
{
    // handle method call org.deepin.dde.Appearance1.SetScaleFactor
    QMetaObject::invokeMethod(parent(), "SetScaleFactor", Q_ARG(double, scale));
}

void Appearance1Adaptor::SetWallpaperSlideShow(const QString &monitorName, const QString &slideShow)
{
    // handle method call org.deepin.dde.Appearance1.SetWallpaperSlideShow
    QMetaObject::invokeMethod(parent(), "SetWallpaperSlideShow", Q_ARG(QString, monitorName), Q_ARG(QString, slideShow));
}

void Appearance1Adaptor::SetWorkspaceBackgroundForMonitor(int index, const QString &strMonitorName, const QString &uri)
{
    // handle method call org.deepin.dde.Appearance1.SetWorkspaceBackgroundForMonitor
    QMetaObject::invokeMethod(parent(), "SetWorkspaceBackgroundForMonitor", Q_ARG(int, index), Q_ARG(QString, strMonitorName), Q_ARG(QString, uri));
}

QString Appearance1Adaptor::Show(const QString &ty, const QStringList &names)
{
    // handle method call org.deepin.dde.Appearance1.Show
    QString detail;
    QMetaObject::invokeMethod(parent(), "Show", Q_RETURN_ARG(QString, detail), Q_ARG(QString, ty), Q_ARG(QStringList, names));
    return detail;
}

QString Appearance1Adaptor::Thumbnail(const QString &ty, const QString &name)
{
    // handle method call org.deepin.dde.Appearance1.Thumbnail
    QString file;
    QMetaObject::invokeMethod(parent(), "Thumbnail", Q_RETURN_ARG(QString, file), Q_ARG(QString, ty), Q_ARG(QString, name));
    return file;
}

