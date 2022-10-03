#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AkRamp {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkRamp * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x018929E0, void*, getCPtr, (app::AkRamp * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkRamp * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x01892A70, void, Finalize, (app::AkRamp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01892AF0, void, Dispose, (app::AkRamp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01892D00, void, ctor_2, (app::AkRamp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01892E20, void, ctor_3, (app::AkRamp * this_ptr, float in_f_prev, float in_f_next))
    IL2CPP_REGISTER_METHOD(0x01892F70, void, set_fPrev, (app::AkRamp * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x018930A0, float, get_fPrev, (app::AkRamp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018931C0, void, set_fNext, (app::AkRamp * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x018932F0, float, get_fNext, (app::AkRamp * this_ptr))
} // namespace app::classes::AkRamp
