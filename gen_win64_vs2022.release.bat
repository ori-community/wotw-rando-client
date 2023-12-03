@echo off
cmake.exe -DCMAKE_C_COMPILER_LAUNCHER=sccache -DCMAKE_CXX_COMPILER_LAUNCHER=sccache -DCMAKE_BUILD_TYPE=Debug -DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_C_COMPILER="C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/Llvm/x64/bin/clang-cl.exe" -DCMAKE_CXX_COMPILER="C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/Llvm/x64/bin/clang-cl.exe" -G Ninja -B cmake-build-relwithdebinfo
pause
