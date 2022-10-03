#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::HealthBarSpawner {
    IL2CPP_REGISTER_METHOD(0x010A10D0, void, Awake, (app::HealthBarSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A10E0, app::HealthBar*, Spawn, (app::HealthBarSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A1390, void, OnDestroy, (app::HealthBarSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HealthBarSpawner * this_ptr))
} // namespace app::classes::HealthBarSpawner
