#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ProjectileExplodeWall {
    IL2CPP_REGISTER_METHOD(0x00C7B7A0, void, Awake, (app::ProjectileExplodeWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7B960, void, OnDestroy, (app::ProjectileExplodeWall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C7BB20, void, OnPreProcessDamage, (app::ProjectileExplodeWall * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHODINFO(0x047739F0, ProjectileExplodeWall_OnPreProcessDamage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, (app::ProjectileExplodeWall * this_ptr))
}
