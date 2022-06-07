#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DealDamageSphere {
    IL2CPP_REGISTER_METHOD(0x00DDDC50, void, Awake, (app::DealDamageSphere * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDDD60, void, DealDamageSphereMethod, (app::DealDamageSphere * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDE2D0, void, ctor, (app::DealDamageSphere * this_ptr))
}
