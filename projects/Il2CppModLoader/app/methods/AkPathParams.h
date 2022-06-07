#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkPathParams {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkPathParams * this_ptr, void * c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x01887AE0, void *, getCPtr, (app::AkPathParams * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkPathParams * this_ptr, void * c_ptr))
    IL2CPP_REGISTER_METHOD(0x01887B70, void, Finalize, (app::AkPathParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01887BF0, void, Dispose, (app::AkPathParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01887E00, void, set_listenerPos, (app::AkPathParams * this_ptr, app::AkVector * value))
    IL2CPP_REGISTER_METHOD(0x01887F40, app::AkVector *, get_listenerPos, (app::AkPathParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01888150, void, set_emitterPos, (app::AkPathParams * this_ptr, app::AkVector * value))
    IL2CPP_REGISTER_METHOD(0x01888290, app::AkVector *, get_emitterPos, (app::AkPathParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018884A0, void, set_numValidPaths, (app::AkPathParams * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x018885D0, uint32_t, get_numValidPaths, (app::AkPathParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018886F0, void, ctor_2, (app::AkPathParams * this_ptr))
}
