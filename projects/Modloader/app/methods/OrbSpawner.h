#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::OrbSpawner {
    IL2CPP_REGISTER_METHOD(0x0061AEE0, void, CopySettings, (app::OrbSpawner * this_ptr, app::OrbSpawner* other))
    IL2CPP_REGISTER_METHOD(0x0061AF10, void, Awake, (app::OrbSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061B150, void, OnDestroy, (app::OrbSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061B330, void, SetSpawnOrbsAnimatorTrigger, (app::OrbSpawner * this_ptr, app::EventTriggerAnimator* spawn_orbs_animator_trigger))
    IL2CPP_REGISTER_METHOD(0x0061B650, void, SetNumberOfExpOrbsOfEachSize, (app::OrbSpawner * this_ptr, int32_t amount))
    IL2CPP_REGISTER_METHOD(0x0061B850, void, SpawnExpOrbs, (app::OrbSpawner * this_ptr, int32_t amount, app::Vector2 force, int32_t* spawned_orb_index))
    IL2CPP_REGISTER_METHOD(0x0061B9F0, void, SpawnHealthOrbs, (app::OrbSpawner * this_ptr, app::Vector2 force, int32_t* spawned_orb_index))
    IL2CPP_REGISTER_METHOD(0x0061BA70, void, SpawnEnergyOrbs, (app::OrbSpawner * this_ptr, app::Vector2 force, int32_t* spawned_orb_index))
    IL2CPP_REGISTER_METHOD(0x0061BAF0, float, get_DamageDirectionSpeed, (app::OrbSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061BB00, void, SpawnOrbs_1, (app::OrbSpawner * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047456C0, OrbSpawner_SpawnOrbs__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0061BB10, void, SpawnOrbs_2, (app::OrbSpawner * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0061BE70, bool, SpawnLoot, (app::OrbSpawner * this_ptr, app::Vector2 force))
    IL2CPP_REGISTER_METHOD(0x0061C2E0, void, SpawnPickup, (app::OrbSpawner * this_ptr, app::OrbSpawnerManager_ItemType__Enum item, app::Vector2 force, int32_t i, int32_t override_value))
    IL2CPP_REGISTER_METHOD(0x0061C7B0, void, OnDrawGizmosSelected, (app::OrbSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061CC30, void, ctor, (app::OrbSpawner * this_ptr))
} // namespace app::classes::OrbSpawner
