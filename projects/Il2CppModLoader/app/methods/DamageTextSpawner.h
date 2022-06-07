#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DamageTextSpawner {
    IL2CPP_REGISTER_METHOD(0x00DCA5F0, void, SpawnDamageText, (app::DamageTextSpawner * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamageTextSpawner * this_ptr))
}
