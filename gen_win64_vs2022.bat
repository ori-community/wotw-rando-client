@echo off
cmake.exe -DCMAKE_BUILD_TYPE=Debug -DCMAKE_BUILD_TYPE=Debug -G "Visual Studio 17 2022" -T ClangCL -B cmake-build-debug
pause
