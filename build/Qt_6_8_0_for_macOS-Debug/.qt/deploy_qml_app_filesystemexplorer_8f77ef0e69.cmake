include(/Users/dan29reyes/Qt/Examples/Qt-6.8.0/quickcontrols/filesystemexplorer/build/Qt_6_8_0_for_macOS-Debug/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/filesystemexplorer-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative;qtdeclarative")

qt6_deploy_qml_imports(TARGET filesystemexplorer PLUGINS_FOUND plugins_found)
if(NOT DEFINED __QT_DEPLOY_POST_BUILD)
    qt6_deploy_runtime_dependencies(
        EXECUTABLE filesystemexplorer.app
        ADDITIONAL_MODULES ${plugins_found}
    )
endif()