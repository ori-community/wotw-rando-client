#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RegistryKey.h>
#include <Modloader/app/structs/RegistryValueOptions__Enum.h>
#include <Modloader/app/structs/SecurityElement.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::Microsoft::Win32::KeyHandler {
    IL2CPP_REGISTER_METHOD(0x023AE8E0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x023AEEE0, void, ctor_1, app::KeyHandler* this_ptr, app::RegistryKey* rkey, app::String* basedir)
    IL2CPP_REGISTER_METHOD(0x023AEF00, void, ctor_2, app::KeyHandler* this_ptr, app::RegistryKey* rkey, app::String* basedir, bool is_volatile)
    IL2CPP_REGISTER_METHOD(0x023AF0A0, void, Load, app::KeyHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023AF680, void, LoadKey, app::KeyHandler* this_ptr, app::SecurityElement* se)
    IL2CPP_REGISTER_METHOD(
        0x023AFDA0,
        app::RegistryKey*,
        Ensure,
        app::KeyHandler* this_ptr,
        app::RegistryKey* rkey,
        app::String* extra,
        bool writable,
        bool is_volatile
    )
    IL2CPP_REGISTER_METHOD(0x023B0260, app::RegistryKey*, Probe, app::KeyHandler* this_ptr, app::RegistryKey* rkey, app::String* extra, bool writable)
    IL2CPP_REGISTER_METHOD(0x023B0890, app::String*, CombineName, app::RegistryKey* rkey, app::String* extra)
    IL2CPP_REGISTER_METHOD(0x023B0980, int64_t, GetSystemBootTime, )
    IL2CPP_REGISTER_METHOD(0x023B0CC0, int64_t, GetRegisteredBootTime, app::String* path)
    IL2CPP_REGISTER_METHOD(0x023B0FA0, void, SaveRegisteredBootTime, app::String* path, int64_t btime)
    IL2CPP_REGISTER_METHOD(0x023B11E0, void, CleanVolatileKeys, )
    IL2CPP_REGISTER_METHOD(0x023B1480, bool, VolatileKeyExists, app::String* dir)
    IL2CPP_REGISTER_METHOD(0x023B1730, app::String*, GetVolatileDir, app::String* dir)
    IL2CPP_REGISTER_METHOD(0x023B1830, app::KeyHandler*, Lookup, app::RegistryKey* rkey, bool create_non_existing)
    IL2CPP_REGISTER_METHOD(0x023B1F70, app::String*, GetRootFromDir, app::String* dir)
    IL2CPP_REGISTER_METHOD(0x023B2120, void, Drop, app::RegistryKey* rkey)
    IL2CPP_REGISTER_METHOD(0x023B25E0, app::Object*, GetValue, app::KeyHandler* this_ptr, app::String* name, app::RegistryValueOptions__Enum options)
    IL2CPP_REGISTER_METHOD(0x023B2820, app::String__Array*, GetSubKeyNames, app::KeyHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B2F70, void, Flush, app::KeyHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B30F0, bool, ValueExists, app::KeyHandler* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023B3280, bool, get_IsMarkedForDeletion, app::KeyHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B3350, void, Finalize, app::KeyHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B33E0, void, Save, app::KeyHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B3E60, app::String*, get_UserStore, )
    IL2CPP_REGISTER_METHOD(0x023B3FC0, app::String*, get_MachineStore, )
} // namespace app::classes::Microsoft::Win32::KeyHandler
