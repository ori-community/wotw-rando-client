#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkStreamMgrSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkStreamMgrSettings * this_ptr, void * c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026FC290, void *, getCPtr, (app::AkStreamMgrSettings * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkStreamMgrSettings * this_ptr, void * c_ptr))
    IL2CPP_REGISTER_METHOD(0x026FC320, void, Finalize, (app::AkStreamMgrSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FC3A0, void, Dispose, (app::AkStreamMgrSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FC5B0, void, set_uMemorySize, (app::AkStreamMgrSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026FC6E0, uint32_t, get_uMemorySize, (app::AkStreamMgrSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FC800, void, ctor_2, (app::AkStreamMgrSettings * this_ptr))
}
