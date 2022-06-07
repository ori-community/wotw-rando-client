#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::DamageOwner {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Entity *, get_Entity, (app::DamageOwner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Entity, (app::DamageOwner * this_ptr, app::Entity * value))
    IL2CPP_REGISTER_METHOD(0x00CD0C50, void, ProcessDamage, (app::DamageOwner * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00CD0C50, void, HandleFocusShard, (app::DamageOwner * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamageOwner * this_ptr))
}
