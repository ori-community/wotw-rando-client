@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" amd64
cmake.exe -DCMAKE_C_COMPILER_LAUNCHER=sccache -DCMAKE_CXX_COMPILER_LAUNCHER=sccache -DCMAKE_BUILD_TYPE=Debug -DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_C_COMPILER="clang-cl.exe" -DCMAKE_CXX_COMPILER="clang-cl.exe" -G Ninja -B cmake-build-relwithdebinfo
pause
