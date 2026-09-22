@echo off
chcp 1251 > nul

set MAIN=main.cpp
set EXE=simple_sort_implementation.exe
set CHARSET=-finput-charset=utf-8 -fexec-charset=windows-1251

if exist %EXE% del %EXE%

g++ %CHARSET% %MAIN% -o %EXE%
if errorlevel 1 exit /b 1

%EXE%
