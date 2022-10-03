namespace app {
    struct SpiderBossLaserAttack__StaticFields {
    };

    struct SpiderBossLaserAttack__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLaserAttack__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLaserAttack__VTable vtable;
    };

    enum class SpiderBossLaserAttackCeiling_State__Enum : int32_t {
        Invalid = 0x00000000,
        Transition = 0x00000001,
        ShootAndEnd = 0x00000002,
        Done = 0x00000003,
    };

    struct SpiderBossLaserAttackCeiling_State__Enum__Boxed {
        struct SpiderBossLaserAttackCeiling_State__Enum__Class* klass;
        MonitorData* monitor;
        SpiderBossLaserAttackCeiling_State__Enum value;
    };

    struct SpiderBossLaserAttackCeiling__Fields {
        struct SpiderBossLaserAttack__Fields _;
        struct MoonTimeline* TransitionTimeline;
        struct MoonTimeline* ShootAndDescendTimeline;
        struct FloatAnimationParameter* AnimationParameterAngle;
        SpiderBossLaserAttackCeiling_State__Enum m_state;
    };

    struct SpiderBossLaserAttackCeiling {
        struct SpiderBossLaserAttackCeiling__Class* klass;
        MonitorData* monitor;
        struct SpiderBossLaserAttackCeiling__Fields fields;
    };

    struct SpiderBossLaserAttackCeiling_State__Enum__VTable {
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

    struct SpiderBossLaserAttackCeiling_State__Enum__StaticFields {
    };

    struct SpiderBossLaserAttackCeiling_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLaserAttackCeiling_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLaserAttackCeiling_State__Enum__VTable vtable;
    };

    struct SpiderBossLaserAttackCeiling__VTable {
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
        VirtualInvokeData GetForcedAnimationZone;
        VirtualInvokeData InitializeCancellableController;
        VirtualInvokeData CanCancel;
        VirtualInvokeData InitializeHitReactionController;
        VirtualInvokeData CanAccumulateHits;
        VirtualInvokeData CanHitReact;
        VirtualInvokeData ComputeUtility;
        VirtualInvokeData StartAttack;
        VirtualInvokeData StopAttack;
        VirtualInvokeData UpdateAiming;
    };

    struct SpiderBossLaserAttackCeiling__StaticFields {
    };

    struct SpiderBossLaserAttackCeiling__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLaserAttackCeiling__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLaserAttackCeiling__VTable vtable;
    };

    struct SpiderBossLaserAttackHorizontal__Fields {
        struct SpiderBossLaserAttack__Fields _;
        struct MoonTimeline* Timeline;
    };

    struct SpiderBossLaserAttackHorizontal {
        struct SpiderBossLaserAttackHorizontal__Class* klass;
        MonitorData* monitor;
        struct SpiderBossLaserAttackHorizontal__Fields fields;
    };

    struct SpiderBossLaserAttackHorizontal__VTable {
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
        VirtualInvokeData GetForcedAnimationZone;
        VirtualInvokeData InitializeCancellableController;
        VirtualInvokeData CanCancel;
        VirtualInvokeData InitializeHitReactionController;
        VirtualInvokeData CanAccumulateHits;
        VirtualInvokeData CanHitReact;
        VirtualInvokeData ComputeUtility;
        VirtualInvokeData StartAttack;
        VirtualInvokeData StopAttack;
        VirtualInvokeData UpdateAiming;
    };

    struct SpiderBossLaserAttackHorizontal__StaticFields {
    };

    struct SpiderBossLaserAttackHorizontal__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLaserAttackHorizontal__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLaserAttackHorizontal__VTable vtable;
    };

    struct SpiderBossLocationTimelineBehaviour__Fields {
        struct SpiderBossTimelineBehaviourBase__Fields _;
        struct SpiderBossLocationTimelineSet* Animations;
    };

    struct SpiderBossLocationTimelineBehaviour {
        struct SpiderBossLocationTimelineBehaviour__Class* klass;
        MonitorData* monitor;
        struct SpiderBossLocationTimelineBehaviour__Fields fields;
    };

    struct __declspec(align(8)) SpiderBossLocationTimelineSet__Fields {
        struct SpiderBossLocationTimelineSet_LocationTimelineGroup__Array* TimelineGroups;
    };

    struct SpiderBossLocationTimelineSet {
        struct SpiderBossLocationTimelineSet__Class* klass;
        MonitorData* monitor;
        struct SpiderBossLocationTimelineSet__Fields fields;
    };

    struct __declspec(align(8)) SpiderBossLocationTimelineSet_LocationTimelineGroup__Fields {
        SpiderBossLocationZone__Enum Zone;

        struct MirroredTimelineSet* Timelines;
        struct MirroredTimelineSet* m_initTimelines;
    };

    struct SpiderBossLocationTimelineSet_LocationTimelineGroup {
        struct SpiderBossLocationTimelineSet_LocationTimelineGroup__Class* klass;
        MonitorData* monitor;
        struct SpiderBossLocationTimelineSet_LocationTimelineGroup__Fields fields;
    };

    struct SpiderBossLocationTimelineSet_LocationTimelineGroup__Array {
        struct SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SpiderBossLocationTimelineSet_LocationTimelineGroup* vector[32];
    };

    struct SpiderBossLocationTimelineSet_LocationTimelineGroup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpiderBossLocationTimelineSet_LocationTimelineGroup__StaticFields {
    };

    struct SpiderBossLocationTimelineSet_LocationTimelineGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLocationTimelineSet_LocationTimelineGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLocationTimelineSet_LocationTimelineGroup__VTable vtable;
    };

    struct SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__VTable {
    };

    struct SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__StaticFields {
    };

    struct SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLocationTimelineSet_LocationTimelineGroup__Array__VTable vtable;
    };

    struct SpiderBossLocationTimelineSet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpiderBossLocationTimelineSet__StaticFields {
    };

    struct SpiderBossLocationTimelineSet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLocationTimelineSet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLocationTimelineSet__VTable vtable;
    };

    struct SpiderBossLocationTimelineBehaviour__VTable {
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
        VirtualInvokeData GetForcedAnimationZone;
        VirtualInvokeData InitializeCancellableController;
        VirtualInvokeData CanCancel;
        VirtualInvokeData InitializeHitReactionController;
        VirtualInvokeData CanAccumulateHits;
        VirtualInvokeData CanHitReact;
        VirtualInvokeData ComputeUtility;
        VirtualInvokeData GetTimeline;
    };

    struct SpiderBossLocationTimelineBehaviour__StaticFields {
    };

    struct SpiderBossLocationTimelineBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLocationTimelineBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLocationTimelineBehaviour__VTable vtable;
    };

    struct SpiderBossLocationTurningTimelineBehaviour__Fields {
        struct SpiderBossLocationTimelineBehaviour__Fields _;
        bool m_hasTurned;
        float m_desiredDirection;
    };

    struct SpiderBossLocationTurningTimelineBehaviour {
        struct SpiderBossLocationTurningTimelineBehaviour__Class* klass;
        MonitorData* monitor;
        struct SpiderBossLocationTurningTimelineBehaviour__Fields fields;
    };

    struct SpiderBossLocationTurningTimelineBehaviour__VTable {
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
        VirtualInvokeData GetForcedAnimationZone;
        VirtualInvokeData InitializeCancellableController;
        VirtualInvokeData CanCancel;
        VirtualInvokeData InitializeHitReactionController;
        VirtualInvokeData CanAccumulateHits;
        VirtualInvokeData CanHitReact;
        VirtualInvokeData ComputeUtility;
        VirtualInvokeData GetTimeline;
    };

    struct SpiderBossLocationTurningTimelineBehaviour__StaticFields {
    };

    struct SpiderBossLocationTurningTimelineBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLocationTurningTimelineBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLocationTurningTimelineBehaviour__VTable vtable;
    };

    struct SpiderBossLocationTurnTimelineBehaviour__Fields {
        struct SpiderBossBaseBehaviour__Fields _;
        struct MoonTimeline* StartTimeline;
        struct MoonTimeline* EndTimeline;
        struct MoonTimeline* TurnEndTimeline;
        struct MoonTimeline* TurnMoveBackEndTimeline;
        float DistanceXToMoveBack;
        struct MoonTimeline* m_currentTimeline;
        struct SpiderBossAnimationPlayer* m_animationPlayer;
        bool m_canFinish;
        SpiderBossLocationZone__Enum m_startZone;
    };

    struct SpiderBossLocationTurnTimelineBehaviour {
        struct SpiderBossLocationTurnTimelineBehaviour__Class* klass;
        MonitorData* monitor;
        struct SpiderBossLocationTurnTimelineBehaviour__Fields fields;
    };

    struct SpiderBossAnimationPlayer__Fields {
        struct AnimationPlayer__Fields _;
        struct MoonReference_1_SpiderBossEntity_* Entity;
        struct SpiderBossLocationAnimationSet* Animations;
        SpiderBossLocationZone__Enum ForcedZone;
    };

    struct SpiderBossAnimationPlayer {
        struct SpiderBossAnimationPlayer__Class* klass;
        MonitorData* monitor;
        struct SpiderBossAnimationPlayer__Fields fields;
    };

    struct __declspec(align(8)) MoonReference_1_SpiderBossEntity___Fields {
        struct MoonTypeData m_data;
        bool m_isInitialized;
        bool m_isStatic;
        bool m_canResolve;
        struct IMoonTypeResolver* m_resolver;
        struct IMoonType_1_SpiderBossEntity_* m_cachedProxyType;
        struct SpiderBossEntity* m_volatileValue;
    };

    struct MoonReference_1_SpiderBossEntity_ {
        struct MoonReference_1_SpiderBossEntity___Class* klass;
        MonitorData* monitor;
        struct MoonReference_1_SpiderBossEntity___Fields fields;
    };

    struct IMoonType_1_SpiderBossEntity_ {
        struct IMoonType_1_SpiderBossEntity___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SpiderBossLocationAnimationSet__Fields {
        struct SpiderBossLocationAnimationSet_LocationGroup__Array* Groups;
    };

    struct SpiderBossLocationAnimationSet {
        struct SpiderBossLocationAnimationSet__Class* klass;
        MonitorData* monitor;
        struct SpiderBossLocationAnimationSet__Fields fields;
    };

    struct __declspec(align(8)) SpiderBossLocationAnimationSet_LocationGroup__Fields {
        SpiderBossLocationZone__Enum Zone;

        struct MirroredAnimationSet* Items;
    };

    struct SpiderBossLocationAnimationSet_LocationGroup {
        struct SpiderBossLocationAnimationSet_LocationGroup__Class* klass;
        MonitorData* monitor;
        struct SpiderBossLocationAnimationSet_LocationGroup__Fields fields;
    };

    struct __declspec(align(8)) MirroredSet_1_Moon_MoonAnimation___Fields {
        struct MoonAnimation* Normal;
        struct MoonAnimation* Mirrored;
    };

    struct MirroredSet_1_Moon_MoonAnimation_ {
        struct MirroredSet_1_Moon_MoonAnimation___Class* klass;
        MonitorData* monitor;
        struct MirroredSet_1_Moon_MoonAnimation___Fields fields;
    };

    struct MirroredAnimationSet__Fields {
        struct MirroredSet_1_Moon_MoonAnimation___Fields _;
    };

    struct MirroredAnimationSet {
        struct MirroredAnimationSet__Class* klass;
        MonitorData* monitor;
        struct MirroredAnimationSet__Fields fields;
    };

    struct SpiderBossLocationAnimationSet_LocationGroup__Array {
        struct SpiderBossLocationAnimationSet_LocationGroup__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SpiderBossLocationAnimationSet_LocationGroup* vector[32];
    };

    struct IMoonType_1_SpiderBossEntity___VTable {
        VirtualInvokeData Resolve;
        VirtualInvokeData SafeResolve;
        VirtualInvokeData TryResolve;
    };

    struct IMoonType_1_SpiderBossEntity___StaticFields {
    };

    struct IMoonType_1_SpiderBossEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonType_1_SpiderBossEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonType_1_SpiderBossEntity___VTable vtable;
    };

    struct SpiderBossEntity___VTable {
    };

    struct SpiderBossEntity___StaticFields {
    };

    struct SpiderBossEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossEntity___VTable vtable;
    };

    struct MoonReference_1_SpiderBossEntity___VTable {
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

    struct MoonReference_1_SpiderBossEntity___StaticFields {
    };

    struct MoonReference_1_SpiderBossEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonReference_1_SpiderBossEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonReference_1_SpiderBossEntity___VTable vtable;
    };

    struct MirroredSet_1_Moon_MoonAnimation___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetItem;
    };

    struct MirroredSet_1_Moon_MoonAnimation___StaticFields {
    };

    struct MirroredSet_1_Moon_MoonAnimation___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MirroredSet_1_Moon_MoonAnimation___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MirroredSet_1_Moon_MoonAnimation___VTable vtable;
    };

    struct MirroredAnimationSet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetItem;
    };

    struct MirroredAnimationSet__StaticFields {
    };

    struct MirroredAnimationSet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MirroredAnimationSet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MirroredAnimationSet__VTable vtable;
    };

    struct SpiderBossLocationAnimationSet_LocationGroup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpiderBossLocationAnimationSet_LocationGroup__StaticFields {
    };

    struct SpiderBossLocationAnimationSet_LocationGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLocationAnimationSet_LocationGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLocationAnimationSet_LocationGroup__VTable vtable;
    };

    struct SpiderBossLocationAnimationSet_LocationGroup__Array__VTable {
    };

    struct SpiderBossLocationAnimationSet_LocationGroup__Array__StaticFields {
    };

    struct SpiderBossLocationAnimationSet_LocationGroup__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLocationAnimationSet_LocationGroup__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLocationAnimationSet_LocationGroup__Array__VTable vtable;
    };

    struct SpiderBossLocationAnimationSet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SpiderBossLocationAnimationSet__StaticFields {
    };

    struct SpiderBossLocationAnimationSet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLocationAnimationSet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLocationAnimationSet__VTable vtable;
    };

    struct SpiderBossAnimationPlayer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData PostEvent;
        VirtualInvokeData PostEvent_1;
        VirtualInvokeData PostRequest;
        VirtualInvokeData get_Hash_1;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_UpdateCategory;
        VirtualInvokeData SetTimeScale;
        VirtualInvokeData OnValidate;
        VirtualInvokeData OnPausePlayback;
        VirtualInvokeData OnResumePlayback;
        VirtualInvokeData OnStartPlayback;
        VirtualInvokeData OnStopPlayback;
        VirtualInvokeData OnUpdateEntity;
        VirtualInvokeData CanUpdate;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData SynchronizeData;
        VirtualInvokeData SynchronizePad;
        VirtualInvokeData PostEvent_2;
        VirtualInvokeData PostEvent_3;
        VirtualInvokeData PostRequest_1;
        VirtualInvokeData OnRootScopeStopped;
        VirtualInvokeData OnEntityCreated;
        VirtualInvokeData get_ExternalTarget;
        VirtualInvokeData Play;
        VirtualInvokeData OnActiveAnimationStopEvent;
    };

    struct SpiderBossAnimationPlayer__StaticFields {
    };

    struct SpiderBossAnimationPlayer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossAnimationPlayer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossAnimationPlayer__VTable vtable;
    };

    struct SpiderBossLocationTurnTimelineBehaviour__VTable {
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
        VirtualInvokeData GetForcedAnimationZone;
        VirtualInvokeData InitializeCancellableController;
        VirtualInvokeData CanCancel;
        VirtualInvokeData InitializeHitReactionController;
        VirtualInvokeData CanAccumulateHits;
        VirtualInvokeData CanHitReact;
        VirtualInvokeData ComputeUtility;
    };

    struct SpiderBossLocationTurnTimelineBehaviour__StaticFields {
    };

    struct SpiderBossLocationTurnTimelineBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLocationTurnTimelineBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLocationTurnTimelineBehaviour__VTable vtable;
    };

    struct EnumSelector_1_SpiderBossLocationZone___Fields {
        struct CompositeNode__Fields _;
        struct List_1_SpiderBossLocationZone_* Options;
    };

    struct EnumSelector_1_SpiderBossLocationZone_ {
        struct EnumSelector_1_SpiderBossLocationZone___Class* klass;
        MonitorData* monitor;
        struct EnumSelector_1_SpiderBossLocationZone___Fields fields;
    };

    struct SpiderBossLocationZoneSelector__Fields {
        struct EnumSelector_1_SpiderBossLocationZone___Fields _;
    };

    struct SpiderBossLocationZoneSelector {
        struct SpiderBossLocationZoneSelector__Class* klass;
        MonitorData* monitor;
        struct SpiderBossLocationZoneSelector__Fields fields;
    };

    struct EnumSelector_1_SpiderBossLocationZone___VTable {
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
        VirtualInvokeData AddChild;
        VirtualInvokeData __unknown;
    };

    struct EnumSelector_1_SpiderBossLocationZone___StaticFields {
    };

    struct EnumSelector_1_SpiderBossLocationZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnumSelector_1_SpiderBossLocationZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnumSelector_1_SpiderBossLocationZone___VTable vtable;
    };

    struct SpiderBossLocationZoneSelector__VTable {
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
        VirtualInvokeData AddChild;
        VirtualInvokeData GetEnumValue;
    };

    struct SpiderBossLocationZoneSelector__StaticFields {
    };

    struct SpiderBossLocationZoneSelector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiderBossLocationZoneSelector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiderBossLocationZoneSelector__VTable vtable;
    };

    enum class SpiderBossSpitBehaviour_State__Enum : int32_t {
        Start = 0x00000000,
        Shoot = 0x00000001,
        End = 0x00000002,
        Done = 0x00000003,
    };

    struct SpiderBossSpitBehaviour_State__Enum__Boxed {
        struct SpiderBossSpitBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        SpiderBossSpitBehaviour_State__Enum value;
    };

    struct SpiderBossSpitBehaviour__Fields {
        struct SpiderBossBaseBehaviour__Fields _;
        struct PrefabSpawner* ProjectileSpawner;
        float ProjectileSpeed;
        float ProjectileGravity;
        int32_t ProjectileDamage;
        struct Transform* ShootPoint;
        int32_t NumShotsArena1;
        int32_t NumShotsArena2;
        int32_t NumberOfProjectiles;
        float ProjectileOffset;
        float ShootSpeedMultiplierArena1;
        float ShootSpeedMultiplierArena2;
        struct List_1_UnityEngine_Vector3_* m_creepPositions;
        float MinDistanceBetweenCreep;
        bool ShouldSpawnCreep;
        float CreepTime;
        float CreepDamage;
        struct GameObject* CreepPrefab;
        struct EventTriggerAnimator* ShootTrigger;
        struct MoonTimeline* StartTimeline;
        struct MoonTimeline* ShootTimeline;
        struct MoonTimeline* EndTimeline;
        struct MoonTimeline* m_currentTimeline;
        bool m_canFinish;
        SpiderBossSpitBehaviour_State__Enum m_state;

        uint32_t m_shotsFired;
        bool m_shouldCancel;
        struct Vector3 m_cachedVelocity;
    };

    struct SpiderBossSpitBehaviour {
        struct SpiderBossSpitBehaviour__Class* klass;
        MonitorData* monitor;
        struct SpiderBossSpitBehaviour__Fields fields;
    };

} // namespace app
