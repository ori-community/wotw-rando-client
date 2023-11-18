#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyEntityDamageReciever_c.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/LegacyEntity.h>

namespace app::classes::LegacyEntityDamageReciever___c {
    IL2CPP_REGISTER_METHOD(0x00A23F60, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LegacyEntityDamageReciever_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _OnPoolSpawned_b__14_0, (app::LegacyEntityDamageReciever_c * this_ptr, app::Damage* _p0_))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _OnPoolSpawned_b__14_1, (app::LegacyEntityDamageReciever_c * this_ptr, app::LegacyEntity* _p0_))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__28_0, (app::LegacyEntityDamageReciever_c * this_ptr, app::Damage* _p0_))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__29_0, (app::LegacyEntityDamageReciever_c * this_ptr, app::LegacyEntity* _p0_))
} // namespace app::classes::LegacyEntityDamageReciever___c
