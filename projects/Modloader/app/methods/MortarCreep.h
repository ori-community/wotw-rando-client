#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MortarCreep.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::MortarCreep {
    IL2CPP_REGISTER_METHOD(0x01475290, void, OnEnable, (app::MortarCreep * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01475480, void, OnDisable, (app::MortarCreep * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01475630, void, FixedUpdate, (app::MortarCreep * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01475700, void, OnDeath, (app::MortarCreep * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x014759D0, void, ctor, (app::MortarCreep * this_ptr))
} // namespace app::classes::MortarCreep
