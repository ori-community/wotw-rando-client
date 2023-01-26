#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CollisionBasedPrefabSpawner.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::CollisionBasedPrefabSpawner {
    IL2CPP_REGISTER_METHOD(0x00CC49C0, void, Awake, (app::CollisionBasedPrefabSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC4A50, void, OnCollisionEnter, (app::CollisionBasedPrefabSpawner * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00CC4F00, void, InstantiatePrefab, (app::CollisionBasedPrefabSpawner * this_ptr, app::Vector3 position, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CollisionBasedPrefabSpawner * this_ptr))
} // namespace app::classes::Moon::CollisionBasedPrefabSpawner
