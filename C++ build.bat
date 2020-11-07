@echo off

if exist ".\src\" (
    if not exist ".\build\" (
        mkdir build
    )
    copy src build > nul
    g++ -Wall -Wno-unused -O2 -o build\build.exe build\*.cpp
    del build\*.cpp
    del build\*.h

    echo.
    echo Compiling done.
    pause
) else (
    echo Error: No src directory found.
    pause
)