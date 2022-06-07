namespace app {
struct KwolokBossDeathReactionBehaviour__StaticFields {
};

struct KwolokBossDeathReactionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossDeathReactionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossDeathReactionBehaviour__VTable vtable;
};

struct KwolokBossDryPhaseStartBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline *Timeline;
    float LockLookCenterTime;
    struct KwolokBossLocomotion_MoveRequest *m_moveRequest;
    struct CheckpointFunctionality m_checkpoint;
    float m_timeSinceEnter;
};

struct KwolokBossDryPhaseStartBehaviour {
    struct KwolokBossDryPhaseStartBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossDryPhaseStartBehaviour__Fields fields;
};

struct KwolokBossDryPhaseStartBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData IsLocomotionStayAtRangeAllowed;
    VirtualInvokeData ModifyPostAttackCooldown;
    VirtualInvokeData ModifyMaxLookAtWeights;
};

struct KwolokBossDryPhaseStartBehaviour__StaticFields {
};

struct KwolokBossDryPhaseStartBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossDryPhaseStartBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossDryPhaseStartBehaviour__VTable vtable;
};

struct KwolokBossEntity_c {
    struct KwolokBossEntity_c__Class *klass;
    MonitorData *monitor;
};

struct KwolokBossEntity_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KwolokBossEntity_c__StaticFields {
    struct KwolokBossEntity_c *__9;
    struct KwolokBossEntity_ModifyDesiredLegsIKDelegate *__9__223_0;
    struct KwolokBossEntity_ModifyLookAngleChangeSpeedDelegate *__9__223_1;
    struct KwolokBossEntity_ModifyDesiredLookAngleDelegate *__9__223_2;
    struct KwolokBossEntity_OnDamageReceivedDelegate *__9__223_3;
    struct KwolokBossEntity_ModifyCameraTargetsDelegate *__9__223_4;
};

struct KwolokBossEntity_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossEntity_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossEntity_c__VTable vtable;
};

struct KwolokBossEscapeBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline *EscapeTimeline;
    struct GameObject *KillWallGameObject;
    struct Transform *KwolokReferencePosition;
    float MinSpeedDistance;
    float SweetSpotDistance;
    float MaxSpeedDistance;
    float MinMultiplier;
    float MaxMultiplier;
    bool AffectedByGameModeDifficulty;
    struct List_1_Moon_ScalableAnimationPlayer_ *m_scalableAnimations;
    struct CheckpointFunctionality m_checkpoint;
    struct DamageDealer_OverrideInfo *m_overrideInfo;
    int32_t m_frameToReset;
};

struct KwolokBossEscapeBehaviour {
    struct KwolokBossEscapeBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossEscapeBehaviour__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_ScalableAnimationPlayer___Fields {
    struct ScalableAnimationPlayer__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_ScalableAnimationPlayer_ {
    struct List_1_Moon_ScalableAnimationPlayer___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_ScalableAnimationPlayer___Fields fields;
};

struct ScalableAnimationPlayer__Array {
    struct ScalableAnimationPlayer__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ScalableAnimationPlayer *vector[32];
};

struct IEnumerator_1_Moon_ScalableAnimationPlayer_ {
    struct IEnumerator_1_Moon_ScalableAnimationPlayer___Class *klass;
    MonitorData *monitor;
};

struct ScalableAnimationPlayer__Array__VTable {
};

struct ScalableAnimationPlayer__Array__StaticFields {
};

struct ScalableAnimationPlayer__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScalableAnimationPlayer__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScalableAnimationPlayer__Array__VTable vtable;
};

struct IEnumerator_1_Moon_ScalableAnimationPlayer___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_ScalableAnimationPlayer___StaticFields {
};

struct IEnumerator_1_Moon_ScalableAnimationPlayer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_ScalableAnimationPlayer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_ScalableAnimationPlayer___VTable vtable;
};

struct List_1_Moon_ScalableAnimationPlayer___VTable {
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

struct List_1_Moon_ScalableAnimationPlayer___StaticFields {
    struct ScalableAnimationPlayer__Array *_emptyArray;
};

struct List_1_Moon_ScalableAnimationPlayer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_ScalableAnimationPlayer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_ScalableAnimationPlayer___VTable vtable;
};

struct KwolokBossEscapeBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData IsLocomotionStayAtRangeAllowed;
    VirtualInvokeData ModifyPostAttackCooldown;
    VirtualInvokeData ModifyMaxLookAtWeights;
};

struct KwolokBossEscapeBehaviour__StaticFields {
};

struct KwolokBossEscapeBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossEscapeBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossEscapeBehaviour__VTable vtable;
};

struct KwolokBossExplosionRetaliate__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *TransformToFollow;
    struct GameObject *ExplosionPrefab;
    struct MoonTimeline *ExplosionAnticipationTimeline;
    struct EventTriggerAnimator *ExplosionTrigger;
    bool DrawGizmo;
    struct Bounds m_bounds;
    float m_insideTimer;
};

struct KwolokBossExplosionRetaliate {
    struct KwolokBossExplosionRetaliate__Class *klass;
    MonitorData *monitor;
    struct KwolokBossExplosionRetaliate__Fields fields;
};

struct KwolokBossExplosionRetaliate__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KwolokBossExplosionRetaliate__StaticFields {
};

struct KwolokBossExplosionRetaliate__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossExplosionRetaliate__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossExplosionRetaliate__VTable vtable;
};

struct KwolokBossHeadbuttBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline *HeadbuttTimeline;
    struct EventTriggerAnimator *FallingRocksTrigger;
    struct MoonReference_1_FallingRocksGroup_ *FallingRocks;
    float MinTimeBetweenFalingRock;
    float MaxTimeBetweenFalingRock;
    int32_t NumberOfRocks;
    struct Vector2 RockInitialSpeedRandomRange;
};

struct KwolokBossHeadbuttBehaviour {
    struct KwolokBossHeadbuttBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossHeadbuttBehaviour__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_FallingRocksGroup___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_FallingRocksGroup_ *m_cachedProxyType;
    struct FallingRocksGroup *m_volatileValue;
};

struct MoonReference_1_FallingRocksGroup_ {
    struct MoonReference_1_FallingRocksGroup___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_FallingRocksGroup___Fields fields;
};

struct IMoonType_1_FallingRocksGroup_ {
    struct IMoonType_1_FallingRocksGroup___Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_FallingRocksGroup___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_FallingRocksGroup___StaticFields {
};

struct IMoonType_1_FallingRocksGroup___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_FallingRocksGroup___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_FallingRocksGroup___VTable vtable;
};

struct FallingRocksGroup___VTable {
};

struct FallingRocksGroup___StaticFields {
};

struct FallingRocksGroup___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FallingRocksGroup___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FallingRocksGroup___VTable vtable;
};

struct MoonReference_1_FallingRocksGroup___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
    VirtualInvokeData get_IsStaticValue;
    VirtualInvokeData GetTypeData;
    VirtualInvokeData CanResolve;
    VirtualInvokeData get_IsCrossSceneReference;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
};

struct MoonReference_1_FallingRocksGroup___StaticFields {
};

struct MoonReference_1_FallingRocksGroup___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_FallingRocksGroup___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_FallingRocksGroup___VTable vtable;
};

struct KwolokBossHeadbuttBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData IsLocomotionStayAtRangeAllowed;
    VirtualInvokeData ModifyPostAttackCooldown;
    VirtualInvokeData ModifyMaxLookAtWeights;
};

struct KwolokBossHeadbuttBehaviour__StaticFields {
};

struct KwolokBossHeadbuttBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossHeadbuttBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossHeadbuttBehaviour__VTable vtable;
};

struct EntityReactionBehaviour_1_KwolokBossEntity___Fields {
    struct EntityReactionBehaviour__Fields _;
};

struct EntityReactionBehaviour_1_KwolokBossEntity_ {
    struct EntityReactionBehaviour_1_KwolokBossEntity___Class *klass;
    MonitorData *monitor;
    struct EntityReactionBehaviour_1_KwolokBossEntity___Fields fields;
};

struct KwolokBossHitReactionBehaviour__Fields {
    struct EntityReactionBehaviour_1_KwolokBossEntity___Fields _;
    struct MoonTimeline *Hit;
    struct MoonTimeline *HitSide;
    struct MoonTimeline *HitAdditive;
    struct DirectionalHitReactionPostprocess *HitAdditiveDirectional;
    struct List_1_DamageWeight_ *ReactDisallowedWeights;
    struct List_1_DamageType_ *ReactDisallowedTypes;
    struct List_1_DamageWeight_ *AdditiveDisallowedWeights;
    struct List_1_DamageType_ *AdditiveDisallowedTypes;
    struct RTPC *DamageAmountRTPC;
    float HeavyDamageMultiplier;
    struct CancellableController *m_cancellableController;
    struct MoonTimeline *m_selectedTimeline;
    bool m_wasExecutingCannonAttack;
    struct AnimationAdditiveStrengthContext *m_additiveStrengthContext;
    struct ContextSet *m_timelineContext;
    struct EntityDamageEvent *DamageEvent;
};

struct KwolokBossHitReactionBehaviour {
    struct KwolokBossHitReactionBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossHitReactionBehaviour__Fields fields;
};

struct EntityReactionBehaviour_1_KwolokBossEntity___VTable {
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

struct EntityReactionBehaviour_1_KwolokBossEntity___StaticFields {
};

struct EntityReactionBehaviour_1_KwolokBossEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityReactionBehaviour_1_KwolokBossEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityReactionBehaviour_1_KwolokBossEntity___VTable vtable;
};

struct KwolokBossHitReactionBehaviour__VTable {
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

struct KwolokBossHitReactionBehaviour__StaticFields {
};

struct KwolokBossHitReactionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossHitReactionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossHitReactionBehaviour__VTable vtable;
};

struct KwolokBossIntroBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline *IntroTimeline;
    struct EventTriggerAnimator *StartEscapeTrigger;
};

struct KwolokBossIntroBehaviour {
    struct KwolokBossIntroBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossIntroBehaviour__Fields fields;
};

struct KwolokBossIntroBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData IsLocomotionStayAtRangeAllowed;
    VirtualInvokeData ModifyPostAttackCooldown;
    VirtualInvokeData ModifyMaxLookAtWeights;
};

struct KwolokBossIntroBehaviour__StaticFields {
};

struct KwolokBossIntroBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossIntroBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossIntroBehaviour__VTable vtable;
};

struct KwolokBossLocomotion_c {
    struct KwolokBossLocomotion_c__Class *klass;
    MonitorData *monitor;
};

struct KwolokBossLocomotion_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KwolokBossLocomotion_c__StaticFields {
    struct KwolokBossLocomotion_c *__9;
    struct KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate *__9__143_0;
    struct KwolokBossLocomotion_ModifyAccelerationDelegate *__9__143_1;
    struct KwolokBossLocomotion_ModifyBodyHeightDelegate *__9__143_2;
    struct Action_1_KwolokBossLocomotion_StayAtRangeSettings_ *__9__143_3;
    struct KwolokBossLocomotion_OverrideTurnMultiplier *__9__143_4;
};

struct KwolokBossLocomotion_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossLocomotion_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossLocomotion_c__VTable vtable;
};

enum class KwolokBossEntity_AnimationDirections__Enum : int32_t {
    Normal = 0x00000000,
    Mirrored = 0x00000001,
};

struct KwolokBossEntity_AnimationDirections__Enum__Boxed {
    struct KwolokBossEntity_AnimationDirections__Enum__Class *klass;
    MonitorData *monitor;
    KwolokBossEntity_AnimationDirections__Enum value;
    
};

struct KwolokBossMeleeSlapBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline *SlapTimeline;
    struct EventTriggerAnimator *LookFrontWindow;
    struct Vector2 AttackAllowedRectangle;
    bool EnableDebug;
    KwolokBossEntity_AnimationDirections__Enum m_animDirection;
    
    struct Rect m_rect;
    struct Enum__Array *Entries;
};

struct KwolokBossMeleeSlapBehaviour {
    struct KwolokBossMeleeSlapBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossMeleeSlapBehaviour__Fields fields;
};

struct KwolokBossEntity_AnimationDirections__Enum__VTable {
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

struct KwolokBossEntity_AnimationDirections__Enum__StaticFields {
};

struct KwolokBossEntity_AnimationDirections__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossEntity_AnimationDirections__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossEntity_AnimationDirections__Enum__VTable vtable;
};

struct KwolokBossMeleeSlapBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData IsLocomotionStayAtRangeAllowed;
    VirtualInvokeData ModifyPostAttackCooldown;
    VirtualInvokeData ModifyMaxLookAtWeights;
    VirtualInvokeData GetEntries;
    VirtualInvokeData Evaluate;
    VirtualInvokeData get_ShouldSkip;
};

struct KwolokBossMeleeSlapBehaviour__StaticFields {
};

struct KwolokBossMeleeSlapBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossMeleeSlapBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossMeleeSlapBehaviour__VTable vtable;
};

struct KwolokBossProjectileFlurryBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct ProjectileSpawner *ProjectileSpawner;
    struct Transform *ShootTarget;
    struct MoonTimeline *Timeline;
    struct EventTriggerAnimator *ShootEvent;
    int32_t NumberOfProjectiles;
    float ProjectileUnderWaterGravity;
    float ProjectileUnderWaterSpeedDampening;
    struct KwolokBossLocomotion_StayAtRangeSettings *StayAtRangeSettings;
    int32_t m_projectilesSpawned;
    float LookAngleChangeSpeedMultiplier;
    struct KwolokBossEntity_OverrideTicket_1_System_Single_ *m_lookAngleChangeSpeedOverride;
};

struct KwolokBossProjectileFlurryBehaviour {
    struct KwolokBossProjectileFlurryBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossProjectileFlurryBehaviour__Fields fields;
};

struct __declspec(align(8)) KwolokBossEntity_OverrideTicket_1_System_Single___Fields {
    float Value;
};

struct KwolokBossEntity_OverrideTicket_1_System_Single_ {
    struct KwolokBossEntity_OverrideTicket_1_System_Single___Class *klass;
    MonitorData *monitor;
    struct KwolokBossEntity_OverrideTicket_1_System_Single___Fields fields;
};

struct KwolokBossEntity_OverrideTicket_1_System_Single___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KwolokBossEntity_OverrideTicket_1_System_Single___StaticFields {
};

struct KwolokBossEntity_OverrideTicket_1_System_Single___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossEntity_OverrideTicket_1_System_Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossEntity_OverrideTicket_1_System_Single___VTable vtable;
};

struct KwolokBossProjectileFlurryBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData IsLocomotionStayAtRangeAllowed;
    VirtualInvokeData ModifyPostAttackCooldown;
    VirtualInvokeData ModifyMaxLookAtWeights;
};

struct KwolokBossProjectileFlurryBehaviour__StaticFields {
};

struct KwolokBossProjectileFlurryBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossProjectileFlurryBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossProjectileFlurryBehaviour__VTable vtable;
};

struct KwolokBossSettings__Fields {
    struct MonoBehaviour__Fields _;
    float KwolokBossHP;
    int32_t ProjectileFlurryNumberOfProjectiles;
    float ProjectileFlurryTimeBetweenProjectiles;
    float SludgeLaserTime;
    float HeadbuttTime;
};

}
