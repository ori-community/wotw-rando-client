@echo off
title gen-win64
echo Generating visual studio solution.

cmake.exe -DCMAKE_BUILD_TYPE=Debug -DCMAKE_BUILD_TYPE=RelWithDebugInfo -G "Visual Studio 17 2022" -T ClangCL -B cmake-build-debug
pause
