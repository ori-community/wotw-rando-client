namespace app {
    struct TentacleSpitBehaviour__StaticFields {
    };

    struct TentacleSpitBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleSpitBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleSpitBehaviour__VTable vtable;
    };

    struct TentacleStabBehaviour__Fields {
        struct EntityBehaviourNode_1_TentacleEntity___Fields _;
        struct Enum__Array* Entries;
        struct MoonTimeline* attackTimeline;
        struct FloatAnimator* targetFollowForce;
        struct FloatAnimator* alignHeadForce;
        struct FloatAnimator* alignHeadForceMiss;
        struct FloatAnimator* referenceTargetOverride;
        struct FloatAnimator* referenceTargetOverrideMiss;
        struct FloatAnimator* positionAlignmentCurve;
        struct FloatAnimator* positionAlignmentCurveMiss;
        struct EventTriggerAnimator* lockTargetTrigger;
        struct EventTriggerAnimator* stickToGroundTrigger;
        struct EventTriggerAnimator* missEndTrigger;
        struct EventTriggerAnimator* continueFollowTrigger;
        struct EventTriggerAnimator* continueFollowMissTrigger;
        float MaxDistance;
        float raycastGroundDistance;
        struct LayerMask groundMask;
        float maxSpeed;
        float headAlignmentMinDistance;
        float MissOvershootDistance;
        bool NoLeashingWhileAttack;
        struct EntityTargetting* HeadTargeting;
        struct GameObject* InstantiateHitEffect;
        struct LayerMask HeadStickLayer;
        struct Vector3 m_targetPosition;
        bool m_targetLocked;
        struct Transform* m_stickTransform;
        struct Vector3 m_stickAnchor;
        struct Vector3 m_previousReferenceTarget;
        struct Vector3 m_lockedTargetPosition;
        struct Vector3 m_stickNormal;
        int32_t m_headStickLayerInt;
        struct TentacleAnimatedSettings m_stabSettings;
        bool m_continueFollowAfterAttack;
        float m_rigidAlignToAnimationCache;
        bool RecordTargetPositionBlendData;
    };

    struct TentacleStabBehaviour {
        struct TentacleStabBehaviour__Class* klass;
        MonitorData* monitor;
        struct TentacleStabBehaviour__Fields fields;
    };

    struct TentacleStabBehaviour__VTable {
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
        VirtualInvokeData GetEntries;
        VirtualInvokeData Evaluate;
        VirtualInvokeData get_ShouldSkip;
    };

    struct TentacleStabBehaviour__StaticFields {
        struct Enum HitEnum;
        struct Enum MissEnum;
    };

    struct TentacleStabBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleStabBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleStabBehaviour__VTable vtable;
    };

    struct TentacleTurnBehaviour__Fields {
        struct LocomotionTurningTimelineBehaviour__Fields _;
        struct FloatAnimator* animationForce;
        struct FloatAnimator* positionAlignmentCurve;
        struct EventTriggerAnimator* resetJointsTrigger;
        float targetLerp;
        float headRotationAlignmentToTarget;
        float maxSpeed;
        struct TentacleEntity* m_tentacleEntity;
        bool m_jointsReset;
    };

    struct TentacleTurnBehaviour {
        struct TentacleTurnBehaviour__Class* klass;
        MonitorData* monitor;
        struct TentacleTurnBehaviour__Fields fields;
    };

    struct TentacleTurnBehaviour__VTable {
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
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData get_TargetLookDirectionX;
        VirtualInvokeData set_TargetLookDirectionX;
        VirtualInvokeData PlayAnimation;
        VirtualInvokeData ShouldEndBehaviour;
        VirtualInvokeData get_IsPlaying;
        VirtualInvokeData CanCancel;
        VirtualInvokeData RootMotionModifier;
    };

    struct TentacleTurnBehaviour__StaticFields {
    };

    struct TentacleTurnBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleTurnBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleTurnBehaviour__VTable vtable;
    };

    struct TentacleVomitBehaviour__Fields {
        struct EntityBehaviourNode_1_TentacleEntity___Fields _;
        struct ProjectileSpawner* ProjectileSpawner;
        struct MoonTimeline* VomitTimeline;
        struct EventTriggerAnimator* VomitSection;
        struct FloatAnimator* DirectionAnimator;
        struct FloatAnimator* AnimationAlignmentAnimator;
        struct FloatAnimationParameter* DirectionParameter;
        float ProjectileInterval;
        struct GameObject* CreepPrefab;
        float m_timer;
        bool m_isVomiting;
        bool m_upsidedown;
        struct TentacleAnimatedSettings m_originalSettings;
    };

    struct TentacleVomitBehaviour {
        struct TentacleVomitBehaviour__Class* klass;
        MonitorData* monitor;
        struct TentacleVomitBehaviour__Fields fields;
    };

    struct TentacleVomitBehaviour__VTable {
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

    struct TentacleVomitBehaviour__StaticFields {
    };

    struct TentacleVomitBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TentacleVomitBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TentacleVomitBehaviour__VTable vtable;
    };

    struct VerletStructureAnimationPostprocess__Fields {
        struct AnimationPostprocess__Fields _;
        int32_t OrderNumber;
        struct VerletStructure* verletStructure;
        bool initialised;
        struct Vector3__Array* initialPositions;
        struct Quaternion__Array* initialRotations;
    };

    struct VerletStructureAnimationPostprocess {
        struct VerletStructureAnimationPostprocess__Class* klass;
        MonitorData* monitor;
        struct VerletStructureAnimationPostprocess__Fields fields;
    };

    struct VerletStructureAnimationPostprocess__VTable {
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

    struct VerletStructureAnimationPostprocess__StaticFields {
    };

    struct VerletStructureAnimationPostprocess__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletStructureAnimationPostprocess__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletStructureAnimationPostprocess__VTable vtable;
    };

    struct EntityBehaviourNode_1_LizardEntity___Fields {
        struct EntityBehaviourNode__Fields _;
    };

    struct EntityBehaviourNode_1_LizardEntity_ {
        struct EntityBehaviourNode_1_LizardEntity___Class* klass;
        MonitorData* monitor;
        struct EntityBehaviourNode_1_LizardEntity___Fields fields;
    };

    struct LizardDodgeRollBehaviour__Fields {
        struct EntityBehaviourNode_1_LizardEntity___Fields _;
        struct MoonTimeline* TimelineSequence;
        struct RootMotionProcessorData* RootMotion;
        bool ClearRetaliationStatus;
        struct GroundEntityLocomotion* m_groundLocomotion;
    };

    struct LizardDodgeRollBehaviour {
        struct LizardDodgeRollBehaviour__Class* klass;
        MonitorData* monitor;
        struct LizardDodgeRollBehaviour__Fields fields;
    };

    struct EntityBehaviourNode_1_LizardEntity___VTable {
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

    struct EntityBehaviourNode_1_LizardEntity___StaticFields {
    };

    struct EntityBehaviourNode_1_LizardEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityBehaviourNode_1_LizardEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityBehaviourNode_1_LizardEntity___VTable vtable;
    };

    struct LizardDodgeRollBehaviour__VTable {
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
        VirtualInvokeData IsBlockingInterruption;
        VirtualInvokeData RootMotionRollBackModifier;
    };

    struct LizardDodgeRollBehaviour__StaticFields {
    };

    struct LizardDodgeRollBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardDodgeRollBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardDodgeRollBehaviour__VTable vtable;
    };

    struct LizardGroundChaseBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct MoonFloat* OvershootDistance;
        struct MoonFloat* MinChaseDistance;
        struct MoonFloat* TraversalTier;
        float MaxStuckTime;
        float StuckPositionError;
        bool StopLocomotionNearLedge;
        float LedgeCheckDepth;
        bool JustRunForward;
        struct GroundEntityLocomotion* m_locomotion;
        float _ChasingTime_k__BackingField;
        struct Vector3 m_initialEntityPosition;
        float m_timeStuck;
        struct Vector3 m_lastFramePosition;
        bool m_wasTargetPostionUpdatedThisTick;
        struct Vector3 m_cachedOvershootPos;
        float m_chaseDirection;
    };

    struct LizardGroundChaseBehaviour {
        struct LizardGroundChaseBehaviour__Class* klass;
        MonitorData* monitor;
        struct LizardGroundChaseBehaviour__Fields fields;
    };

    struct LizardGroundChaseBehaviour__VTable {
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
        VirtualInvokeData IsBlockingInterruption;
    };

    struct LizardGroundChaseBehaviour__StaticFields {
    };

    struct LizardGroundChaseBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardGroundChaseBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardGroundChaseBehaviour__VTable vtable;
    };

    enum class LizardJumpOverBehaviour_State__Enum : int32_t {
        Invalid = 0x00000000,
        Launch = 0x00000001,
        Land = 0x00000002,
    };

    struct LizardJumpOverBehaviour_State__Enum__Boxed {
        struct LizardJumpOverBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        LizardJumpOverBehaviour_State__Enum value;
    };

    struct LizardJumpOverBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        float JumpDistance;
        float JumpHeight;
        float LandingRealtiveHeightMin;
        float LandingRealtiveHeightMax;
        bool OnlyIfTargetFacingEntity;
        struct MoonTimeline* LaunchTimeline;
        struct EventTriggerAnimator* DisableDamageDealerTrigger;
        struct MoonTimeline* LandTimeline;
        struct Vector3 m_landingPoint;
        struct GroundEntityLocomotion* m_groundLocomotion;
        struct PlatformMovement* m_platformMovement;
        struct MoonTimeline* m_currentTimeline;
        bool m_startedFalling;
        LizardJumpOverBehaviour_State__Enum m_state;

        bool m_areDamageDealersDisabled;
        struct BlockDamageInterruptionHandler* m_blockingHandler;
    };

    struct LizardJumpOverBehaviour {
        struct LizardJumpOverBehaviour__Class* klass;
        MonitorData* monitor;
        struct LizardJumpOverBehaviour__Fields fields;
    };

    struct LizardJumpOverBehaviour_State__Enum__VTable {
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

    struct LizardJumpOverBehaviour_State__Enum__StaticFields {
    };

    struct LizardJumpOverBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardJumpOverBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardJumpOverBehaviour_State__Enum__VTable vtable;
    };

    struct LizardJumpOverBehaviour__VTable {
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
        VirtualInvokeData IsBlockingInterruption;
    };

    struct LizardJumpOverBehaviour__StaticFields {
    };

    struct LizardJumpOverBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardJumpOverBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardJumpOverBehaviour__VTable vtable;
    };

    enum class LizardKamikazeAttackBehaviour_State__Enum : int32_t {
        Unset = 0x00000000,
        RollStart = 0x00000001,
        JumpLoop = 0x00000002,
        GroundLoop = 0x00000003,
    };

    struct LizardKamikazeAttackBehaviour_State__Enum__Boxed {
        struct LizardKamikazeAttackBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        LizardKamikazeAttackBehaviour_State__Enum value;
    };

    struct LizardKamikazeAttackBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct MoonTimeline* RollStartTimeline;
        struct MoonTimeline* RollTimeline;
        struct MoonTimeline* JumpShakeTimeline;
        struct MoonTimeline* OnBounceTimeline;
        struct Vector2 InitialJump;
        float Bounciness;
        float MinYVelToBounce;
        float TargetOnGroundSpeed;
        float SpeedRubberbandStiffness;
        struct DamageDealer* DamageDealer;
        struct KamikazeLizardEntity* m_kamikazeLizardEntity;
        struct GroundEntityLocomotion* m_locomotion;
        struct PlatformMovement* m_platformMovement;
        LizardKamikazeAttackBehaviour_State__Enum m_state;

        struct Vector2 m_lastFrameVelocity;
        struct MoonTimeline* m_currentTimeline;
    };

    struct LizardKamikazeAttackBehaviour {
        struct LizardKamikazeAttackBehaviour__Class* klass;
        MonitorData* monitor;
        struct LizardKamikazeAttackBehaviour__Fields fields;
    };

    struct LizardKamikazeAttackBehaviour_State__Enum__VTable {
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

    struct LizardKamikazeAttackBehaviour_State__Enum__StaticFields {
    };

    struct LizardKamikazeAttackBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardKamikazeAttackBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardKamikazeAttackBehaviour_State__Enum__VTable vtable;
    };

    struct LizardKamikazeAttackBehaviour__VTable {
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
        VirtualInvokeData IsBlockingInterruption;
    };

    struct LizardKamikazeAttackBehaviour__StaticFields {
    };

    struct LizardKamikazeAttackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardKamikazeAttackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardKamikazeAttackBehaviour__VTable vtable;
    };

    enum class LizardMeleeAttackBehaviour_AttackType__Enum : int32_t {
        Claw = 0x00000000,
        Bite = 0x00000001,
        Pounce = 0x00000002,
    };

    struct LizardMeleeAttackBehaviour_AttackType__Enum__Boxed {
        struct LizardMeleeAttackBehaviour_AttackType__Enum__Class* klass;
        MonitorData* monitor;
        LizardMeleeAttackBehaviour_AttackType__Enum value;
    };

    struct LizardMeleeAttackBehaviour__Fields {
        struct MeleeAttackBehaviourNew__Fields _;
        bool AttackOnlyIfTargetInZone;
        struct PlayerInsideZoneChecker* AttackZone;
        struct List_1_Moon_Timeline_EventTriggerAnimator_* TimelineInterruptionPoints;
        LizardMeleeAttackBehaviour_AttackType__Enum Type;

        bool UseAttackResolve;
        struct MoonTimeline* NonTurnAttackReesolveTimeline;
        struct MoonTimeline* TurningAttackResolveTimeline;
        struct EventTriggerAnimator* TurningMirrorEvent;
        struct EventTriggerAnimator* JumpTrigger;
        struct Vector2 JumpSpeed;
        bool StopAttackTimelineOnExit;
        bool ExitWhenNoAttackTimelineIsPlaying;
        struct GroundEntityMovementProcessor* m_groundMovementProcessor;
        struct LizardEntity* m_lizardEntity;
        struct MoonTimeline* m_currentAttackVFX;
        bool m_attackPlayedCompletelly;
        AnimatorPlayState__Enum m_prevPlayStateWallRecoilNew;

        AnimatorPlayState__Enum m_prevPlayStateAttackTimelineNew;

        AnimatorPlayState__Enum m_prevPlayStateNonTurnAttackReesolveTimeline;

        AnimatorPlayState__Enum m_prevPlayStateTurningAttackResolveTimeline;

        int32_t requestId;
    };

    struct LizardMeleeAttackBehaviour {
        struct LizardMeleeAttackBehaviour__Class* klass;
        MonitorData* monitor;
        struct LizardMeleeAttackBehaviour__Fields fields;
    };

    struct LizardMeleeAttackBehaviour_AttackType__Enum__VTable {
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

    struct LizardMeleeAttackBehaviour_AttackType__Enum__StaticFields {
    };

    struct LizardMeleeAttackBehaviour_AttackType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardMeleeAttackBehaviour_AttackType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardMeleeAttackBehaviour_AttackType__Enum__VTable vtable;
    };

    struct LizardMeleeAttackBehaviour__VTable {
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
        VirtualInvokeData IsBlockingInterruption;
        VirtualInvokeData CacheCancellableAnimators;
        VirtualInvokeData ShouldCancel;
        VirtualInvokeData StartAttackTimeline;
        VirtualInvokeData OnTimelineSequenceStopEvent;
        VirtualInvokeData OnWeaponStickCollision;
        VirtualInvokeData ProvideDamageEffect;
        VirtualInvokeData RootMotionModifier;
    };

    struct LizardMeleeAttackBehaviour__StaticFields {
    };

    struct LizardMeleeAttackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardMeleeAttackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardMeleeAttackBehaviour__VTable vtable;
    };

    struct LizardMeleeAttackBehaviour_c {
        struct LizardMeleeAttackBehaviour_c__Class* klass;
        MonitorData* monitor;
    };

    struct LizardMeleeAttackBehaviour_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LizardMeleeAttackBehaviour_c__StaticFields {
        struct LizardMeleeAttackBehaviour_c* __9;
        struct Action* __9__27_0;
    };

    struct LizardMeleeAttackBehaviour_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardMeleeAttackBehaviour_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardMeleeAttackBehaviour_c__VTable vtable;
    };

    struct TimelineDodgeBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
    };

    struct TimelineDodgeBehaviour {
        struct TimelineDodgeBehaviour__Class* klass;
        MonitorData* monitor;
        struct TimelineDodgeBehaviour__Fields fields;
    };

    struct TimelineDodgeBehaviour__VTable {
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

} // namespace app
