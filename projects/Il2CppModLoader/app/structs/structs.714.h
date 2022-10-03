namespace app {
    struct SandWormReturnToSandBehaviour__StaticFields {
    };

    struct SandWormReturnToSandBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormReturnToSandBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormReturnToSandBehaviour__VTable vtable;
    };

    struct SandWormReturnToWaterBehaviour__Fields {
        struct EntityBehaviourNode_1_SandWormEntity___Fields _;
        float MaxCheckDistance;
        float MaxReturnTime;
        struct SandWormLocomotion* m_wormLocomotion;
        struct Vector2 m_targetPosition;
        float m_outSideSandTime;
        struct Transform* m_headTop;
        struct Transform* m_head;
        struct Transform* m_tail;
        int32_t m_requestID;
        float MaxStuckTime;
        float m_noSafePathTime;
    };

    struct SandWormReturnToWaterBehaviour {
        struct SandWormReturnToWaterBehaviour__Class* klass;
        MonitorData* monitor;
        struct SandWormReturnToWaterBehaviour__Fields fields;
    };

    struct SandWormReturnToWaterBehaviour__VTable {
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
    };

    struct SandWormReturnToWaterBehaviour__StaticFields {
    };

    struct SandWormReturnToWaterBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormReturnToWaterBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormReturnToWaterBehaviour__VTable vtable;
    };

    struct SandWormSetSpeedSettingsBehaviour__Fields {
        struct EntityBehaviourNode_1_SandWormEntity___Fields _;
        SandWormLocomotion_SpeedSetting__Enum SpeedSetting;

        struct SandWormLocomotion* m_wormLocomotion;
    };

    struct SandWormSetSpeedSettingsBehaviour {
        struct SandWormSetSpeedSettingsBehaviour__Class* klass;
        MonitorData* monitor;
        struct SandWormSetSpeedSettingsBehaviour__Fields fields;
    };

    struct SandWormSetSpeedSettingsBehaviour__VTable {
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
    };

    struct SandWormSetSpeedSettingsBehaviour__StaticFields {
    };

    struct SandWormSetSpeedSettingsBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormSetSpeedSettingsBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormSetSpeedSettingsBehaviour__VTable vtable;
    };

    struct SandWormUnclogBehaviour__Fields {
        struct EntityBehaviourNode_1_SandWormEntity___Fields _;
        float ArriveDistance;
        float RetreatDistance;
        float ClearanceRadius;
        float AngleStep;
        struct SandWormSandDigLocomotionBehaviour_SpeedEntry SpeedSettings;
        SandWormLocomotion_SpeedSetting__Enum SpeedToSetOnExit;

        struct SandWormLocomotion* m_wormLocomotion;
        struct Vector2 m_targetPosition;
        float m_avoidancePowerAccumulator;
        struct Vector3 m_unclogDirection;
        bool _IsWaterWorm_k__BackingField;
    };

    struct SandWormUnclogBehaviour {
        struct SandWormUnclogBehaviour__Class* klass;
        MonitorData* monitor;
        struct SandWormUnclogBehaviour__Fields fields;
    };

    struct SandWormUnclogBehaviour__VTable {
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
    };

    struct SandWormUnclogBehaviour__StaticFields {
    };

    struct SandWormUnclogBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormUnclogBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormUnclogBehaviour__VTable vtable;
    };

    struct CageCircleTest__Fields {
        struct MonoBehaviour__Fields _;
        struct CageStructureTool* CageStructureTool;
        float Radius;
    };

    struct CageCircleTest {
        struct CageCircleTest__Class* klass;
        MonitorData* monitor;
        struct CageCircleTest__Fields fields;
    };

    struct CageCircleTest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CageCircleTest__StaticFields {
    };

    struct CageCircleTest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CageCircleTest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CageCircleTest__VTable vtable;
    };

    struct SandWormDeathBehaviour__Fields {
        struct EntityReactionBehaviour_1_SandWormEntity___Fields _;
        struct MoonTimeline* DeathSequence;
        float DamageForceMultiplier;
        float MaxInWaterVelocity;
        struct SandwormHitReaction* m_hitReactionBehaviour;
        struct DeathStartEffectSpawnSetting* DeathStartEffect;
    };

    struct SandWormDeathBehaviour {
        struct SandWormDeathBehaviour__Class* klass;
        MonitorData* monitor;
        struct SandWormDeathBehaviour__Fields fields;
    };

    struct SandWormDeathBehaviour__VTable {
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

    struct SandWormDeathBehaviour__StaticFields {
    };

    struct SandWormDeathBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormDeathBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormDeathBehaviour__VTable vtable;
    };

    struct __declspec(align(8)) SandWormEntity_EnableVerletTentacles_d_185__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct SandWormEntity* __4__this;
    };

    struct SandWormEntity_EnableVerletTentacles_d_185 {
        struct SandWormEntity_EnableVerletTentacles_d_185__Class* klass;
        MonitorData* monitor;
        struct SandWormEntity_EnableVerletTentacles_d_185__Fields fields;
    };

    struct SandWormEntity_EnableVerletTentacles_d_185__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct SandWormEntity_EnableVerletTentacles_d_185__StaticFields {
    };

    struct SandWormEntity_EnableVerletTentacles_d_185__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormEntity_EnableVerletTentacles_d_185__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormEntity_EnableVerletTentacles_d_185__VTable vtable;
    };

    struct SandWormEntity_c {
        struct SandWormEntity_c__Class* klass;
        MonitorData* monitor;
    };

    struct SandWormEntity_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SandWormEntity_c__StaticFields {
        struct SandWormEntity_c* __9;
        struct Func_1_Boolean_* __9__198_0;
    };

    struct SandWormEntity_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormEntity_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormEntity_c__VTable vtable;
    };

    struct SandWormEntityEditorUpdater__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct SandWormEntityEditorUpdater {
        struct SandWormEntityEditorUpdater__Class* klass;
        MonitorData* monitor;
        struct SandWormEntityEditorUpdater__Fields fields;
    };

    struct SandWormEntityEditorUpdater__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SandWormEntityEditorUpdater__StaticFields {
    };

    struct SandWormEntityEditorUpdater__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormEntityEditorUpdater__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormEntityEditorUpdater__VTable vtable;
    };

    struct SandWormFallReactionBehaviour__Fields {
        struct EntityReactionBehaviour__Fields _;
        struct SandWormEntity* m_wormEntity;
        struct SandWormLocomotion* m_wormLocomotion;
        float DeathOnGroundTime;
        float m_onGroundTimer;
        bool m_onGround;
        float TimeBeforeOffGround;
        float m_timeBeforeOffGround;
    };

    struct SandWormFallReactionBehaviour {
        struct SandWormFallReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct SandWormFallReactionBehaviour__Fields fields;
    };

    struct SandWormFallReactionBehaviour__VTable {
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

    struct SandWormFallReactionBehaviour__StaticFields {
    };

    struct SandWormFallReactionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormFallReactionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormFallReactionBehaviour__VTable vtable;
    };

    struct SandWormSegmentTester__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* Target;
        float MoveSpeed;
        float SmoothDamp;
        struct Vector3 m_velocity;
    };

    struct SandWormSegmentTester {
        struct SandWormSegmentTester__Class* klass;
        MonitorData* monitor;
        struct SandWormSegmentTester__Fields fields;
    };

    struct SandWormSegmentTester__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SandWormSegmentTester__StaticFields {
    };

    struct SandWormSegmentTester__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormSegmentTester__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormSegmentTester__VTable vtable;
    };

    struct SandWormThrownBehaviour__Fields {
        struct EntityBehaviour__Fields _;
        float _Duration_k__BackingField;
        struct SandWormLocomotion* m_locomotion;
        bool m_movingToEdge;
        float m_remainingTime;
    };

    struct SandWormThrownBehaviour {
        struct SandWormThrownBehaviour__Class* klass;
        MonitorData* monitor;
        struct SandWormThrownBehaviour__Fields fields;
    };

    struct SandWormThrownBehaviour__VTable {
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

    struct SandWormThrownBehaviour__StaticFields {
    };

    struct SandWormThrownBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormThrownBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormThrownBehaviour__VTable vtable;
    };

    struct SandWormAttackSelector {
        struct SandWormAttackSelector__Class* klass;
        MonitorData* monitor;
    };

    struct SandWormAttackSelector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SandWormAttackSelector__StaticFields {
    };

    struct SandWormAttackSelector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandWormAttackSelector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandWormAttackSelector__VTable vtable;
    };

    struct TargetTransformPostprocess__Fields {
        struct AnimationPostprocess__Fields _;
        struct TargetTransformPostprocess_TransformMapping__Array* Mappings;
        int32_t m_order;
    };

    struct TargetTransformPostprocess {
        struct TargetTransformPostprocess__Class* klass;
        MonitorData* monitor;
        struct TargetTransformPostprocess__Fields fields;
    };

    struct __declspec(align(8)) TargetTransformPostprocess_TransformMapping__Fields {
        struct Transform* Transform;
        struct Transform* TargetTransform;
    };

    struct TargetTransformPostprocess_TransformMapping {
        struct TargetTransformPostprocess_TransformMapping__Class* klass;
        MonitorData* monitor;
        struct TargetTransformPostprocess_TransformMapping__Fields fields;
    };

    struct TargetTransformPostprocess_TransformMapping__Array {
        struct TargetTransformPostprocess_TransformMapping__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TargetTransformPostprocess_TransformMapping* vector[32];
    };

    struct TargetTransformPostprocess_TransformMapping__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TargetTransformPostprocess_TransformMapping__StaticFields {
    };

    struct TargetTransformPostprocess_TransformMapping__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TargetTransformPostprocess_TransformMapping__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TargetTransformPostprocess_TransformMapping__VTable vtable;
    };

    struct TargetTransformPostprocess_TransformMapping__Array__VTable {
    };

    struct TargetTransformPostprocess_TransformMapping__Array__StaticFields {
    };

    struct TargetTransformPostprocess_TransformMapping__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TargetTransformPostprocess_TransformMapping__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TargetTransformPostprocess_TransformMapping__Array__VTable vtable;
    };

    struct TargetTransformPostprocess__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_RequiresOnUpdate;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData OnUpdate_1;
        VirtualInvokeData get_TotalWeight;
        VirtualInvokeData get_HasFinished;
        VirtualInvokeData get_Order;
        VirtualInvokeData OnPostEnable;
        VirtualInvokeData OnPostDisable;
        VirtualInvokeData OnAddedToAnimator;
        VirtualInvokeData OnRemovedFromAnimator;
        VirtualInvokeData OnActivated;
        VirtualInvokeData OnDeactivated;
        VirtualInvokeData Process;
        VirtualInvokeData OnSceneGui;
    };

    struct TargetTransformPostprocess__StaticFields {
    };

    struct TargetTransformPostprocess__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TargetTransformPostprocess__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TargetTransformPostprocess__VTable vtable;
    };

    struct VerletChain__Fields {
        struct MonoBehaviour__Fields _;
        float Stiffness;
        float Mass;
        float Damping;
        struct Vector3 Gravity;
        struct Transform__Array* Points;
        struct VerletBody* m_verletBody;
    };

    struct VerletChain {
        struct VerletChain__Class* klass;
        MonitorData* monitor;
        struct VerletChain__Fields fields;
    };

    struct VerletChain__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VerletChain__StaticFields {
    };

    struct VerletChain__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletChain__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletChain__VTable vtable;
    };

    struct AggroSelector {
        struct AggroSelector__Class* klass;
        MonitorData* monitor;
    };

    struct AggroSelector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AggroSelector__StaticFields {
    };

    struct AggroSelector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AggroSelector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AggroSelector__VTable vtable;
    };

    struct EntityBehaviourNode_1_SkeetoEntity___Fields {
        struct EntityBehaviourNode__Fields _;
    };

    struct EntityBehaviourNode_1_SkeetoEntity_ {
        struct EntityBehaviourNode_1_SkeetoEntity___Class* klass;
        MonitorData* monitor;
        struct EntityBehaviourNode_1_SkeetoEntity___Fields fields;
    };

    enum class KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum : int32_t {
        Unset = 0x00000000,
        FlipTowardsTarget = 0x00000001,
        Anticipation = 0x00000002,
        Attack = 0x00000003,
        Pegged = 0x00000004,
    };

    struct KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__Boxed {
        struct KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class* klass;
        MonitorData* monitor;
        KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum value;
    };

    struct KamikazeSkeetoDiveAttackBehaviour__Fields {
        struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
        struct MoonTimeline* FlipTimeline;
        struct EventTriggerAnimator* FlipTrigger;
        struct Vector2 ApproachTargetOffset;
        float ApproachTargetRandomDistance;
        struct MoonTimeline* AnticipationTimeline;
        float AnticipationTime;
        struct MoonTimeline* AttackTimeline;
        float DashSpeed;
        struct Transform* PegCheckRayOrigin;
        float PegRange;
        struct TriggerColliderCallback* ExplodeContactCollider;
        struct EntityTargetting* BashTarget;
        struct MoonTimeline* PeggedTimeline;
        struct SphereCollider* ClearanceRequired;
        float m_explodeTimer;
        float m_explodeDuration;
        bool ApplyDebugDamageOnAnticipation;
        bool ApplyDamageOnAttack;
        bool ApplyDamageOnPegged;
        float DelayBetweenDebugDamage;
        float m_timeToDebugDamage;
        DamageWeight__Enum DebugDamageWeight;

        KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum m_state;

        struct Vector3 m_targetPosition;
        struct Vector3 m_upDirection;
        struct Vector3 m_attackDirection;
        struct RaycastHit m_pegHitInfo;
        bool m_isAttackDirectionForced;
        float m_supressExplodeTriggerTimeLeft;
        struct Rigidbody* m_rigidbody;
        float _InitialDirection_k__BackingField;
    };

    struct KamikazeSkeetoDiveAttackBehaviour {
        struct KamikazeSkeetoDiveAttackBehaviour__Class* klass;
        MonitorData* monitor;
        struct KamikazeSkeetoDiveAttackBehaviour__Fields fields;
    };

    struct EntityBehaviourNode_1_SkeetoEntity___VTable {
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
        VirtualInvokeData __unknown;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
        VirtualInvokeData ShouldPauseLocomotion;
        VirtualInvokeData CacheSerializedComponents;
        VirtualInvokeData OnEntityInitialized;
    };

    struct EntityBehaviourNode_1_SkeetoEntity___StaticFields {
    };

    struct EntityBehaviourNode_1_SkeetoEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityBehaviourNode_1_SkeetoEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityBehaviourNode_1_SkeetoEntity___VTable vtable;
    };

    struct KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__VTable {
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

    struct KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__StaticFields {
    };

    struct KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__VTable vtable;
    };

    struct KamikazeSkeetoDiveAttackBehaviour__VTable {
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
    };

    struct KamikazeSkeetoDiveAttackBehaviour__StaticFields {
    };

    struct KamikazeSkeetoDiveAttackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KamikazeSkeetoDiveAttackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KamikazeSkeetoDiveAttackBehaviour__VTable vtable;
    };

    struct SkeetoLocomotion__Fields {
        struct Locomotion__Fields _;
        struct SkeetoLocomotionIdleBehaviour* IdleBehaviour;
        struct SkeetoAirEntityMovementProcessor* m_airMovement;
        float DeadGravity;
        float MaxDeadFallSpeed;
        bool m_lookDirectionLocked;
        struct Action* OnWontReachTarget;
        EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;

        struct SkeetoAirMoveBehaviour* m_movementBehaviour;
        struct Nullable_1_Single_ m_registeredLookDirection;
        float m_cachedMaxSpeed;
        bool m_cachedUseObstacleHitAvoidance;
    };

    struct SkeetoLocomotion {
        struct SkeetoLocomotion__Class* klass;
        MonitorData* monitor;
        struct SkeetoLocomotion__Fields fields;
    };

    enum class SkeetoLocomotionIdleBehaviour_State__Enum : int32_t {
        Unset = 0x00000000,
        Fly = 0x00000001,
        Flip = 0x00000002,
    };

    struct SkeetoLocomotionIdleBehaviour_State__Enum__Boxed {
        struct SkeetoLocomotionIdleBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        SkeetoLocomotionIdleBehaviour_State__Enum value;
    };

    struct SkeetoLocomotionIdleBehaviour__Fields {
        struct EntityLocomotionTask__Fields _;
        struct MoonTimeline* IdleMoonTimeline;
        struct MoonTimeline* FlipTimeline;
        struct EventTriggerAnimator* FlipTrigger;
        struct FloatAnimationParameter* YDirectionParameter;
        float YDirectionParameterChangeRate;
        float MaxSpeed;
        float Acceleration;
        float AngularVelocity;
        struct SkeetoLocomotion* m_locomotion;
        struct PlatformMovement* m_platformMovement;
        SkeetoLocomotionIdleBehaviour_State__Enum m_state;

        float m_timeInState;
        struct MoonTimeline* m_currentTimeline;
        float m_yDirectionParameterValue;
    };

} // namespace app
