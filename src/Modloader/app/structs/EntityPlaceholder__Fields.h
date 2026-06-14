#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/EntityPlaceholder_CachedEntityComponents.h>
#include <Modloader/app/structs/EntityPlaceholder_SpawnMode__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_EntityPlaceholder_SpawnMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_EntityPlaceholder_CachedEntityComponents_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED
struct MoonReference_1_ISwitch_;
struct DynamicDataResolver;
struct GameObject;
struct EntitySpawnSetup;
struct List_1_PhysicalSystemManager_;
struct EntityPlaceholder_BaseEntityPlaceholderSettings;
struct ISwitch;
struct Transform;
struct SceneRoot;
struct MoonGuid;
struct AllowedEntityArea;
struct String;
struct List_1_Moon_AxisAlignedBox_;
struct Action_1_Damage_;
struct Action_1_DamageResult_;
struct Entity;
struct Type;
struct TimeSlicedActivationTask;
struct List_1_UnityEngine_GameObject_;
struct EntityPlaceholder__Fields {
    struct MonoBehaviour__Fields _;
    bool ShouldHackTrailer;
    EntityPlaceholder_SpawnMode__Enum SpawnOn;

    struct MoonReference_1_ISwitch_* SpawnEvent;
    bool DontTurnOnSpawn;
    bool PlaySpawnTask;
    bool PlaySpawnAnimAlsoOnFirstSpawn;
    bool AllowSpawnDuringRace;
    bool _PreventEnemyFromBeingFrustrumSuspended_k__BackingField;
    struct DynamicDataResolver* m_dataResolver;
    struct GameObject* EntityPrefab;
    struct EntitySpawnSetup* OptionalSpawnSetup;
    bool RespawnOnTimeout;
    bool RespawnOnScreen;
    float RespawnTime;
    float MinSpawnDelay;
    float MinDistanceFromPlayer;
    bool AutocheckForPhysicalSetupsOnSceneSaved;
    struct List_1_PhysicalSystemManager_* m_overlapingPhysicalSystems;
    bool AutosetupPositionInOnSand;
    bool TrasferPlaceholderRotation;
    bool SetGravityAngle;
    bool UseZoneDifficulty;
    int32_t OverrideDifficulty;
    bool SpawnOnGround;
    float PlaceOnGroundOffset;
    float AdditionalSpawnPadding;
    struct EntityPlaceholder_BaseEntityPlaceholderSettings* Settings;
    struct LayerMask GroundMask;
    float GroundCheckDistance;
    bool m_isDead;
    struct ISwitch* m_spawnEvent;
    float m_respawnTime;
    struct Transform* m_transform;
    struct SceneRoot* m_sceneRoot;
    struct MoonGuid* m_sceneRootGUID;
    bool m_firstInstantiation;
    bool m_firstSpawn;
    bool m_checkpointSpawn;
    bool m_delayedSpawnOnEvent;
    struct Vector3 m_feetDelta;
    struct AllowedEntityArea* m_spawnTriggerArea;
    bool m_hadMinDistanceFromOri;
    int32_t m_minDistToScreenFrameIndex;
    struct Vector3 spawnPosition;
    bool m_hasGroundCheckCache;
    bool m_hitGroundCache;
    struct RaycastHit m_groundCheckCache;
    struct String* _SpawnManagerDebug_k__BackingField;
    struct EntityPlaceholder_CachedEntityComponents m_entityCachedComponents;
    bool m_hasRemovedEntityFromSceneRootLists;
    struct GameObject* m_pooledEntity;
    bool m_prewarmed;
    struct List_1_Moon_AxisAlignedBox_* AllowedZones;
    struct List_1_Moon_AxisAlignedBox_* PatrolZones;
    struct List_1_Moon_AxisAlignedBox_* SpawnTriggerZones;
    bool SetParamsForChild;
    struct Action_1_Damage_* OnCurrentInstanceDeathBehaviourEnd;
    struct Action_1_DamageResult_* OnCurrentInstanceHealthZero;
    struct Entity* m_currentEntity;
    struct Type* m_spawnedEntityType;
    bool m_isEnemyEntityPlaceholder;
    struct TimeSlicedActivationTask* m_entityPrewarmTask;
    struct List_1_UnityEngine_GameObject_* m_entityGameObjects;
    float m_enableTime;
    float m_minDistToScreen;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_DamageResult_.h>
#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/AllowedEntityArea.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityPlaceholder_BaseEntityPlaceholderSettings.h>
#include <Modloader/app/structs/EntitySpawnSetup.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ISwitch.h>
#include <Modloader/app/structs/List_1_Moon_AxisAlignedBox_.h>
#include <Modloader/app/structs/List_1_PhysicalSystemManager_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/MoonReference_1_ISwitch_.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSlicedActivationTask.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_EntityPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
