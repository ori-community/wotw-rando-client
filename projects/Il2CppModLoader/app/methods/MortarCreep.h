#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MortarCreep {
    IL2CPP_REGISTER_METHOD(0x01475290, void, OnEnable, (app::MortarCreep * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01475480, void, OnDisable, (app::MortarCreep * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01475630, void, FixedUpdate, (app::MortarCreep * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01475700, void, OnDeath, (app::MortarCreep * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHODINFO(0x0472C3F8, MortarCreep_OnDeath__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014759D0, void, ctor, (app::MortarCreep * this_ptr))
}
