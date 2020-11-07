@echo off

if exist ".\src\" (
    mkdir build
    copy src build
    g++ -Wall -Wno-unused -o build\build.exe build\*.cpp
    del build\*.cpp

    echo.
    echo Compiling done.
    pause
) else (
    echo No src directory found found.
    pause
)
