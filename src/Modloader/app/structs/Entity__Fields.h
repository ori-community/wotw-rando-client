#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Entity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Entity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Entity__Fields_DEFINED)
#include <Modloader/app/structs/DamageRecieverType__Enum.h>
#include <Modloader/app/structs/Entity_EntityState__Enum.h>
#include <Modloader/app/structs/Entity_EntityVitalState__Enum.h>
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Entity_EntityVitalState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Entity_EntityState__Enum_DEFINED) && defined(IL2CPP_STRUCT_NavigationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Metric__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageRecieverType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Entity__Fields_DEFINED
struct DynamicDataResolver;
struct EntityPlaceholder;
struct EntityAvatar;
struct EntitySpatialData;
struct SoundBankEntry;
struct Transform;
struct EntityTask;
struct OrbSpawner;
struct AllowedEntityArea;
struct Action_1_DamageResult_;
struct Action;
struct Vitals;
struct Sensor;
struct BehaviourTree;
struct List_1_Moon_ISuspendable_;
struct DamageDealer__Array;
struct Locomotion__Array;
struct EntityContext;
struct INavigationAgent;
struct InterfaceCache;
struct EntityTask__Array;
struct List_1_Moon_IEntityOwned_;
struct IEntityOwned__Array;
struct List_1_Moon_BehaviourSystem_ITask_;
struct ITask;
struct IEntityEventListener__Array;
struct EntityReactions;
struct String;
struct Dictionary_2_Moon_IEntityOwned_System_String_;
struct EntityCinematicData;
struct EntityCinematicTask;
struct SoundHost;
struct IEntityLocomotion;
struct BaseNPC;
struct List_1_Moon_BehaviourSystem_EntityTask_;
struct List_1_Moon_BehaviourSystem_EntityBehaviourNode_;
struct Entity__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct EntityPlaceholder* Placeholder;
    struct EntityAvatar* Avatar;
    struct EntitySpatialData* SpacialData;
    struct SoundBankEntry* SoundBank;
    bool DebugBehaviourHistory;
    bool DrawGizmos;
    Entity_EntityVitalState__Enum VitalState;

    bool CanDrown;
    bool InstantKillWhenDrowning;
    bool OverrideNavigationCenter;
    struct Transform* NavigationCenterOveride;
    struct EntityTask* SpawnTask;
    bool SpawnOrbsOnDeath;
    struct OrbSpawner* OrbSpawner;
    struct AllowedEntityArea* AllowedArea;
    struct AllowedEntityArea* PatrolArea;
    struct Action_1_DamageResult_* OnDeathBehaviourFinished;
    struct Action_1_DamageResult_* OnHealthReachZero;
    struct Action* OnPostAwake;
    struct Vitals* m_vitals;
    struct Sensor* m_sensor;
    struct BehaviourTree* m_behaviourTree;
    struct List_1_Moon_ISuspendable_* m_hitStopSuspendables;
    struct DamageDealer__Array* m_damageDealers;
    struct Locomotion__Array* m_locomotions;
    struct Vector3 m_spawnPosition;
    struct EntityContext* m_entityContex;
    Entity_EntityState__Enum m_currentState;

    struct INavigationAgent* m_navigationAgent;
    struct InterfaceCache* m_navigationAgentCache;
    int64_t m_frameCurrentAreaTypeLastChecked;
    NavigationType__Enum m_currentAreaType;

    struct EntityTask__Array* m_tasks;
    struct List_1_Moon_IEntityOwned_* m_ownedComponents;
    struct InterfaceCache* m_ownedComponentsCache;
    struct InterfaceCache* m_treeEntityBehavioursCache;
    struct IEntityOwned__Array* m_treeEntityBehaviours;
    struct List_1_Moon_BehaviourSystem_ITask_* m_executingTasks;
    struct ITask* m_lastExecutedTask;
    struct IEntityEventListener__Array* m_entityEventListeners;
    struct InterfaceCache* m_entityEventListenerCache;
    struct EntityReactions* m_reactions;
    bool m_registeredToSceneRootDisabled;
    bool m_componentsCached;
    struct InterfaceCache* m_tasksCache;
    bool m_unserializedInitializationExecuted;
    bool m_firstSpawn;
    bool m_playSpawnTask;
    float m_outOfBoundsCheckTimer;
    bool m_disableDeathOutOfBounds;
    bool m_isOwnershipFreed;
    float m_drownDamageTimer;
    struct String* m_entityPlaceholderPath;
    struct String* m_profilerFixedUpdate;
    struct String* m_profilerUpdate;
    Metric__Enum m_moonMetricUpdate;

    struct Dictionary_2_Moon_IEntityOwned_System_String_* m_profilerBehaviourUpdates;
    struct EntityCinematicData* m_cinematicData;
    struct EntityCinematicTask* m_cinematicTask;
    DamageRecieverType__Enum EntityType;

    bool DoNotDestroyOnDeath;
    int64_t _PlaceholderID_k__BackingField;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    bool _HasStarted_k__BackingField;
    struct SoundHost* m_soundHost;
    bool _HasVitals_k__BackingField;
    bool m_hasCachedVitals;
    bool m_hasCachedSensor;
    bool _HasSensor_k__BackingField;
    struct InterfaceCache* m_locomotionCache;
    struct IEntityLocomotion* _Locomotion_k__BackingField;
    struct BaseNPC* m_legacyNpc;
    bool m_hasPlatformMovement;
    bool _InvalidateParentTimelineCache_k__BackingField;
    struct TrackingExclusions _TrackingExclusions_k__BackingField;
    struct Vector2 CameraZoomRangeModification;
    struct Vector2 TargetOffset;
    struct Vector2 AdditionalPadding;
    float m_nonAggroTimer;
    float m_aggroLerpSpeed;
    bool m_hasEngaged;
    float m_cameraTargetAggroValue;
    bool m_isTaskPausingLocomotion_Dirty;
    bool m_isNodePausingLocomotion_Dirty;
    bool m_isReactionPlaying_Dirty;
    struct List_1_Moon_BehaviourSystem_EntityTask_* m_tasksPauseLocomotion;
    struct List_1_Moon_BehaviourSystem_EntityTask_* m_tasksMightPauseLocomotion;
    struct List_1_Moon_BehaviourSystem_EntityBehaviourNode_* m_nodesPauseLocomotion;
    struct List_1_Moon_BehaviourSystem_EntityBehaviourNode_* m_nodesMightPauseLocomotion;
    struct List_1_Moon_BehaviourSystem_ITask_* m_reactionsBehaviours;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Entity__Fields_FWDDECL)
#define IL2CPP_STRUCT_Entity__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_DamageResult_.h>
#include <Modloader/app/structs/AllowedEntityArea.h>
#include <Modloader/app/structs/BaseNPC.h>
#include <Modloader/app/structs/BehaviourTree.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/Dictionary_2_Moon_IEntityOwned_System_String_.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/EntityAvatar.h>
#include <Modloader/app/structs/EntityCinematicData.h>
#include <Modloader/app/structs/EntityCinematicTask.h>
#include <Modloader/app/structs/EntityContext.h>
#include <Modloader/app/structs/EntityPlaceholder.h>
#include <Modloader/app/structs/EntityReactions.h>
#include <Modloader/app/structs/EntitySpatialData.h>
#include <Modloader/app/structs/EntityTask.h>
#include <Modloader/app/structs/EntityTask__Array.h>
#include <Modloader/app/structs/IEntityEventListener__Array.h>
#include <Modloader/app/structs/IEntityLocomotion.h>
#include <Modloader/app/structs/IEntityOwned__Array.h>
#include <Modloader/app/structs/INavigationAgent.h>
#include <Modloader/app/structs/ITask.h>
#include <Modloader/app/structs/InterfaceCache.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_EntityBehaviourNode_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_EntityTask_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_ITask_.h>
#include <Modloader/app/structs/List_1_Moon_IEntityOwned_.h>
#include <Modloader/app/structs/List_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/Locomotion__Array.h>
#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/Sensor.h>
#include <Modloader/app/structs/SoundBankEntry.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_Entity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Entity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Entity__Fields_FWDDECL)
#include <Modloader/app/structs/Entity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Entity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
