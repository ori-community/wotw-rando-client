namespace app {
    struct LaserShooterHommingMissle__StaticFields {
    };

    struct LaserShooterHommingMissle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterHommingMissle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterHommingMissle__VTable vtable;
    };

    enum class LaserShooterInflateToAttackBehaviour_State__Enum : int32_t {
        Invalid = 0x00000000,
        Antic = 0x00000001,
        Shooting = 0x00000002,
        Resolve = 0x00000003,
    };

    struct LaserShooterInflateToAttackBehaviour_State__Enum__Boxed {
        struct LaserShooterInflateToAttackBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        LaserShooterInflateToAttackBehaviour_State__Enum value;
    };

    enum class LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum : int32_t {
        Inflate = 0x00000000,
        Deflate = 0x00000001,
        Resolve = 0x00000002,
    };

    struct LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum__Boxed {
        struct LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum__Class* klass;
        MonitorData* monitor;
        LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum value;
    };

    struct LaserShooterInflateToAttackBehaviour__Fields {
        struct EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields _;
        struct LaserShooterInflateToAttackSettings* TimingSetting;
        int32_t ShootCount;
        struct List_1_Moon_DamageReceiver_* InterruptingDamageReceiver;
        struct LaserShieldRotationController* m_shieldController;
        LaserShooterInflateToAttackBehaviour_State__Enum m_state;

        float m_stateTime;
        float m_timeInBehaviour;
        struct MoonTimeline* m_currentTimeline;
        LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum m_shootingPhase;

        int32_t m_shotIterator;
        float m_timeInShootingPhase;
        struct Vector3 m_previousPhasePiecesOffset;
        float m_endResolveTime;
        bool _WasHitDuringAttack_k__BackingField;
    };

    struct LaserShooterInflateToAttackBehaviour {
        struct LaserShooterInflateToAttackBehaviour__Class* klass;
        MonitorData* monitor;
        struct LaserShooterInflateToAttackBehaviour__Fields fields;
    };

    struct LaserShooterHommingMissleAttackBehaviour__Fields {
        struct LaserShooterInflateToAttackBehaviour__Fields _;
        struct LaserShooterHommingMissle* MisslePrefab;
        float MissleSpeed;
        float ShootRecoilStrength;
        float RotationSpeed;
        float m_shootDirection;
    };

    struct LaserShooterHommingMissleAttackBehaviour {
        struct LaserShooterHommingMissleAttackBehaviour__Class* klass;
        MonitorData* monitor;
        struct LaserShooterHommingMissleAttackBehaviour__Fields fields;
    };

    struct LaserShooterInflateToAttackSettings__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* AnticTimeline;
        struct MoonTimeline* ShootingTimeline;
        struct Vector3 InflateOffset;
        float FirstInflateTime;
        float InflateTime;
        struct AnimationCurve* InflateCurve;
        struct Vector3 DeflateOffset;
        float DeflateTime;
        struct AnimationCurve* DeflateCurve;
        float ResolveTime;
        struct AnimationCurve* ResolveCurve;
        struct MoonTimeline* ResolveTimeline;
    };

    struct LaserShooterInflateToAttackSettings {
        struct LaserShooterInflateToAttackSettings__Class* klass;
        MonitorData* monitor;
        struct LaserShooterInflateToAttackSettings__Fields fields;
    };

    struct LaserShooterInflateToAttackSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LaserShooterInflateToAttackSettings__StaticFields {
    };

    struct LaserShooterInflateToAttackSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterInflateToAttackSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterInflateToAttackSettings__VTable vtable;
    };

    struct LaserShooterInflateToAttackBehaviour_State__Enum__VTable {
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

    struct LaserShooterInflateToAttackBehaviour_State__Enum__StaticFields {
    };

    struct LaserShooterInflateToAttackBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterInflateToAttackBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterInflateToAttackBehaviour_State__Enum__VTable vtable;
    };

    struct LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum__VTable {
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

    struct LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum__StaticFields {
    };

    struct LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum__VTable vtable;
    };

    struct LaserShooterInflateToAttackBehaviour__VTable {
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
        VirtualInvokeData OnAnticEnter;
        VirtualInvokeData OnShootingEnter;
        VirtualInvokeData OnResolveEnter;
        VirtualInvokeData OnShoot;
        VirtualInvokeData OnAttackInflateEnter;
        VirtualInvokeData OnAttackInflate;
        VirtualInvokeData OnAttackDeflateEnter;
        VirtualInvokeData OnAttackDeflate;
        VirtualInvokeData OnAttackResolveEnter;
        VirtualInvokeData OnAttackResolve;
    };

    struct LaserShooterInflateToAttackBehaviour__StaticFields {
    };

    struct LaserShooterInflateToAttackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterInflateToAttackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterInflateToAttackBehaviour__VTable vtable;
    };

    struct LaserShooterHommingMissleAttackBehaviour__VTable {
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
        VirtualInvokeData OnAnticEnter;
        VirtualInvokeData OnShootingEnter;
        VirtualInvokeData OnResolveEnter;
        VirtualInvokeData OnShoot;
        VirtualInvokeData OnAttackInflateEnter;
        VirtualInvokeData OnAttackInflate;
        VirtualInvokeData OnAttackDeflateEnter;
        VirtualInvokeData OnAttackDeflate;
        VirtualInvokeData OnAttackResolveEnter;
        VirtualInvokeData OnAttackResolve;
    };

    struct LaserShooterHommingMissleAttackBehaviour__StaticFields {
    };

    struct LaserShooterHommingMissleAttackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterHommingMissleAttackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterHommingMissleAttackBehaviour__VTable vtable;
    };

    enum class LaserShooterMinibossBeamAttackBehaviour_State__Enum : int32_t {
        Invalid = 0x00000000,
        Antic = 0x00000001,
        BeamAttack = 0x00000002,
        Resolve = 0x00000003,
    };

    struct LaserShooterMinibossBeamAttackBehaviour_State__Enum__Boxed {
        struct LaserShooterMinibossBeamAttackBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        LaserShooterMinibossBeamAttackBehaviour_State__Enum value;
    };

    struct LaserShooterMinibossBeamAttackBehaviour__Fields {
        struct EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields _;
        struct Transform* Rotation;
        struct MoonTimeline* AnticTimeline;
        struct MoonTimeline* BeamTimeline;
        struct MoonTimeline* ResolveTimeline;
        struct LaserShooterMinibossBeamAttackSettings* Settings;
        struct GameObject* Beam;
        int32_t BeamCount;
        struct MoonTimeline* m_currentTimeline;
        LaserShooterMinibossBeamAttackBehaviour_State__Enum m_state;

        float m_timeInState;
    };

    struct LaserShooterMinibossBeamAttackBehaviour {
        struct LaserShooterMinibossBeamAttackBehaviour__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossBeamAttackBehaviour__Fields fields;
    };

    struct LaserShooterMinibossBeamAttackSettings__Fields {
        struct MonoBehaviour__Fields _;
        float RotationSpeed;
        float BeamAttackTime;
        struct AnimationCurve* EaseInCurve;
        float ChanceForClockwiseRotation;
        float OpeningOffsetTime;
        float ClosingOffsetTime;
    };

    struct LaserShooterMinibossBeamAttackSettings {
        struct LaserShooterMinibossBeamAttackSettings__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossBeamAttackSettings__Fields fields;
    };

    struct LaserShooterMinibossBeamAttackSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LaserShooterMinibossBeamAttackSettings__StaticFields {
    };

    struct LaserShooterMinibossBeamAttackSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterMinibossBeamAttackSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterMinibossBeamAttackSettings__VTable vtable;
    };

    struct LaserShooterMinibossBeamAttackBehaviour_State__Enum__VTable {
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

    struct LaserShooterMinibossBeamAttackBehaviour_State__Enum__StaticFields {
    };

    struct LaserShooterMinibossBeamAttackBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterMinibossBeamAttackBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterMinibossBeamAttackBehaviour_State__Enum__VTable vtable;
    };

    struct LaserShooterMinibossBeamAttackBehaviour__VTable {
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

    struct LaserShooterMinibossBeamAttackBehaviour__StaticFields {
    };

    struct LaserShooterMinibossBeamAttackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterMinibossBeamAttackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterMinibossBeamAttackBehaviour__VTable vtable;
    };

    struct LaserShooterMinibossBeamAttackBehaviour_c {
        struct LaserShooterMinibossBeamAttackBehaviour_c__Class* klass;
        MonitorData* monitor;
    };

    struct LaserShooterMinibossBeamAttackBehaviour_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LaserShooterMinibossBeamAttackBehaviour_c__StaticFields {
        struct LaserShooterMinibossBeamAttackBehaviour_c* __9;
        struct Action* __9__23_0;
    };

    struct LaserShooterMinibossBeamAttackBehaviour_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterMinibossBeamAttackBehaviour_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterMinibossBeamAttackBehaviour_c__VTable vtable;
    };

    struct __declspec(align(8)) Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow___Fields {
        struct GameObject* m_Item1;
        struct UberTransformFollow* m_Item2;
    };

    struct Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow_ {
        struct Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow___Class* klass;
        MonitorData* monitor;
        struct Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow___Fields fields;
    };

    struct Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
        VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
        VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
        VirtualInvokeData System_IComparable_CompareTo;
        VirtualInvokeData System_ITupleInternal_ToString;
    };

    struct Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow___StaticFields {
    };

    struct Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Tuple_2_UnityEngine_GameObject_Moon_UberTransformFollow___VTable vtable;
    };

    struct LaserShooterMinibossPlaceholder__Fields {
        struct EntityPlaceholder__Fields _;
        struct GameObject* LaserShooterMinibossEntityPrefab;
        struct LaserShooterMinibossPath* Paths;
        struct LaserShooterRockSpawnPoint* RockSpawnPointPrefab;
        struct Transform* RockSpawnPointGroup;
        struct List_1_LaserShooterRockSpawnPoint_* RockSpawnPositions;
        bool DrawRockSpawnGizmos;
        struct SerializedIntUberState* FightState;
        struct List_1_System_Int32_* ForceDespawnOnStates;
        struct Transform* CheckpointPosition;
        struct Vector3 m_checkpointPosition;
    };

    struct LaserShooterMinibossPlaceholder {
        struct LaserShooterMinibossPlaceholder__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossPlaceholder__Fields fields;
    };

    struct LaserShooterMinibossPlaceholder__VTable {
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

    struct LaserShooterMinibossPlaceholder__StaticFields {
    };

    struct LaserShooterMinibossPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterMinibossPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterMinibossPlaceholder__VTable vtable;
    };

    struct LaserShooterMinibossProjectileAttackBehaviour__Fields {
        struct LaserShooterInflateToAttackBehaviour__Fields _;
        struct LaserShooterMinibossProjectileAttackSetting* AttackSettings;
    };

    struct LaserShooterMinibossProjectileAttackBehaviour {
        struct LaserShooterMinibossProjectileAttackBehaviour__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossProjectileAttackBehaviour__Fields fields;
    };

    struct LaserShooterMinibossProjectileAttackSetting__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* PulseAdditive;
        struct ProjectileSpawner* ProjectileSpawner;
        float RotationSpeed;
        float RotationTweenRate;
        float ShootRecoilStrength;
        struct AnimationCurve* AnticOpeningCurve;
        struct AnimationCurve* ResolveOpeningCurve;
    };

    struct LaserShooterMinibossProjectileAttackSetting {
        struct LaserShooterMinibossProjectileAttackSetting__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossProjectileAttackSetting__Fields fields;
    };

    struct LaserShooterMinibossProjectileAttackSetting__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LaserShooterMinibossProjectileAttackSetting__StaticFields {
    };

    struct LaserShooterMinibossProjectileAttackSetting__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterMinibossProjectileAttackSetting__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterMinibossProjectileAttackSetting__VTable vtable;
    };

    struct LaserShooterMinibossProjectileAttackBehaviour__VTable {
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
        VirtualInvokeData OnAnticEnter;
        VirtualInvokeData OnShootingEnter;
        VirtualInvokeData OnResolveEnter;
        VirtualInvokeData OnShoot;
        VirtualInvokeData OnAttackInflateEnter;
        VirtualInvokeData OnAttackInflate;
        VirtualInvokeData OnAttackDeflateEnter;
        VirtualInvokeData OnAttackDeflate;
        VirtualInvokeData OnAttackResolveEnter;
        VirtualInvokeData OnAttackResolve;
    };

    struct LaserShooterMinibossProjectileAttackBehaviour__StaticFields {
    };

    struct LaserShooterMinibossProjectileAttackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterMinibossProjectileAttackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterMinibossProjectileAttackBehaviour__VTable vtable;
    };

    struct EntityTask_1_LaserShooterMinibossEntity___Fields {
        struct EntityTask__Fields _;
    };

    struct EntityTask_1_LaserShooterMinibossEntity_ {
        struct EntityTask_1_LaserShooterMinibossEntity___Class* klass;
        MonitorData* monitor;
        struct EntityTask_1_LaserShooterMinibossEntity___Fields fields;
    };

    struct LaserShooterMinibossSpawn__Fields {
        struct EntityTask_1_LaserShooterMinibossEntity___Fields _;
        struct MoonTimeline* CoreTimeline;
        float StartPadding;
        float EndPadding;
        float m_repairInterval;
        int32_t m_repairedCounter;
        float m_timeToNextRepair;
    };

    struct LaserShooterMinibossSpawn {
        struct LaserShooterMinibossSpawn__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossSpawn__Fields fields;
    };

    struct EntityTask_1_LaserShooterMinibossEntity___VTable {
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
        VirtualInvokeData __unknown_1;
    };

    struct EntityTask_1_LaserShooterMinibossEntity___StaticFields {
    };

    struct EntityTask_1_LaserShooterMinibossEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityTask_1_LaserShooterMinibossEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityTask_1_LaserShooterMinibossEntity___VTable vtable;
    };

    struct LaserShooterMinibossSpawn__VTable {
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

    struct LaserShooterMinibossSpawn__StaticFields {
    };

    struct LaserShooterMinibossSpawn__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterMinibossSpawn__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterMinibossSpawn__VTable vtable;
    };

    struct LaserShooterMinibossWaitWhileMovingBehaviour__Fields {
        struct EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields _;
        struct MoonTimeline* IdleTimeline;
        struct MoonTimeline* m_currentTimeline;
    };

    struct LaserShooterMinibossWaitWhileMovingBehaviour {
        struct LaserShooterMinibossWaitWhileMovingBehaviour__Class* klass;
        MonitorData* monitor;
        struct LaserShooterMinibossWaitWhileMovingBehaviour__Fields fields;
    };

    struct LaserShooterMinibossWaitWhileMovingBehaviour__VTable {
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

    struct LaserShooterMinibossWaitWhileMovingBehaviour__StaticFields {
    };

    struct LaserShooterMinibossWaitWhileMovingBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterMinibossWaitWhileMovingBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterMinibossWaitWhileMovingBehaviour__VTable vtable;
    };

    struct LaserShooterRepairShieldBehaviour__Fields {
        struct EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields _;
        struct MoonFloat* RepairInterval;
        bool RepairAll;
        int32_t RepairCount;
        bool RepairWithProjectile;
        struct MoonTimeline* IdleTimeline;
        struct Vector2 Amplitude;
        struct Vector2 Frequency;
        float m_intervalTime;
        float m_timeToTick;
        int32_t m_pieceIndex;
        int32_t m_pieceCount;
        int32_t m_iterator;
        int32_t m_piecesDestroyedCount;
        float m_timeInBehaviour;
    };

    struct LaserShooterRepairShieldBehaviour {
        struct LaserShooterRepairShieldBehaviour__Class* klass;
        MonitorData* monitor;
        struct LaserShooterRepairShieldBehaviour__Fields fields;
    };

    struct LaserShooterRepairShieldBehaviour__VTable {
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

    struct LaserShooterRepairShieldBehaviour__StaticFields {
    };

    struct LaserShooterRepairShieldBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterRepairShieldBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterRepairShieldBehaviour__VTable vtable;
    };

    enum class LaserShooterShieldAttackBehaviour_State__Enum : int32_t {
        Invalid = 0x00000000,
        Phase1AnticPull = 0x00000001,
        Phase2AnticHold = 0x00000002,
        Phase3Shooting = 0x00000003,
    };

    struct LaserShooterShieldAttackBehaviour_State__Enum__Boxed {
        struct LaserShooterShieldAttackBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        LaserShooterShieldAttackBehaviour_State__Enum value;
    };

    struct LaserShooterShieldAttackBehaviour__Fields {
        struct EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields _;
        struct MoonTimeline* IdleTimeline;
        struct Vector3 ShieldPieceTargetOffset;
        float AnticTime;
        float OveralAnticTime;
        float AfterShotTime;
        struct Vector2 Amplitude;
        struct Vector2 Frequency;
        struct LaserShooterMinibossEntity* m_minibossEntity;
        struct LaserShieldRotationController* m_shieldController;
        LaserShooterShieldAttackBehaviour_State__Enum m_state;

        float m_timeInState;
        float m_timeInBehaviour;
    };

    struct LaserShooterShieldAttackBehaviour {
        struct LaserShooterShieldAttackBehaviour__Class* klass;
        MonitorData* monitor;
        struct LaserShooterShieldAttackBehaviour__Fields fields;
    };

} // namespace app
