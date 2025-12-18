# Ori and the Will of the Wisps Randomizer Client

This repository contains the client/modloader part of the Ori and the Will of the Wisps Randomizer.


## Installation

For instructions and help with how to play this randomizer, visit https://wotw.orirando.com.


## Discord links:

- Ori Speedrunning: https://orirando.com/discord
- Ori Randomizer Development: https://discord.gg/tpn9WydSQz


## Development


### NOTICE

You will need to enable long path support in Git **BEFORE** you clone this repository.

Run this as administrator:

```
git config --system core.longpaths true
```

- Using CLion (or alternatively Visual Studio Code) is recommended.
- If you are using some other IDE than CLion without vcpkg support, make sure to [install](https://learn.microsoft.com/en-nz/vcpkg/get_started/get-started?pivots=shell-cmd) it first.
- Make sure to have the `clang-cl` compilers and tools installed. Check this in the Visual Studio Installer in the Individual Components section.


#### Setup in CLion

1. Load the CMake project as usual into the IDE
2. Enable vcpkg
3. Add `-DVCPKG_TARGET_TRIPLET=x64-windows-static-md` as CMake argument in the CMake IDE settings
4. Switch to the `clang-cl` compilers in the Toolchain IDE settings.


#### Setup in Visual Studio Code

1. Make sure to have Ninja installed: `winget install "Ninja-build.Ninja"`
2. Install the CMake Tools and Clangd extensions
3. In CMake Tools settings:
    - Cmake: Configure Environment:
        - VCPKG_TARGET_TRIPLET = x64-windows-static-md
        - CMAKE_TOOLCHAIN_FILE = <wherever your vcpkg lives>\scripts\buildsystems\vcpkg.cmake
    - Cmake: Generator: Ninja
4. In the CMake panel on the left side under "Configure", click on "[No Kit Selected]", then click "Scan for Kits" and after it is done scanning select the CLang (MSVC CLI) compiler for amd64


#### Setup in Visual Studio (not recommended)

1. Make sure the `VCPKG_INSTALLATION_ROOT` environment variable is set correctly and holding the path to the vcpkg installation root. If not, set it before continuing.
2. Run `generate-cmake.debug-vs2022.bat` and wait for it to complete
3. Open the solution file (.sln) in the resulting `cmake-build-debug` directory with Visual Studio


### Set up debugging

Debugging only works when launching the randomizer using the winhttp.dll proxy file (which is recommended in general for development).
After building the project, symlink the built winhttp.dll next to the game. For that, open a terminal with elevated privileges next to the game executable (oriwotw.exe) and run `mklink winhttp.dll C:\moon\randomizer\winhttp.dll`.
Now you can load the randomizer by launching the game executable with `-m C:\moon\randomizer` as command line argument. If you don't supply any argument, the winhttp.dll proxy will do nothing.
If you are using CLion, you can create a Run Configuration with the aforementioned settings to get a seamless debugging experience.


### Working together with the launcher

To prevent needing to copy files into the `development-install-dir` in the UI project after every rebuild, you can set the `WOTWR_INSTALL_DIR` CMake variable (`-DWOTWR_INSTALL_DIR=C:\path\to\development-install-dir\client`). Make sure to also update any launch configurations/tasks, especially the `-m` parameter!
