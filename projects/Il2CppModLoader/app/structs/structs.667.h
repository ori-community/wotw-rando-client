namespace app {
    struct BugHornEntity__StaticFields {
    };

    struct BugHornEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BugHornEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BugHornEntity__VTable vtable;
    };

    enum class BugHornEntity_BugHornType__Enum : int32_t {
        Shelled = 0x00000000,
        Naked = 0x00000001,
    };

    struct BugHornEntity_BugHornType__Enum__Boxed {
        struct BugHornEntity_BugHornType__Enum__Class* klass;
        MonitorData* monitor;
        BugHornEntity_BugHornType__Enum value;
    };

    struct BugHornEntity_BugHornType__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct BugHornEntity_BugHornType__Enum__StaticFields {
    };

    struct BugHornEntity_BugHornType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BugHornEntity_BugHornType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BugHornEntity_BugHornType__Enum__VTable vtable;
    };

    struct BugHornEntity_HornSettings {
        struct GameObject* hornModel;
        struct GameObject* hornDamageReceiversParent;
    };

    struct BugHornEntity_HornSettings__Boxed {
        struct BugHornEntity_HornSettings__Class* klass;
        MonitorData* monitor;
        struct BugHornEntity_HornSettings fields;
    };

    struct BugHornEntity_HornSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BugHornEntity_HornSettings__StaticFields {
    };

    struct BugHornEntity_HornSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BugHornEntity_HornSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BugHornEntity_HornSettings__VTable vtable;
    };

    struct HornBugGuardBehaviour__Fields {
        struct EntityBehaviour__Fields _;
        struct Vector3 _Target_k__BackingField;
        struct MoonAnimation* GuardStartAnimation;
        struct MoonAnimation* GuardLoop;
        int32_t AnimationPriority;
        struct ActiveAnimationHandle m_animationState;
        struct ILocomotionTurningHandler* m_turnHandler;
    };

    struct HornBugGuardBehaviour {
        struct HornBugGuardBehaviour__Class* klass;
        MonitorData* monitor;
        struct HornBugGuardBehaviour__Fields fields;
    };

    struct HornBugGuardBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ExecutingObject;
        VirtualInvokeData set_ExecutingObject;
        VirtualInvokeData get_Entity;
        VirtualInvokeData get_Status;
        VirtualInvokeData get_ShouldPauseTree;
        VirtualInvokeData get_ShouldPauseLocomotion;
        VirtualInvokeData get_Utility;
        VirtualInvokeData get_DebugData;
        VirtualInvokeData get_OnEndBehaviourEvent;
        VirtualInvokeData set_OnEndBehaviourEvent;
        VirtualInvokeData Execute;
        VirtualInvokeData Interrupt;
        VirtualInvokeData UpdateBehaviour;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_Utility_1;
        VirtualInvokeData Interrupt_1;
        VirtualInvokeData GetShouldPauseTree;
        VirtualInvokeData GetShouldPauseLocomotion;
        VirtualInvokeData OnInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnUpdateBehaviour;
        VirtualInvokeData OnEndBehaviour;
    };

    struct HornBugGuardBehaviour__StaticFields {
    };

    struct HornBugGuardBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HornBugGuardBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HornBugGuardBehaviour__VTable vtable;
    };

    struct HornBugIdleBehaviour__Fields {
        struct EntityBehaviour__Fields _;
        struct ClipAnimation* IdleAnimationRegular;
        struct ClipAnimation* IdleAnimationAggrod;
        int32_t IdleAnimationPriority;
    };

    struct HornBugIdleBehaviour {
        struct HornBugIdleBehaviour__Class* klass;
        MonitorData* monitor;
        struct HornBugIdleBehaviour__Fields fields;
    };

    struct HornBugIdleBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ExecutingObject;
        VirtualInvokeData set_ExecutingObject;
        VirtualInvokeData get_Entity;
        VirtualInvokeData get_Status;
        VirtualInvokeData get_ShouldPauseTree;
        VirtualInvokeData get_ShouldPauseLocomotion;
        VirtualInvokeData get_Utility;
        VirtualInvokeData get_DebugData;
        VirtualInvokeData get_OnEndBehaviourEvent;
        VirtualInvokeData set_OnEndBehaviourEvent;
        VirtualInvokeData Execute;
        VirtualInvokeData Interrupt;
        VirtualInvokeData UpdateBehaviour;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_Utility_1;
        VirtualInvokeData Interrupt_1;
        VirtualInvokeData GetShouldPauseTree;
        VirtualInvokeData GetShouldPauseLocomotion;
        VirtualInvokeData OnInitialize;
        VirtualInvokeData OnExecute;
        VirtualInvokeData OnUpdateBehaviour;
        VirtualInvokeData OnEndBehaviour;
    };

    struct HornBugIdleBehaviour__StaticFields {
    };

    struct HornBugIdleBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HornBugIdleBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HornBugIdleBehaviour__VTable vtable;
    };

    struct HornBugPlaceholder__Fields {
        struct EntityPlaceholder__Fields _;
        bool CanFlutter;
        BugHornEntity_BugHornType__Enum VariationType;
    };

    struct HornBugPlaceholder {
        struct HornBugPlaceholder__Class* klass;
        MonitorData* monitor;
        struct HornBugPlaceholder__Fields fields;
    };

    struct HornBugPlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
        VirtualInvokeData OnSceneRootPreDisable;
        VirtualInvokeData get_Prefab;
        VirtualInvokeData get_RequiresGroundToSpawn;
        VirtualInvokeData get_CheckForOverlap;
        VirtualInvokeData ClearPrefabLinks;
        VirtualInvokeData get_CanSpawn;
        VirtualInvokeData InstantiateInstance;
        VirtualInvokeData PoolCurrentInstance;
        VirtualInvokeData Spawn;
        VirtualInvokeData OnStart;
        VirtualInvokeData OnPlaceholderEnable;
        VirtualInvokeData OnPlaceholderDisable;
        VirtualInvokeData OnRestoreCheckpoint;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnHealthZero;
        VirtualInvokeData OnDeath;
        VirtualInvokeData UpdateAutoSpawnState;
        VirtualInvokeData UpdateSpawnOnEventState;
        VirtualInvokeData get_IsOnScreenPaddedExtended;
        VirtualInvokeData get_IsOnScreenPadded;
        VirtualInvokeData get_IsOnScreen;
        VirtualInvokeData InstantiateFromPooledObj;
        VirtualInvokeData IsUsingVariations;
        VirtualInvokeData CanUseAutosetupPositionInOnSand;
    };

    struct HornBugPlaceholder__StaticFields {
    };

    struct HornBugPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HornBugPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HornBugPlaceholder__VTable vtable;
    };

    enum class HornBugSpawnSetup_Anim__Enum : int32_t {
        SpawnSlow = 0x00000000,
        SpawnFast = 0x00000001,
        SpawnWallBurst = 0x00000002,
    };

    struct HornBugSpawnSetup_Anim__Enum__Boxed {
        struct HornBugSpawnSetup_Anim__Enum__Class* klass;
        MonitorData* monitor;
        HornBugSpawnSetup_Anim__Enum value;
    };

    struct HornBugSpawnSetup__Fields {
        struct EntitySpawnSetup__Fields _;
        HornBugSpawnSetup_Anim__Enum SpawnAnimation;

        struct EntitySpawnSetup_AfterSpawnStateSetupHolder* StateChange;
    };

    struct HornBugSpawnSetup {
        struct HornBugSpawnSetup__Class* klass;
        MonitorData* monitor;
        struct HornBugSpawnSetup__Fields fields;
    };

    struct HornBugSpawnSetup_Anim__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct HornBugSpawnSetup_Anim__Enum__StaticFields {
    };

    struct HornBugSpawnSetup_Anim__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HornBugSpawnSetup_Anim__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HornBugSpawnSetup_Anim__Enum__VTable vtable;
    };

    struct HornBugSpawnSetup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HornBugSpawnSetup__StaticFields {
    };

    struct HornBugSpawnSetup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HornBugSpawnSetup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HornBugSpawnSetup__VTable vtable;
    };

    struct HornBugSpawnTask__Fields {
        struct EntitySpawnTask__Fields _;
        struct MoonTimeline* SpawnSlowTimeline;
        struct MoonTimeline* SpawnFastTimeline;
        struct MoonTimeline* SpawnWallBurstTimeline;
        struct EventTriggerAnimator* WallBurstTrigger;
        struct Transform* RootJNT;
        struct MoonTimeline* m_currentTimeline;
    };

    struct HornBugSpawnTask {
        struct HornBugSpawnTask__Class* klass;
        MonitorData* monitor;
        struct HornBugSpawnTask__Fields fields;
    };

    struct HornBugSpawnTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData get_Entity;
        VirtualInvokeData OnExecuteTask_1;
        VirtualInvokeData OnInitializeTask_1;
        VirtualInvokeData OnEnterTask_1;
        VirtualInvokeData OnExitTask_1;
        VirtualInvokeData OnResetTask_1;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData SetActivateDamageDealers;
        VirtualInvokeData SetPlatformMovementColliderEnabledState;
    };

    struct HornBugSpawnTask__StaticFields {
    };

    struct HornBugSpawnTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HornBugSpawnTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HornBugSpawnTask__VTable vtable;
    };

    struct __declspec(align(8)) HornBugSpawnTask_c_DisplayClass6_0__Fields {
        struct HornBugSpawnSetup* hornBugSpawnSetup;
        struct HornBugSpawnTask* __4__this;
    };

    struct HornBugSpawnTask_c_DisplayClass6_0 {
        struct HornBugSpawnTask_c_DisplayClass6_0__Class* klass;
        MonitorData* monitor;
        struct HornBugSpawnTask_c_DisplayClass6_0__Fields fields;
    };

    struct HornBugSpawnTask_c_DisplayClass6_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HornBugSpawnTask_c_DisplayClass6_0__StaticFields {
    };

    struct HornBugSpawnTask_c_DisplayClass6_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HornBugSpawnTask_c_DisplayClass6_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HornBugSpawnTask_c_DisplayClass6_0__VTable vtable;
    };

    struct __declspec(align(8)) BatchedPhysicscast_1_UnityEngine_RaycastCommand___Fields {
        struct NativeArray_1_UnityEngine_RaycastCommand_ m_cmds;
        struct NativeArray_1_UnityEngine_RaycastHit_ m_hits;
        struct JobHandle m_job;
        int32_t m_capacity;
    };

    struct BatchedPhysicscast_1_UnityEngine_RaycastCommand_ {
        struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___Class* klass;
        MonitorData* monitor;
        struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___Fields fields;
    };

    struct BatchedRaycast__Fields {
        struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___Fields _;
    };

    struct BatchedRaycast {
        struct BatchedRaycast__Class* klass;
        MonitorData* monitor;
        struct BatchedRaycast__Fields fields;
    };

    struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData __unknown;
    };

    struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___StaticFields {
    };

    struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___VTable vtable;
    };

    struct BatchedRaycast__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData ScheduleBatch;
    };

    struct BatchedRaycast__StaticFields {
    };

    struct BatchedRaycast__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatchedRaycast__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatchedRaycast__VTable vtable;
    };

    struct __declspec(align(8)) BatchedPhysicscast_1_UnityEngine_SpherecastCommand___Fields {
        struct NativeArray_1_UnityEngine_SpherecastCommand_ m_cmds;
        struct NativeArray_1_UnityEngine_RaycastHit_ m_hits;
        struct JobHandle m_job;
        int32_t m_capacity;
    };

    struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand_ {
        struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___Class* klass;
        MonitorData* monitor;
        struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___Fields fields;
    };

    struct BatchedSpherecast__Fields {
        struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___Fields _;
    };

    struct BatchedSpherecast {
        struct BatchedSpherecast__Class* klass;
        MonitorData* monitor;
        struct BatchedSpherecast__Fields fields;
    };

    struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData __unknown;
    };

    struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___StaticFields {
    };

    struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___VTable vtable;
    };

    struct BatchedSpherecast__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData ScheduleBatch;
    };

    struct BatchedSpherecast__StaticFields {
    };

    struct BatchedSpherecast__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatchedSpherecast__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatchedSpherecast__VTable vtable;
    };

    struct __declspec(align(8)) CancellableController__Fields {
        struct List_1_Moon_Timeline_EventTriggerGameplayAnimator_* m_finishAnimators;
    };

    struct CancellableController {
        struct CancellableController__Class* klass;
        MonitorData* monitor;
        struct CancellableController__Fields fields;
    };

    struct CancellableController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CancellableController__StaticFields {
    };

    struct CancellableController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CancellableController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CancellableController__VTable vtable;
    };

    struct __declspec(align(8)) HitReactionController__Fields {
        struct List_1_Moon_Timeline_EventTriggerGameplayAnimator_* m_hitAccumulatorAnimators;
        struct List_1_Moon_Timeline_EventTriggerGameplayAnimator_* m_hitReactionAllowedAnimators;
    };

    struct HitReactionController {
        struct HitReactionController__Class* klass;
        MonitorData* monitor;
        struct HitReactionController__Fields fields;
    };

    struct HitReactionController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HitReactionController__StaticFields {
    };

    struct HitReactionController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReactionController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReactionController__VTable vtable;
    };

    enum class ShellShatterEffect_State__Enum : int32_t {
        NotIgnited = 0x00000000,
        DelayingTimeline = 0x00000001,
        PlayingTimeline = 0x00000002,
    };

    struct ShellShatterEffect_State__Enum__Boxed {
        struct ShellShatterEffect_State__Enum__Class* klass;
        MonitorData* monitor;
        ShellShatterEffect_State__Enum value;
    };

    struct ShellShatterEffect__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* ExplodeTimeline;
        struct MoonTimeline* DissolveTimeline;
        struct List_1_UnityEngine_Rigidbody_* Pieces;
        struct List_1_UnityEngine_Vector3_* InitialPositions;
        struct List_1_UnityEngine_Quaternion_* InitialRotations;
        struct List_1_UnityEngine_Collider_* PiecesColliders;
        float LifeTime;
        float Force;
        float ForceRadius;
        float UpwardsModifier;
        struct Transform* ExplosionOriginPoint;
        struct Vector3 ExplosionOriginOffset;
        ForceMode__Enum ExplosionMode;

        float GravitySpeed;
        struct AnimationCurve* GravityMultiplierOverLifetime;
        float HorizontalVelocityDamp;
        bool ExplodeOnEnable;
        float m_timer;
        ShellShatterEffect_State__Enum m_state;
    };

    struct ShellShatterEffect {
        struct ShellShatterEffect__Class* klass;
        MonitorData* monitor;
        struct ShellShatterEffect__Fields fields;
    };

    struct __declspec(align(8)) List_1_UnityEngine_Rigidbody___Fields {
        struct Rigidbody__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UnityEngine_Rigidbody_ {
        struct List_1_UnityEngine_Rigidbody___Class* klass;
        MonitorData* monitor;
        struct List_1_UnityEngine_Rigidbody___Fields fields;
    };

    struct IEnumerator_1_UnityEngine_Rigidbody_ {
        struct IEnumerator_1_UnityEngine_Rigidbody___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_UnityEngine_Rigidbody___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_UnityEngine_Rigidbody___StaticFields {
    };

    struct IEnumerator_1_UnityEngine_Rigidbody___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_UnityEngine_Rigidbody___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_UnityEngine_Rigidbody___VTable vtable;
    };

    struct List_1_UnityEngine_Rigidbody___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData RemoveAt_1;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData get_Count_2;
    };

    struct List_1_UnityEngine_Rigidbody___StaticFields {
        struct Rigidbody__Array* _emptyArray;
    };

    struct List_1_UnityEngine_Rigidbody___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_UnityEngine_Rigidbody___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_UnityEngine_Rigidbody___VTable vtable;
    };

    struct ShellShatterEffect_State__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct ShellShatterEffect_State__Enum__StaticFields {
    };

    struct ShellShatterEffect_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShellShatterEffect_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShellShatterEffect_State__Enum__VTable vtable;
    };

    struct ShellShatterEffect__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShellShatterEffect__StaticFields {
    };

    struct ShellShatterEffect__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShellShatterEffect__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShellShatterEffect__VTable vtable;
    };

    struct CrabKickUpReactionBehaviour__Fields {
        struct UpperKickReactionBehaviour__Fields _;
        float AirSpinRotationAmount;
        bool m_shouldSkipUpdate;
        struct SpikeSlugLocomotion* m_slugLocomotion;
    };

    struct CrabKickUpReactionBehaviour {
        struct CrabKickUpReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct CrabKickUpReactionBehaviour__Fields fields;
    };

    struct SpikeSlugLocomotion__Fields {
        struct GroundEntityLocomotion__Fields _;
        float MaxSpiningSpeed;
        struct FloatAnimationParameter* SpinToFallBlend;
        float SpiningSpeedDividerForAnimBlend;
        struct Transform* SpinTransform;
        float SurfaceCheckOrigin;
        float SurfaceCheckLenght;
        float FallDelay;
        struct Event_1* FlyAwaySpinSound;
        float m_continousRotationSpeed;
        float m_timeOnGround;
        float m_allowFallDelay;
    };

    struct SpikeSlugLocomotion {
        struct SpikeSlugLocomotion__Class* klass;
        MonitorData* monitor;
        struct SpikeSlugLocomotion__Fields fields;
    };

    struct SpikeSlugLocomotion__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData MoveToPoint;
        VirtualInvokeData MoveInTheDirection;
        VirtualInvokeData Stop;
        VirtualInvokeData get_TraversalTier;
        VirtualInvokeData set_TraversalTier;
        VirtualInvokeData get_FeetPosition;
        VirtualInvokeData get_HasArrivedAtTarget;
        VirtualInvokeData get_IsMovingToTarget;
        VirtualInvokeData get_GravityDirection;
        VirtualInvokeData OnEntityReset;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_PreviusPositionForWaterfallInteraction;
        VirtualInvokeData get_PositionForWaterfallInteraction;
        VirtualInvokeData get_SpeedForWaterfallInteraction;
        VirtualInvokeData set_SpeedForWaterfallInteraction;
        VirtualInvokeData get_BoundsForWaterfallInteraction;
        VirtualInvokeData get_WaterfallIntersectionMode;
        VirtualInvokeData get_RigidbodyForWaterfallInteraction;
        VirtualInvokeData get_IsFlamable;
        VirtualInvokeData Prewarm;
        VirtualInvokeData get_FeetTransform;
        VirtualInvokeData get_FeetPosition_1;
        VirtualInvokeData get_HasArrivedAtTarget_1;
        VirtualInvokeData get_Gravity;
        VirtualInvokeData set_Gravity;
        VirtualInvokeData get_Weight;
        VirtualInvokeData set_Weight;
        VirtualInvokeData get_Entity;
        VirtualInvokeData get_ShouldReset;
        VirtualInvokeData get_IsMovingToTarget_1;
        VirtualInvokeData get_GravityDirection_1;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData OnPrewarm;
        VirtualInvokeData OnEntityInitialization_1;
        VirtualInvokeData Awake;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData ConfigureStateMachine;
        VirtualInvokeData get_DefaultFSMState;
        VirtualInvokeData OnEntityReset_1;
        VirtualInvokeData ResetLocomotion;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData UpdateLocomotionBehaviours;
        VirtualInvokeData GetNextBehaviour;
        VirtualInvokeData MoveToPoint_1;
        VirtualInvokeData MoveInTheDirection_1;
        VirtualInvokeData Stop_1;
        VirtualInvokeData SetLookDirectionX;
        VirtualInvokeData SetLookDirection;
        VirtualInvokeData SetLookDirectionTowardsPoint;
        VirtualInvokeData get_LookDirection;
        VirtualInvokeData get_IsFacingLeft;
        VirtualInvokeData get_IsTurning;
        VirtualInvokeData get_MovementProcessor;
        VirtualInvokeData get_UsesSeparateTurningBehaviour;
        VirtualInvokeData ShouldStartFalling;
        VirtualInvokeData PropagateTargetPoint;
        VirtualInvokeData InstantFlip;
        VirtualInvokeData get_LookDirection_1;
        VirtualInvokeData get_LookDirectionXYNormalized;
        VirtualInvokeData get_IsFacingLeft_1;
    };

    struct SpikeSlugLocomotion__StaticFields {
    };

    struct SpikeSlugLocomotion__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpikeSlugLocomotion__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpikeSlugLocomotion__VTable vtable;
    };

    struct CrabKickUpReactionBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_TaskStatus;
        VirtualInvokeData set_TaskStatus;
        VirtualInvokeData get_ForceReturnTaskStatus;
        VirtualInvokeData set_ForceReturnTaskStatus;
        VirtualInvokeData OnExecuteTask;
        VirtualInvokeData OnInitializeTask;
        VirtualInvokeData OnEnterTask;
        VirtualInvokeData OnExitTask;
        VirtualInvokeData OnResetTask;
        VirtualInvokeData get_Entity;
        VirtualInvokeData OnExecuteTask_1;
        VirtualInvokeData OnInitializeTask_1;
        VirtualInvokeData OnEnterTask_1;
        VirtualInvokeData OnExitTask_1;
        VirtualInvokeData OnResetTask_1;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData get_RunInParallel;
        VirtualInvokeData get_CanInterruptSelf;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData CanInterrupt;
        VirtualInvokeData HandleReasonToNotInterrupt;
        VirtualInvokeData get_ShouldSkipUpdate;
    };

    struct CrabKickUpReactionBehaviour__StaticFields {
    };

    struct CrabKickUpReactionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabKickUpReactionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabKickUpReactionBehaviour__VTable vtable;
    };

    struct EntityReactionBehaviour_1_CrabEntity___Fields {
        struct EntityReactionBehaviour__Fields _;
    };

    struct EntityReactionBehaviour_1_CrabEntity_ {
        struct EntityReactionBehaviour_1_CrabEntity___Class* klass;
        MonitorData* monitor;
        struct EntityReactionBehaviour_1_CrabEntity___Fields fields;
    };

    enum class CrabDeathReaction_DeathState__Enum : int32_t {
        Invalid = -1,
        Hit = 0x00000000,
        Spin = 0x00000001,
        Bounce = 0x00000002,
        Fall = 0x00000003,
        DeathEnd = 0x00000004,
        Drowning = 0x00000005,
    };

    struct CrabDeathReaction_DeathState__Enum__Boxed {
        struct CrabDeathReaction_DeathState__Enum__Class* klass;
        MonitorData* monitor;
        CrabDeathReaction_DeathState__Enum value;
    };

    struct CrabDeathReaction__Fields {
        struct EntityReactionBehaviour_1_CrabEntity___Fields _;
        struct MoonTimeline* HitTimeline;
        struct MoonTimeline* SpinTimeline;
        struct MoonTimeline* FallTimeline;
        struct MoonTimeline* BounceTimeline;
        struct MoonTimeline* DeathEndTimeline;
        struct MoonTimeline* DrownTimeline;
        float InitialDrowningSubmersion;
        struct GameObject* SplashPrefab;
        struct DeathStartEffectSpawnSetting* DeathStartEffect;
        struct MoonTimeline* ShakeTimeline;
        struct MoonTimeline* m_currentTimeline;
        struct CrabHitReactionBehaviour* m_hitReactionBehaviour;
        struct CharacterPlatformMovement* m_platformMovement;
        struct GroundEntityLocomotion* m_locomotion;
        bool m_waitingForDeath;
        CrabDeathReaction_DeathState__Enum m_currentState;

        int32_t m_executedDeathBounces;
        int32_t MaxDeathBounces;
        float BounceSpeedY;
        float DeathKickbackMinMagnitude;
        float DeathKickbackMinBoost;
        float DeathKickbackMinUpDirection;
        struct RootMotionProcessorData* RootMotion;
        float m_timeDrowning;
        struct Vector2 m_initialDrowningSpeed;
        struct EntityWeightData_EntityWeightSettings m_weightData;
    };

} // namespace app
