cmake_minimum_required(VERSION 3.14)

project(array LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)
find_package(Qt6Widgets REQUIRED)

add_executable(array
  main.cpp
  application.h application.cpp
  arraycustom.h arraycustom.cpp
  number.h
  complex.h complex.cpp
  tpolinom.cpp tpolinom.h
  userinterface.h userinterface.cpp userinterface.ui






)
target_link_libraries(array Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(array Qt${QT_VERSION_MAJOR}::Widgets)
include(GNUInstallDirs)
install(TARGETS array
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
