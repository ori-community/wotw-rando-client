#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RegistryKey.h>
#include <Modloader/app/structs/RegistryValueOptions__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UnixRegistryApi.h>

namespace app::classes::Microsoft::Win32::UnixRegistryApi {
    IL2CPP_REGISTER_METHOD(0x023B6600, app::String*, ToUnix, app::String* keyname)
    IL2CPP_REGISTER_METHOD(0x023B6670, bool, IsWellKnownKey, app::String* parent_key_name, app::String* keyname)
    IL2CPP_REGISTER_METHOD(
        0x023B6820,
        app::RegistryKey*,
        OpenSubKey,
        app::UnixRegistryApi* this_ptr,
        app::RegistryKey* rkey,
        app::String* keyname,
        bool writable
    )
    IL2CPP_REGISTER_METHOD(0x023B6A90, void, Flush, app::UnixRegistryApi* this_ptr, app::RegistryKey* rkey)
    IL2CPP_REGISTER_METHOD(0x023B6B40, void, Close, app::UnixRegistryApi* this_ptr, app::RegistryKey* rkey)
    IL2CPP_REGISTER_METHOD(
        0x023B6BE0,
        app::Object*,
        GetValue,
        app::UnixRegistryApi* this_ptr,
        app::RegistryKey* rkey,
        app::String* name,
        app::Object* default_value,
        app::RegistryValueOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(0x023B6CD0, app::String__Array*, GetSubKeyNames, app::UnixRegistryApi* this_ptr, app::RegistryKey* rkey)
    IL2CPP_REGISTER_METHOD(0x00529D50, app::String*, ToString, app::UnixRegistryApi* this_ptr, app::RegistryKey* rkey)
    IL2CPP_REGISTER_METHOD(
        0x023B6D80,
        app::RegistryKey*,
        CreateSubKey_1,
        app::UnixRegistryApi* this_ptr,
        app::RegistryKey* rkey,
        app::String* keyname,
        bool writable
    )
    IL2CPP_REGISTER_METHOD(
        0x023B6F00,
        app::RegistryKey*,
        CreateSubKey_2,
        app::UnixRegistryApi* this_ptr,
        app::RegistryKey* rkey,
        app::String* keyname,
        bool writable,
        bool is_volatile
    )
    IL2CPP_REGISTER_METHOD(0x023B70A0, void*, GetHandle, app::UnixRegistryApi* this_ptr, app::RegistryKey* key)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UnixRegistryApi* this_ptr)
} // namespace app::classes::Microsoft::Win32::UnixRegistryApi
