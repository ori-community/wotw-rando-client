@echo off
title gen-win64
echo Generating visual studio solution.
mkdir build
cd build
mkdir win64
cd win64

cmake -DARCH=x64 -G "Visual Studio 17 2022" ..\..
if %errorlevel% equ 0 (
	dotnet restore ./WotWRandomizer.sln -r win-x64
	dotnet sln ./projects/Injector/Injector.sln remove ./projects/Injector/ALL_BUILD.vcxproj
	dotnet sln ./projects/Injector/Injector.sln remove ./projects/Injector/INSTALL.vcxproj
)
cd ..
cd ..
pause