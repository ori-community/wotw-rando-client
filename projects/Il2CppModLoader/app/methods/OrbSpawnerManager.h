#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::OrbSpawnerManager {
    IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_SmallOrbXPAmount, (app::OrbSpawnerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF3C0, int32_t, get_MediumOrbXPAmount, (app::OrbSpawnerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, get_LargeOrbXPAmount, (app::OrbSpawnerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061CDA0, void, OnGameReset, (app::OrbSpawnerManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475BBD8, OrbSpawnerManager_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0061CE80, void, Spawn, (app::OrbSpawnerManager * this_ptr, app::OrbSpawnerManager_ItemType__Enum item_type, app::Vector2 position, app::Vector2 velocity, app::DropPickup_State__Enum initial_state, bool override_gravity, app::Vector3 gravity_override, app::Transform* transform_source, int32_t override_value))
    IL2CPP_REGISTER_METHOD(0x0061D060, void, Awake, (app::OrbSpawnerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061D3A0, void, OnDestroy, (app::OrbSpawnerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061D690, void, OnGameSerializeLoad, (app::OrbSpawnerManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742C58, OrbSpawnerManager_OnGameSerializeLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0061D770, void, FixedUpdate, (app::OrbSpawnerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061DC90, void, ctor, (app::OrbSpawnerManager * this_ptr))
} // namespace app::classes::OrbSpawnerManager
