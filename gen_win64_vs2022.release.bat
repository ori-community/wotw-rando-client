@echo off
call "C:/Program Files (x86)/VC/vcvarsall.bat" amd64
cmake.exe -DCMAKE_C_COMPILER_LAUNCHER=sccache -DCMAKE_CXX_COMPILER_LAUNCHER=sccache -DCMAKE_BUILD_TYPE=Debug -DCMAKE_BUILD_TYPE=RelWithDebInfo -DCMAKE_C_COMPILER:PATH="%ProgramFiles(x86)%\LLVM\bin\clang.exe" -DCMAKE_CXX_COMPILER:PATH="%ProgramFiles(x86)%\LLVM\bin\clang.exe" -G Ninja -B cmake-build-relwithdebinfo
pause
