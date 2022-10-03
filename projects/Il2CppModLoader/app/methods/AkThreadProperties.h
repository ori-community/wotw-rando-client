#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkThreadProperties {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkThreadProperties * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026FD1D0, void*, getCPtr, (app::AkThreadProperties * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkThreadProperties * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026FD260, void, Finalize, (app::AkThreadProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FD2E0, void, Dispose, (app::AkThreadProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FD4F0, void, set_nPriority, (app::AkThreadProperties * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x026FD620, int32_t, get_nPriority, (app::AkThreadProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FD740, void, set_dwAffinityMask, (app::AkThreadProperties * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026FD870, uint32_t, get_dwAffinityMask, (app::AkThreadProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FD990, void, set_uStackSize, (app::AkThreadProperties * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026FDAC0, uint32_t, get_uStackSize, (app::AkThreadProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FDBE0, void, ctor_2, (app::AkThreadProperties * this_ptr))
} // namespace app::classes::AkThreadProperties
