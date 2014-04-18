#include "moduletest_plugin.h"
#include "myitem.h"

static void initResources()
{
    Q_INIT_RESOURCE(moduletest);
}

#include <qqml.h>

void ModuletestPlugin::registerTypes(const char *uri)
{
    initResources();

    // @uri com.mycompany.qmlcomponents
    qmlRegisterType<MyItem>(uri, 1, 0, "MyItem");
    qmlRegisterType(QUrl("qrc:/com/mycompany/qmlcomponents/TetsItem.qml"), uri, 1, 0, "TestItem");
}

void ModuletestPlugin::initializeEngine(QQmlEngine *engine, const char *uri)
{
    Q_UNUSED(uri);

    engine->addImportPath(QStringLiteral("qrc:/"));
}


