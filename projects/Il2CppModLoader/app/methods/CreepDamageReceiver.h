#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CreepDamageReceiver {
    IL2CPP_REGISTER_METHOD(0x00DB8480, void, OnRecieveDamage, (app::CreepDamageReceiver * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00DB8570, void, ctor, (app::CreepDamageReceiver * this_ptr))
}
