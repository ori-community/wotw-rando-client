@echo off
title gen-win64
echo Generating visual studio solution.
mkdir build
cd build
mkdir win64
cd win64

cmake -DARCH=x64 -G "Visual Studio 17 2022" -DCMAKE_BUILD_TYPE=Debug -T ClangCL -DCMAKE_CXX_FLAGS="/MP"  ..\..
cd ..
cd ..
pause