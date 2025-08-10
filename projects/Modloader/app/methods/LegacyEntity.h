#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/BehaviourTree_1.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/List_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/RespawningPlaceholder.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LegacyEntity {
    IL2CPP_REGISTER_METHOD(0x00A1DC40, app::StateMachine_2*, get_StateMachine, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1DD80, app::BehaviourTree_1*, get_BehaviourTree, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1DEC0, bool, get_IsStateMachineEnitity, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1DF80, bool, get_IsBehaviorTreeEntity, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::List_1_Moon_ISuspendable_*, GetHitStopAutoSuspendables, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1E040, void, OnSceneUnloaded, app::LegacyEntity* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x00A1E200, void, ReclaimOwernship, app::LegacyEntity* this_ptr, app::RespawningPlaceholder* placeholder)
    IL2CPP_REGISTER_METHOD(0x00A1E4E0, void, FreeOwnership, app::LegacyEntity* this_ptr, app::RespawningPlaceholder* placeholder)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeOptimized, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1E6E0, bool, get_IsInWater, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1E720, bool, get_IsInPetrifiedFog, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1E760, void, Drown, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1EA40, bool, IsOnScreen, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1EC80, void, Awake, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1EF30, void, OnEnable, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, SetSceneRoot, app::LegacyEntity* this_ptr, app::MoonGuid* scene_root)
    IL2CPP_REGISTER_METHOD(0x00A1F010, void, OnDestroy, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1F220, void, Serialize, app::LegacyEntity* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00A1F3A0, void, Start, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1F490, void, FixedUpdate, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1F4F0, bool, get_PlayerIsToLeft, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1F520, app::Vector3, get_PlayerPosition, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00736690, void, set_Position, app::LegacyEntity* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0058E220, app::Quaternion, get_Rotation, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1F680, void, set_Rotation, app::LegacyEntity* this_ptr, app::Quaternion value)
    IL2CPP_REGISTER_METHOD(0x00A1F750, app::Vector3, get_PositionToPlayerPosition, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1F950, app::Vector3, get_StartPositionToPlayerPosition, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1FA70, bool, get_LeftOfStartPosition, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1FAA0, app::Vector3, get_PositionToStartPosition, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1FBC0, app::Vector3, get_StartPosition, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1FBE0, void, set_StartPosition, app::LegacyEntity* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00A1FC00, bool, AfterTime, app::LegacyEntity* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x00A1FC40, void, ctor, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005065D0, bool, get_IsSuspended, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005065E0, void, set_IsSuspended, app::LegacyEntity* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FC380, app::SuspendableMask__Enum, get_Mask, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1FE30, void, set_Mask, app::LegacyEntity* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimedRespawn, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1FEF0, void, RegisterRespawnDelegate, app::LegacyEntity* this_ptr, app::Action* on_respawn)
    IL2CPP_REGISTER_METHOD(0x00A20150, void, PlaySound_1, app::LegacyEntity* this_ptr, app::SoundSource* sound)
    IL2CPP_REGISTER_METHOD(0x00A20210, void, StopSound, app::LegacyEntity* this_ptr, app::SoundSource* sound)
    IL2CPP_REGISTER_METHOD(0x00A202D0, void, PlaySound_2, app::LegacyEntity* this_ptr, app::SoundProvider* sound)
    IL2CPP_REGISTER_METHOD(0x00A20420, void, SpawnPrefab_1, app::LegacyEntity* this_ptr, app::PrefabSpawner* prefab_spawner)
    IL2CPP_REGISTER_METHOD(0x00A204E0, void, SpawnPrefab_2, app::LegacyEntity* this_ptr, app::GameObject* prefab)
    IL2CPP_REGISTER_METHOD(0x00A20690, void, DestroyPrefab, app::LegacyEntity* this_ptr, app::PrefabSpawner* prefab_spawner)
    IL2CPP_REGISTER_METHOD(0x00A20810, void, ActivateDamageDealer, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A20830, void, DeactivateDamageDealer, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A20850, void, ActivateTargetting, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A20870, void, DeactivateTargetting, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A20890, void, OnFrustumEnter, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00788D40, void, OnFrustumExit, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_InsideFrustum, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A20A10, app::Bounds, get_Bounds, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A20C50, bool, PlayerInsideSameScene, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnFreeze, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUnfreeze, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHitStopStart, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnHitStopEnd, app::LegacyEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IHitStopReceiver_get_gameObject, app::LegacyEntity* this_ptr)
} // namespace app::classes::LegacyEntity
