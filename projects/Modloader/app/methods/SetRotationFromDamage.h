#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/SetRotationFromDamage.h>

namespace app::classes::SetRotationFromDamage {
    IL2CPP_REGISTER_METHOD(0x005A3CA0, void, OnEnable, app::SetRotationFromDamage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005A3EA0, void, OnDisable, app::SetRotationFromDamage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005A40A0, void, DamageReceived, app::SetRotationFromDamage* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SetRotationFromDamage* this_ptr)
} // namespace app::classes::SetRotationFromDamage
