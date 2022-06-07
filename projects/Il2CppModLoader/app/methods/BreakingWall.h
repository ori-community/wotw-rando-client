#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BreakingWall {
    IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (app::BreakingWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D50D30, void, Start, (app::BreakingWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D50F60, void, OnRecieveDamage, (app::BreakingWall * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00D50FE0, void, BreakWall, (app::BreakingWall * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470EEE0, BreakingWall_BreakWall__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BreakingWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject *, IDamageReciever_get_gameObject, (app::BreakingWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform *, IDamageReciever_get_transform, (app::BreakingWall * this_ptr))
}
