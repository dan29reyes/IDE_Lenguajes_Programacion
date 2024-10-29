#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _qt_qml_FileSystemModule_Main_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_FileSystemModule_qml_About_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_FileSystemModule_qml_Colors_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_FileSystemModule_qml_Editor_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_FileSystemModule_qml_FileSystemView_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_FileSystemModule_qml_MyMenu_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_FileSystemModule_qml_MyMenuBar_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_FileSystemModule_qml_Sidebar_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_FileSystemModule_qml_ResizeButton_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_FileSystemModule_qml_WindowDragHandler_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/FileSystemModule/Main.qml"), &QmlCacheGeneratedCode::_qt_qml_FileSystemModule_Main_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/FileSystemModule/qml/About.qml"), &QmlCacheGeneratedCode::_qt_qml_FileSystemModule_qml_About_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/FileSystemModule/qml/Colors.qml"), &QmlCacheGeneratedCode::_qt_qml_FileSystemModule_qml_Colors_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/FileSystemModule/qml/Editor.qml"), &QmlCacheGeneratedCode::_qt_qml_FileSystemModule_qml_Editor_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/FileSystemModule/qml/FileSystemView.qml"), &QmlCacheGeneratedCode::_qt_qml_FileSystemModule_qml_FileSystemView_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/FileSystemModule/qml/MyMenu.qml"), &QmlCacheGeneratedCode::_qt_qml_FileSystemModule_qml_MyMenu_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/FileSystemModule/qml/MyMenuBar.qml"), &QmlCacheGeneratedCode::_qt_qml_FileSystemModule_qml_MyMenuBar_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/FileSystemModule/qml/Sidebar.qml"), &QmlCacheGeneratedCode::_qt_qml_FileSystemModule_qml_Sidebar_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/FileSystemModule/qml/ResizeButton.qml"), &QmlCacheGeneratedCode::_qt_qml_FileSystemModule_qml_ResizeButton_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/FileSystemModule/qml/WindowDragHandler.qml"), &QmlCacheGeneratedCode::_qt_qml_FileSystemModule_qml_WindowDragHandler_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_filesystemexplorer)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_filesystemexplorer))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_filesystemexplorer)() {
    return 1;
}
