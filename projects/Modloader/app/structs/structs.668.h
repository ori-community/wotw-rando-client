namespace app {
    struct CrabDeathReaction {
        struct CrabDeathReaction__Class* klass;
        MonitorData* monitor;
        struct CrabDeathReaction__Fields fields;
    };

    struct EntityHitReactionBehaviour_1_CrabEntity___Fields {
        struct EntityReactionBehaviour_1_CrabEntity___Fields _;
        struct List_1_DamageType_* DamageTypePreventingInterruption;
        struct List_1_DamageWeight_* DamageWeightPreventingInterruption;
        struct HashSet_1_DamageType_* m_damageTypePreventingInterruption;
        struct HashSet_1_DamageWeight_* m_damageWeightPreventingInterruption;
        bool _HasLocomotion_k__BackingField;
        struct CharacterPlatformMovement* m_platformMovement;
        EntityWeightData_EntityWeight__Enum m_weight;

        struct HitReactionSettings* m_kickbackSettings;
    };

    struct EntityHitReactionBehaviour_1_CrabEntity_ {
        struct EntityHitReactionBehaviour_1_CrabEntity___Class* klass;
        MonitorData* monitor;
        struct EntityHitReactionBehaviour_1_CrabEntity___Fields fields;
    };

    struct CrabHitReactionBehaviour__Fields {
        struct EntityHitReactionBehaviour_1_CrabEntity___Fields _;
        struct MoonTimeline* HitFront;
        struct MoonTimeline* HitBack;
        struct MoonTimeline* HitAir;
        struct MoonTimeline* HitAdditive;
        struct MoonTimeline* Knockup;
        struct MoonTimeline* Knockback;
        struct MoonTimeline* Knockforward;
        struct MoonTimeline* HitAirAdditive;
        struct List_1_Moon_Timeline_EventTriggerAnimator_* FlipEvents;
        struct Event_1* OnAnyHitEvent;
        struct MoonTimeline* ShakeTimeline;
        struct MoonTimeline* m_currentTimeline;
        struct ReactionFallingBehaviour* m_fallBehaviour;
        struct GroundEntityLocomotion* m_locomotion;
        bool m_exitEarly;
        struct EntityDamageEvent* _DamageEvent_k__BackingField;
        float OnGroundKnockbackMultiplier;
        struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_* InterruptionBlockingTasks;
    };

    struct CrabHitReactionBehaviour {
        struct CrabHitReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct CrabHitReactionBehaviour__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Fields {
        struct IDamageInterruptionBlockingTask__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_ {
        struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Fields fields;
    };

    struct IDamageInterruptionBlockingTask {
        struct IDamageInterruptionBlockingTask__Class* klass;
        MonitorData* monitor;
    };

    struct IDamageInterruptionBlockingTask__Array {
        struct IDamageInterruptionBlockingTask__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IDamageInterruptionBlockingTask* vector[32];
    };

    struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_ {
        struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Class* klass;
        MonitorData* monitor;
    };

    struct EntityReactionBehaviour_1_CrabEntity___VTable {
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
        VirtualInvokeData __unknown;
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
    };

    struct EntityReactionBehaviour_1_CrabEntity___StaticFields {
    };

    struct EntityReactionBehaviour_1_CrabEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityReactionBehaviour_1_CrabEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityReactionBehaviour_1_CrabEntity___VTable vtable;
    };

    struct EntityHitReactionBehaviour_1_CrabEntity___VTable {
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
        VirtualInvokeData IsDamageTypePreventingInterruption;
        VirtualInvokeData IsInterruptingDamageWeight;
    };

    struct EntityHitReactionBehaviour_1_CrabEntity___StaticFields {
    };

    struct EntityHitReactionBehaviour_1_CrabEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityHitReactionBehaviour_1_CrabEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityHitReactionBehaviour_1_CrabEntity___VTable vtable;
    };

    struct IDamageInterruptionBlockingTask__VTable {
        VirtualInvokeData IsBlockingInterruption;
    };

    struct IDamageInterruptionBlockingTask__StaticFields {
    };

    struct IDamageInterruptionBlockingTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDamageInterruptionBlockingTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDamageInterruptionBlockingTask__VTable vtable;
    };

    struct IDamageInterruptionBlockingTask__Array__VTable {
    };

    struct IDamageInterruptionBlockingTask__Array__StaticFields {
    };

    struct IDamageInterruptionBlockingTask__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDamageInterruptionBlockingTask__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDamageInterruptionBlockingTask__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___StaticFields {
    };

    struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___VTable vtable;
    };

    struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___VTable {
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

    struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___StaticFields {
        struct IDamageInterruptionBlockingTask__Array* _emptyArray;
    };

    struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___VTable vtable;
    };

    struct CrabHitReactionBehaviour__VTable {
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
        VirtualInvokeData IsDamageTypePreventingInterruption;
        VirtualInvokeData IsInterruptingDamageWeight;
    };

    struct CrabHitReactionBehaviour__StaticFields {
    };

    struct CrabHitReactionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabHitReactionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabHitReactionBehaviour__VTable vtable;
    };

    struct CrabDeathReaction_DeathState__Enum__VTable {
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

    struct CrabDeathReaction_DeathState__Enum__StaticFields {
    };

    struct CrabDeathReaction_DeathState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabDeathReaction_DeathState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabDeathReaction_DeathState__Enum__VTable vtable;
    };

    struct CrabDeathReaction__VTable {
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
    };

    struct CrabDeathReaction__StaticFields {
    };

    struct CrabDeathReaction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabDeathReaction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabDeathReaction__VTable vtable;
    };

    struct CrabDeathReaction_c {
        struct CrabDeathReaction_c__Class* klass;
        MonitorData* monitor;
    };

    struct CrabDeathReaction_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CrabDeathReaction_c__StaticFields {
        struct CrabDeathReaction_c* __9;
        struct Action* __9__29_0;
    };

    struct CrabDeathReaction_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabDeathReaction_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabDeathReaction_c__VTable vtable;
    };

    struct GroundMovingEntity__Fields {
        struct EnemyEntity__Fields _;
        struct GroundEntityLocomotion* m_groundLocomotion;
        struct SoundProvider* FootstepsSounds;
        struct AnimationCurve* SoundsPerSecondOverSpeed;
        struct EntityBehaviour__Array* BehavioursWithFootsteps;
        float m_nextStepTime;
        struct Transform* m_transform;
        struct CharacterPlatformMovement* m_platformMovemt;
        bool m_isIgnoringPlatforms;
        struct Collider__Array* m_overlappedColliders;
    };

    struct GroundMovingEntity {
        struct GroundMovingEntity__Class* klass;
        MonitorData* monitor;
        struct GroundMovingEntity__Fields fields;
    };

    struct CrabEntity__Fields {
        struct GroundMovingEntity__Fields _;
        struct CrabEntity_DamageTime* RetaliationConditions;
        float RetaliationActivationTimeWindow;
        float BaseAttackInterval;
        float GroupAttackIntervalMultiplier;
        struct List_1_CrabEntity_DamageTime_* m_takenDamageElapsedTime;
        float m_retaliationAllowedTimer;
        struct EntityTargetting* Targetting;
        struct Event_1* WwiseClawAttackInterrupted;
    };

    struct CrabEntity {
        struct CrabEntity__Class* klass;
        MonitorData* monitor;
        struct CrabEntity__Fields fields;
    };

    struct __declspec(align(8)) CrabEntity_DamageTime__Fields {
        float Damage;
        float Time;
    };

    struct CrabEntity_DamageTime {
        struct CrabEntity_DamageTime__Class* klass;
        MonitorData* monitor;
        struct CrabEntity_DamageTime__Fields fields;
    };

    struct __declspec(align(8)) List_1_CrabEntity_DamageTime___Fields {
        struct CrabEntity_DamageTime__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_CrabEntity_DamageTime_ {
        struct List_1_CrabEntity_DamageTime___Class* klass;
        MonitorData* monitor;
        struct List_1_CrabEntity_DamageTime___Fields fields;
    };

    struct CrabEntity_DamageTime__Array {
        struct CrabEntity_DamageTime__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CrabEntity_DamageTime* vector[32];
    };

    struct IEnumerator_1_CrabEntity_DamageTime_ {
        struct IEnumerator_1_CrabEntity_DamageTime___Class* klass;
        MonitorData* monitor;
    };

    struct GroundMovingEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData OnSceneRootPostEnable;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_BehaviourTree;
        VirtualInvokeData ResolveDamage;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData ShouldKillBubble;
        VirtualInvokeData CreateTimelineParentEntity;
        VirtualInvokeData get_AddChildren;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
        VirtualInvokeData get_ExternalID;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData get_CameraTargetActive;
        VirtualInvokeData get_CameraTargetPosition;
        VirtualInvokeData get_CameraTargetPadding;
        VirtualInvokeData get_CameraInfluencePosition;
        VirtualInvokeData AdjustCameraTargetWeight;
        VirtualInvokeData get_CameraInfluenceMinDist;
        VirtualInvokeData get_CameraInfluenceMaxDist;
        VirtualInvokeData get_CameraZoomFactor;
        VirtualInvokeData get_TargetType;
        VirtualInvokeData GetTargetData;
        VirtualInvokeData IPortalVisitor_get_Position;
        VirtualInvokeData IPortalVisitor_set_Position;
        VirtualInvokeData IPortalVisitor_get_Speed;
        VirtualInvokeData IPortalVisitor_set_Speed;
        VirtualInvokeData OnGoThroughPortal;
        VirtualInvokeData OnPortalOverlapEnter;
        VirtualInvokeData OnPortalOverlapExit;
        VirtualInvokeData Prewarm;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData get_CanOptimizeBehaviourTreeEvaluation;
        VirtualInvokeData get_IsFacingTarget;
        VirtualInvokeData get_IgnoreAllowedZonesIfFreed;
        VirtualInvokeData get_ScreenPadding;
        VirtualInvokeData IsBehaviourTreePaused;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnAwake;
        VirtualInvokeData GetBehaviourTree;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData UnserializedInitialization;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData OnUpdate_1;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData OnBeforeBehaviourTreeFixedUpdate;
        VirtualInvokeData OnSuspendedStay;
        VirtualInvokeData OnUpdate_2;
        VirtualInvokeData EnterSpawningState;
        VirtualInvokeData UpdateSpawningState;
        VirtualInvokeData ExitSpawningState;
        VirtualInvokeData EnterDecisionMakingState;
        VirtualInvokeData UpdateDecisionMakingState;
        VirtualInvokeData ExitDecisionMakingState;
        VirtualInvokeData EnterReactionState;
        VirtualInvokeData UpdateReactionState;
        VirtualInvokeData ExitReactionState;
        VirtualInvokeData EnterCinematicState;
        VirtualInvokeData UpdateCinematicState;
        VirtualInvokeData ExitCinematicState;
        VirtualInvokeData GetActiveLocomotion;
        VirtualInvokeData OnContactDamageDealt;
        VirtualInvokeData OnHandleFireDamage;
        VirtualInvokeData OnHandleIceDamage;
        VirtualInvokeData OnDamageReceived;
        VirtualInvokeData OnDamageBlocked;
        VirtualInvokeData DeactivateDamageReceivers;
        VirtualInvokeData InstantKill;
        VirtualInvokeData OnDied;
        VirtualInvokeData SpawnOrbs;
        VirtualInvokeData OnDiedOutOfBounds;
        VirtualInvokeData OnEndDeathBehaviour;
        VirtualInvokeData OnPostRestoreCheckpoint;
        VirtualInvokeData ResetEntity;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData IsFacingPoint;
        VirtualInvokeData ResolveDamage_1;
        VirtualInvokeData get_CameraTargetActive_1;
        VirtualInvokeData get_CameraTargetPosition_1;
        VirtualInvokeData get_CameraTargetPadding_1;
        VirtualInvokeData get_CameraInfluenceMinDist_1;
        VirtualInvokeData get_CameraInfluenceMaxDist_1;
        VirtualInvokeData get_CameraZoomFactor_1;
        VirtualInvokeData get_TargetType_1;
        VirtualInvokeData AdjustCameraTargetWeight_1;
        VirtualInvokeData get_IsAggroed;
        VirtualInvokeData get_CanAttackTokenBeStolen;
        VirtualInvokeData OnAttackTokenStolen;
        VirtualInvokeData get_UsesHealthbar;
        VirtualInvokeData get_ShouldApplySpawnPopFix;
        VirtualInvokeData get_IsFlyingEnemy;
        VirtualInvokeData get_UseDeathLoopTimeLimit;
        VirtualInvokeData get_CanAttackTokenBeStolen_1;
        VirtualInvokeData get_AutoResetSpotOriBool;
        VirtualInvokeData TryGetPlatformMovement;
        VirtualInvokeData ModifyKickbackForce;
        VirtualInvokeData HandleFootstepEvents;
        VirtualInvokeData get_ShouldPlayFootsteps;
    };

    struct GroundMovingEntity__StaticFields {
    };

    struct GroundMovingEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GroundMovingEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GroundMovingEntity__VTable vtable;
    };

    struct CrabEntity_DamageTime__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CrabEntity_DamageTime__StaticFields {
    };

    struct CrabEntity_DamageTime__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabEntity_DamageTime__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabEntity_DamageTime__VTable vtable;
    };

    struct CrabEntity_DamageTime__Array__VTable {
    };

    struct CrabEntity_DamageTime__Array__StaticFields {
    };

    struct CrabEntity_DamageTime__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabEntity_DamageTime__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabEntity_DamageTime__Array__VTable vtable;
    };

    struct IEnumerator_1_CrabEntity_DamageTime___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_CrabEntity_DamageTime___StaticFields {
    };

    struct IEnumerator_1_CrabEntity_DamageTime___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_CrabEntity_DamageTime___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_CrabEntity_DamageTime___VTable vtable;
    };

    struct List_1_CrabEntity_DamageTime___VTable {
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

    struct List_1_CrabEntity_DamageTime___StaticFields {
        struct CrabEntity_DamageTime__Array* _emptyArray;
    };

    struct List_1_CrabEntity_DamageTime___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_CrabEntity_DamageTime___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_CrabEntity_DamageTime___VTable vtable;
    };

    struct CrabEntity__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData OnSceneRootPostEnable;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_BehaviourTree;
        VirtualInvokeData ResolveDamage;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData ShouldKillBubble;
        VirtualInvokeData CreateTimelineParentEntity;
        VirtualInvokeData get_AddChildren;
        VirtualInvokeData get_InvalidateParentTimelineCache;
        VirtualInvokeData set_InvalidateParentTimelineCache;
        VirtualInvokeData get_ExternalID;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData get_CameraTargetActive;
        VirtualInvokeData get_CameraTargetPosition;
        VirtualInvokeData get_CameraTargetPadding;
        VirtualInvokeData get_CameraInfluencePosition;
        VirtualInvokeData AdjustCameraTargetWeight;
        VirtualInvokeData get_CameraInfluenceMinDist;
        VirtualInvokeData get_CameraInfluenceMaxDist;
        VirtualInvokeData get_CameraZoomFactor;
        VirtualInvokeData get_TargetType;
        VirtualInvokeData GetTargetData;
        VirtualInvokeData IPortalVisitor_get_Position;
        VirtualInvokeData IPortalVisitor_set_Position;
        VirtualInvokeData IPortalVisitor_get_Speed;
        VirtualInvokeData IPortalVisitor_set_Speed;
        VirtualInvokeData OnGoThroughPortal;
        VirtualInvokeData OnPortalOverlapEnter;
        VirtualInvokeData OnPortalOverlapExit;
        VirtualInvokeData Prewarm;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
        VirtualInvokeData get_CanOptimizeBehaviourTreeEvaluation;
        VirtualInvokeData get_IsFacingTarget;
        VirtualInvokeData get_IgnoreAllowedZonesIfFreed;
        VirtualInvokeData get_ScreenPadding;
        VirtualInvokeData IsBehaviourTreePaused;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnAwake;
        VirtualInvokeData GetBehaviourTree;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData UnserializedInitialization;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData MoonCleanup;
        VirtualInvokeData OnUpdate_1;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData OnBeforeBehaviourTreeFixedUpdate;
        VirtualInvokeData OnSuspendedStay;
        VirtualInvokeData OnUpdate_2;
        VirtualInvokeData EnterSpawningState;
        VirtualInvokeData UpdateSpawningState;
        VirtualInvokeData ExitSpawningState;
        VirtualInvokeData EnterDecisionMakingState;
        VirtualInvokeData UpdateDecisionMakingState;
        VirtualInvokeData ExitDecisionMakingState;
        VirtualInvokeData EnterReactionState;
        VirtualInvokeData UpdateReactionState;
        VirtualInvokeData ExitReactionState;
        VirtualInvokeData EnterCinematicState;
        VirtualInvokeData UpdateCinematicState;
        VirtualInvokeData ExitCinematicState;
        VirtualInvokeData GetActiveLocomotion;
        VirtualInvokeData OnContactDamageDealt;
        VirtualInvokeData OnHandleFireDamage;
        VirtualInvokeData OnHandleIceDamage;
        VirtualInvokeData OnDamageReceived;
        VirtualInvokeData OnDamageBlocked;
        VirtualInvokeData DeactivateDamageReceivers;
        VirtualInvokeData InstantKill;
        VirtualInvokeData OnDied;
        VirtualInvokeData SpawnOrbs;
        VirtualInvokeData OnDiedOutOfBounds;
        VirtualInvokeData OnEndDeathBehaviour;
        VirtualInvokeData OnPostRestoreCheckpoint;
        VirtualInvokeData ResetEntity;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData IsFacingPoint;
        VirtualInvokeData ResolveDamage_1;
        VirtualInvokeData get_CameraTargetActive_1;
        VirtualInvokeData get_CameraTargetPosition_1;
        VirtualInvokeData get_CameraTargetPadding_1;
        VirtualInvokeData get_CameraInfluenceMinDist_1;
        VirtualInvokeData get_CameraInfluenceMaxDist_1;
        VirtualInvokeData get_CameraZoomFactor_1;
        VirtualInvokeData get_TargetType_1;
        VirtualInvokeData AdjustCameraTargetWeight_1;
        VirtualInvokeData get_IsAggroed;
        VirtualInvokeData get_CanAttackTokenBeStolen;
        VirtualInvokeData OnAttackTokenStolen;
        VirtualInvokeData get_UsesHealthbar;
        VirtualInvokeData get_ShouldApplySpawnPopFix;
        VirtualInvokeData get_IsFlyingEnemy;
        VirtualInvokeData get_UseDeathLoopTimeLimit;
        VirtualInvokeData get_CanAttackTokenBeStolen_1;
        VirtualInvokeData get_AutoResetSpotOriBool;
        VirtualInvokeData TryGetPlatformMovement;
        VirtualInvokeData ModifyKickbackForce;
        VirtualInvokeData HandleFootstepEvents;
        VirtualInvokeData get_ShouldPlayFootsteps;
    };

    struct CrabEntity__StaticFields {
        struct Single__Array* GroupDelays;
    };

    struct CrabEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabEntity__VTable vtable;
    };

    struct __declspec(align(8)) CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Fields {
        struct MoonReference_1_Moon_BehaviourSystem_ITask_* Task;
        struct List_1_DamageType_* DamageTypes;
    };

    struct CrabHitReactionBehaviour_NonInterruptibleTaskCondition {
        struct CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class* klass;
        MonitorData* monitor;
        struct CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Fields fields;
    };

    struct CrabHitReactionBehaviour_NonInterruptibleTaskCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CrabHitReactionBehaviour_NonInterruptibleTaskCondition__StaticFields {
    };

    struct CrabHitReactionBehaviour_NonInterruptibleTaskCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabHitReactionBehaviour_NonInterruptibleTaskCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabHitReactionBehaviour_NonInterruptibleTaskCondition__VTable vtable;
    };

    struct CrabHitReactionBehaviour_c {
        struct CrabHitReactionBehaviour_c__Class* klass;
        MonitorData* monitor;
    };

    struct CrabHitReactionBehaviour_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CrabHitReactionBehaviour_c__StaticFields {
        struct CrabHitReactionBehaviour_c* __9;
        struct Action* __9__28_0;
    };

    struct CrabHitReactionBehaviour_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabHitReactionBehaviour_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabHitReactionBehaviour_c__VTable vtable;
    };

    struct CrabPlaceholder__Fields {
        struct EntityPlaceholder__Fields _;
        struct GameObject* CrabEntityPrefab;
    };

    struct CrabPlaceholder {
        struct CrabPlaceholder__Class* klass;
        MonitorData* monitor;
        struct CrabPlaceholder__Fields fields;
    };

    struct CrabPlaceholder__VTable {
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

    struct CrabPlaceholder__StaticFields {
    };

    struct CrabPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrabPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrabPlaceholder__VTable vtable;
    };

    struct EntityBehaviourNode_1_DropSlugEntity___Fields {
        struct EntityBehaviourNode__Fields _;
    };

    struct EntityBehaviourNode_1_DropSlugEntity_ {
        struct EntityBehaviourNode_1_DropSlugEntity___Class* klass;
        MonitorData* monitor;
        struct EntityBehaviourNode_1_DropSlugEntity___Fields fields;
    };

    struct DropSlugAlertBehaviour__Fields {
        struct EntityBehaviourNode_1_DropSlugEntity___Fields _;
        struct MoonTimeline* AlertTimeline;
        struct MoonTimeline* AlertLoopTimeline;
        struct MoonTimeline* m_currentTimeline;
    };

} // namespace app
