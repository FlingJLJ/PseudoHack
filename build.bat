@echo off

mkdir build
copy src build
g++ -Wall -o build\build.exe build\*.cpp
del build\*.cpp

echo.
echo Compiling done.
pause