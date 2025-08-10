#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IOException.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RegistryHive__Enum.h>
#include <Modloader/app/structs/RegistryKey.h>
#include <Modloader/app/structs/SafeRegistryHandle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::Microsoft::Win32::RegistryKey {
    IL2CPP_REGISTER_METHOD(0x023B4890, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x023B4B60, void, ctor_1, app::RegistryKey* this_ptr, app::RegistryHive__Enum hive_id)
    IL2CPP_REGISTER_METHOD(0x023B4B80, void, ctor_2, app::RegistryKey* this_ptr, app::RegistryHive__Enum hive_id, void* key_handle, bool remote_root)
    IL2CPP_REGISTER_METHOD(0x023B4DC0, void, ctor_3, app::RegistryKey* this_ptr, app::Object* data, app::String* key_name, bool writable)
    IL2CPP_REGISTER_METHOD(0x023B4DD0, bool, IsEquals, app::RegistryKey* a, app::RegistryKey* b)
    IL2CPP_REGISTER_METHOD(0x023B4E60, void, Dispose, app::RegistryKey* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Name, app::RegistryKey* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B5060, void, Flush, app::RegistryKey* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B5120, void, Close, app::RegistryKey* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B52A0, app::SafeRegistryHandle*, get_Handle, app::RegistryKey* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B54C0, app::RegistryKey*, OpenSubKey_1, app::RegistryKey* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023B54D0, app::RegistryKey*, OpenSubKey_2, app::RegistryKey* this_ptr, app::String* name, bool writable)
    IL2CPP_REGISTER_METHOD(0x023B5700, app::Object*, GetValue_1, app::RegistryKey* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023B5860, app::Object*, GetValue_2, app::RegistryKey* this_ptr, app::String* name, app::Object* default_value)
    IL2CPP_REGISTER_METHOD(0x023B59D0, app::String__Array*, GetSubKeyNames, app::RegistryKey* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B5B10, app::String*, ToString, app::RegistryKey* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D60150, bool, get_IsRoot, app::RegistryKey* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B5C50, app::RegistryHive__Enum, get_Hive, app::RegistryKey* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_InternalHandle, app::RegistryKey* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B5D20, void, AssertKeyStillValid, app::RegistryKey* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023B5DD0, void, AssertKeyNameLength, app::RegistryKey* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023B5E90, app::String*, DecodeString, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x023B5F90, app::IOException*, CreateMarkedForDeletionException, )
    IL2CPP_REGISTER_METHOD(0x023B5FF0, app::String*, GetHiveName, app::RegistryHive__Enum hive)
} // namespace app::classes::Microsoft::Win32::RegistryKey
