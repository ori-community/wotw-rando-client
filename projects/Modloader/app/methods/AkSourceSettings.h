#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkSourceSettings.h>

namespace app::classes::AkSourceSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, app::AkSourceSettings* this_ptr, void* c_ptr, bool c_memory_own)
    IL2CPP_REGISTER_METHOD(0x026F9CD0, void*, getCPtr, app::AkSourceSettings* obj)
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, app::AkSourceSettings* this_ptr, void* c_ptr)
    IL2CPP_REGISTER_METHOD(0x026F9D60, void, Finalize, app::AkSourceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026F9DE0, void, Dispose, app::AkSourceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026F9FF0, void, set_sourceID, app::AkSourceSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026FA120, uint32_t, get_sourceID, app::AkSourceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026FA240, void, set_pMediaMemory, app::AkSourceSettings* this_ptr, void* value)
    IL2CPP_REGISTER_METHOD(0x026FA370, void*, get_pMediaMemory, app::AkSourceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026FA490, void, set_uMediaSize, app::AkSourceSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026FA5C0, uint32_t, get_uMediaSize, app::AkSourceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026FA6E0, void, Clear, app::AkSourceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026FA780, int32_t, GetSizeOf, )
    IL2CPP_REGISTER_METHOD(0x026FA810, void, Clone, app::AkSourceSettings* this_ptr, app::AkSourceSettings* other)
    IL2CPP_REGISTER_METHOD(0x026FA930, void, ctor_2, app::AkSourceSettings* this_ptr)
} // namespace app::classes::AkSourceSettings
