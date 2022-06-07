namespace app {
struct KamikazeSootEnemyState__Fields {
    struct GroundEnemyState__Fields _;
    struct KamikazeSootEnemy *KamikazeSootEnemy;
};

struct KamikazeSootEnemyState {
    struct KamikazeSootEnemyState__Class *klass;
    MonitorData *monitor;
    struct KamikazeSootEnemyState__Fields fields;
};

struct KamikazeSootEnemyDropState__Fields {
    struct KamikazeSootEnemyState__Fields _;
};

struct KamikazeSootEnemyDropState {
    struct KamikazeSootEnemyDropState__Class *klass;
    MonitorData *monitor;
    struct KamikazeSootEnemyDropState__Fields fields;
};

struct KamikazeSootEnemyAlertState__Fields {
    struct KamikazeSootEnemyState__Fields _;
};

struct KamikazeSootEnemyAlertState {
    struct KamikazeSootEnemyAlertState__Class *klass;
    MonitorData *monitor;
    struct KamikazeSootEnemyAlertState__Fields fields;
};

struct KamikazeSootEnemyIdleState__Fields {
    struct KamikazeSootEnemyState__Fields _;
};

struct KamikazeSootEnemyIdleState {
    struct KamikazeSootEnemyIdleState__Class *klass;
    MonitorData *monitor;
    struct KamikazeSootEnemyIdleState__Fields fields;
};

struct KamikazeSootEnemyRollingState__Fields {
    struct KamikazeSootEnemyState__Fields _;
    float m_timeOffGround;
};

struct KamikazeSootEnemyRollingState {
    struct KamikazeSootEnemyRollingState__Class *klass;
    MonitorData *monitor;
    struct KamikazeSootEnemyRollingState__Fields fields;
};

struct RollingMovement__Fields {
    struct SaveSerialize__Fields _;
    struct Rigidbody *m_rigidbody;
    struct Vector3 Speed;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ *OnCollisionGroundEvent;
    struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ *OnCollisionWallLeftEvent;
    struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ *OnCollisionWallRightEvent;
    struct Vector3 m_groundNormal;
    struct Vector3 GroundNormal;
    bool IsOnGround;
    struct IsOnCollisionState *WallLeft;
    struct IsOnCollisionState *WallRight;
    struct IsOnCollisionState *Ground;
};

struct RollingMovement {
    struct RollingMovement__Class *klass;
    MonitorData *monitor;
    struct RollingMovement__Fields fields;
};

struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider_ {
    struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___Class *klass;
    MonitorData *monitor;
    struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___Fields fields;
};

struct KamikazeSootEnemyAnimations__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KamikazeSootEnemyAnimations__StaticFields {
};

struct KamikazeSootEnemyAnimations__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemyAnimations__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemyAnimations__VTable vtable;
};

struct KamikazeSootEnemySettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KamikazeSootEnemySettings__StaticFields {
};

struct KamikazeSootEnemySettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemySettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemySettings__VTable vtable;
};

struct KamikazeSootEnemyAlertState__VTable {
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

struct KamikazeSootEnemyAlertState__StaticFields {
};

struct KamikazeSootEnemyAlertState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemyAlertState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemyAlertState__VTable vtable;
};

struct KamikazeSootEnemyState__VTable {
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

struct KamikazeSootEnemyState__StaticFields {
};

struct KamikazeSootEnemyState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemyState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemyState__VTable vtable;
};

struct KamikazeSootEnemyDropState__VTable {
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

struct KamikazeSootEnemyDropState__StaticFields {
};

struct KamikazeSootEnemyDropState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemyDropState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemyDropState__VTable vtable;
};

struct KamikazeSootEnemyIdleState__VTable {
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

struct KamikazeSootEnemyIdleState__StaticFields {
};

struct KamikazeSootEnemyIdleState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemyIdleState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemyIdleState__VTable vtable;
};

struct KamikazeSootEnemyRollingState__VTable {
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

struct KamikazeSootEnemyRollingState__StaticFields {
};

struct KamikazeSootEnemyRollingState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemyRollingState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemyRollingState__VTable vtable;
};

struct KamikazeSootEnemy_States__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KamikazeSootEnemy_States__StaticFields {
};

struct KamikazeSootEnemy_States__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemy_States__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemy_States__VTable vtable;
};

struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___VTable {
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

struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___StaticFields {
};

struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_3_UnityEngine_Vector3_Single_UnityEngine_Collider___VTable vtable;
};

struct RollingMovement__VTable {
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
};

struct RollingMovement__StaticFields {
};

struct RollingMovement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RollingMovement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RollingMovement__VTable vtable;
};

struct KamikazeSootEnemy__VTable {
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

struct KamikazeSootEnemy__StaticFields {
};

struct KamikazeSootEnemy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemy__VTable vtable;
};

struct KamikazeSootEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings *Settings;
    struct GameObject *Prefab;
};

struct KamikazeSootEnemyPlaceholder {
    struct KamikazeSootEnemyPlaceholder__Class *klass;
    MonitorData *monitor;
    struct KamikazeSootEnemyPlaceholder__Fields fields;
};

struct __declspec(align(8)) KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Fields {
    float Health;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings *LootSettings;
};

struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings {
    struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class *klass;
    MonitorData *monitor;
    struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Fields fields;
};

struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__StaticFields {
};

struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__VTable vtable;
};

struct KamikazeSootEnemyPlaceholder__VTable {
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

struct KamikazeSootEnemyPlaceholder__StaticFields {
};

struct KamikazeSootEnemyPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemyPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemyPlaceholder__VTable vtable;
};

struct KamikazeSootEnemyRunState__Fields {
    struct KamikazeSootEnemyState__Fields _;
};

struct KamikazeSootEnemyRunState {
    struct KamikazeSootEnemyRunState__Class *klass;
    MonitorData *monitor;
    struct KamikazeSootEnemyRunState__Fields fields;
};

struct KamikazeSootEnemyRunState__VTable {
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

struct KamikazeSootEnemyRunState__StaticFields {
};

struct KamikazeSootEnemyRunState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KamikazeSootEnemyRunState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KamikazeSootEnemyRunState__VTable vtable;
};

struct RammingEnemy__Fields {
    struct GroundEnemy__Fields _;
    struct RammingEnemyAnimations *Animations;
    struct RammingEnemySettings *Settings;
    struct RammingEnemySounds *Sounds;
    struct PrefabSpawner *HitWallEffect;
    struct Transform__Array *Zones;
    struct RammingEnemy_States *State;
    float IdleWaitTime;
};

struct RammingEnemy {
    struct RammingEnemy__Class *klass;
    MonitorData *monitor;
    struct RammingEnemy__Fields fields;
};

struct ArmouredRammingEnemy__Fields {
    struct RammingEnemy__Fields _;
    struct GameObject *RammingEnemy;
    struct Action_1_LegacyEntity_ *OnReplacedAction;
    struct PrefabSpawner *ShatterEffect;
};

struct ArmouredRammingEnemy {
    struct ArmouredRammingEnemy__Class *klass;
    MonitorData *monitor;
    struct ArmouredRammingEnemy__Fields fields;
};

struct __declspec(align(8)) RammingEnemyAnimations__Fields {
    struct TextureAnimationWithTransitions *Idle;
    struct TextureAnimationWithTransitions *Alert;
    struct TextureAnimationWithTransitions *Running;
    struct TextureAnimationWithTransitions *Stunned;
    struct TextureAnimationWithTransitions *Braking;
    struct TextureAnimationWithTransitions *Thrown;
    struct TextureAnimationWithTransitions *Retreat;
    struct TextureAnimationWithTransitions *HitWall;
    struct TextureAnimationWithTransitions *KnockBack;
};

struct RammingEnemyAnimations {
    struct RammingEnemyAnimations__Class *klass;
    MonitorData *monitor;
    struct RammingEnemyAnimations__Fields fields;
};

struct __declspec(align(8)) RammingEnemySettings__Fields {
    float AlertDuration;
    float StunnedDuration;
    float RunSpeed;
    float BrakingDuration;
    float AccelerationDuration;
    float AlertRange;
    float Gravity;
    float HitWallStunSpeed;
    float KnockBackSpeed;
    float BouncingDuration;
    float KnockBackDuration;
    float RecoverTime;
    float BashSpeed;
    float RetreatSpeed;
    float RetreatDistance;
    bool CanDieToLevelUpBlast;
    struct AnimationCurve *RunningSpeedMultipliedOverTime;
    struct AnimationCurve *BrakingSpeedMultiplierOverTime;
    struct AnimationCurve *BouncingSpeedMultiplierOverTime;
};

struct RammingEnemySettings {
    struct RammingEnemySettings__Class *klass;
    MonitorData *monitor;
    struct RammingEnemySettings__Fields fields;
};

struct __declspec(align(8)) RammingEnemySounds__Fields {
    struct SoundProvider *Alert;
    struct SoundProvider *Brake;
    struct SoundSource *Idle;
    struct SoundSource *Run;
    struct SoundProvider *HitSein;
    struct SoundProvider *Hurt;
    struct SoundProvider *Deflected;
    struct SoundProvider *Dash;
    struct SoundProvider *OnHitWall;
};

struct RammingEnemySounds {
    struct RammingEnemySounds__Class *klass;
    MonitorData *monitor;
    struct RammingEnemySounds__Fields fields;
};

struct __declspec(align(8)) RammingEnemy_States__Fields {
    struct RammingIdleState *Idle;
    struct RammingAlertState *Alert;
    struct RammingRunningState *Running;
    struct RammingBrakingState *Braking;
    struct RammingBrakingState *RetreatBraking;
    struct RammingHitWallState *HitWall;
    struct RammingStunnedState *Stunned;
    struct RammingKnockBackState *KnockBack;
    struct RammingRetreatState *Retreat;
};

struct RammingEnemy_States {
    struct RammingEnemy_States__Class *klass;
    MonitorData *monitor;
    struct RammingEnemy_States__Fields fields;
};

struct RammingEnemyState__Fields {
    struct GroundEnemyState__Fields _;
    struct RammingEnemy *RammingEnemy;
};

struct RammingEnemyState {
    struct RammingEnemyState__Class *klass;
    MonitorData *monitor;
    struct RammingEnemyState__Fields fields;
};

struct RammingIdleState__Fields {
    struct RammingEnemyState__Fields _;
};

struct RammingIdleState {
    struct RammingIdleState__Class *klass;
    MonitorData *monitor;
    struct RammingIdleState__Fields fields;
};

struct RammingAlertState__Fields {
    struct RammingEnemyState__Fields _;
};

struct RammingAlertState {
    struct RammingAlertState__Class *klass;
    MonitorData *monitor;
    struct RammingAlertState__Fields fields;
};

struct RammingRunningState__Fields {
    struct RammingEnemyState__Fields _;
};

struct RammingRunningState {
    struct RammingRunningState__Class *klass;
    MonitorData *monitor;
    struct RammingRunningState__Fields fields;
};

struct RammingBrakingState__Fields {
    struct RammingEnemyState__Fields _;
};

struct RammingBrakingState {
    struct RammingBrakingState__Class *klass;
    MonitorData *monitor;
    struct RammingBrakingState__Fields fields;
};

struct RammingHitWallState__Fields {
    struct RammingEnemyState__Fields _;
};

struct RammingHitWallState {
    struct RammingHitWallState__Class *klass;
    MonitorData *monitor;
    struct RammingHitWallState__Fields fields;
};

struct RammingStunnedState__Fields {
    struct RammingEnemyState__Fields _;
};

struct RammingStunnedState {
    struct RammingStunnedState__Class *klass;
    MonitorData *monitor;
    struct RammingStunnedState__Fields fields;
};

struct RammingKnockBackState__Fields {
    struct RammingEnemyState__Fields _;
};

struct RammingKnockBackState {
    struct RammingKnockBackState__Class *klass;
    MonitorData *monitor;
    struct RammingKnockBackState__Fields fields;
};

struct RammingRetreatState__Fields {
    struct RammingEnemyState__Fields _;
};

struct RammingRetreatState {
    struct RammingRetreatState__Class *klass;
    MonitorData *monitor;
    struct RammingRetreatState__Fields fields;
};

struct RammingEnemyAnimations__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RammingEnemyAnimations__StaticFields {
};

struct RammingEnemyAnimations__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingEnemyAnimations__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingEnemyAnimations__VTable vtable;
};

struct RammingEnemySettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RammingEnemySettings__StaticFields {
};

struct RammingEnemySettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingEnemySettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingEnemySettings__VTable vtable;
};

struct RammingEnemySounds__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RammingEnemySounds__StaticFields {
};

struct RammingEnemySounds__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingEnemySounds__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingEnemySounds__VTable vtable;
};

struct RammingAlertState__VTable {
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

struct RammingAlertState__StaticFields {
};

struct RammingAlertState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingAlertState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingAlertState__VTable vtable;
};

struct RammingEnemyState__VTable {
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

struct RammingEnemyState__StaticFields {
};

struct RammingEnemyState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingEnemyState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingEnemyState__VTable vtable;
};

struct RammingIdleState__VTable {
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

struct RammingIdleState__StaticFields {
};

struct RammingIdleState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingIdleState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingIdleState__VTable vtable;
};

struct RammingRunningState__VTable {
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

struct RammingRunningState__StaticFields {
};

struct RammingRunningState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingRunningState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingRunningState__VTable vtable;
};

struct RammingBrakingState__VTable {
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

struct RammingBrakingState__StaticFields {
};

struct RammingBrakingState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingBrakingState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingBrakingState__VTable vtable;
};

struct RammingHitWallState__VTable {
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

struct RammingHitWallState__StaticFields {
};

struct RammingHitWallState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingHitWallState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingHitWallState__VTable vtable;
};

struct RammingStunnedState__VTable {
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

struct RammingStunnedState__StaticFields {
};

struct RammingStunnedState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingStunnedState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingStunnedState__VTable vtable;
};

struct RammingKnockBackState__VTable {
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

struct RammingKnockBackState__StaticFields {
};

struct RammingKnockBackState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingKnockBackState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingKnockBackState__VTable vtable;
};

struct RammingRetreatState__VTable {
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

struct RammingRetreatState__StaticFields {
};

struct RammingRetreatState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingRetreatState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingRetreatState__VTable vtable;
};

struct RammingEnemy_States__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RammingEnemy_States__StaticFields {
};

struct RammingEnemy_States__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RammingEnemy_States__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RammingEnemy_States__VTable vtable;
};

struct RammingEnemy__VTable {
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
    VirtualInvokeData OnModifyDamage;
};

}
