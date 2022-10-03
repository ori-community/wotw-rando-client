namespace app {
    struct LaserShooterShieldAttackBehaviour_State__Enum__VTable {
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

    struct LaserShooterShieldAttackBehaviour_State__Enum__StaticFields {
    };

    struct LaserShooterShieldAttackBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterShieldAttackBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterShieldAttackBehaviour_State__Enum__VTable vtable;
    };

    struct LaserShooterShieldAttackBehaviour__VTable {
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

    struct LaserShooterShieldAttackBehaviour__StaticFields {
    };

    struct LaserShooterShieldAttackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LaserShooterShieldAttackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LaserShooterShieldAttackBehaviour__VTable vtable;
    };

    struct SplineAgent__Fields {
        struct MonoBehaviour__Fields _;
        struct VelocityBezierSplineComponent* Spline;
        float Speed;
        float TargetPositionError;
        struct BaseSpline_SplineIterator* Iterator;
    };

    struct SplineAgent {
        struct SplineAgent__Class* klass;
        MonitorData* monitor;
        struct SplineAgent__Fields fields;
    };

    struct SplineAgent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SplineAgent__StaticFields {
    };

    struct SplineAgent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SplineAgent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SplineAgent__VTable vtable;
    };

    struct LegacyBabySandWorm__Fields {
        struct MonoBehaviour__Fields _;
        float Acceleration;
        float Deceleration;
        float TurnRate;
        float MovementSpeedMax;
        float DistanceFromTargetToCommit;
        float CommitFacingTargetAngle;
        float SpeedOnceCommitedMultiplier;
        float DivedBackIntoSandWaitTime;
        float PreCommitPauseTime;
        int32_t NumberOfSegments;
        float SegmentLength;
        struct GameObject* DeathEffectPrefab;
        struct GameObject* TrailEffect;
        struct LayerMask CollisionMask;
        struct Vector2 JumpOutOfSandKickMinMax;
        struct Vector2 JumpOutOfSandKickDistanceMinMax;
        float WormToWormAttractiveForce;
        float PreChaseLaunchTime;
        float LaunchForce;
        struct List_1_UnityEngine_Vector3_* m_segmentPositions;
        struct LineRenderer* m_lineRenderer;
        float m_speed;
        bool m_commited;
        struct SphereCollider* m_collider;
        struct Rigidbody* m_rigidbody;
        float m_backInSandTimer;
        struct ParticleSystem* m_TrailEffect;
        float m_preCommitPauseTimer;
        bool m_accelerate;
        float m_preChaseTimer;
        struct DamageDealer* m_damageDealer;
        struct List_1_LegacyBabySandWorm_PositionHistoryEntry_* PositionHistory;
    };

    struct LegacyBabySandWorm {
        struct LegacyBabySandWorm__Class* klass;
        MonitorData* monitor;
        struct LegacyBabySandWorm__Fields fields;
    };

    struct __declspec(align(8)) List_1_LegacyBabySandWorm___Fields {
        struct LegacyBabySandWorm__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LegacyBabySandWorm_ {
        struct List_1_LegacyBabySandWorm___Class* klass;
        MonitorData* monitor;
        struct List_1_LegacyBabySandWorm___Fields fields;
    };

    struct LegacyBabySandWorm__Array {
        struct LegacyBabySandWorm__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LegacyBabySandWorm* vector[32];
    };

    struct IEnumerator_1_LegacyBabySandWorm_ {
        struct IEnumerator_1_LegacyBabySandWorm___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_LegacyBabySandWorm_PositionHistoryEntry___Fields {
        struct LegacyBabySandWorm_PositionHistoryEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_LegacyBabySandWorm_PositionHistoryEntry_ {
        struct List_1_LegacyBabySandWorm_PositionHistoryEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_LegacyBabySandWorm_PositionHistoryEntry___Fields fields;
    };

    struct LegacyBabySandWorm_PositionHistoryEntry {
        struct Vector3 Position;
        float Time;
    };

    struct LegacyBabySandWorm_PositionHistoryEntry__Boxed {
        struct LegacyBabySandWorm_PositionHistoryEntry__Class* klass;
        MonitorData* monitor;
        struct LegacyBabySandWorm_PositionHistoryEntry fields;
    };

    struct LegacyBabySandWorm_PositionHistoryEntry__Array {
        struct LegacyBabySandWorm_PositionHistoryEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LegacyBabySandWorm_PositionHistoryEntry vector[32];
    };

    struct IEnumerator_1_LegacyBabySandWorm_PositionHistoryEntry_ {
        struct IEnumerator_1_LegacyBabySandWorm_PositionHistoryEntry___Class* klass;
        MonitorData* monitor;
    };

    struct LegacyBabySandWorm__Array__VTable {
    };

    struct LegacyBabySandWorm__Array__StaticFields {
    };

    struct LegacyBabySandWorm__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyBabySandWorm__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyBabySandWorm__Array__VTable vtable;
    };

    struct IEnumerator_1_LegacyBabySandWorm___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_LegacyBabySandWorm___StaticFields {
    };

    struct IEnumerator_1_LegacyBabySandWorm___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_LegacyBabySandWorm___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_LegacyBabySandWorm___VTable vtable;
    };

    struct List_1_LegacyBabySandWorm___VTable {
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

    struct List_1_LegacyBabySandWorm___StaticFields {
        struct LegacyBabySandWorm__Array* _emptyArray;
    };

    struct List_1_LegacyBabySandWorm___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_LegacyBabySandWorm___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_LegacyBabySandWorm___VTable vtable;
    };

    struct LegacyBabySandWorm_PositionHistoryEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LegacyBabySandWorm_PositionHistoryEntry__StaticFields {
    };

    struct LegacyBabySandWorm_PositionHistoryEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyBabySandWorm_PositionHistoryEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyBabySandWorm_PositionHistoryEntry__VTable vtable;
    };

    struct LegacyBabySandWorm_PositionHistoryEntry__Array__VTable {
    };

    struct LegacyBabySandWorm_PositionHistoryEntry__Array__StaticFields {
    };

    struct LegacyBabySandWorm_PositionHistoryEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyBabySandWorm_PositionHistoryEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyBabySandWorm_PositionHistoryEntry__Array__VTable vtable;
    };

    struct IEnumerator_1_LegacyBabySandWorm_PositionHistoryEntry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_LegacyBabySandWorm_PositionHistoryEntry___StaticFields {
    };

    struct IEnumerator_1_LegacyBabySandWorm_PositionHistoryEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_LegacyBabySandWorm_PositionHistoryEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_LegacyBabySandWorm_PositionHistoryEntry___VTable vtable;
    };

    struct List_1_LegacyBabySandWorm_PositionHistoryEntry___VTable {
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

    struct List_1_LegacyBabySandWorm_PositionHistoryEntry___StaticFields {
        struct LegacyBabySandWorm_PositionHistoryEntry__Array* _emptyArray;
    };

    struct List_1_LegacyBabySandWorm_PositionHistoryEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_LegacyBabySandWorm_PositionHistoryEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_LegacyBabySandWorm_PositionHistoryEntry___VTable vtable;
    };

    struct LegacyBabySandWorm__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LegacyBabySandWorm__StaticFields {
        struct List_1_LegacyBabySandWorm_* AllBabyWorms;
    };

    struct LegacyBabySandWorm__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyBabySandWorm__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyBabySandWorm__VTable vtable;
    };

    enum class LegacyBabySandWormNew_BabySandwormState__Enum : int32_t {
        Resting = 0x00000000,
        Spawning = 0x00000001,
        Patrol = 0x00000002,
        Chase = 0x00000003,
        Dash = 0x00000004,
        OutOfSand = 0x00000005,
    };

    struct LegacyBabySandWormNew_BabySandwormState__Enum__Boxed {
        struct LegacyBabySandWormNew_BabySandwormState__Enum__Class* klass;
        MonitorData* monitor;
        LegacyBabySandWormNew_BabySandwormState__Enum value;
    };

    struct LegacyBabySandWormNew__Fields {
        struct DamageOwner__Fields _;
        struct AnimationCurve* SpawnSpeedCurve;
        float PatrollDuration;
        float RageMinimumTimeFromStart;
        float RageStartDistance;
        float RageStartTime;
        float RageAnticipationSpeed;
        struct AnimationCurve* RageSpeedCurve;
        float JumpOutForceMultiply;
        float JumpInForceMultiply;
        float MinJumpForceValue;
        float MaxJumpForceValue;
        float MinDashJumpForceValue;
        float MaxDashJumpForceValue;
        float BashForceValue;
        float TurnSpeed;
        float ChaseTurnSpeed;
        float MoveSpeed;
        float Acceleration;
        float Gravity;
        float AreaDamageRange;
        struct AnimationCurve* DampingCurve;
        struct GameObject* DeathEffectPrefab;
        struct SandTrailParticles* TrailEffectPrefab;
        struct GameObject* SandBurstEffect;
        struct LayerMask SolidsLayerMask;
        struct SteeringForces* AvoidanceForces;
        struct Transform* FolowTest;
        struct Collider* m_collider;
        struct CharacterPlatformMovement* m_platformMovment;
        struct DamageDealer* m_damageDealer;
        struct DamageReceiver* m_damageReceiver;
        struct SandTrailParticles* m_trailEffect;
        struct BabyWormAnimation* m_animation;
        struct DigZone* m_currentDigZone;
        LegacyBabySandWormNew_BabySandwormState__Enum m_state;

        float m_lifetime;
        float m_statetime;
        bool m_dash;
        float m_dashTimeout;
        bool m_autodash;
        bool m_bashed;
        float m_bashedTimer;
        float m_currentSpeed;
        struct Vector2 m_suspendedVelocity;
        float m_spawnStateTimeFactor;
        struct IBabySandWormAutoTarget* m_autoTarget;
        bool m_suspended;
        SuspendableMask__Enum m_suspensionMask;

        struct HashSet_1_DamageType_* m_damageImunityTypes;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct LegacyBabySandWormNew {
        struct LegacyBabySandWormNew__Class* klass;
        MonitorData* monitor;
        struct LegacyBabySandWormNew__Fields fields;
    };

    struct LegacyBabySandWormNew_BabySandwormState__Enum__VTable {
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

    struct LegacyBabySandWormNew_BabySandwormState__Enum__StaticFields {
    };

    struct LegacyBabySandWormNew_BabySandwormState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyBabySandWormNew_BabySandwormState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyBabySandWormNew_BabySandwormState__Enum__VTable vtable;
    };

    struct LegacyBabySandWormNew__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ProcessDamage;
        VirtualInvokeData get_Position;
        VirtualInvokeData IsDead;
        VirtualInvokeData CanBeChargeFlamed;
        VirtualInvokeData CanBeChargeDashed;
        VirtualInvokeData CanBeGrenaded;
        VirtualInvokeData CanBeStomped;
        VirtualInvokeData CanBeBashed;
        VirtualInvokeData CanBeSpiritFlamed;
        VirtualInvokeData IsStompBouncable;
        VirtualInvokeData CanBeLevelUpBlasted;
        VirtualInvokeData CanBeSpiritSlashed;
        VirtualInvokeData CanBeHitByBow;
        VirtualInvokeData CanBeHitByMelee;
        VirtualInvokeData CanBeHitByHammerHandle;
        VirtualInvokeData CanBeHeavySpiritSlashed;
        VirtualInvokeData CanBeSpiritLeashed;
        VirtualInvokeData CanBeHomingMissiled;
        VirtualInvokeData CanBeTrapped;
        VirtualInvokeData CanBeSpiritSpeared;
        VirtualInvokeData CanBeTeleportedByBeacon;
        VirtualInvokeData CanBeGlowed;
        VirtualInvokeData get_AffectedReceivers;
        VirtualInvokeData get_BashPriority;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnBashHighlight;
        VirtualInvokeData OnBashDehighlight;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct LegacyBabySandWormNew__StaticFields {
    };

    struct LegacyBabySandWormNew__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyBabySandWormNew__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyBabySandWormNew__VTable vtable;
    };

    struct LegacyBabySandWormNew_c {
        struct LegacyBabySandWormNew_c__Class* klass;
        MonitorData* monitor;
    };

    struct LegacyBabySandWormNew_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LegacyBabySandWormNew_c__StaticFields {
        struct LegacyBabySandWormNew_c* __9;
        struct Predicate_1_UnityEngine_Collider_* __9__71_0;
    };

    struct LegacyBabySandWormNew_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyBabySandWormNew_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyBabySandWormNew_c__VTable vtable;
    };

    struct GroundLocomotion__Fields {
        struct Locomotion__Fields _;
        struct Transform* Mirror;
        struct Transform* EntityFeetTransform;
        float LocomotionGravity;
        float MaxFallSpeed;
        float Deceleration;
        float AirDrag;
        float RotationSpeed;
        float RotationLimit;
        float TargetAirRotation;
        float ModelLookDirection;
        struct MoonAnimation* FallingAnimation;
        float MinimumFallDistance;
        struct Vector2 m_lookDirection;
        struct Vector2 m_velocityOverride;
        struct Vector2 m_lookDirectionBuffer;
        int32_t m_gravityDisableCounter;
        struct ActiveAnimationHandle m_fallingAnimation;
        struct Vector3 m_initFeetOffset;
        struct Transform* m_rotationTransform;
        bool AdjustFeet;
        bool _IsTurning_k__BackingField;
    };

    struct GroundLocomotion {
        struct GroundLocomotion__Class* klass;
        MonitorData* monitor;
        struct GroundLocomotion__Fields fields;
    };

    enum class LocomotionGoal_GoalStatus__Enum : int32_t {
        Running = 0x00000000,
        Success = 0x00000001,
        Failure = 0x00000002,
    };

    struct LocomotionGoal_GoalStatus__Enum__Boxed {
        struct LocomotionGoal_GoalStatus__Enum__Class* klass;
        MonitorData* monitor;
        LocomotionGoal_GoalStatus__Enum value;
    };

    struct __declspec(align(8)) LocomotionGoal__Fields {
        LocomotionGoal_GoalStatus__Enum Status;

        float CurrentTime;
        struct Action* OnGoalUpdate;
        struct Action_1_Moon_LocomotionGoal_GoalStatus_* OnGoalEnd;
        struct Func_1_Boolean_* SuccessCondition;
        struct Func_1_Boolean_* FailureCondition;
        bool ended;
    };

    struct LocomotionGoal {
        struct LocomotionGoal__Class* klass;
        MonitorData* monitor;
        struct LocomotionGoal__Fields fields;
    };

    struct Action_1_Moon_LocomotionGoal_GoalStatus___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_Moon_LocomotionGoal_GoalStatus_ {
        struct Action_1_Moon_LocomotionGoal_GoalStatus___Class* klass;
        MonitorData* monitor;
        struct Action_1_Moon_LocomotionGoal_GoalStatus___Fields fields;
    };

    struct Func_1_UnityEngine_Vector3___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_1_UnityEngine_Vector3_ {
        struct Func_1_UnityEngine_Vector3___Class* klass;
        MonitorData* monitor;
        struct Func_1_UnityEngine_Vector3___Fields fields;
    };

    struct LocomotionGoal_GoalStatus__Enum__VTable {
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

    struct LocomotionGoal_GoalStatus__Enum__StaticFields {
    };

    struct LocomotionGoal_GoalStatus__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocomotionGoal_GoalStatus__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocomotionGoal_GoalStatus__Enum__VTable vtable;
    };

    struct Action_1_Moon_LocomotionGoal_GoalStatus___VTable {
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

    struct Action_1_Moon_LocomotionGoal_GoalStatus___StaticFields {
    };

    struct Action_1_Moon_LocomotionGoal_GoalStatus___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_Moon_LocomotionGoal_GoalStatus___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Action_1_Moon_LocomotionGoal_GoalStatus___VTable vtable;
    };

    struct LocomotionGoal__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LocomotionGoal__StaticFields {
    };

    struct LocomotionGoal__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocomotionGoal__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocomotionGoal__VTable vtable;
    };

    struct Func_1_UnityEngine_Vector3___VTable {
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

    struct Func_1_UnityEngine_Vector3___StaticFields {
    };

    struct Func_1_UnityEngine_Vector3___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_1_UnityEngine_Vector3___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_1_UnityEngine_Vector3___VTable vtable;
    };

    struct GroundLocomotion__VTable {
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
        VirtualInvokeData Chase;
        VirtualInvokeData MoveTo;
        VirtualInvokeData SetLookDirectionX;
        VirtualInvokeData SetLookDirection;
        VirtualInvokeData SetLookDirectionTowardsPoint;
        VirtualInvokeData get_LookDirection;
        VirtualInvokeData get_IsFacingLeft;
        VirtualInvokeData get_IsTurning;
    };

    struct GroundLocomotion__StaticFields {
    };

    struct GroundLocomotion__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GroundLocomotion__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GroundLocomotion__VTable vtable;
    };

    struct LocomotionFallingBehaviour__Fields {
        struct EntityBehaviour__Fields _;
        struct MoonAnimation* FallingAnimation;
        struct ActiveAnimationHandle m_animation;
        struct Locomotion* m_locomotion;
        BehaviourStatus__Enum _Status_k__BackingField;

        struct Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ _ForceReturnStatus_k__BackingField;
    };

    struct LocomotionFallingBehaviour {
        struct LocomotionFallingBehaviour__Class* klass;
        MonitorData* monitor;
        struct LocomotionFallingBehaviour__Fields fields;
    };

    struct LocomotionFallingBehaviour__VTable {
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

    struct LocomotionFallingBehaviour__StaticFields {
    };

    struct LocomotionFallingBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LocomotionFallingBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LocomotionFallingBehaviour__VTable vtable;
    };

    struct LocomotionIdleEntryBehaviour__Fields {
        struct EntityLocomotionTask__Fields _;
        struct LocomotionTimelineAnimation__Array* IdleEntries;
        struct Locomotion* m_locomotion;
        struct LocomotionTimelineAnimation* m_currentAnimation;
    };

    struct LocomotionIdleEntryBehaviour {
        struct LocomotionIdleEntryBehaviour__Class* klass;
        MonitorData* monitor;
        struct LocomotionIdleEntryBehaviour__Fields fields;
    };

    struct LocomotionIdleEntryBehaviour__VTable {
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

    struct LocomotionIdleEntryBehaviour__StaticFields {
    };

} // namespace app
