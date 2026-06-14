#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FileSystemWatcher.h>
#include <Modloader/app/structs/ISite.h>

namespace app::classes::System::IO::FileSystemWatcher {
    IL2CPP_REGISTER_METHOD(0x0200A8A0, app::ISite*, get_Site, app::FileSystemWatcher* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Site, app::FileSystemWatcher* this_ptr, app::ISite* value)
    IL2CPP_REGISTER_METHOD(0x0200A8F0, void, BeginInit, app::FileSystemWatcher* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0200A940, void, EndInit, app::FileSystemWatcher* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0200A990, void, Dispose, app::FileSystemWatcher* this_ptr, bool disposing)
} // namespace app::classes::System::IO::FileSystemWatcher
