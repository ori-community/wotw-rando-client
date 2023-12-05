@echo off
cmake.exe ^
    -DCMAKE_BUILD_TYPE=Debug ^
    -DCMAKE_C_COMPILER="clang-cl.exe" ^
    -DCMAKE_CXX_COMPILER="clang-cl.exe" ^
    -DCMAKE_TOOLCHAIN_FILE="%VCPKG_INSTALLATION_ROOT%\scripts\buildsystems\vcpkg.cmake" ^
    -G "Visual Studio 17 2022" ^
    -B cmake-build-debug
pause
