#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkMemBankLoader_LoadFile_d_14.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::AkMemBankLoader__LoadFile_d__14 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::AkMemBankLoader_LoadFile_d_14* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::AkMemBankLoader_LoadFile_d_14* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01880850, bool, MoveNext, app::AkMemBankLoader_LoadFile_d_14* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::AkMemBankLoader_LoadFile_d_14* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01880B60, void, IEnumerator_Reset, app::AkMemBankLoader_LoadFile_d_14* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::AkMemBankLoader_LoadFile_d_14* this_ptr)
} // namespace app::classes::AkMemBankLoader__LoadFile_d__14
