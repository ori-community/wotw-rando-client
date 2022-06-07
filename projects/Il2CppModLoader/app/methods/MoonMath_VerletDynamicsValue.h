#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonMath_VerletDynamicsValue {
    IL2CPP_REGISTER_METHOD(0x0257AAB0, void, ctor, (app::MoonMath_VerletDynamicsValue * this_ptr, float X, float K, float friction, float max_speed, float min_x, float max_x))
    IL2CPP_REGISTER_METHOD(0x0257AAF0, float, Update_1, (app::MoonMath_VerletDynamicsValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257AB00, float, Update_2, (app::MoonMath_VerletDynamicsValue * this_ptr, float target_x))
    IL2CPP_REGISTER_METHOD(0x0257AC70, float, get_Speed, (app::MoonMath_VerletDynamicsValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257AC80, void, set_Speed, (app::MoonMath_VerletDynamicsValue * this_ptr, float value))
}
