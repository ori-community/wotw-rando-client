#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::IO::FileSystemWatcher {
    IL2CPP_REGISTER_METHOD(0x0200A8A0, app::ISite*, get_Site, (app::FileSystemWatcher * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751100, FileSystemWatcher_get_Site__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Site, (app::FileSystemWatcher * this_ptr, app::ISite* value))
    IL2CPP_REGISTER_METHOD(0x0200A8F0, void, BeginInit, (app::FileSystemWatcher * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04723D98, FileSystemWatcher_BeginInit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0200A940, void, EndInit, (app::FileSystemWatcher * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471F4C8, FileSystemWatcher_EndInit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0200A990, void, Dispose, (app::FileSystemWatcher * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHODINFO(0x04732830, FileSystemWatcher_Dispose__MethodInfo)
} // namespace app::classes::System::IO::FileSystemWatcher
