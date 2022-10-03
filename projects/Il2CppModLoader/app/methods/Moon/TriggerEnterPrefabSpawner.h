#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::TriggerEnterPrefabSpawner {
    IL2CPP_REGISTER_METHOD(0x00D1EDD0, void, Awake, (app::TriggerEnterPrefabSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1EE60, void, OnTriggerEnter, (app::TriggerEnterPrefabSpawner * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00D1F3B0, void, InstantiatePrefab, (app::TriggerEnterPrefabSpawner * this_ptr, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TriggerEnterPrefabSpawner * this_ptr))
} // namespace app::classes::Moon::TriggerEnterPrefabSpawner
