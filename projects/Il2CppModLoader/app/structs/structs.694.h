namespace app {
    struct LocomotionIdleEntryBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocomotionIdleEntryBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocomotionIdleEntryBehaviour__VTable vtable;
    };

    struct LocomotionIdleTimelineBehaviour__Fields {
        struct EntityLocomotionTask__Fields _;
        struct MoonTimeline* idleTimeline;
    };

    struct LocomotionIdleTimelineBehaviour {
        struct LocomotionIdleTimelineBehaviour__Class* klass;
        MonitorData* monitor;
        struct LocomotionIdleTimelineBehaviour__Fields fields;
    };

    struct LocomotionIdleTimelineBehaviour__VTable {
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
    };

    struct LocomotionIdleTimelineBehaviour__StaticFields {
    };

    struct LocomotionIdleTimelineBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocomotionIdleTimelineBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocomotionIdleTimelineBehaviour__VTable vtable;
    };

    struct LocomotionMoveBehaviour__Fields {
        struct EntityBehaviour__Fields _;
        struct Vector3 _TargetPosition_k__BackingField;
        float ArrivalDistance;
        float SlowDownDistance;
        struct LocomotionAnimation__Array* MovementAnimations;
        struct LocomotionAnimation* m_currentAnimation;
        struct GroundEntityLocomotion* m_locomotion;
        struct ActiveAnimationHandle m_activeAnimation;
        struct Vector3 m_lastSearchedTargetPosition;
        float m_previusTraversalSpeed;
        bool m_lookDirectionLocked;
        bool m_arrivedAtTarget;
        BehaviourStatus__Enum _Status_k__BackingField;

        struct Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ _ForceReturnStatus_k__BackingField;
    };

    struct LocomotionMoveBehaviour {
        struct LocomotionMoveBehaviour__Class* klass;
        MonitorData* monitor;
        struct LocomotionMoveBehaviour__Fields fields;
    };

    struct LocomotionMoveBehaviour__VTable {
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
        VirtualInvokeData get_TargetPosition;
        VirtualInvokeData set_TargetPosition;
        VirtualInvokeData get_TraversalSpeed;
        VirtualInvokeData set_TraversalSpeed;
    };

    struct LocomotionMoveBehaviour__StaticFields {
    };

    struct LocomotionMoveBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocomotionMoveBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocomotionMoveBehaviour__VTable vtable;
    };

    struct LocomotionTurningTimelineBehaviour__Fields {
        struct BaseLocomotionTurningBehaviour__Fields _;
        struct SplitTurnAnimationMoonTimeline__Array* MirrorAnimations;
        struct SplitTurnAnimationMoonTimeline* m_currentTurnAnimation;
        bool PauseLocomotion;
        bool HaltVelovityOnLedge;
        bool m_isGroundLocomotion;
        struct GroundEntityLocomotion* m_groundEntityLocomotion;
        struct Action* OnTurnStart;
        struct Action_1_Single_* OnTurnExecuting;
        struct Action* OnTurnEnd;
    };

    struct LocomotionTurningTimelineBehaviour {
        struct LocomotionTurningTimelineBehaviour__Class* klass;
        MonitorData* monitor;
        struct LocomotionTurningTimelineBehaviour__Fields fields;
    };

    struct SplitTurnAnimationMoonTimeline__Array {
        struct SplitTurnAnimationMoonTimeline__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SplitTurnAnimationMoonTimeline* vector[32];
    };

    struct SplitTurnAnimationMoonTimeline__Array__VTable {
    };

    struct SplitTurnAnimationMoonTimeline__Array__StaticFields {
    };

    struct SplitTurnAnimationMoonTimeline__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SplitTurnAnimationMoonTimeline__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SplitTurnAnimationMoonTimeline__Array__VTable vtable;
    };

    struct LocomotionTurningTimelineBehaviour__VTable {
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

    struct LocomotionTurningTimelineBehaviour__StaticFields {
    };

    struct LocomotionTurningTimelineBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocomotionTurningTimelineBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocomotionTurningTimelineBehaviour__VTable vtable;
    };

    struct LocomotionTurningTimelineBehaviour_c {
        struct LocomotionTurningTimelineBehaviour_c__Class* klass;
        MonitorData* monitor;
    };

    struct LocomotionTurningTimelineBehaviour_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LocomotionTurningTimelineBehaviour_c__StaticFields {
        struct LocomotionTurningTimelineBehaviour_c* __9;
        struct Action* __9__21_0;
        struct Action_1_Single_* __9__21_1;
        struct Action* __9__21_2;
    };

    struct LocomotionTurningTimelineBehaviour_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocomotionTurningTimelineBehaviour_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocomotionTurningTimelineBehaviour_c__VTable vtable;
    };

    struct __declspec(align(8)) TerrainTracer__Fields {
        int32_t AmountOfRays;
        float RayLength;
        float GroundDotNormalLimit;
        struct LayerMask TerrainMask;
        struct PlatformMovement* m_plataformMovement;
        struct Transform* m_origin;
        float m_angle;
        struct Ray m_ray;
        struct RaycastHit m_hitInfo;
    };

    struct TerrainTracer {
        struct TerrainTracer__Class* klass;
        MonitorData* monitor;
        struct TerrainTracer__Fields fields;
    };

    struct TerrainTracer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TerrainTracer__StaticFields {
    };

    struct TerrainTracer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TerrainTracer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TerrainTracer__VTable vtable;
    };

    enum class MantisHorizontalJumpAttackBehaviour_State__Enum : int32_t {
        Anticipation = 0x00000000,
        Main = 0x00000001,
        PlopAnticipation = 0x00000002,
        Plop = 0x00000003,
        Land = 0x00000004,
    };

    struct MantisHorizontalJumpAttackBehaviour_State__Enum__Boxed {
        struct MantisHorizontalJumpAttackBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        MantisHorizontalJumpAttackBehaviour_State__Enum value;
    };

    struct MantisHorizontalJumpAttackBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct MoonTimeline* Anticipation;
        struct MoonTimeline* TurnAnticipation;
        struct MoonTimeline* Main;
        struct MoonTimeline* PlopAnticipation;
        struct MoonTimeline* Plop;
        struct MoonTimeline* Land;
        struct FloatAnimationParameter* JumpDistanceParameter;
        struct MantisJumpAttackSettings* JumpAttackSettings;
        struct MoonTimeline* m_currentTimeline;
        struct GroundEntityLocomotion* m_locomotion;
        struct PlatformMovement* m_platformMovement;
        struct Rigidbody* m_rigidbody;
        float m_initGravity;
        float m_initMaxFallSpeed;
        float m_initDeceleration;
        struct Vector3 m_playerSmoothSpeed;
        struct Vector3 m_jumpTargetPosition;
        float m_turnDirection;
        float LandDecelerationMultiplier;
        float JumpGravity;
        float MaxFallSpeed;
        float JumpHeight;
        struct Vector2 JumpControlPoint0;
        struct Vector2 JumpControlPoint1;
        int32_t CollisionPredictionCheckSkipEvery;
        float JumpHorizontalSpeed;
        float MinJumpTime;
        float MaxJumpDistance;
        float MaxGroundCheckDistance;
        float PlopGravity;
        float PlopSpeedTransferY;
        float PlopSpeedTransferX;
        float MinPlopSpeedY;
        struct Vector2 m_prePlopSpeed;
        float GroundToPredictedTargetPositionRatio;
        struct String* MinHorizontalJumpDistance;
        float EndOfPathGravity;
        struct Transform* Head;
        struct Transform* StompPrefab;
        struct MantisGrayboxEntity* m_mantisEntity;
        struct GroundEntityMovementProcessor* m_movementProcessor;
        struct CapsuleCollider* m_collider;
        DamageWeight__Enum FallTouchDamageWeight;

        int32_t JumpCurveDivisions;
        int32_t m_currentIndexOnPath;
        struct List_1_UnityEngine_Vector3_* m_pathPoints;
        bool pathEnded;
        struct LayerMask SolidGeometryLayers;
        struct RootMotionProcessorData* RootMotion;
        bool DebugPauseOnLand;
        struct Vector3 m_lastPositionDelta;
        float m_lastFrameVerticalOffsetInAnticipation;
        float m_jumpXVelocity;
        bool m_isTurning;
        float m_cachedColliderHeight;
        bool m_StartedFalling;
        struct CharacterEnvironmentForceController* EnvironmentForceController;
        float GroundImpulse;
        MantisHorizontalJumpAttackBehaviour_State__Enum m_state;

        float m_stateTime;
        struct BlockDamageInterruptionHandler* m_blockingHandlerAnticipation;
        struct BlockDamageInterruptionHandler* m_blockingHandlerTurnAnticipation;
        struct BlockDamageInterruptionHandler* m_blockingHandlerMain;
        struct Collider__Array* m_landColiiders;
        struct Transform* DebugJumpTarget;
    };

    struct MantisHorizontalJumpAttackBehaviour {
        struct MantisHorizontalJumpAttackBehaviour__Class* klass;
        MonitorData* monitor;
        struct MantisHorizontalJumpAttackBehaviour__Fields fields;
    };

    struct MantisJumpAttackSettings__Fields {
        struct MonoBehaviour__Fields _;
        struct MantisJumpAttackSettings_Settings* NoAOE;
        struct MoonReference_1_UnityEngine_Transform_* InstantiationLocation;
        struct Vector3 InstantiationOffset;
        bool ApplyRotation;
        bool ProjectOnGround;
        bool ProjectYOnly;
    };

    struct MantisJumpAttackSettings {
        struct MantisJumpAttackSettings__Class* klass;
        MonitorData* monitor;
        struct MantisJumpAttackSettings__Fields fields;
    };

    struct __declspec(align(8)) MantisJumpAttackSettings_Settings__Fields {
        struct MantisJumpAttackDamageDealer* Prefab;
        float Damage;
        DamageWeight__Enum DamageWeight;
    };

    struct MantisJumpAttackSettings_Settings {
        struct MantisJumpAttackSettings_Settings__Class* klass;
        MonitorData* monitor;
        struct MantisJumpAttackSettings_Settings__Fields fields;
    };

    struct MantisJumpAttackDamageDealer__Fields {
        struct MonoBehaviour__Fields _;
        struct DamageDealer* DamageDealer;
    };

    struct MantisJumpAttackDamageDealer {
        struct MantisJumpAttackDamageDealer__Class* klass;
        MonitorData* monitor;
        struct MantisJumpAttackDamageDealer__Fields fields;
    };

    enum class MantisSpawnType__Enum : int32_t {
        Instant = 0x00000000,
        Emerge = 0x00000001,
        FromForeground = 0x00000002,
        FromBackground = 0x00000003,
    };

    struct MantisSpawnType__Enum__Boxed {
        struct MantisSpawnType__Enum__Class* klass;
        MonitorData* monitor;
        MantisSpawnType__Enum value;
    };

    struct MantisGrayboxEntity__Fields {
        struct EnemyEntity__Fields _;
        struct Action* OnRespawned;
        DamageWeight__Enum m_defaultTouchDamageWeight;

        struct IgnoreGoThroughPlatforms* m_ignoreGoThroughs;
        struct DamageDealer* m_hitbox;
        float m_baseJumpAttackCooldown;
        int32_t ShockwaveAttackBeamCount;
        float ShockwaveAttackDamageAmount;
        struct List_1_FirewhirlBeamSpawner_* ShockwaveSpawners;
        struct RetaliationRuleHandler* RetaliationRule;
        struct Switch_1* FirstJumpSwitch;
        struct Switch_1* SecondJumpSwitch;
        struct Switch_1* ThirdJumpSwitch;
        MantisSpawnType__Enum _SpawnType_k__BackingField;
    };

    struct MantisGrayboxEntity {
        struct MantisGrayboxEntity__Class* klass;
        MonitorData* monitor;
        struct MantisGrayboxEntity__Fields fields;
    };

    struct __declspec(align(8)) RetaliationRuleHandler__Fields {
        struct RetaliationRuleHandler_DamageTime* RetaliationConditions;
        float RetaliationActivationTimeWindow;
        struct Action* OnRetaliationContitionMet;
        float m_retaliationAllowedTimer;
        struct List_1_RetaliationRuleHandler_DamageTime_* m_takenDamageElapsedTime;
    };

    struct RetaliationRuleHandler {
        struct RetaliationRuleHandler__Class* klass;
        MonitorData* monitor;
        struct RetaliationRuleHandler__Fields fields;
    };

    struct __declspec(align(8)) List_1_AbilityType___Fields {
        struct AbilityType__Enum__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_AbilityType_ {
        struct List_1_AbilityType___Class* klass;
        MonitorData* monitor;
        struct List_1_AbilityType___Fields fields;
    };

    struct __declspec(align(8)) RetaliationRuleHandler_DamageTime__Fields {
        float Damage;
        float Time;
    };

    struct RetaliationRuleHandler_DamageTime {
        struct RetaliationRuleHandler_DamageTime__Class* klass;
        MonitorData* monitor;
        struct RetaliationRuleHandler_DamageTime__Fields fields;
    };

    struct __declspec(align(8)) List_1_RetaliationRuleHandler_DamageTime___Fields {
        struct RetaliationRuleHandler_DamageTime__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_RetaliationRuleHandler_DamageTime_ {
        struct List_1_RetaliationRuleHandler_DamageTime___Class* klass;
        MonitorData* monitor;
        struct List_1_RetaliationRuleHandler_DamageTime___Fields fields;
    };

    struct RetaliationRuleHandler_DamageTime__Array {
        struct RetaliationRuleHandler_DamageTime__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RetaliationRuleHandler_DamageTime* vector[32];
    };

    struct IEnumerator_1_RetaliationRuleHandler_DamageTime_ {
        struct IEnumerator_1_RetaliationRuleHandler_DamageTime___Class* klass;
        MonitorData* monitor;
    };

    struct CharacterEnvironmentForceController__Fields {
        struct MonoBehaviour__Fields _;
        struct PlatformMovement* PlatformMovement;
        float LandImpulsePerUnitOfSpeed;
        float LandMaxImpulse;
        float LandMinFallTime;
        struct Transform* CenterOfMassPoint;
        struct Transform* GroundPoint;
        float CenterOfMassMotionImpulse;
        struct FloatRange_1 GroundImpulseRange;
        float GroundImpulseLandingTimeout;
        bool useDebug;
        float Weight;
        struct Vitals* Vitals;
        float DamageForceTransferToGround;
        struct Collider* GroundCollider;
        struct Vector3 GroundNormal;
        struct Vector3 m_oldVelocity;
        struct Vector3 m_oldCenterPos;
        struct Vector3 m_oldCenterVelocity;
        struct Rigidbody* m_groundRigidbody;
    };

    struct CharacterEnvironmentForceController {
        struct CharacterEnvironmentForceController__Class* klass;
        MonitorData* monitor;
        struct CharacterEnvironmentForceController__Fields fields;
    };

    struct MantisJumpAttackDamageDealer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MantisJumpAttackDamageDealer__StaticFields {
    };

    struct MantisJumpAttackDamageDealer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisJumpAttackDamageDealer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisJumpAttackDamageDealer__VTable vtable;
    };

    struct MantisJumpAttackSettings_Settings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MantisJumpAttackSettings_Settings__StaticFields {
    };

    struct MantisJumpAttackSettings_Settings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisJumpAttackSettings_Settings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisJumpAttackSettings_Settings__VTable vtable;
    };

    struct MantisJumpAttackSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MantisJumpAttackSettings__StaticFields {
    };

    struct MantisJumpAttackSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisJumpAttackSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisJumpAttackSettings__VTable vtable;
    };

    struct List_1_AbilityType___VTable {
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

    struct List_1_AbilityType___StaticFields {
        struct AbilityType__Enum__Array* _emptyArray;
    };

    struct List_1_AbilityType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_AbilityType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_AbilityType___VTable vtable;
    };

    struct RetaliationRuleHandler_DamageTime__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RetaliationRuleHandler_DamageTime__StaticFields {
    };

    struct RetaliationRuleHandler_DamageTime__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RetaliationRuleHandler_DamageTime__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RetaliationRuleHandler_DamageTime__VTable vtable;
    };

    struct RetaliationRuleHandler_DamageTime__Array__VTable {
    };

    struct RetaliationRuleHandler_DamageTime__Array__StaticFields {
    };

    struct RetaliationRuleHandler_DamageTime__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RetaliationRuleHandler_DamageTime__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RetaliationRuleHandler_DamageTime__Array__VTable vtable;
    };

    struct IEnumerator_1_RetaliationRuleHandler_DamageTime___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_RetaliationRuleHandler_DamageTime___StaticFields {
    };

    struct IEnumerator_1_RetaliationRuleHandler_DamageTime___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_RetaliationRuleHandler_DamageTime___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_RetaliationRuleHandler_DamageTime___VTable vtable;
    };

    struct List_1_RetaliationRuleHandler_DamageTime___VTable {
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

    struct List_1_RetaliationRuleHandler_DamageTime___StaticFields {
        struct RetaliationRuleHandler_DamageTime__Array* _emptyArray;
    };

    struct List_1_RetaliationRuleHandler_DamageTime___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_RetaliationRuleHandler_DamageTime___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_RetaliationRuleHandler_DamageTime___VTable vtable;
    };

    struct RetaliationRuleHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RetaliationRuleHandler__StaticFields {
        struct List_1_AbilityType_* AbilitiesFilteredOut;
    };

    struct RetaliationRuleHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RetaliationRuleHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RetaliationRuleHandler__VTable vtable;
    };

    struct MantisSpawnType__Enum__VTable {
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

    struct MantisSpawnType__Enum__StaticFields {
    };

    struct MantisSpawnType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisSpawnType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisSpawnType__Enum__VTable vtable;
    };

    struct MantisGrayboxEntity__VTable {
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
    };

    struct MantisGrayboxEntity__StaticFields {
    };

    struct MantisGrayboxEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MantisGrayboxEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MantisGrayboxEntity__VTable vtable;
    };

    struct CharacterEnvironmentForceController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
    };

    struct CharacterEnvironmentForceController__StaticFields {
    };

    struct CharacterEnvironmentForceController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterEnvironmentForceController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterEnvironmentForceController__VTable vtable;
    };

    struct MantisHorizontalJumpAttackBehaviour_State__Enum__VTable {
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

} // namespace app
