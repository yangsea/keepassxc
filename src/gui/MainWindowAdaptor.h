/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c MainWindowAdaptor -a MainWindowAdaptor.h:MainWindowAdaptor.cpp org.keepassxc.MainWindow.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef MAINWINDOWADAPTOR_H
#define MAINWINDOWADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.keepassxc.MainWindow
 */
class MainWindowAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.keepassxc.MainWindow")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.keepassxc.MainWindow\">\n"
"    <method name=\"openDatabase\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"fileName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"pw\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"keyFile\"/>\n"
"    </method>\n"
"    <method name=\"openDatabase\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"fileName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"pw\"/>\n"
"    </method>\n"
"    <method name=\"openDatabase\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"fileName\"/>\n"
"    </method>\n"
"    <method name=\"appExit\"/>\n"
"    <method name=\"lockAllDatabases\"/>\n"
"    <method name=\"closeAllDatabases\"/>\n"
"  </interface>\n"
        "")
public:
    MainWindowAdaptor(QObject *parent);
    virtual ~MainWindowAdaptor();

public:
public slots:
    void appExit();
    void closeAllDatabases();
    void lockAllDatabases();
    void openDatabase(const QString &fileName);
    void openDatabase(const QString &fileName, const QString &pw);
    void openDatabase(const QString &fileName, const QString &pw, const QString &keyFile);
signals:
};

#endif
