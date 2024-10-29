/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<filesystemmodel.h>)
#  include <filesystemmodel.h>
#endif
#if __has_include(<linenumbermodel.h>)
#  include <linenumbermodel.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_FileSystemModule()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<FileSystemModel>("FileSystemModule", 1);
    qmlRegisterAnonymousType<QAbstractItemModel, 254>("FileSystemModule", 1);
    qmlRegisterTypesAndRevisions<LineNumberModel>("FileSystemModule", 1);
    QMetaType::fromType<QFileSystemModel *>().id();
    QMetaType::fromType<QFileSystemModel::Option>().id();
    QT_WARNING_POP
    qmlRegisterModule("FileSystemModule", 1, 0);
}

static const QQmlModuleRegistration fileSystemModuleRegistration("FileSystemModule", qml_register_types_FileSystemModule);
