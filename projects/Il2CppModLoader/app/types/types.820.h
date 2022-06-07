namespace app {
struct JumpShootShark__StaticFields {
    struct List_1_JumpShootShark_ *All;
};

struct JumpShootShark__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JumpShootShark__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JumpShootShark__VTable vtable;
};

enum class JumpShootSharkAction_ActionType__Enum : int32_t {
    Emerge = 0x00000000,
};

struct JumpShootSharkAction_ActionType__Enum__Boxed {
    struct JumpShootSharkAction_ActionType__Enum__Class *klass;
    MonitorData *monitor;
    JumpShootSharkAction_ActionType__Enum value;
    
};

struct JumpShootSharkAction__Fields {
    struct ActionMethod__Fields _;
    struct JumpShootSharkPlaceholder *JumpShootShark;
    JumpShootSharkAction_ActionType__Enum Action;
    
    struct Transform *Position;
};

struct JumpShootSharkAction {
    struct JumpShootSharkAction__Class *klass;
    MonitorData *monitor;
    struct JumpShootSharkAction__Fields fields;
};

struct JumpShootSharkPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings *Settings;
    struct GameObject *Prefab;
};

struct JumpShootSharkPlaceholder {
    struct JumpShootSharkPlaceholder__Class *klass;
    MonitorData *monitor;
    struct JumpShootSharkPlaceholder__Fields fields;
};

struct __declspec(align(8)) JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Fields {
    float Health;
    float DamageOnTouch;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings *LootSettings;
    float JumpHeight;
};

struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings {
    struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class *klass;
    MonitorData *monitor;
    struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Fields fields;
};

struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__StaticFields {
};

struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JumpShootSharkPlaceholder_JumpShootSharkPlaceholderSettings__VTable vtable;
};

struct JumpShootSharkPlaceholder__VTable {
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

struct JumpShootSharkPlaceholder__StaticFields {
};

struct JumpShootSharkPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JumpShootSharkPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JumpShootSharkPlaceholder__VTable vtable;
};

struct JumpShootSharkAction_ActionType__Enum__VTable {
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

struct JumpShootSharkAction_ActionType__Enum__StaticFields {
};

struct JumpShootSharkAction_ActionType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JumpShootSharkAction_ActionType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JumpShootSharkAction_ActionType__Enum__VTable vtable;
};

struct JumpShootSharkAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct JumpShootSharkAction__StaticFields {
};

struct JumpShootSharkAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JumpShootSharkAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JumpShootSharkAction__VTable vtable;
};

struct JumpShootSharkZone__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_JumpShootSharkPlaceholder_ *JumpShootSharkPlaceholders;
};

struct JumpShootSharkZone {
    struct JumpShootSharkZone__Class *klass;
    MonitorData *monitor;
    struct JumpShootSharkZone__Fields fields;
};

struct __declspec(align(8)) List_1_JumpShootSharkPlaceholder___Fields {
    struct JumpShootSharkPlaceholder__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_JumpShootSharkPlaceholder_ {
    struct List_1_JumpShootSharkPlaceholder___Class *klass;
    MonitorData *monitor;
    struct List_1_JumpShootSharkPlaceholder___Fields fields;
};

struct JumpShootSharkPlaceholder__Array {
    struct JumpShootSharkPlaceholder__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct JumpShootSharkPlaceholder *vector[32];
};

struct IEnumerator_1_JumpShootSharkPlaceholder_ {
    struct IEnumerator_1_JumpShootSharkPlaceholder___Class *klass;
    MonitorData *monitor;
};

struct JumpShootSharkPlaceholder__Array__VTable {
};

struct JumpShootSharkPlaceholder__Array__StaticFields {
};

struct JumpShootSharkPlaceholder__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JumpShootSharkPlaceholder__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JumpShootSharkPlaceholder__Array__VTable vtable;
};

struct IEnumerator_1_JumpShootSharkPlaceholder___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_JumpShootSharkPlaceholder___StaticFields {
};

struct IEnumerator_1_JumpShootSharkPlaceholder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_JumpShootSharkPlaceholder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_JumpShootSharkPlaceholder___VTable vtable;
};

struct List_1_JumpShootSharkPlaceholder___VTable {
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

struct List_1_JumpShootSharkPlaceholder___StaticFields {
    struct JumpShootSharkPlaceholder__Array *_emptyArray;
};

struct List_1_JumpShootSharkPlaceholder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_JumpShootSharkPlaceholder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_JumpShootSharkPlaceholder___VTable vtable;
};

struct JumpShootSharkZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct JumpShootSharkZone__StaticFields {
};

struct JumpShootSharkZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JumpShootSharkZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JumpShootSharkZone__VTable vtable;
};

struct __declspec(align(8)) SlugState__Fields {
    struct SlugEnemy *Slug;
};

struct SlugState {
    struct SlugState__Class *klass;
    MonitorData *monitor;
    struct SlugState__Fields fields;
};

struct AcidSlugState__Fields {
    struct SlugState__Fields _;
    struct AcidSlugEnemy *AcidSlugEnemy;
};

struct AcidSlugState {
    struct AcidSlugState__Class *klass;
    MonitorData *monitor;
    struct AcidSlugState__Fields fields;
};

struct AcidSlugCrawlingState__Fields {
    struct AcidSlugState__Fields _;
    float m_acidDripRemainingTime;
    float m_acidTrailMarkRemainingTime;
    struct SoundSource *Sound;
    struct SoundSource *moveSound;
};

struct AcidSlugCrawlingState {
    struct AcidSlugCrawlingState__Class *klass;
    MonitorData *monitor;
    struct AcidSlugCrawlingState__Fields fields;
};

struct SlugEnemy__Fields {
    struct Enemy2D__Fields _;
    struct TraceGroundMovement *Movement;
    struct AnimationCurve *AnimationFromBend;
};

struct SlugEnemy {
    struct SlugEnemy__Class *klass;
    MonitorData *monitor;
    struct SlugEnemy__Fields fields;
};

struct AcidSlugEnemy__Fields {
    struct SlugEnemy__Fields _;
    struct SoundSource *CrawlingSoundSource;
    struct SoundSource *ChargingSoundSource;
    struct SoundSource *ShootingSoundSource;
    struct SoundSource *MovingSoundSource;
    struct AcidSlugEnemyAnimations *Animations;
    struct AcidSlugEnemySettings *Settings;
    struct AcidSlugEnemy_States *State;
};

struct AcidSlugEnemy {
    struct AcidSlugEnemy__Class *klass;
    MonitorData *monitor;
    struct AcidSlugEnemy__Fields fields;
};

struct __declspec(align(8)) AcidSlugEnemyAnimations__Fields {
    struct TextureAnimationWithTransitions *Crawling;
    struct TextureAnimationWithTransitions *Charging;
    struct TextureAnimationWithTransitions *Shooting;
};

struct AcidSlugEnemyAnimations {
    struct AcidSlugEnemyAnimations__Class *klass;
    MonitorData *monitor;
    struct AcidSlugEnemyAnimations__Fields fields;
};

struct __declspec(align(8)) AcidSlugEnemySettings__Fields {
    float WalkSpeed;
    struct AnimationCurve *WalkSpeedMultiplier;
    float AcidDripRate;
    struct GameObject *AcidDrip;
    struct SoundProvider *AcidDripSoundProvider;
    struct GameObject *AcidDripOnDamage;
    float AcidProjectileSpeed;
    float AcidDamage;
    struct GameObject *ShootEffect;
};

struct AcidSlugEnemySettings {
    struct AcidSlugEnemySettings__Class *klass;
    MonitorData *monitor;
    struct AcidSlugEnemySettings__Fields fields;
};

struct __declspec(align(8)) AcidSlugEnemy_States__Fields {
    struct AcidSlugCrawlingState *Crawl;
    struct AcidSlugChargingState *Charging;
    struct AcidSlugShootingState *Shooting;
};

struct AcidSlugEnemy_States {
    struct AcidSlugEnemy_States__Class *klass;
    MonitorData *monitor;
    struct AcidSlugEnemy_States__Fields fields;
};

struct AcidSlugChargingState__Fields {
    struct AcidSlugState__Fields _;
};

struct AcidSlugChargingState {
    struct AcidSlugChargingState__Class *klass;
    MonitorData *monitor;
    struct AcidSlugChargingState__Fields fields;
};

struct AcidSlugShootingState__Fields {
    struct AcidSlugState__Fields _;
};

struct AcidSlugShootingState {
    struct AcidSlugShootingState__Class *klass;
    MonitorData *monitor;
    struct AcidSlugShootingState__Fields fields;
};

struct SlugEnemy__VTable {
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

struct SlugEnemy__StaticFields {
};

struct SlugEnemy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SlugEnemy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SlugEnemy__VTable vtable;
};

struct SlugState__VTable {
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

struct SlugState__StaticFields {
};

struct SlugState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SlugState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SlugState__VTable vtable;
};

struct AcidSlugEnemyAnimations__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AcidSlugEnemyAnimations__StaticFields {
};

struct AcidSlugEnemyAnimations__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcidSlugEnemyAnimations__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcidSlugEnemyAnimations__VTable vtable;
};

struct AcidSlugEnemySettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AcidSlugEnemySettings__StaticFields {
};

struct AcidSlugEnemySettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcidSlugEnemySettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcidSlugEnemySettings__VTable vtable;
};

struct AcidSlugChargingState__VTable {
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

struct AcidSlugChargingState__StaticFields {
};

struct AcidSlugChargingState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcidSlugChargingState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcidSlugChargingState__VTable vtable;
};

struct AcidSlugShootingState__VTable {
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

struct AcidSlugShootingState__StaticFields {
};

struct AcidSlugShootingState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcidSlugShootingState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcidSlugShootingState__VTable vtable;
};

struct AcidSlugEnemy_States__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AcidSlugEnemy_States__StaticFields {
};

struct AcidSlugEnemy_States__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcidSlugEnemy_States__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcidSlugEnemy_States__VTable vtable;
};

struct AcidSlugEnemy__VTable {
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

struct AcidSlugEnemy__StaticFields {
};

struct AcidSlugEnemy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcidSlugEnemy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcidSlugEnemy__VTable vtable;
};

struct AcidSlugState__VTable {
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

struct AcidSlugState__StaticFields {
};

struct AcidSlugState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcidSlugState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcidSlugState__VTable vtable;
};

struct AcidSlugCrawlingState__VTable {
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

struct AcidSlugCrawlingState__StaticFields {
};

struct AcidSlugCrawlingState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcidSlugCrawlingState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcidSlugCrawlingState__VTable vtable;
};

struct AcidSlugEnemy_c {
    struct AcidSlugEnemy_c__Class *klass;
    MonitorData *monitor;
};

struct AcidSlugEnemy_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AcidSlugEnemy_c__StaticFields {
    struct AcidSlugEnemy_c *__9;
    struct Func_1_Boolean_ *__9__10_1;
};

struct AcidSlugEnemy_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcidSlugEnemy_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcidSlugEnemy_c__VTable vtable;
};

struct AcidSlugEnemyPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings *Settings;
    struct GameObject *AcidSlugEnemy;
};

struct AcidSlugEnemyPlaceholder {
    struct AcidSlugEnemyPlaceholder__Class *klass;
    MonitorData *monitor;
    struct AcidSlugEnemyPlaceholder__Fields fields;
};

struct __declspec(align(8)) AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Fields {
    float Health;
    float DamageOnTouch;
    int32_t NumberOfExpOrbsToDrop;
    float WalkSpeed;
    struct DropLootSettings *LootSettings;
    float AcidDripRate;
};

struct AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings {
    struct AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class *klass;
    MonitorData *monitor;
    struct AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Fields fields;
};

struct AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__StaticFields {
};

struct AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcidSlugEnemyPlaceholder_AcidSlugEnemyPlaceholderSettings__VTable vtable;
};

struct AcidSlugEnemyPlaceholder__VTable {
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

struct AcidSlugEnemyPlaceholder__StaticFields {
};

struct AcidSlugEnemyPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AcidSlugEnemyPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AcidSlugEnemyPlaceholder__VTable vtable;
};

struct SlugController__Fields {
    struct EntityControllerSM__Fields _;
};

struct SlugController {
    struct SlugController__Class *klass;
    MonitorData *monitor;
    struct SlugController__Fields fields;
};

struct SlugController__VTable {
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
    VirtualInvokeData OnNearSeinEnter;
    VirtualInvokeData OnNearSeinExit;
    VirtualInvokeData OnSeinNearStay;
    VirtualInvokeData OnAnimationEnd;
    VirtualInvokeData OnRecieveDamage_1;
    VirtualInvokeData OnSpiritLeached;
};

struct SlugController__StaticFields {
};

struct SlugController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SlugController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SlugController__VTable vtable;
};

struct SlugDamageReciever__Fields {
    struct LegacyEntityDamageReciever__Fields _;
};

struct SlugDamageReciever {
    struct SlugDamageReciever__Class *klass;
    MonitorData *monitor;
    struct SlugDamageReciever__Fields fields;
};

struct SlugDamageReciever__VTable {
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

struct SlugDamageReciever__StaticFields {
};

struct SlugDamageReciever__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SlugDamageReciever__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SlugDamageReciever__VTable vtable;
};

struct __declspec(align(8)) SlugDirectionalAnimation__Fields {
    struct TextureAnimationWithTransitions *Upright;
    struct TextureAnimationWithTransitions *UpsideDown;
    struct TextureAnimationWithTransitions *VerticalUp;
    struct TextureAnimationWithTransitions *VerticalDown;
};

struct SlugDirectionalAnimation {
    struct SlugDirectionalAnimation__Class *klass;
    MonitorData *monitor;
    struct SlugDirectionalAnimation__Fields fields;
};

struct SlugDirectionalAnimation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SlugDirectionalAnimation__StaticFields {
};

struct SlugDirectionalAnimation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SlugDirectionalAnimation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SlugDirectionalAnimation__VTable vtable;
};

struct __declspec(align(8)) SlugDirectionalAnimationPicker__Fields {
    struct SlugDirectionalAnimation *Animation;
    struct Vector3 m_lastDirection;
};

struct SlugDirectionalAnimationPicker {
    struct SlugDirectionalAnimationPicker__Class *klass;
    MonitorData *monitor;
    struct SlugDirectionalAnimationPicker__Fields fields;
};

struct SlugDirectionalAnimationPicker__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SlugDirectionalAnimationPicker__StaticFields {
};

struct SlugDirectionalAnimationPicker__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SlugDirectionalAnimationPicker__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SlugDirectionalAnimationPicker__VTable vtable;
};

struct SpikeProjectile__Fields {
    struct Projectile__Fields _;
    struct AnimationCurve *SpeedOverTimeCurve;
    float m_backupMaximumLiveTime;
};

struct SpikeProjectile {
    struct SpikeProjectile__Class *klass;
    MonitorData *monitor;
    struct SpikeProjectile__Fields fields;
};

struct SpikeProjectile__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
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
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_BashPriority;
    VirtualInvokeData OnEnterBash;
    VirtualInvokeData OnBashHighlight;
    VirtualInvokeData OnBashDehighlight;
    VirtualInvokeData CountsTowardsPowerOfLightAchievement;
    VirtualInvokeData IDamageReciever_get_gameObject;
    VirtualInvokeData IDamageReciever_get_transform;
    VirtualInvokeData OnRecieveDamage;
    VirtualInvokeData get_Direction;
    VirtualInvokeData set_Direction;
    VirtualInvokeData get_Speed;
    VirtualInvokeData set_Speed;
    VirtualInvokeData get_LastReflector;
    VirtualInvokeData set_LastReflector;
    VirtualInvokeData CanBeReflected;
    VirtualInvokeData OnGrabbed;
    VirtualInvokeData OnReleased;
    VirtualInvokeData OnReflected;
    VirtualInvokeData get_Position_1;
    VirtualInvokeData set_Position;
    VirtualInvokeData IPortalVisitor_get_Speed;
    VirtualInvokeData IPortalVisitor_set_Speed;
    VirtualInvokeData OnGoThroughPortal;
    VirtualInvokeData OnPortalOverlapEnter;
    VirtualInvokeData OnPortalOverlapExit;
    VirtualInvokeData CountsTowardsSuperJumpAchievement;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_HeavySpiritSlashPriority;
    VirtualInvokeData OnHeavySpiritSlashHighlight;
    VirtualInvokeData OnHeavySpiritSlashDehighlight;
    VirtualInvokeData get_HammerPriority;
    VirtualInvokeData get_HammerEnableAutoTarget;
    VirtualInvokeData get_TrackTranformChangesForRecording;
    VirtualInvokeData get_TrackingExclusions;
    VirtualInvokeData get_ParsingGroup;
    VirtualInvokeData OnBeforeTeleportation;
    VirtualInvokeData Teleport;
    VirtualInvokeData OnAfterTeleportation;
    VirtualInvokeData ITeleportBeaconAttackable_get_Position;
    VirtualInvokeData get_CanGoThroughPortals;
    VirtualInvokeData CanBeBashed_1;
    VirtualInvokeData OnRecieveDamage_1;
    VirtualInvokeData OnBashed;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnPoolDespawned_1;
    VirtualInvokeData OnGoThroughPortal_1;
    VirtualInvokeData Awake;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnDamageDealt;
    VirtualInvokeData FixedUpdate;
    VirtualInvokeData OnBeforeExplodeOnWater;
    VirtualInvokeData Launch;
    VirtualInvokeData ExplodeProjectile;
    VirtualInvokeData OnRicochet;
    VirtualInvokeData OnCollisionEnter;
    VirtualInvokeData UpdateVelocity;
    VirtualInvokeData HandleGravity;
};

}
