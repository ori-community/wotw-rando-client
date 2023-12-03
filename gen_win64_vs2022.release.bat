@echo off
cmake.exe -DCMAKE_C_COMPILER_LAUNCHER=sccache -DCMAKE_CXX_COMPILER_LAUNCHER=sccache -DCMAKE_BUILD_TYPE=Debug -DCMAKE_BUILD_TYPE=RelWithDebInfo -G "Visual Studio 17 2022" -T ClangCL -B cmake-build-relwithdebinfo
pause
