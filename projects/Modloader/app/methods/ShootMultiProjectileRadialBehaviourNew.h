#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShootMultiProjectileRadialBehaviourNew.h>

namespace app::classes::ShootMultiProjectileRadialBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x005B62B0, void, ForceShoot, app::ShootMultiProjectileRadialBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B62D0, void, Shoot, app::ShootMultiProjectileRadialBehaviourNew* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B6790, void, ctor, app::ShootMultiProjectileRadialBehaviourNew* this_ptr)
} // namespace app::classes::ShootMultiProjectileRadialBehaviourNew
