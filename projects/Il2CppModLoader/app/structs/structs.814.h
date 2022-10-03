namespace app {
    struct DropSlugEnemy__StaticFields {
    };

    struct DropSlugEnemy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DropSlugEnemy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DropSlugEnemy__VTable vtable;
    };

    struct DropSlugState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData OnExit_1;
    };

    struct DropSlugState__StaticFields {
    };

    struct DropSlugState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DropSlugState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DropSlugState__VTable vtable;
    };

    struct DropSlugAlertState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData OnExit_1;
    };

    struct DropSlugAlertState__StaticFields {
    };

    struct DropSlugAlertState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DropSlugAlertState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DropSlugAlertState__VTable vtable;
    };

    struct DropSlugEnemyPlaceholder__Fields {
        struct RespawningPlaceholder__Fields _;
        struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings* Settings;
        struct EntityPlaceholderScalingData* Scaling;
        struct GameObject* DropOwlEnemy;
    };

    struct DropSlugEnemyPlaceholder {
        struct DropSlugEnemyPlaceholder__Class* klass;
        MonitorData* monitor;
        struct DropSlugEnemyPlaceholder__Fields fields;
    };

    struct __declspec(align(8)) DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields {
        float Health;
        float DamageOnTouch;
        int32_t NumberOfExpOrbsToDrop;
        struct DropLootSettings* LootSettings;
        float AlertRange;
        float FallRange;
        float DropDistance;
        float Speed;
        float ExplosionDamage;
    };

    struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings {
        struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class* klass;
        MonitorData* monitor;
        struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Fields fields;
    };

    struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__StaticFields {
    };

    struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DropSlugEnemyPlaceholder_DropOwlPlaceholderSettings__VTable vtable;
    };

    struct DropSlugEnemyPlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_CheckForOverlap;
        VirtualInvokeData get_CanSpawn;
        VirtualInvokeData get_NeedsToRespawn;
        VirtualInvokeData UpdateSpawnState;
        VirtualInvokeData Instantiate;
    };

    struct DropSlugEnemyPlaceholder__StaticFields {
    };

    struct DropSlugEnemyPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DropSlugEnemyPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DropSlugEnemyPlaceholder__VTable vtable;
    };

    struct __declspec(align(8)) FishState__Fields {
        struct FishEnemy* Fish;
    };

    struct FishState {
        struct FishState__Class* klass;
        MonitorData* monitor;
        struct FishState__Fields fields;
    };

    struct FishAttackState__Fields {
        struct FishState__Fields _;
        float m_lastDistance;
        float m_lastAngle;
        float m_attackAngle;
    };

    struct FishAttackState {
        struct FishAttackState__Class* klass;
        MonitorData* monitor;
        struct FishAttackState__Fields fields;
    };

    struct FishEnemy__Fields {
        struct Enemy2D__Fields _;
        struct FishEnemyAnimations* Animations;
        struct FishEnemySounds* Sounds;
        struct FlyMovement* FlyMovement;
        struct FishEnemySettings* Settings;
        struct Transform* Rotation;
        struct FishEnemy_States* State;
        struct Transform* WanderTarget;
        struct AnimationCurve* AnimationFromBend;
        float m_lastAngle;
        float m_currentAngularVelocity;
        bool m_inWater;
        float Angle;
    };

    struct FishEnemy {
        struct FishEnemy__Class* klass;
        MonitorData* monitor;
        struct FishEnemy__Fields fields;
    };

    struct __declspec(align(8)) FishEnemyAnimations__Fields {
        struct TwistAnimationSet* Idle;
        struct TwistAnimationSet* Swim;
        struct TextureAnimationWithTransitions* Attack;
        struct TextureAnimationWithTransitions* Bashed;
        struct TextureAnimationWithTransitions* BounceCeiling;
        struct TextureAnimationWithTransitions* BounceFloor;
        struct TextureAnimationWithTransitions* BounceWall;
        struct TextureAnimationWithTransitions* Fall;
        struct TextureAnimationWithTransitions* Flop;
        struct TextureAnimationWithTransitions* IdleFlipHorizontal;
        struct TextureAnimationWithTransitions* IdleFlipVertical;
        struct TextureAnimationWithTransitions* SwimFlipHorizontal;
        struct TextureAnimationWithTransitions* SwimFlipVertical;
    };

    struct FishEnemyAnimations {
        struct FishEnemyAnimations__Class* klass;
        MonitorData* monitor;
        struct FishEnemyAnimations__Fields fields;
    };

    struct __declspec(align(8)) TwistAnimationSet__Fields {
        struct TextureAnimationWithTransitions__Array* Animations;
    };

    struct TwistAnimationSet {
        struct TwistAnimationSet__Class* klass;
        MonitorData* monitor;
        struct TwistAnimationSet__Fields fields;
    };

    struct TextureAnimationWithTransitions__Array {
        struct TextureAnimationWithTransitions__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TextureAnimationWithTransitions* vector[32];
    };

    struct __declspec(align(8)) FishEnemySounds__Fields {
        struct SoundSource* Swim;
        struct SoundProvider* Alert;
        struct SoundSource* Bite;
        struct SoundSource* Flop;
        struct SoundSource* EnterWater;
        struct SoundSource* ExitWater;
    };

    struct FishEnemySounds {
        struct FishEnemySounds__Class* klass;
        MonitorData* monitor;
        struct FishEnemySounds__Fields fields;
    };

    struct __declspec(align(8)) FishEnemySettings__Fields {
        struct AnimationCurve* IdleSpeedOverDistance;
        struct AnimationCurve* AttackDistanceOverTime;
        struct AnimationCurve* AttackAngleOverTime;
        struct AnimationCurve* SwimSpeedOverTime;
        float EnterSwimRange;
        float ExitSwimRange;
        float AttackRange;
        float MaxSwimDistance;
        float MinSwimDuration;
        float IdleSpeed;
        float SwimSpeed;
        float AttackSpeed;
        float Gravity;
        float IdleTurnSpeed;
        float SwimTurnSpeed;
        float AttackDuration;
        float BounceDuration;
        float BashDuration;
        float BashSpeed;
    };

    struct FishEnemySettings {
        struct FishEnemySettings__Class* klass;
        MonitorData* monitor;
        struct FishEnemySettings__Fields fields;
    };

    struct __declspec(align(8)) FishEnemy_States__Fields {
        struct FishIdleState* Idle;
        struct FishSwimState* Swim;
        struct FishAttackState* Attack;
        struct FishBashedState* Bashed;
        struct FishBounceState* Bounce;
        struct FishFlopState* Flop;
        struct FishFallState* Fall;
    };

    struct FishEnemy_States {
        struct FishEnemy_States__Class* klass;
        MonitorData* monitor;
        struct FishEnemy_States__Fields fields;
    };

    struct FishIdleState__Fields {
        struct FishState__Fields _;
        float m_lockAnimationTime;
    };

    struct FishIdleState {
        struct FishIdleState__Class* klass;
        MonitorData* monitor;
        struct FishIdleState__Fields fields;
    };

    struct FishSwimState__Fields {
        struct FishState__Fields _;
        float m_lockAnimationTime;
    };

    struct FishSwimState {
        struct FishSwimState__Class* klass;
        MonitorData* monitor;
        struct FishSwimState__Fields fields;
    };

    struct FishBashedState__Fields {
        struct FishState__Fields _;
    };

    struct FishBashedState {
        struct FishBashedState__Class* klass;
        MonitorData* monitor;
        struct FishBashedState__Fields fields;
    };

    struct FishBounceState__Fields {
        struct FishState__Fields _;
    };

    struct FishBounceState {
        struct FishBounceState__Class* klass;
        MonitorData* monitor;
        struct FishBounceState__Fields fields;
    };

    struct FishFlopState__Fields {
        struct FishState__Fields _;
    };

    struct FishFlopState {
        struct FishFlopState__Class* klass;
        MonitorData* monitor;
        struct FishFlopState__Fields fields;
    };

    struct FishFallState__Fields {
        struct FishState__Fields _;
    };

    struct FishFallState {
        struct FishFallState__Class* klass;
        MonitorData* monitor;
        struct FishFallState__Fields fields;
    };

    struct TextureAnimationWithTransitions__Array__VTable {
    };

    struct TextureAnimationWithTransitions__Array__StaticFields {
    };

    struct TextureAnimationWithTransitions__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TextureAnimationWithTransitions__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TextureAnimationWithTransitions__Array__VTable vtable;
    };

    struct TwistAnimationSet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TwistAnimationSet__StaticFields {
    };

    struct TwistAnimationSet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TwistAnimationSet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TwistAnimationSet__VTable vtable;
    };

    struct FishEnemyAnimations__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FishEnemyAnimations__StaticFields {
    };

    struct FishEnemyAnimations__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishEnemyAnimations__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishEnemyAnimations__VTable vtable;
    };

    struct FishEnemySounds__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FishEnemySounds__StaticFields {
    };

    struct FishEnemySounds__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishEnemySounds__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishEnemySounds__VTable vtable;
    };

    struct FishEnemySettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FishEnemySettings__StaticFields {
    };

    struct FishEnemySettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishEnemySettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishEnemySettings__VTable vtable;
    };

    struct FishIdleState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData OnExit_1;
    };

    struct FishIdleState__StaticFields {
    };

    struct FishIdleState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishIdleState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishIdleState__VTable vtable;
    };

    struct FishSwimState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData OnExit_1;
    };

    struct FishSwimState__StaticFields {
    };

    struct FishSwimState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishSwimState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishSwimState__VTable vtable;
    };

    struct FishBashedState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData OnExit_1;
    };

    struct FishBashedState__StaticFields {
    };

    struct FishBashedState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishBashedState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishBashedState__VTable vtable;
    };

    struct FishBounceState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData OnExit_1;
    };

    struct FishBounceState__StaticFields {
    };

    struct FishBounceState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishBounceState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishBounceState__VTable vtable;
    };

    struct FishFlopState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData OnExit_1;
    };

    struct FishFlopState__StaticFields {
    };

    struct FishFlopState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishFlopState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishFlopState__VTable vtable;
    };

    struct FishFallState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData OnExit_1;
    };

    struct FishFallState__StaticFields {
    };

    struct FishFallState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishFallState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishFallState__VTable vtable;
    };

    struct FishEnemy_States__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FishEnemy_States__StaticFields {
    };

    struct FishEnemy_States__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishEnemy_States__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishEnemy_States__VTable vtable;
    };

    struct FishEnemy__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnTimedRespawn;
        VirtualInvokeData RegisterRespawnDelegate;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData CanBeOptimized;
        VirtualInvokeData get_Position;
        VirtualInvokeData OnFreeze;
        VirtualInvokeData OnUnfreeze;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
        VirtualInvokeData IPuppetBase_get_Animation;
        VirtualInvokeData get_Animator;
        VirtualInvokeData get_SoundHost;
    };

    struct FishEnemy__StaticFields {
    };

    struct FishEnemy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishEnemy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishEnemy__VTable vtable;
    };

    struct FishState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct FishState__StaticFields {
    };

    struct FishState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishState__VTable vtable;
    };

    struct FishAttackState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateState;
        VirtualInvokeData OnEnter;
        VirtualInvokeData OnExit;
        VirtualInvokeData GetStateId;
        VirtualInvokeData UpdateState_1;
        VirtualInvokeData OnEnter_1;
        VirtualInvokeData OnExit_1;
    };

    struct FishAttackState__StaticFields {
    };

    struct FishAttackState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishAttackState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishAttackState__VTable vtable;
    };

    struct FishEnemyPlaceholder__Fields {
        struct RespawningPlaceholder__Fields _;
        struct Transform* WanderTarget;
        struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings* Settings;
        struct GameObject* FishEnemy;
    };

    struct FishEnemyPlaceholder {
        struct FishEnemyPlaceholder__Class* klass;
        MonitorData* monitor;
        struct FishEnemyPlaceholder__Fields fields;
    };

    struct __declspec(align(8)) FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Fields {
        float Health;
        float DamageOnTouch;
        int32_t NumberOfExpOrbsToDrop;
        struct DropLootSettings* LootSettings;
    };

    struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings {
        struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class* klass;
        MonitorData* monitor;
        struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Fields fields;
    };

    struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__StaticFields {
    };

    struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishEnemyPlaceholder_FishEnemyPlaceholderSettings__VTable vtable;
    };

    struct FishEnemyPlaceholder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_CheckForOverlap;
        VirtualInvokeData get_CanSpawn;
        VirtualInvokeData get_NeedsToRespawn;
        VirtualInvokeData UpdateSpawnState;
        VirtualInvokeData Instantiate;
    };

    struct FishEnemyPlaceholder__StaticFields {
    };

    struct FishEnemyPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FishEnemyPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FishEnemyPlaceholder__VTable vtable;
    };

    struct __declspec(align(8)) ChangeDetectorString__Fields {
        struct String* RecentValue;
    };

    struct ChangeDetectorString {
        struct ChangeDetectorString__Class* klass;
        MonitorData* monitor;
        struct ChangeDetectorString__Fields fields;
    };

    struct ChangeDetectorString__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ChangeDetectorString__StaticFields {
    };

    struct ChangeDetectorString__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChangeDetectorString__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChangeDetectorString__VTable vtable;
    };

    struct __declspec(align(8)) ChangeDetectorFloat__Fields {
        float RecentValue;
    };

    struct ChangeDetectorFloat {
        struct ChangeDetectorFloat__Class* klass;
        MonitorData* monitor;
        struct ChangeDetectorFloat__Fields fields;
    };

    struct ChangeDetectorFloat__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ChangeDetectorFloat__StaticFields {
    };

    struct ChangeDetectorFloat__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChangeDetectorFloat__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChangeDetectorFloat__VTable vtable;
    };

    struct __declspec(align(8)) ChangeDetectorApproxFloat__Fields {
        float Epsilon;
        float RecentValue;
    };

    struct ChangeDetectorApproxFloat {
        struct ChangeDetectorApproxFloat__Class* klass;
        MonitorData* monitor;
        struct ChangeDetectorApproxFloat__Fields fields;
    };

    struct ChangeDetectorApproxFloat__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ChangeDetectorApproxFloat__StaticFields {
    };

    struct ChangeDetectorApproxFloat__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChangeDetectorApproxFloat__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChangeDetectorApproxFloat__VTable vtable;
    };

    struct ChargeFlameWall__Fields {
        struct LegacyEntity__Fields _;
        bool GrenadeOnly;
        struct SoundProvider* Deflected;
    };

    struct ChargeFlameWall {
        struct ChargeFlameWall__Class* klass;
        MonitorData* monitor;
        struct ChargeFlameWall__Fields fields;
    };

    struct ChargeFlameWall__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnTimedRespawn;
        VirtualInvokeData RegisterRespawnDelegate;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData CanBeOptimized;
        VirtualInvokeData get_Position;
        VirtualInvokeData OnFreeze;
        VirtualInvokeData OnUnfreeze;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
    };

    struct ChargeFlameWall__StaticFields {
    };

    struct ChargeFlameWall__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChargeFlameWall__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChargeFlameWall__VTable vtable;
    };

    struct Creep__Fields {
        struct LegacyEntity__Fields _;
    };

    struct Creep {
        struct Creep__Class* klass;
        MonitorData* monitor;
        struct Creep__Fields fields;
    };

    struct Creep__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnTimedRespawn;
        VirtualInvokeData RegisterRespawnDelegate;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData CanBeOptimized;
        VirtualInvokeData get_Position;
        VirtualInvokeData OnFreeze;
        VirtualInvokeData OnUnfreeze;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
    };

    struct Creep__StaticFields {
    };

    struct Creep__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Creep__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Creep__VTable vtable;
    };

    struct CreepDamageReceiver__Fields {
        struct LegacyEntityDamageReciever__Fields _;
    };

    struct CreepDamageReceiver {
        struct CreepDamageReceiver__Class* klass;
        MonitorData* monitor;
        struct CreepDamageReceiver__Fields fields;
    };

    struct CreepDamageReceiver__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData OnTimedRespawn;
        VirtualInvokeData RegisterRespawnDelegate;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_StressTestName;
        VirtualInvokeData StartStressTest;
        VirtualInvokeData StressTestUpdate;
        VirtualInvokeData EndStressTest;
        VirtualInvokeData get_StressTestStatus;
        VirtualInvokeData set_StressTestStatus;
        VirtualInvokeData get_CanExecuteStressTest;
        VirtualInvokeData get_StopMovingPlayerWhilePerforming;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData get_DisableTarget;
        VirtualInvokeData OnRecieveDamage_1;
        VirtualInvokeData StressTestUpdate_1;
        VirtualInvokeData CanDetonateProjectiles;
    };

} // namespace app
