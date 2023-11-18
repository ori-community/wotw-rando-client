#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkMemSettings.h>

namespace app::classes::AkMemSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkMemSettings * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x01880BC0, void*, getCPtr, (app::AkMemSettings * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkMemSettings * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x01880C80, void, Finalize, (app::AkMemSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01880D00, void, Dispose, (app::AkMemSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01880F10, void, ctor_2, (app::AkMemSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01881030, void, set_uMaxNumPools, (app::AkMemSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x01881160, uint32_t, get_uMaxNumPools, (app::AkMemSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01881280, void, set_uDebugFlags, (app::AkMemSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x018813B0, uint32_t, get_uDebugFlags, (app::AkMemSettings * this_ptr))
} // namespace app::classes::AkMemSettings
