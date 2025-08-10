#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Mutex.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Threading::Mutex {
    IL2CPP_REGISTER_METHOD(0x027E0FD0, bool, ReleaseMutex_internal, void* handle)
    IL2CPP_REGISTER_METHOD(0x027E0FF0, void*, CreateMutex_internal, bool initially_owned, app::String* name, bool* created)
    IL2CPP_REGISTER_METHOD(0x027E10C0, void, ctor, app::Mutex* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027E11B0, void, ReleaseMutex, app::Mutex* this_ptr)
} // namespace app::classes::System::Threading::Mutex
