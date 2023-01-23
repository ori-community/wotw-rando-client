#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/HomingMissile.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/DamageOwner.h>

namespace app::classes::HomingMissile {
    IL2CPP_REGISTER_METHOD(0x00B5C4F0, app::Vector3, get_TargetPosition, (app::HomingMissile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00653A60, app::Vector3, get_Position, (app::HomingMissile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5C5B0, void, Init, (app::HomingMissile * this_ptr, app::IAttackable* target, app::DamageOwner* damage_owner))
    IL2CPP_REGISTER_METHOD(0x00B5CA90, void, Awake, (app::HomingMissile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5CB70, void, Update, (app::HomingMissile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5D320, void, ctor, (app::HomingMissile * this_ptr))
} // namespace app::classes::HomingMissile
