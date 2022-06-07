#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LaserShooterHommingMissle {
    IL2CPP_REGISTER_METHOD(0x00F14000, void, MisslePrefabInstantiation, (app::LaserShooterHommingMissle * this_ptr, app::List_1_DynamicInstantiationDescriptor_ * instantiations))
    IL2CPP_REGISTER_METHOD(0x00F141E0, void, SetTarget, (app::LaserShooterHommingMissle * this_ptr, app::Transform * target))
    IL2CPP_REGISTER_METHOD(0x00F14200, void, FixedUpdate, (app::LaserShooterHommingMissle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F14540, void, OnCollisionEnter, (app::LaserShooterHommingMissle * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x00F14A00, void, ctor, (app::LaserShooterHommingMissle * this_ptr))
}
