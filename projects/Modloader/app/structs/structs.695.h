namespace app {
    struct MantisHorizontalJumpAttackBehaviour_State__Enum__StaticFields {
    };

    struct MantisHorizontalJumpAttackBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisHorizontalJumpAttackBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisHorizontalJumpAttackBehaviour_State__Enum__VTable vtable;
    };

    struct MantisHorizontalJumpAttackBehaviour__VTable {
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

    struct MantisHorizontalJumpAttackBehaviour__StaticFields {
    };

    struct MantisHorizontalJumpAttackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisHorizontalJumpAttackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisHorizontalJumpAttackBehaviour__VTable vtable;
    };

    struct MantisHorizontalJumpAttackBehaviour_c {
        struct MantisHorizontalJumpAttackBehaviour_c__Class* klass;
        MonitorData* monitor;
    };

    struct MantisHorizontalJumpAttackBehaviour_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MantisHorizontalJumpAttackBehaviour_c__StaticFields {
        struct MantisHorizontalJumpAttackBehaviour_c* __9;
        struct Action* __9__68_0;
        struct Action* __9__69_0;
        struct Action* __9__70_0;
    };

    struct MantisHorizontalJumpAttackBehaviour_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisHorizontalJumpAttackBehaviour_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisHorizontalJumpAttackBehaviour_c__VTable vtable;
    };

    enum class MantisJumpAttackBehaviour_JumpCountType__Enum : int32_t {
        SingleJump = 0x00000000,
        TripleJump = 0x00000001,
    };

    struct MantisJumpAttackBehaviour_JumpCountType__Enum__Boxed {
        struct MantisJumpAttackBehaviour_JumpCountType__Enum__Class* klass;
        MonitorData* monitor;
        MantisJumpAttackBehaviour_JumpCountType__Enum value;
    };

    enum class MantisJumpAttackBehaviour_State__Enum : int32_t {
        Unset = 0x00000000,
        Anticipation = 0x00000001,
        Main = 0x00000002,
        Land = 0x00000003,
        LandAndJump = 0x00000004,
    };

    struct MantisJumpAttackBehaviour_State__Enum__Boxed {
        struct MantisJumpAttackBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        MantisJumpAttackBehaviour_State__Enum value;
    };

    struct MantisJumpAttackBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        MantisJumpAttackBehaviour_JumpCountType__Enum AttackType;

        struct MoonTimeline* Anticipation;
        struct MoonTimeline* TurnAnticipation;
        struct MoonTimeline* Main;
        struct MoonTimeline* Land;
        struct MoonTimeline* LandAndJump;
        struct MoonTimeline* TurnLandAndJump;
        struct MantisJumpAttackSettings* JumpAttackSettings;
        struct MantisJumpAttackSettings* MidJumpAttackSettings;
        struct MoonTimeline* MidJumpLandEffect;
        struct MoonTimeline* LastJumpLandEffect;
        struct MoonTimeline* m_currentTimeline;
        struct GroundEntityLocomotion* m_locomotion;
        struct CharacterPlatformMovement* m_platformMovement;
        float m_initGravity;
        float m_initDeceleration;
        struct Vector3 m_playerSmoothSpeed;
        struct Vector2 m_jumpSpeed;
        bool m_jumpDirectionRight;
        float m_turnDirection;
        float LandDecelerationMultiplier;
        float ShortJumpHeight;
        float JumpHeight1;
        float JumpDistance1;
        float JumpHeight2;
        float JumpDistance2;
        float JumpHeight3;
        float JumpDistance3;
        float Gravity;
        float MaxFallSpeed;
        float Acceleration;
        struct RootMotionProcessorData* RootMotion;
        struct Transform* StompPrefab;
        struct MantisGrayboxEntity* m_mantisEntity;
        struct GroundEntityMovementProcessor* m_movementProcessor;
        float m_lastFrameVerticalOffsetInAnticipation;
        bool m_isTurning;
        struct Vector3 m_targetPosition;
        int32_t m_totalJumps;
        float m_initMaxFallSpeed;
        struct Vector2 m_lastVelocity;
        bool m_tookOffTheGround;
        DamageWeight__Enum FallTouchDamageWeight;

        struct CharacterEnvironmentForceController* EnvironmentForceController;
        float GroundImpulse;
        bool DebugPauseOnLand;
        MantisJumpAttackBehaviour_State__Enum m_state;

        float m_stateTime;
        struct BlockDamageInterruptionHandler* m_blockingHandlerAnticipation;
        struct BlockDamageInterruptionHandler* m_blockingHandlerTurnAnticipation;
        struct BlockDamageInterruptionHandler* m_blockingHandlerMain;
    };

    struct MantisJumpAttackBehaviour {
        struct MantisJumpAttackBehaviour__Class* klass;
        MonitorData* monitor;
        struct MantisJumpAttackBehaviour__Fields fields;
    };

    struct MantisJumpAttackBehaviour_JumpCountType__Enum__VTable {
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

    struct MantisJumpAttackBehaviour_JumpCountType__Enum__StaticFields {
    };

    struct MantisJumpAttackBehaviour_JumpCountType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisJumpAttackBehaviour_JumpCountType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisJumpAttackBehaviour_JumpCountType__Enum__VTable vtable;
    };

    struct MantisJumpAttackBehaviour_State__Enum__VTable {
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

    struct MantisJumpAttackBehaviour_State__Enum__StaticFields {
    };

    struct MantisJumpAttackBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisJumpAttackBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisJumpAttackBehaviour_State__Enum__VTable vtable;
    };

    struct MantisJumpAttackBehaviour__VTable {
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

    struct MantisJumpAttackBehaviour__StaticFields {
    };

    struct MantisJumpAttackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisJumpAttackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisJumpAttackBehaviour__VTable vtable;
    };

    struct MantisJumpAttackBehaviour_c {
        struct MantisJumpAttackBehaviour_c__Class* klass;
        MonitorData* monitor;
    };

    struct MantisJumpAttackBehaviour_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MantisJumpAttackBehaviour_c__StaticFields {
        struct MantisJumpAttackBehaviour_c* __9;
        struct Action* __9__61_0;
        struct Action* __9__62_0;
        struct Action* __9__63_0;
    };

    struct MantisJumpAttackBehaviour_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisJumpAttackBehaviour_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisJumpAttackBehaviour_c__VTable vtable;
    };

    struct MantisGrayboxPatrolBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
    };

    struct MantisGrayboxPatrolBehaviour {
        struct MantisGrayboxPatrolBehaviour__Class* klass;
        MonitorData* monitor;
        struct MantisGrayboxPatrolBehaviour__Fields fields;
    };

    struct MantisGrayboxPatrolBehaviour__VTable {
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

    struct MantisGrayboxPatrolBehaviour__StaticFields {
    };

    struct MantisGrayboxPatrolBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisGrayboxPatrolBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisGrayboxPatrolBehaviour__VTable vtable;
    };

    struct MantisGrayboxEntity_c {
        struct MantisGrayboxEntity_c__Class* klass;
        MonitorData* monitor;
    };

    struct MantisGrayboxEntity_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MantisGrayboxEntity_c__StaticFields {
        struct MantisGrayboxEntity_c* __9;
        struct Action* __9__35_0;
    };

    struct MantisGrayboxEntity_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisGrayboxEntity_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisGrayboxEntity_c__VTable vtable;
    };

    struct MantisPlaceholder__Fields {
        struct EntityPlaceholder__Fields _;
        struct GameObject* MantisPrefab;
        MantisSpawnType__Enum m_spawnType;
    };

    struct MantisPlaceholder {
        struct MantisPlaceholder__Class* klass;
        MonitorData* monitor;
        struct MantisPlaceholder__Fields fields;
    };

    struct MantisPlaceholder__VTable {
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

    struct MantisPlaceholder__StaticFields {
    };

    struct MantisPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisPlaceholder__VTable vtable;
    };

    struct MantisSpawnTask__Fields {
        struct EntitySpawnTask__Fields _;
        struct MoonTimeline* EmergeSpawnTimeline;
        struct MoonTimeline* ForegroundSpawnTimeline;
        struct MoonTimeline* BackgroundSpawnTimeline;
        struct MoonTimeline* m_currentTimeline;
    };

    struct MantisSpawnTask {
        struct MantisSpawnTask__Class* klass;
        MonitorData* monitor;
        struct MantisSpawnTask__Fields fields;
    };

    struct MantisSpawnTask__VTable {
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

    struct MantisSpawnTask__StaticFields {
    };

    struct MantisSpawnTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisSpawnTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisSpawnTask__VTable vtable;
    };

    struct EntityReactionBehaviour_1_MantisGrayboxEntity___Fields {
        struct EntityReactionBehaviour__Fields _;
    };

    struct EntityReactionBehaviour_1_MantisGrayboxEntity_ {
        struct EntityReactionBehaviour_1_MantisGrayboxEntity___Class* klass;
        MonitorData* monitor;
        struct EntityReactionBehaviour_1_MantisGrayboxEntity___Fields fields;
    };

    enum class MantisDeathReactionBehaviour_State__Enum : int32_t {
        Invalid = -1,
        Launch = 0x00000000,
        Loop = 0x00000001,
        Land = 0x00000002,
        Drowning = 0x00000003,
    };

    struct MantisDeathReactionBehaviour_State__Enum__Boxed {
        struct MantisDeathReactionBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        MantisDeathReactionBehaviour_State__Enum value;
    };

    struct MantisDeathReactionBehaviour__Fields {
        struct EntityReactionBehaviour_1_MantisGrayboxEntity___Fields _;
        struct MoonTimeline* DeathLaunch;
        struct MoonTimeline* DeathLoop;
        struct MoonTimeline* DeathLand;
        struct MoonTimeline* ShakeTimeline;
        struct Transform* SpinTransform;
        struct Transform* FeetTransform;
        float FallAngleMultiplier;
        struct MoonTimeline* DrownTimeline;
        float InitialDrowningSubmersion;
        struct GameObject* SplashPrefab;
        struct DeathStartEffectSpawnSetting* DeathStartEffect;
        struct MoonTimeline* m_currentTimeline;
        struct MantisFallReactionBehaviour* m_fallBehaviour;
        struct MantisHitReactionBehaviour* m_hitReactionBehaviour;
        struct CharacterPlatformMovement* m_platformMovement;
        struct GroundEntityLocomotion* m_locomotion;
        bool m_waitingForDeath;
        struct RootMotionProcessorData* RootMotion;
        struct PerspectiveRotationAdjustment* PerspectiveRotationAdjustment;
        bool DebugPauseOnEnter;
        MantisDeathReactionBehaviour_State__Enum m_state;

        float m_initialMoveAngle;
        struct Vector2 m_initialMoveSpeed;
        bool m_startedFalling;
        float m_timeDrowning;
        struct Vector2 m_initialDrowningSpeed;
        struct EntityWeightData_EntityWeightSettings m_weightData;
    };

    struct MantisDeathReactionBehaviour {
        struct MantisDeathReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct MantisDeathReactionBehaviour__Fields fields;
    };

    enum class MantisFallReactionBehaviour_FallState__Enum : int32_t {
        Resting = 0x00000000,
        Falling = 0x00000001,
        Landing = 0x00000002,
        HandlingCollision = 0x00000003,
    };

    struct MantisFallReactionBehaviour_FallState__Enum__Boxed {
        struct MantisFallReactionBehaviour_FallState__Enum__Class* klass;
        MonitorData* monitor;
        MantisFallReactionBehaviour_FallState__Enum value;
    };

    struct MantisFallReactionBehaviour__Fields {
        struct EntityReactionBehaviour__Fields _;
        struct MoonTimeline* LandSequenceNew;
        struct EventTriggerAnimator* EndLandEventTrigger;
        struct LegacyTimelineSequence* LandSequence;
        struct MoonTimeline* FallingTimeline;
        struct MoonTimeline* FallingUpToDownTimeline;
        struct MoonTimeline* FallingUpToDownFastTimeline;
        float VerticalSpeedToEnableUpToDownTransition;
        float VerticalSpeedToStartUpToDownTransition;
        struct MoonAnimation* FallingAnimation;
        bool LoopFallingAnimation;
        struct MoonTimeline* BounceTimeline;
        struct FloatAnimationParameter* FallSpeedParameter;
        int32_t AnimationPriority;
        struct RootMotionProcessorData* LandRootMotion;
        float CollisionHitStop;
        struct GameObject* ImpactEffect;
        float MinBounceForce;
        float MaxBounceForce;
        float WallRepelForce;
        float BounceEnergyConservation;
        bool LooseExtraEnergyWhenHitWall;
        float ExtraEnergyPercentageTooLooseWhenHitWall;
        float OutOfCameraViewDecelerationX;
        float OutOfCameraViewDecelerationY;
        struct ActiveAnimationHandle m_animation;
        struct Locomotion* m_locomotion;
        MantisFallReactionBehaviour_FallState__Enum m_state;

        struct MoonControllerColliderHit m_hit;
        float m_collisionTimer;
        struct Vector2 m_bounceSpeed;
        float m_effectInstantiationTimer;
        float m_bounceMultiplier;
        bool m_shouldDoUpToDownTransition;
        bool m_hasDoneUpToDownTransition;
        bool m_wasMovingDown;
        struct MantisHitReactionBehaviour* m_hitReaction;
    };

    struct MantisFallReactionBehaviour {
        struct MantisFallReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct MantisFallReactionBehaviour__Fields fields;
    };

    struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___Fields {
        struct EntityReactionBehaviour_1_MantisGrayboxEntity___Fields _;
        struct List_1_DamageType_* DamageTypePreventingInterruption;
        struct List_1_DamageWeight_* DamageWeightPreventingInterruption;
        struct HashSet_1_DamageType_* m_damageTypePreventingInterruption;
        struct HashSet_1_DamageWeight_* m_damageWeightPreventingInterruption;
        bool _HasLocomotion_k__BackingField;
        struct CharacterPlatformMovement* m_platformMovement;
        EntityWeightData_EntityWeight__Enum m_weight;

        struct HitReactionSettings* m_kickbackSettings;
    };

    struct EntityHitReactionBehaviour_1_MantisGrayboxEntity_ {
        struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___Class* klass;
        MonitorData* monitor;
        struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___Fields fields;
    };

    struct MantisHitReactionBehaviour__Fields {
        struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___Fields _;
        struct MoonTimeline* HitAdditiveFront;
        struct MoonTimeline* HitAdditiveBack;
        struct MoonTimeline* HitAdditiveWhileJumping;
        struct MoonTimeline* Knockup;
        struct List_1_Moon_Timeline_MoonTimeline_* JumpAnticeTimelines;
        struct Event_1* OnAnyHitEvent;
        struct MoonFloat* m_hitAdditiveFrontWeight;
        struct MoonFloat* m_hitAdditiveBackWeight;
        struct MoonFloat* m_hitAdditiveWhileJumpingWeight;
        struct MantisFallReactionBehaviour* m_fallBehaviour;
        struct MantisDeathReactionBehaviour* m_deathBehaviour;
        struct GroundEntityLocomotion* m_locomotion;
        struct EntityDamageEvent* _DamageEvent_k__BackingField;
        struct MoonTimeline* m_currentTimeline;
        struct MoonTimeline* m_currentSecondaryTimeline;
        bool m_exitEarly;
        struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_* InterruptionBlockingTasks;
    };

    struct MantisHitReactionBehaviour {
        struct MantisHitReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct MantisHitReactionBehaviour__Fields fields;
    };

    struct EntityReactionBehaviour_1_MantisGrayboxEntity___VTable {
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

    struct EntityReactionBehaviour_1_MantisGrayboxEntity___StaticFields {
    };

    struct EntityReactionBehaviour_1_MantisGrayboxEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityReactionBehaviour_1_MantisGrayboxEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityReactionBehaviour_1_MantisGrayboxEntity___VTable vtable;
    };

    struct MantisFallReactionBehaviour_FallState__Enum__VTable {
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

    struct MantisFallReactionBehaviour_FallState__Enum__StaticFields {
    };

    struct MantisFallReactionBehaviour_FallState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisFallReactionBehaviour_FallState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisFallReactionBehaviour_FallState__Enum__VTable vtable;
    };

    struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___VTable {
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

    struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___StaticFields {
    };

    struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___VTable vtable;
    };

    struct MantisHitReactionBehaviour__VTable {
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

    struct MantisHitReactionBehaviour__StaticFields {
    };

    struct MantisHitReactionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisHitReactionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisHitReactionBehaviour__VTable vtable;
    };

    struct MantisFallReactionBehaviour__VTable {
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
        VirtualInvokeData get_EffectiveLandSequence;
        VirtualInvokeData get_EffectiveLandSequenceNew;
        VirtualInvokeData OnEnterFalling;
        VirtualInvokeData FallingUpdate;
        VirtualInvokeData OnEnterLand;
        VirtualInvokeData LandUpdate;
        VirtualInvokeData OnEnterCollision;
        VirtualInvokeData CollisionUpdate;
    };

    struct MantisFallReactionBehaviour__StaticFields {
    };

    struct MantisFallReactionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisFallReactionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisFallReactionBehaviour__VTable vtable;
    };

    struct MantisDeathReactionBehaviour_State__Enum__VTable {
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

    struct MantisDeathReactionBehaviour_State__Enum__StaticFields {
    };

    struct MantisDeathReactionBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisDeathReactionBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisDeathReactionBehaviour_State__Enum__VTable vtable;
    };

    struct MantisDeathReactionBehaviour__VTable {
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

} // namespace app
