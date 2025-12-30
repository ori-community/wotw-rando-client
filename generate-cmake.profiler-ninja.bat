@echo off
cmake.exe ^
    -DCMAKE_C_COMPILER_LAUNCHER=sccache ^
    -DCMAKE_CXX_COMPILER_LAUNCHER=sccache ^
    -DCMAKE_BUILD_TYPE=RelWithDebInfo ^
    -DCMAKE_C_COMPILER="clang-cl.exe" ^
    -DCMAKE_CXX_COMPILER="clang-cl.exe" ^
    -DCMAKE_TOOLCHAIN_FILE="%VCPKG_INSTALLATION_ROOT%\scripts\buildsystems\vcpkg.cmake" ^
    -DVCPKG_TARGET_TRIPLET=x64-windows-static-md ^
    -DENABLE_PROFILER=1 ^
    -G Ninja ^
    -D CMAKE_MAKE_PROGRAM=ninja ^
    -B cmake-build-profiler
pause
