#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DamagePrefabSpawner.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::DamagePrefabSpawner {
    IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (app::DamagePrefabSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC83D0, void, OnRecieveDamage, (app::DamagePrefabSpawner * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamagePrefabSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::DamagePrefabSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::DamagePrefabSpawner * this_ptr))
} // namespace app::classes::DamagePrefabSpawner
