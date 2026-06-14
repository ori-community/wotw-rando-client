#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Win32Native_WIN32_FIND_DATA.h>

namespace app::classes::System::IO::FileSystemEnumerableHelpers {
    IL2CPP_REGISTER_METHOD(0x0236F6F0, bool, IsDir, app::Win32Native_WIN32_FIND_DATA* data)
    IL2CPP_REGISTER_METHOD(0x0236F7C0, bool, IsFile, app::Win32Native_WIN32_FIND_DATA* data)
} // namespace app::classes::System::IO::FileSystemEnumerableHelpers
