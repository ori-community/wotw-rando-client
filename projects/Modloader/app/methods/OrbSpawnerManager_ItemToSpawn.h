#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemToSpawn__Boxed.h>
#include <Modloader/app/structs/OrbSpawnerManager_ItemType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/DropPickup_State__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::OrbSpawnerManager_ItemToSpawn {
    IL2CPP_REGISTER_METHOD(0x00112F10, void, ctor_1, (app::OrbSpawnerManager_ItemToSpawn__Boxed * this_ptr, app::OrbSpawnerManager_ItemType__Enum item_type, app::Vector2 position, app::Vector2 velocity, app::DropPickup_State__Enum initial_state, app::Transform* transform_source))
    IL2CPP_REGISTER_METHOD(0x00113020, void, ctor_2, (app::OrbSpawnerManager_ItemToSpawn__Boxed * this_ptr, app::OrbSpawnerManager_ItemType__Enum item_type, app::Vector2 position, app::Vector2 velocity, app::DropPickup_State__Enum initial_state, bool override_gravity, app::Vector3 gravity_override, app::Transform* transform_source, int32_t override_value))
} // namespace app::classes::OrbSpawnerManager_ItemToSpawn
