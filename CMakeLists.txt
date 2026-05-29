cmake_minimum_required(VERSION 3.16)

project(heurika VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(heurika
    src/main.cpp
    src/gui/mainmenubar.cpp
    src/gui/mainmenubar.h
    src/gui/mainwindow.cpp
    src/gui/mainwindow.h
)

target_link_libraries(heurika PRIVATE Qt6::Widgets)

install(TARGETS heurika
    RUNTIME DESTINATION bin
)
