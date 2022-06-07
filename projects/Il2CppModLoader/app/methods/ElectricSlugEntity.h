#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ElectricSlugEntity {
    IL2CPP_REGISTER_METHOD(0x00BF8A10, void, ResolveDamage, (app::ElectricSlugEntity * this_ptr, app::DamageResult * damage_result))
    IL2CPP_REGISTER_METHOD(0x00BF8C20, void, OnAwake, (app::ElectricSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BF8DE0, void, OnDestroy, (app::ElectricSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BF8FD0, void, ZapTarget, (app::ElectricSlugEntity * this_ptr, app::DamageDealer * dealer, app::DamageResult result))
    IL2CPP_REGISTER_METHODINFO(0x0471A490, ElectricSlugEntity_ZapTarget__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BF94E0, void, KnockoffFromRail, (app::ElectricSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BF97B0, void, Explode, (app::ElectricSlugEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BF99B0, void, ctor, (app::ElectricSlugEntity * this_ptr))
}
