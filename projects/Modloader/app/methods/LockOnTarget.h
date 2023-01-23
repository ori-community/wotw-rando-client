#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LockOnTarget.h>
#include <Modloader/app/structs/IAttackable.h>

namespace app::classes::LockOnTarget {
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetTarget, (app::LockOnTarget * this_ptr, app::IAttackable* target))
    IL2CPP_REGISTER_METHOD(0x00FC1910, void, Update, (app::LockOnTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC1AE0, bool, get_TargetDestroyed, (app::LockOnTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC1BC0, void, OnProjectileDetonated, (app::LockOnTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC1CD0, void, DestroyLock, (app::LockOnTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LockOnTarget * this_ptr))
} // namespace app::classes::LockOnTarget
