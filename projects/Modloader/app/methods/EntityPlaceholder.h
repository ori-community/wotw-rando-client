#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AxisAlignedBox.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityPlaceholder.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData_EntityCategory__Enum.h>
#include <Modloader/app/structs/EntityPlaceholder_BaseEntityPlaceholderSettings.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#include <Modloader/app/structs/List_1_Moon_Entity___Array.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vitals.h>

namespace app::classes::EntityPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00C93750, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00C93A10, void, ClearEnemyLists, )
    IL2CPP_REGISTER_METHOD(0x00C93AD0, bool, get_EffectivePlaySpawnTask, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_PreventEnemyFromBeingFrustrumSuspended, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_PreventEnemyFromBeingFrustrumSuspended, app::EntityPlaceholder* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::GameObject*, get_Prefab, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresGroundToSpawn, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C93B10, float, get_EffectiveRespawnTime, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C93CA0, bool, get_EffectiveRespawnOnScreen, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, get_PlaceholderID, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0071EAB0, app::String*, get_SpawnManagerDebug, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A43000, void, set_SpawnManagerDebug, app::EntityPlaceholder* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x00C93CD0, app::GameObject*, get_PooledEntity, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C0CBA0, bool, get_IsEnemyEntityPlaceholder, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00813F90, app::Entity*, get_CurrentEntity, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C93DA0, void, set_CurrentEntity, app::EntityPlaceholder* this_ptr, app::Entity* value)
    IL2CPP_REGISTER_METHOD(0x00C94130, app::GameObject*, get_CurrentEntityGameObject, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C94210, app::Transform*, get_CurrentEntityTransform, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C942F0, app::MoonAnimator*, get_CurrentEntityAnimator, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C943E0, app::Vitals*, get_CurrentEntityVitals, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CheckForOverlap, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C944C0, void, ClearPrefabLinks, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C944D0, bool, get_CanSpawn, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C945A0, void, InstaKill, app::EntityPlaceholder* this_ptr, bool spawn_loot)
    IL2CPP_REGISTER_METHOD(0x00C94620, void, SetCurrentInstanceInEditor, app::EntityPlaceholder* this_ptr, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x00C946B0, void, SetAutoSpawn, app::EntityPlaceholder* this_ptr, bool auto_spawn, app::Component_1* spawn_manager)
    IL2CPP_REGISTER_METHOD(
        0x00C946D0,
        int32_t,
        DetermineDifficulty,
        app::Transform* transform,
        bool use_zone_difficulty,
        int32_t override_difficulty,
        app::EntityPlaceholderScalingData* scaling
    )
    IL2CPP_REGISTER_METHOD(
        0x00C94A10,
        void,
        ScaleVitals,
        app::Transform* transform,
        app::Vitals* vitals,
        app::EntityPlaceholderScalingData* scaling,
        app::EntityPlaceholder_BaseEntityPlaceholderSettings* settings,
        int32_t difficulty
    )
    IL2CPP_REGISTER_METHOD(0x00C94D30, float, ScaleHealthBasedOnGameDifficulty, float health, app::EntityPlaceholderScalingData_EntityCategory__Enum category)
    IL2CPP_REGISTER_METHOD(
        0x00C94E90,
        void,
        ScaleOrbs,
        app::Entity* entity,
        app::EntityPlaceholderScalingData* scaling,
        app::EntityPlaceholder_BaseEntityPlaceholderSettings* settings,
        int32_t difficulty
    )
    IL2CPP_REGISTER_METHOD(0x00C950B0, void, InstantiateInstance, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C95F00, void, CreateCachedComponents, app::EntityPlaceholder* this_ptr, app::GameObject* entity)
    IL2CPP_REGISTER_METHOD(0x00C96590, void, PoolCurrentInstance, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C966A0, void, RegisterSceneRoot, app::EntityPlaceholder* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x00C967D0, void, Spawn, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStart, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C96DB0, void, Awake, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C97450, void, PrewarmPooledInstance, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C97A00, void, OnPrewarmCompleted, app::EntityPlaceholder* this_ptr, bool success)
    IL2CPP_REGISTER_METHOD(0x00C97BC0, void, OnEnable, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlaceholderEnable, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C98040, void, OnDisable, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPlaceholderDisable, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C98290, void, OnRestoreCheckpoint, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C982B0, void, OnDestroy, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C98550, void, AddEntityToGlobalList, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x00C98830, void, RemoveEntityFromGlobalList, app::Entity* entity)
    IL2CPP_REGISTER_METHOD(0x00C989B0, void, RunNullCleanupFromGlobalList, app::Type* entity_type)
    IL2CPP_REGISTER_METHOD(0x00C98CB0, app::List_1_Moon_Entity_*, GetAllEntities, app::Type* entity_type)
    IL2CPP_REGISTER_METHOD(0x00C98E10, app::List_1_Moon_Entity___Array*, GenerateArrayWithGetAllEntities, )
    IL2CPP_REGISTER_METHOD(0x00C98EE0, void, OnGameSerializeLoad, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C98F10, void, OnSceneRootPreDisable, app::EntityPlaceholder* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x00C99160, void, EnsureSceneRootIsCached, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C99360, void, OnHealthZero, app::EntityPlaceholder* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x00C99560, void, OnDeath, app::EntityPlaceholder* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_EntityIsDead, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C99970, bool, get_HasBeenKilled, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C99990, void, UpdateDistanceToScreen, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C99BA0, void, FixedUpdate, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C99D40, void, ClearFrameCache, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C99D80, bool, IsPhysicsReady, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C99E90, void, UpdateAutoSpawnState, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9A0F0, bool, ShouldAutoSpawn, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9A3E0, bool, CanSpawnWithRegardsToScreen, app::EntityPlaceholder* this_ptr, bool is_on_screen, bool can_spawn_on_screen)
    IL2CPP_REGISTER_METHOD(0x00C9A3F0, void, UpdateSpawnOnEventState, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9A4F0, bool, get_IsOnScreenPaddedExtended, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9A520, bool, get_IsOnScreenPadded, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9A550, bool, get_IsOnScreen, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9A580, bool, IsOriInTriggerSpawnZone, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9A6C0, bool, HasMinDistanceFromOri, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9A8D0, bool, GroundCheckRaycast, app::EntityPlaceholder* this_ptr, app::RaycastHit* hit_info)
    IL2CPP_REGISTER_METHOD(0x00C9AB60, void, InstantiateFromPooledObj, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9BAD0, void, InitializeOriInsideZoneToSpawnTrigger, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9BE70, void, InitializeAllowedAreaForEntity, app::EntityPlaceholder* this_ptr, app::Entity** entity)
    IL2CPP_REGISTER_METHOD(0x00C9C260, void, InitializePatrolAreaForEntity, app::EntityPlaceholder* this_ptr, app::Entity** entity)
    IL2CPP_REGISTER_METHOD(0x00C9C650, app::Rect, ForceBoxAreaToWorldCoords, app::EntityPlaceholder* this_ptr, app::AxisAlignedBox* box, app::Transform* root)
    IL2CPP_REGISTER_METHOD(0x00C9CB40, void, OnEntityPostAwake, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9CD90, bool, get_IsSuspended, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9CDA0, void, set_IsSuspended, app::EntityPlaceholder* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00C9CDB0, app::SuspendableMask__Enum, get_Mask, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9CDC0, void, set_Mask, app::EntityPlaceholder* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsUsingVariations, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9CE80, app::SpiritShardType__Enum, GetEquippedAggressorOrSuppresorShard, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanUseAutosetupPositionInOnSand, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9CFA0, void, ctor, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C9D5A0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDisableOnRecordablePreview_get_gameObject, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_1, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_2, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_3, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_4, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_5, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_6, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_7, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_8, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_9, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_10, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_11, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_12, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_13, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_14, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_15, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_16, app::EntityPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::IMoonTypeResolver*, GetResolverForType_17, app::EntityPlaceholder* this_ptr)
} // namespace app::classes::EntityPlaceholder
