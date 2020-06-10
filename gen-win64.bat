@echo off
title gen-win64
echo Generating visual studio solution.
mkdir build
cd build
mkdir win64
cd win64
cmake -DARCH=x64 -G "Visual Studio 16 2019" ..\..
cd ..
cd ..
pause