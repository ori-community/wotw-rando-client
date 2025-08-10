#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LockOnTarget.h>
#include <Modloader/app/structs/LockOnTargetProjectile.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LockOnTargetProjectile {
    IL2CPP_REGISTER_METHOD(0x00FC1DC0, app::Vector3, get_TargetPosition, app::LockOnTargetProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC1E90, app::Vector3, get_Position, app::LockOnTargetProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC1F20, void, Awake, app::LockOnTargetProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC2000, void, Update, app::LockOnTargetProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC25A0, void, Detonate, app::LockOnTargetProjectile* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC2C60, void, SetTarget, app::LockOnTargetProjectile* this_ptr, app::LockOnTarget* target)
    IL2CPP_REGISTER_METHOD(0x00FC2DE0, void, ctor, app::LockOnTargetProjectile* this_ptr)
} // namespace app::classes::LockOnTargetProjectile
