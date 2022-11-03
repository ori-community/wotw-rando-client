namespace app {
    struct IsTargetInAreaOfTypeCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IsTargetInAreaOfTypeCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IsTargetInAreaOfTypeCondition__VTable vtable;
    };

    struct PositionInBoxColliderCondition__Fields {
        struct Condition__Fields _;
        struct MoonVector3* Target;
        struct BoxCollider* Collider;
    };

    struct PositionInBoxColliderCondition {
        struct PositionInBoxColliderCondition__Class* klass;
        MonitorData* monitor;
        struct PositionInBoxColliderCondition__Fields fields;
    };

    struct PositionInBoxColliderCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData OnCheck;
    };

    struct PositionInBoxColliderCondition__StaticFields {
    };

    struct PositionInBoxColliderCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PositionInBoxColliderCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PositionInBoxColliderCondition__VTable vtable;
    };

    struct ReceivedDamageCondition__Fields {
        struct Condition__Fields _;
        bool m_damageReceived;
        bool m_subscribed;
        struct Entity* m_entity;
    };

    struct ReceivedDamageCondition {
        struct ReceivedDamageCondition__Class* klass;
        MonitorData* monitor;
        struct ReceivedDamageCondition__Fields fields;
    };

    struct ReceivedDamageCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData OnCheck;
    };

    struct ReceivedDamageCondition__StaticFields {
    };

    struct ReceivedDamageCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReceivedDamageCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReceivedDamageCondition__VTable vtable;
    };

    struct EntityTask_c {
        struct EntityTask_c__Class* klass;
        MonitorData* monitor;
    };

    struct EntityTask_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EntityTask_c__StaticFields {
        struct EntityTask_c* __9;
        struct Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus_* __9__37_0;
    };

    struct EntityTask_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityTask_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityTask_c__VTable vtable;
    };

    enum class GroundPatrolWithDirectionTask_GroundPatrolMode__Enum : int32_t {
        Infinite = 0x00000000,
        ReturnSuccessAtEachStop = 0x00000001,
    };

    struct GroundPatrolWithDirectionTask_GroundPatrolMode__Enum__Boxed {
        struct GroundPatrolWithDirectionTask_GroundPatrolMode__Enum__Class* klass;
        MonitorData* monitor;
        GroundPatrolWithDirectionTask_GroundPatrolMode__Enum value;
    };

    enum class GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum : int32_t {
        ToggleDirection = 0x00000000,
        AlwaysLeft = 0x00000001,
        AlwaysRight = 0x00000002,
    };

    struct GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Boxed {
        struct GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class* klass;
        MonitorData* monitor;
        GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum value;
    };

    struct GroundPatrolWithDirectionTask__Fields {
        struct EntityTask__Fields _;
        GroundPatrolWithDirectionTask_GroundPatrolMode__Enum PatrolMode;

        GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum PatrolDirectionMode;

        bool IdleBeforeTurning;
        struct MoonVector3* m_patrolOrigin;
        float MaxPatrolRadius;
        bool ShouldIdle;
        float MinIdleInterval;
        float MaxIdleInterval;
        float MinMovingInterval;
        float MaxMovingInterval;
        bool StartWithMoving;
        float TraversalSpeed;
        float m_timeUntilIdleEnd;
        float m_timeUntilMovingEnd;
        struct GroundEntityLocomotion* m_locomotion;
        bool m_movingLeft;
        bool m_isMoving;
        struct Vector2 m_effectivePatrolOrigin;
        int32_t m_standingOnLedge;
        int32_t m_wallHitreqId;
    };

    struct GroundPatrolWithDirectionTask {
        struct GroundPatrolWithDirectionTask__Class* klass;
        MonitorData* monitor;
        struct GroundPatrolWithDirectionTask__Fields fields;
    };

    struct GroundPatrolWithDirectionTask_GroundPatrolMode__Enum__VTable {
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

    struct GroundPatrolWithDirectionTask_GroundPatrolMode__Enum__StaticFields {
    };

    struct GroundPatrolWithDirectionTask_GroundPatrolMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GroundPatrolWithDirectionTask_GroundPatrolMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GroundPatrolWithDirectionTask_GroundPatrolMode__Enum__VTable vtable;
    };

    struct GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__VTable {
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

    struct GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__StaticFields {
    };

    struct GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__VTable vtable;
    };

    struct GroundPatrolWithDirectionTask__VTable {
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
    };

    struct GroundPatrolWithDirectionTask__StaticFields {
    };

    struct GroundPatrolWithDirectionTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GroundPatrolWithDirectionTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GroundPatrolWithDirectionTask__VTable vtable;
    };

    enum class WaitNodeNonFixedRandom_WaitNodeReturnType__Enum : int32_t {
        Running = 0x00000000,
        Blocking = 0x00000001,
    };

    struct WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Boxed {
        struct WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class* klass;
        MonitorData* monitor;
        WaitNodeNonFixedRandom_WaitNodeReturnType__Enum value;
    };

    struct WaitNodeNonFixedRandom__Fields {
        struct BehaviourNode__Fields _;
        struct MoonFloat* WaitTime;
        bool RandomValue;
        struct MoonFloat* MinTime;
        struct MoonFloat* MaxTime;
        WaitNodeNonFixedRandom_WaitNodeReturnType__Enum ReturnStatus;

        float m_timeEntered;
        float m_waitTime;
    };

    struct WaitNodeNonFixedRandom {
        struct WaitNodeNonFixedRandom__Class* klass;
        MonitorData* monitor;
        struct WaitNodeNonFixedRandom__Fields fields;
    };

    struct WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__VTable {
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

    struct WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__StaticFields {
    };

    struct WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__VTable vtable;
    };

    struct WaitNodeNonFixedRandom__VTable {
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
    };

    struct WaitNodeNonFixedRandom__StaticFields {
    };

    struct WaitNodeNonFixedRandom__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaitNodeNonFixedRandom__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaitNodeNonFixedRandom__VTable vtable;
    };

    struct DistanceToClosestMortarPosition__Fields {
        struct Condition__Fields _;
        struct MoonVector3* Target;
        CompareMethod__Enum CheckType;

        struct MoonFloat* Distance;
        float FloatingPoint;
    };

    struct DistanceToClosestMortarPosition {
        struct DistanceToClosestMortarPosition__Class* klass;
        MonitorData* monitor;
        struct DistanceToClosestMortarPosition__Fields fields;
    };

    struct DistanceToClosestMortarPosition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
        VirtualInvokeData OnValidate;
        VirtualInvokeData get_Info;
        VirtualInvokeData PerformSanityCheck;
        VirtualInvokeData OnCheck;
    };

    struct DistanceToClosestMortarPosition__StaticFields {
    };

    struct DistanceToClosestMortarPosition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DistanceToClosestMortarPosition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DistanceToClosestMortarPosition__VTable vtable;
    };

    struct MoveEventWindowAnimator__Fields {
        struct TimelineEntity__Fields _;
        MoveEventType__Enum EventType;

        struct Action_1_Moon_Timeline_MoveEventType_* m_eventStart;
        struct Action_1_Moon_Timeline_MoveEventType_* m_eventStay;
        struct Action_1_Moon_Timeline_MoveEventType_* m_eventEnd;
        float m_time;
        bool DebugStartAndEndTimes;
    };

    struct MoveEventWindowAnimator {
        struct MoveEventWindowAnimator__Class* klass;
        MonitorData* monitor;
        struct MoveEventWindowAnimator__Fields fields;
    };

    struct Action_1_Moon_Timeline_MoveEventType___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_Moon_Timeline_MoveEventType_ {
        struct Action_1_Moon_Timeline_MoveEventType___Class* klass;
        MonitorData* monitor;
        struct Action_1_Moon_Timeline_MoveEventType___Fields fields;
    };

    struct Action_1_Moon_Timeline_MoveEventType___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Clone;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData Clone_1;
        VirtualInvokeData GetMethodImpl;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetInvocationList;
        VirtualInvokeData CombineImpl;
        VirtualInvokeData RemoveImpl;
        VirtualInvokeData Invoke;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
    };

    struct Action_1_Moon_Timeline_MoveEventType___StaticFields {
    };

    struct Action_1_Moon_Timeline_MoveEventType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_Moon_Timeline_MoveEventType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_Moon_Timeline_MoveEventType___VTable vtable;
    };

    struct MoveEventWindowAnimator__VTable {
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
    };

    struct MoveEventWindowAnimator__StaticFields {
    };

    struct MoveEventWindowAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoveEventWindowAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoveEventWindowAnimator__VTable vtable;
    };

    struct MoveEventWindowAnimator_c {
        struct MoveEventWindowAnimator_c__Class* klass;
        MonitorData* monitor;
    };

    struct MoveEventWindowAnimator_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoveEventWindowAnimator_c__StaticFields {
        struct MoveEventWindowAnimator_c* __9;
        struct Action_1_Moon_Timeline_MoveEventType_* __9__18_0;
        struct Action_1_Moon_Timeline_MoveEventType_* __9__18_1;
        struct Action_1_Moon_Timeline_MoveEventType_* __9__18_2;
    };

    struct MoveEventWindowAnimator_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoveEventWindowAnimator_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoveEventWindowAnimator_c__VTable vtable;
    };

    struct BlockDamageInterruption_c {
        struct BlockDamageInterruption_c__Class* klass;
        MonitorData* monitor;
    };

    struct BlockDamageInterruption_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BlockDamageInterruption_c__StaticFields {
        struct BlockDamageInterruption_c* __9;
        struct Action_1_DamageWeightMask_* __9__18_0;
        struct Action_1_DamageWeightMask_* __9__18_1;
        struct Action_1_DamageWeightMask_* __9__18_2;
    };

    struct BlockDamageInterruption_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BlockDamageInterruption_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BlockDamageInterruption_c__VTable vtable;
    };

    enum class SandWormAnimationPlayer_StopBehaviourType__Enum : int32_t {
        StopAnimation = 0x00000000,
        None = 0x00000001,
    };

    struct SandWormAnimationPlayer_StopBehaviourType__Enum__Boxed {
        struct SandWormAnimationPlayer_StopBehaviourType__Enum__Class* klass;
        MonitorData* monitor;
        SandWormAnimationPlayer_StopBehaviourType__Enum value;
    };

    struct SandWormAnimationPlayer__Fields {
        struct TimelineEntity__Fields _;
        SandWormAnimationPlayer_StopBehaviourType__Enum StopBehaviour;

        struct SandWormEntity* SandWorm;
        struct SandWormEntity_SandWormBodyAnimation* Animation;
        int32_t Priority;
        float Speed;
    };

    struct SandWormAnimationPlayer {
        struct SandWormAnimationPlayer__Class* klass;
        MonitorData* monitor;
        struct SandWormAnimationPlayer__Fields fields;
    };

    struct SandWormAnimationPlayer_StopBehaviourType__Enum__VTable {
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

    struct SandWormAnimationPlayer_StopBehaviourType__Enum__StaticFields {
    };

    struct SandWormAnimationPlayer_StopBehaviourType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormAnimationPlayer_StopBehaviourType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormAnimationPlayer_StopBehaviourType__Enum__VTable vtable;
    };

    struct SandWormAnimationPlayer__VTable {
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
        VirtualInvokeData HasFinished;
    };

    struct SandWormAnimationPlayer__StaticFields {
    };

    struct SandWormAnimationPlayer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormAnimationPlayer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormAnimationPlayer__VTable vtable;
    };

    struct SandWormBodyWavePlayer__Fields {
        struct TimelineEntity__Fields _;
        struct SandWormEntity* SandWorm;
        struct SandWormEntity_SandWormBodyWave* Animation;
        float Speed;
    };

    struct SandWormBodyWavePlayer {
        struct SandWormBodyWavePlayer__Class* klass;
        MonitorData* monitor;
        struct SandWormBodyWavePlayer__Fields fields;
    };

    struct SandWormBodyWavePlayer__VTable {
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
    };

    struct SandWormBodyWavePlayer__StaticFields {
    };

    struct SandWormBodyWavePlayer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormBodyWavePlayer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormBodyWavePlayer__VTable vtable;
    };

    struct SandWormSquetchPlayer__Fields {
        struct TimelineEntity__Fields _;
        struct SandWormEntity* SandWorm;
        struct SandWormEntity_SandWormSquetch* Animation;
        float Speed;
    };

    struct SandWormSquetchPlayer {
        struct SandWormSquetchPlayer__Class* klass;
        MonitorData* monitor;
        struct SandWormSquetchPlayer__Fields fields;
    };

    struct SandWormSquetchPlayer__VTable {
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
    };

    struct SandWormSquetchPlayer__StaticFields {
    };

    struct SandWormSquetchPlayer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormSquetchPlayer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormSquetchPlayer__VTable vtable;
    };

    struct TentacleAnimator__Fields {
        struct TimelineEntity__Fields _;
        struct Transform* referenceTargetPoint;
        struct TentaclePhysicsController* physicsController;
        struct AnimationCurve* alignmentForceCurve;
        float m_time;
    };

    struct TentacleAnimator {
        struct TentacleAnimator__Class* klass;
        MonitorData* monitor;
        struct TentacleAnimator__Fields fields;
    };

    struct TentacleAnimator__VTable {
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
        VirtualInvokeData OnTimelineSample;
    };

    struct TentacleAnimator__StaticFields {
    };

    struct TentacleAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleAnimator__VTable vtable;
    };

    struct RecorderAnimatorEntity__Fields {
        struct TimelineEntity__Fields _;
        int32_t RecorderSetupComplete;
        struct TextAsset* TextAsset;
        bool m_shouldLoadScenes;
        struct List_1_System_String_* m_ignoredScenes;
        struct List_1_RuntimeSceneMetaData_* m_runtimeSceneMetaDatas;
        bool m_finished;
        bool m_started;
        float m_time;
        bool m_loaded;
        int32_t m_enabledCount;
        struct RecorderData* m_recorderData;
    };

    struct RecorderAnimatorEntity {
        struct RecorderAnimatorEntity__Class* klass;
        MonitorData* monitor;
        struct RecorderAnimatorEntity__Fields fields;
    };

    struct RecorderAnimatorEntity__VTable {
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
        VirtualInvokeData HasFinished;
    };

} // namespace app
