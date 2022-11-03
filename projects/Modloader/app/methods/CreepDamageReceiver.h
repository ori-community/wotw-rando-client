#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CreepDamageReceiver {
    IL2CPP_REGISTER_METHOD(0x00DB8480, void, OnRecieveDamage, (app::CreepDamageReceiver * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00DB8570, void, ctor, (app::CreepDamageReceiver * this_ptr))
} // namespace app::classes::CreepDamageReceiver
