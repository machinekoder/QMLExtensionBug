#ifndef MODULETEST_PLUGIN_H
#define MODULETEST_PLUGIN_H

#include <QQmlExtensionPlugin>
#include <QtQml/QQmlEngine>

class ModuletestPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
    void initializeEngine(QQmlEngine *engine, const char *uri);
};

#endif // MODULETEST_PLUGIN_H

