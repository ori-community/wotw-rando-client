@echo off
title gen-win32
echo Generating visual studio solution.
mkdir build
cd build
mkdir win64
cd win64
cmake -DARCH=x64 -G "Visual Studio 16 2019" ..\..
echo f | xcopy /y ..\..\DllExport.bat .\DllExport.bat
echo f | xcopy /y ..\..\.net.dllexport.targets .\.net.dllexport.targets
xcopy /y /s ..\..\packages .\packages
DllExport.bat -action Recover -sln-file WotWRandomizer.sln
cd ..
cd ..
pause