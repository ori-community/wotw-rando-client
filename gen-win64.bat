@echo off
title gen-win64
echo Generating visual studio solution.
mkdir build
cd build
mkdir win64
cd win64

cmake -DARCH=x64 -G "Visual Studio 16 2019" ..\..

echo f | xcopy /y ..\..\DllExport.bat .\DllExport.bat
echo f | xcopy /y ..\..\.net.dllexport.targets .\.net.dllexport.targets

rem We need to call DllExport using cmd to prevent the batch from terminating.
cmd /c DllExport.bat -action Recover -sln-file WotWRandomizer.sln

xcopy /i /y /s ..\..\packages .\packages

rem Restore nuget packages added by DllExport.
dotnet restore ./WotWRandomizer.sln

cd ..
cd ..
pause