namespace app {
    struct SpikeSlugLocomotionMoveTimelineBehaviour__StaticFields {
    };

    struct SpikeSlugLocomotionMoveTimelineBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpikeSlugLocomotionMoveTimelineBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpikeSlugLocomotionMoveTimelineBehaviour__VTable vtable;
    };

    struct CloudAttackSettings__Fields {
        struct MonoBehaviour__Fields _;
        struct DamageOwner* DamageOwner;
        float Damage;
        float KickbackForce;
        float Radius;
        DamageWeight__Enum DamageWeight;

        struct Color DebugColor;
    };

    struct CloudAttackSettings {
        struct CloudAttackSettings__Class* klass;
        MonitorData* monitor;
        struct CloudAttackSettings__Fields fields;
    };

    struct CloudAttackSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CloudAttackSettings__StaticFields {
    };

    struct CloudAttackSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CloudAttackSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CloudAttackSettings__VTable vtable;
    };

    struct EntityBehaviourNode_1_SneezeSlugEntity___Fields {
        struct EntityBehaviourNode__Fields _;
    };

    struct EntityBehaviourNode_1_SneezeSlugEntity_ {
        struct EntityBehaviourNode_1_SneezeSlugEntity___Class* klass;
        MonitorData* monitor;
        struct EntityBehaviourNode_1_SneezeSlugEntity___Fields fields;
    };

    enum class SneezeSlugBlastBehaviour_State__Enum : int32_t {
        None = 0x00000000,
        Blast = 0x00000001,
        Done = 0x00000002,
    };

    struct SneezeSlugBlastBehaviour_State__Enum__Boxed {
        struct SneezeSlugBlastBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        SneezeSlugBlastBehaviour_State__Enum value;
    };

    struct SneezeSlugBlastBehaviour__Fields {
        struct EntityBehaviourNode_1_SneezeSlugEntity___Fields _;
        struct MoonTimeline* BlastTimeline;
        struct RootMotionProcessorData* RootMotion;
        struct EventTriggerAnimator* BlastTrigger;
        struct PrefabSpawner* BlastProjectileSpawner;
        struct CloudAttackSettings* CloudAttackSettings;
        SneezeSlugBlastBehaviour_State__Enum m_state;

        float m_timeInState;
        bool m_hasFinished;
        struct MoonTimeline* m_prevTimeline;
        struct GroundEntityLocomotion* m_locomotion;
        struct PlatformMovement* m_platformMovement;
        struct BlockDamageInterruptionHandler* m_blockingHandlerBlast;
    };

    struct SneezeSlugBlastBehaviour {
        struct SneezeSlugBlastBehaviour__Class* klass;
        MonitorData* monitor;
        struct SneezeSlugBlastBehaviour__Fields fields;
    };

    struct EntityBehaviourNode_1_SneezeSlugEntity___VTable {
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

    struct EntityBehaviourNode_1_SneezeSlugEntity___StaticFields {
    };

    struct EntityBehaviourNode_1_SneezeSlugEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityBehaviourNode_1_SneezeSlugEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityBehaviourNode_1_SneezeSlugEntity___VTable vtable;
    };

    struct SneezeSlugBlastBehaviour_State__Enum__VTable {
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

    struct SneezeSlugBlastBehaviour_State__Enum__StaticFields {
    };

    struct SneezeSlugBlastBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SneezeSlugBlastBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SneezeSlugBlastBehaviour_State__Enum__VTable vtable;
    };

    struct SneezeSlugBlastBehaviour__VTable {
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

    struct SneezeSlugBlastBehaviour__StaticFields {
    };

    struct SneezeSlugBlastBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SneezeSlugBlastBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SneezeSlugBlastBehaviour__VTable vtable;
    };

    enum class SneezeSlugBurrowBehaviour_State__Enum : int32_t {
        None = 0x00000000,
        BurrowingIn = 0x00000001,
        Burrowed = 0x00000002,
        BurrowingOut = 0x00000003,
        Done = 0x00000004,
    };

    struct SneezeSlugBurrowBehaviour_State__Enum__Boxed {
        struct SneezeSlugBurrowBehaviour_State__Enum__Class* klass;
        MonitorData* monitor;
        SneezeSlugBurrowBehaviour_State__Enum value;
    };

    struct SneezeSlugBurrowBehaviour__Fields {
        struct EntityBehaviourNode_1_SneezeSlugEntity___Fields _;
        struct MoonFloat* AnimationInSpeed;
        struct MoonFloat* AnimationOutSpeed;
        struct MoonTimeline* BurrowInTimelineSequence;
        struct MoonTimeline* BurrowOutTimelineSequence;
        struct AnimationPlayer* TimelineInAnimPlayer;
        struct AnimationPlayer* TimelineOutAnimPlayer;
        struct RootMotionProcessorData* RootMotion;
        float TurnOnVisibilityDelay;
        struct SkinnedMeshRenderer* Visuals;
        struct MoonFloat* MinDistanceForTeleport;
        struct EventTriggerAnimator* DeactivateDamageInputTrigger;
        struct EventTriggerAnimator* BlastTrigger;
        struct PrefabSpawner* BlastProjectileSpawner;
        struct CloudAttackSettings* CloudAttackSettings;
        struct PrefabSpawner* SneezeProjectileSpawner;
        struct EventTriggerAnimator* SneezeTrigger;
        struct Vector3 m_shootTargetPos;
        struct MoonBool* CommitToInitialTargetPosition;
        struct MoonFloat* MinHorizontalAimDistance;
        struct Transform* ShootPointFront;
        struct Transform* ShootPointBack;
        float ProjectileArcHeight;
        float ProjectileGravity;
        int32_t ProjectileDamage;
        float MinimumDistanceToArcProjectile;
        struct MoonFloat* MaxAimDistance;
        struct MoonFloat* RecoilForce;
        struct MoonFloat* PrefferedDistanceFromBurrow;
        struct MoonFloat* DistanceFromBurrowFalloff;
        struct MoonFloat* PrefferedDistanceFromOri;
        struct MoonFloat* OriDistanceRatingMultiplier;
        struct MoonFloat* BurrowedTime;
        SneezeSlugBurrowBehaviour_State__Enum m_state;

        float m_timeInState;
        bool m_hasFinished;
        struct MoonTimeline* m_prevTimeline;
        struct GroundEntityLocomotion* m_locomotion;
        struct PlatformMovement* m_platformMovement;
        struct BlockDamageInterruptionHandler* m_blockingHandlerBurrowingIn;
        struct BlockDamageInterruptionHandler* m_blockingHandlerBurrowingOut;
    };

    struct SneezeSlugBurrowBehaviour {
        struct SneezeSlugBurrowBehaviour__Class* klass;
        MonitorData* monitor;
        struct SneezeSlugBurrowBehaviour__Fields fields;
    };

    struct SneezeSlugBurrowBehaviour_State__Enum__VTable {
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

    struct SneezeSlugBurrowBehaviour_State__Enum__StaticFields {
    };

    struct SneezeSlugBurrowBehaviour_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SneezeSlugBurrowBehaviour_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SneezeSlugBurrowBehaviour_State__Enum__VTable vtable;
    };

    struct SneezeSlugBurrowBehaviour__VTable {
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

    struct SneezeSlugBurrowBehaviour__StaticFields {
    };

    struct SneezeSlugBurrowBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SneezeSlugBurrowBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SneezeSlugBurrowBehaviour__VTable vtable;
    };

    enum class SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum : int32_t {
        Projectile = 0x00000000,
        SneezeCloud = 0x00000001,
    };

    struct SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__Boxed {
        struct SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__Class* klass;
        MonitorData* monitor;
        SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum value;
    };

    struct SneezeSlugSneezeBehaviourNew__Fields {
        struct EntityBehaviourNode_1_SneezeSlugEntity___Fields _;
        SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum SneezeType;

        struct MoonFloat* AnimationSpeed;
        struct MoonTimeline* TimelineSequence;
        struct EventTriggerAnimator* TurnTrigger;
        struct RootMotionProcessorData* RootMotion;
        struct PrefabSpawner* ProjectileSpawner;
        struct CloudAttackSettings* CloudAttackSettings;
        float ProjectileGravity;
        struct SneezeAttackSettings* ProjectileDamageSettings;
        float ProjectileArcHeight;
        struct EventTriggerAnimator* ShootTrigger;
        struct Transform* ShootPointFront;
        struct Transform* ShootPointBack;
        float MinimumDistanceToArcProjectile;
        float ProjectileRangeWhenNoTarget;
        struct MoonFloat* MinHorizontalAimDistance;
        struct MoonFloat* MaxAimDistance;
        struct MoonBool* CommitToInitialTargetPosition;
        struct MoonFloat* RecoilForce;
        struct MoonFloat* LedgeCheckDistance;
        struct MoonFloat* LedgeCheckDepth;
        bool m_hasFinished;
        struct Vector3 m_shootTargetPos;
        float m_ledgeCheckDistance;
        float m_ledgeCheckDepth;
        struct BlockDamageInterruptionHandler* m_blockingHandler;
    };

    struct SneezeSlugSneezeBehaviourNew {
        struct SneezeSlugSneezeBehaviourNew__Class* klass;
        MonitorData* monitor;
        struct SneezeSlugSneezeBehaviourNew__Fields fields;
    };

    struct SneezeAttackSettings__Fields {
        struct MonoBehaviour__Fields _;
        int32_t ProjectileDamage;
        DamageWeight__Enum DamageWeight;
    };

    struct SneezeAttackSettings {
        struct SneezeAttackSettings__Class* klass;
        MonitorData* monitor;
        struct SneezeAttackSettings__Fields fields;
    };

    struct SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__VTable {
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

    struct SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__StaticFields {
    };

    struct SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum__VTable vtable;
    };

    struct SneezeAttackSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SneezeAttackSettings__StaticFields {
    };

    struct SneezeAttackSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SneezeAttackSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SneezeAttackSettings__VTable vtable;
    };

    struct SneezeSlugSneezeBehaviourNew__VTable {
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

    struct SneezeSlugSneezeBehaviourNew__StaticFields {
    };

    struct SneezeSlugSneezeBehaviourNew__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SneezeSlugSneezeBehaviourNew__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SneezeSlugSneezeBehaviourNew__VTable vtable;
    };

    struct PoisonousCloud__Fields {
        struct Suspendable__Fields _;
        bool _IsSuspended_k__BackingField;
        struct DamageDealer* DamageDealer;
        struct SphereCollider* SphereCollider;
    };

    struct PoisonousCloud {
        struct PoisonousCloud__Class* klass;
        MonitorData* monitor;
        struct PoisonousCloud__Fields fields;
    };

    struct PoisonousCloud__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData Awake;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData get_IsSuspended_1;
        VirtualInvokeData set_IsSuspended_1;
    };

    struct PoisonousCloud__StaticFields {
    };

    struct PoisonousCloud__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PoisonousCloud__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PoisonousCloud__VTable vtable;
    };

    struct EntityReactionBehaviour_1_SneezeSlugEntity___Fields {
        struct EntityReactionBehaviour__Fields _;
    };

    struct EntityReactionBehaviour_1_SneezeSlugEntity_ {
        struct EntityReactionBehaviour_1_SneezeSlugEntity___Class* klass;
        MonitorData* monitor;
        struct EntityReactionBehaviour_1_SneezeSlugEntity___Fields fields;
    };

    enum class SneezeSlugDeathReactionBehaviour_DeathState__Enum : int32_t {
        Invalid = -1,
        Launch = 0x00000000,
        Fall = 0x00000001,
        LandAndExplode = 0x00000002,
        Drowning = 0x00000003,
    };

    struct SneezeSlugDeathReactionBehaviour_DeathState__Enum__Boxed {
        struct SneezeSlugDeathReactionBehaviour_DeathState__Enum__Class* klass;
        MonitorData* monitor;
        SneezeSlugDeathReactionBehaviour_DeathState__Enum value;
    };

    struct SneezeSlugDeathReactionBehaviour__Fields {
        struct EntityReactionBehaviour_1_SneezeSlugEntity___Fields _;
        struct MoonTimeline* LaunchTimeline;
        struct MoonTimeline* FallTimeline;
        struct MoonTimeline* LandAndExplodeTimeline;
        struct MoonTimeline* DrownTimeline;
        float InitialDrowningSubmersion;
        struct GameObject* SplashPrefab;
        bool SpawnOrbs;
        struct OrbSpawner* OrbSpawner;
        struct DeathStartEffectSpawnSetting* DeathStartEffect;
        struct MoonTimeline* ShakeTimeline;
        struct MoonTimeline* m_currentTimeline;
        struct SneezeSlugHitReactionBehaviour* m_hitReactionBehaviour;
        struct CharacterPlatformMovement* m_platformMovement;
        struct GroundEntityLocomotion* m_locomotion;
        bool m_waitingForDeath;
        SneezeSlugDeathReactionBehaviour_DeathState__Enum m_currentState;

        float BounceSpeedY;
        float DeathKickbackMinMagnitude;
        float DeathKickbackMinBoost;
        float DeathKickbackMinUpDirection;
        struct RootMotionProcessorData* RootMotion;
        float m_timeDrowning;
        struct Vector2 m_initialDrowningSpeed;
        struct EntityWeightData_EntityWeightSettings m_weightData;
        struct EventTriggerAnimator* BlastTrigger;
        struct PrefabSpawner* BlastProjectileSpawner;
        struct CloudAttackSettings* CloudAttackSettings;
        bool m_wasCacheSerialized;
    };

    struct SneezeSlugDeathReactionBehaviour {
        struct SneezeSlugDeathReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct SneezeSlugDeathReactionBehaviour__Fields fields;
    };

    struct EntityHitReactionBehaviour_1_SneezeSlugEntity___Fields {
        struct EntityReactionBehaviour_1_SneezeSlugEntity___Fields _;
        struct List_1_DamageType_* DamageTypePreventingInterruption;
        struct List_1_DamageWeight_* DamageWeightPreventingInterruption;
        struct HashSet_1_DamageType_* m_damageTypePreventingInterruption;
        struct HashSet_1_DamageWeight_* m_damageWeightPreventingInterruption;
        bool _HasLocomotion_k__BackingField;
        struct CharacterPlatformMovement* m_platformMovement;
        EntityWeightData_EntityWeight__Enum m_weight;

        struct HitReactionSettings* m_kickbackSettings;
    };

    struct EntityHitReactionBehaviour_1_SneezeSlugEntity_ {
        struct EntityHitReactionBehaviour_1_SneezeSlugEntity___Class* klass;
        MonitorData* monitor;
        struct EntityHitReactionBehaviour_1_SneezeSlugEntity___Fields fields;
    };

    struct SneezeSlugHitReactionBehaviour__Fields {
        struct EntityHitReactionBehaviour_1_SneezeSlugEntity___Fields _;
        struct MoonTimeline* HitFront;
        struct MoonTimeline* HitBack;
        struct MoonTimeline* HitAir;
        struct MoonTimeline* Knockup;
        struct MoonTimeline* Knockback;
        struct MoonTimeline* Knockforward;
        struct MoonTimeline* HitAirAdditive;
        struct MoonTimeline* HitBlastAdditive;
        struct MoonTimeline* HitAdditiveFront;
        struct MoonTimeline* HitAdditiveBack;
        struct MoonTimeline* HitAdditiveScaleOnly;
        struct AnimationPlayer* HitAdditiveFrontAnimPlayer;
        struct AnimationPlayer* HitAdditiveBackAnimPlayer;
        struct AnimationPlayer* HitAdditiveScaleOnlyAnimPlayer;
        struct AnimationPlayer* HitAirAdditiveAnimPlayer;
        struct AnimationPlayer* HitBlastAdditiveAnimPlayer;
        struct List_1_Moon_Timeline_EventTriggerAnimator_* BlastInflateTriggers;
        struct List_1_Moon_Timeline_EventTriggerAnimator_* FlipEvents;
        float MinYForceForKnockup;
        float MaxYForceWhenNotKnockup;
        struct Event_1* OnAnyHitEvent;
        struct MoonTimeline* m_currentTimeline;
        struct MoonTimeline* m_currentSecondaryTimeline;
        struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_* m_additiveWeights;
        struct ReactionFallingBehaviour* m_fallBehaviour;
        struct GroundEntityLocomotion* m_locomotion;
        bool m_BlastInflateActive;
        bool m_exitEarly;
        struct EntityDamageEvent* _DamageEvent_k__BackingField;
        struct List_1_SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition_* DamageConditionsPreventingInterruption;
        struct InterfaceCache* InterruptionBlockingTasksCache;
        struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_* InterruptionBlockingTasks;
        bool m_wasCacheSerialized;
    };

    struct SneezeSlugHitReactionBehaviour {
        struct SneezeSlugHitReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct SneezeSlugHitReactionBehaviour__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_Moon_Timeline_MoonTimeline_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_MoonFloat_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_MoonFloat_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ {
        struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ {
        int32_t hashCode;
        int32_t next;
        struct MoonTimeline* key;
        struct MoonFloat* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Array {
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Fields {
        struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Fields {
        struct Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Fields fields;
    };

    struct MoonFloat__Array {
        struct MoonFloat__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonFloat* vector[32];
    };

    struct IEnumerator_1_Moon_MoonFloat_ {
        struct IEnumerator_1_Moon_MoonFloat___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_Moon_MoonFloat_ {
        struct ICollection_1_Moon_MoonFloat___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ {
        struct MoonTimeline* key;
        struct MoonFloat* value;
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Boxed {
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ fields;
    };

    struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Array {
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ {
        struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_MoonFloat_ {
        struct IEnumerable_1_Moon_MoonFloat___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition___Fields {
        struct SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition_ {
        struct List_1_SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition___Class* klass;
        MonitorData* monitor;
        struct List_1_SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition___Fields fields;
    };

    struct __declspec(align(8)) SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Fields {
        struct MoonReference_1_Moon_BehaviourSystem_ITask_* Task;
        struct List_1_DamageType_* DamageTypes;
    };

    struct SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition {
        struct SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Class* klass;
        MonitorData* monitor;
        struct SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Fields fields;
    };

    struct SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array {
        struct SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition* vector[32];
    };

    struct IEnumerator_1_SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition_ {
        struct IEnumerator_1_SneezeSlugHitReactionBehaviour_NonInterruptibleTaskCondition___Class* klass;
        MonitorData* monitor;
    };

    struct EntityReactionBehaviour_1_SneezeSlugEntity___VTable {
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

    struct EntityReactionBehaviour_1_SneezeSlugEntity___StaticFields {
    };

    struct EntityReactionBehaviour_1_SneezeSlugEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityReactionBehaviour_1_SneezeSlugEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityReactionBehaviour_1_SneezeSlugEntity___VTable vtable;
    };

    struct EntityHitReactionBehaviour_1_SneezeSlugEntity___VTable {
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

    struct EntityHitReactionBehaviour_1_SneezeSlugEntity___StaticFields {
    };

    struct EntityHitReactionBehaviour_1_SneezeSlugEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityHitReactionBehaviour_1_SneezeSlugEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityHitReactionBehaviour_1_SneezeSlugEntity___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_MoonTimeline_Moon_MoonFloat___Array__VTable vtable;
    };

} // namespace app
