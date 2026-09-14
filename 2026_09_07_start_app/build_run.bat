@echo off
setlocal

chcp 65001 > nul

if not exist build mkdir build

g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o build\app.exe
if errorlevel 1 (
    echo Ошибка компиляции.
    exit /b 1
)

build\app.exe
endlocal
