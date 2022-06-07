namespace app {
struct KwolokBossUnderwaterPullBehaviour_State__Enum__StaticFields {
};

struct KwolokBossUnderwaterPullBehaviour_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossUnderwaterPullBehaviour_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossUnderwaterPullBehaviour_State__Enum__VTable vtable;
};

struct KwolokBossUnderwaterPullBehaviour__VTable {
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
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData IsLocomotionStayAtRangeAllowed;
    VirtualInvokeData ModifyPostAttackCooldown;
    VirtualInvokeData ModifyMaxLookAtWeights;
    VirtualInvokeData GetEntries;
    VirtualInvokeData Evaluate;
    VirtualInvokeData get_ShouldSkip;
};

struct KwolokBossUnderwaterPullBehaviour__StaticFields {
};

struct KwolokBossUnderwaterPullBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossUnderwaterPullBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossUnderwaterPullBehaviour__VTable vtable;
};

enum class KwolokBossWormSpitBehaviour_State__Enum : int32_t {
    Invalid = 0x00000000,
    Positioning = 0x00000001,
    Spiting = 0x00000002,
    Done = 0x00000003,
};

struct KwolokBossWormSpitBehaviour_State__Enum__Boxed {
    struct KwolokBossWormSpitBehaviour_State__Enum__Class *klass;
    MonitorData *monitor;
    KwolokBossWormSpitBehaviour_State__Enum value;
    
};

enum class KwolokBossWormSpitBehaviour_Direction__Enum : int32_t {
    None = -1,
    Mid = 0x00000000,
    Left = 0x00000001,
    Right = 0x00000002,
    Count = 0x00000003,
};

struct KwolokBossWormSpitBehaviour_Direction__Enum__Boxed {
    struct KwolokBossWormSpitBehaviour_Direction__Enum__Class *klass;
    MonitorData *monitor;
    KwolokBossWormSpitBehaviour_Direction__Enum value;
    
};

struct KwolokBossWormSpitBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline *Timeline;
    struct AnimationPlayer *KwolokAnimationPlayer;
    struct MoonAnimation *SpitMid;
    struct MoonAnimation *SpitLeft;
    struct MoonAnimation *SpitRight;
    struct Transform *SpawnPoint;
    struct GameObject *WormPrefab;
    struct EventTriggerAnimator *SpawnTrigger;
    int32_t NumberOfWorms;
    float DelayToEnableCollisionWithKwolok;
    float SpitSpeed;
    float SpitLeftLimit;
    float SpitRightLimit;
    struct AnimationCurve *SpawnSpeedCurve;
    float ChaseTurnSpeed;
    float MoveSpeed;
    float Acceleration;
    KwolokBossWormSpitBehaviour_State__Enum m_currentState;
    
    struct KwolokBossLocomotion_MoveRequest *m_moveRequest;
    struct List_1_KwolokBossWormSpitBehaviour_WormInfo_ *m_spawnedWorms;
    int32_t m_spawnedWormCount;
    KwolokBossWormSpitBehaviour_Direction__Enum m_currentDirection;
    
    float AngleOffsetForSideSpits;
};

struct KwolokBossWormSpitBehaviour {
    struct KwolokBossWormSpitBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossWormSpitBehaviour__Fields fields;
};

struct __declspec(align(8)) List_1_KwolokBossWormSpitBehaviour_WormInfo___Fields {
    struct KwolokBossWormSpitBehaviour_WormInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_KwolokBossWormSpitBehaviour_WormInfo_ {
    struct List_1_KwolokBossWormSpitBehaviour_WormInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_KwolokBossWormSpitBehaviour_WormInfo___Fields fields;
};

struct __declspec(align(8)) KwolokBossWormSpitBehaviour_WormInfo__Fields {
    struct GameObject *Instance;
    struct Collider__Array *Colliders;
    bool CollisionEnabled;
    float Timer;
};

struct KwolokBossWormSpitBehaviour_WormInfo {
    struct KwolokBossWormSpitBehaviour_WormInfo__Class *klass;
    MonitorData *monitor;
    struct KwolokBossWormSpitBehaviour_WormInfo__Fields fields;
};

struct KwolokBossWormSpitBehaviour_WormInfo__Array {
    struct KwolokBossWormSpitBehaviour_WormInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KwolokBossWormSpitBehaviour_WormInfo *vector[32];
};

struct IEnumerator_1_KwolokBossWormSpitBehaviour_WormInfo_ {
    struct IEnumerator_1_KwolokBossWormSpitBehaviour_WormInfo___Class *klass;
    MonitorData *monitor;
};

struct KwolokBossWormSpitBehaviour_State__Enum__VTable {
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

struct KwolokBossWormSpitBehaviour_State__Enum__StaticFields {
};

struct KwolokBossWormSpitBehaviour_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossWormSpitBehaviour_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossWormSpitBehaviour_State__Enum__VTable vtable;
};

struct KwolokBossWormSpitBehaviour_WormInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KwolokBossWormSpitBehaviour_WormInfo__StaticFields {
};

struct KwolokBossWormSpitBehaviour_WormInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossWormSpitBehaviour_WormInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossWormSpitBehaviour_WormInfo__VTable vtable;
};

struct KwolokBossWormSpitBehaviour_WormInfo__Array__VTable {
};

struct KwolokBossWormSpitBehaviour_WormInfo__Array__StaticFields {
};

struct KwolokBossWormSpitBehaviour_WormInfo__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossWormSpitBehaviour_WormInfo__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossWormSpitBehaviour_WormInfo__Array__VTable vtable;
};

struct IEnumerator_1_KwolokBossWormSpitBehaviour_WormInfo___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KwolokBossWormSpitBehaviour_WormInfo___StaticFields {
};

struct IEnumerator_1_KwolokBossWormSpitBehaviour_WormInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KwolokBossWormSpitBehaviour_WormInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KwolokBossWormSpitBehaviour_WormInfo___VTable vtable;
};

struct List_1_KwolokBossWormSpitBehaviour_WormInfo___VTable {
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

struct List_1_KwolokBossWormSpitBehaviour_WormInfo___StaticFields {
    struct KwolokBossWormSpitBehaviour_WormInfo__Array *_emptyArray;
};

struct List_1_KwolokBossWormSpitBehaviour_WormInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_KwolokBossWormSpitBehaviour_WormInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_KwolokBossWormSpitBehaviour_WormInfo___VTable vtable;
};

struct KwolokBossWormSpitBehaviour_Direction__Enum__VTable {
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

struct KwolokBossWormSpitBehaviour_Direction__Enum__StaticFields {
};

struct KwolokBossWormSpitBehaviour_Direction__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossWormSpitBehaviour_Direction__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossWormSpitBehaviour_Direction__Enum__VTable vtable;
};

struct KwolokBossWormSpitBehaviour__VTable {
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
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData IsLocomotionStayAtRangeAllowed;
    VirtualInvokeData ModifyPostAttackCooldown;
    VirtualInvokeData ModifyMaxLookAtWeights;
};

struct KwolokBossWormSpitBehaviour__StaticFields {
};

struct KwolokBossWormSpitBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossWormSpitBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossWormSpitBehaviour__VTable vtable;
};

struct KwolokChase__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedByteUberState *KwolokState;
    struct Transform *DistanceToPlayerPoint;
    struct AnimationCurve *SpeedMultiplier;
    struct MoonTimeline *ChaseTimeline;
    struct PositionAnimatorEntity *PositionAnimatorEntity;
    bool Boolean;
};

struct KwolokChase {
    struct KwolokChase__Class *klass;
    MonitorData *monitor;
    struct KwolokChase__Fields fields;
};

struct KwolokChase__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
};

struct KwolokChase__StaticFields {
};

struct KwolokChase__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokChase__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokChase__VTable vtable;
};

struct KwolokProjectOnZ__Fields {
    struct MonoBehaviour__Fields _;
    float FixedZPosition;
    bool RewritePosition;
    bool RewriteRotation;
    bool RewriteScale;
    struct Transform *TransformToFollow;
    struct Transform *m_TempTransform;
};

struct KwolokProjectOnZ {
    struct KwolokProjectOnZ__Class *klass;
    MonitorData *monitor;
    struct KwolokProjectOnZ__Fields fields;
};

struct KwolokProjectOnZ__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KwolokProjectOnZ__StaticFields {
};

struct KwolokProjectOnZ__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokProjectOnZ__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokProjectOnZ__VTable vtable;
};

struct KwolokTempLegStretch__Fields {
    struct MonoBehaviour__Fields _;
    bool changeB;
    float Scale;
    struct Transform *PointA;
    struct Transform *PointB;
};

struct KwolokTempLegStretch {
    struct KwolokTempLegStretch__Class *klass;
    MonitorData *monitor;
    struct KwolokTempLegStretch__Fields fields;
};

struct KwolokTempLegStretch__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KwolokTempLegStretch__StaticFields {
};

struct KwolokTempLegStretch__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokTempLegStretch__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokTempLegStretch__VTable vtable;
};

enum class RubberBandedValueProvider_DistanceMeasureMode__Enum : int32_t {
    XY = 0x00000000,
    X = 0x00000001,
    Y = 0x00000002,
};

struct RubberBandedValueProvider_DistanceMeasureMode__Enum__Boxed {
    struct RubberBandedValueProvider_DistanceMeasureMode__Enum__Class *klass;
    MonitorData *monitor;
    RubberBandedValueProvider_DistanceMeasureMode__Enum value;
    
};

struct __declspec(align(8)) RubberBandedValueProvider__Fields {
    RubberBandedValueProvider_DistanceMeasureMode__Enum DistanceMode;
    
    float MinDistance;
    float SweetSpotDistance;
    float MaxDistance;
    float MinMultiplier;
    float MaxMultiplier;
    struct AnimationCurve *MaxMuliplierPerNormalizedDistance;
    struct AnimationCurve *MinMultiplierPerNormalizedDistance;
    bool AffectedByGameModeDifficulty;
    bool OverrideEasyMultiplier;
    float OverrideEasyMultiplierValue;
    bool OverrideNormalMultiplier;
    float OverrideNormalMultiplierValue;
    bool OverrideHardMultiplier;
    float OverrideHardMultiplierValue;
};

struct RubberBandedValueProvider {
    struct RubberBandedValueProvider__Class *klass;
    MonitorData *monitor;
    struct RubberBandedValueProvider__Fields fields;
};

struct RubberBandedValueProvider_DistanceMeasureMode__Enum__VTable {
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

struct RubberBandedValueProvider_DistanceMeasureMode__Enum__StaticFields {
};

struct RubberBandedValueProvider_DistanceMeasureMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RubberBandedValueProvider_DistanceMeasureMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RubberBandedValueProvider_DistanceMeasureMode__Enum__VTable vtable;
};

struct RubberBandedValueProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RubberBandedValueProvider__StaticFields {
};

struct RubberBandedValueProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RubberBandedValueProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RubberBandedValueProvider__VTable vtable;
};

struct __declspec(align(8)) TriggerBasedRubberBanding__Fields {
    struct RubberBandedValueProvider *RubberBanding;
    struct List_1_Moon_Timeline_EventTriggerAnimator_ *ActivationTriggers;
};

struct TriggerBasedRubberBanding {
    struct TriggerBasedRubberBanding__Class *klass;
    MonitorData *monitor;
    struct TriggerBasedRubberBanding__Fields fields;
};

struct TriggerBasedRubberBanding__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TriggerBasedRubberBanding__StaticFields {
};

struct TriggerBasedRubberBanding__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerBasedRubberBanding__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerBasedRubberBanding__VTable vtable;
};

struct __declspec(align(8)) TriggerBasedRubberBandingSet__Fields {
    struct List_1_TriggerBasedRubberBanding_ *RubberBandings;
};

struct TriggerBasedRubberBandingSet {
    struct TriggerBasedRubberBandingSet__Class *klass;
    MonitorData *monitor;
    struct TriggerBasedRubberBandingSet__Fields fields;
};

struct __declspec(align(8)) List_1_TriggerBasedRubberBanding___Fields {
    struct TriggerBasedRubberBanding__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_TriggerBasedRubberBanding_ {
    struct List_1_TriggerBasedRubberBanding___Class *klass;
    MonitorData *monitor;
    struct List_1_TriggerBasedRubberBanding___Fields fields;
};

struct TriggerBasedRubberBanding__Array {
    struct TriggerBasedRubberBanding__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct TriggerBasedRubberBanding *vector[32];
};

struct IEnumerator_1_TriggerBasedRubberBanding_ {
    struct IEnumerator_1_TriggerBasedRubberBanding___Class *klass;
    MonitorData *monitor;
};

struct TriggerBasedRubberBanding__Array__VTable {
};

struct TriggerBasedRubberBanding__Array__StaticFields {
};

struct TriggerBasedRubberBanding__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerBasedRubberBanding__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerBasedRubberBanding__Array__VTable vtable;
};

struct IEnumerator_1_TriggerBasedRubberBanding___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_TriggerBasedRubberBanding___StaticFields {
};

struct IEnumerator_1_TriggerBasedRubberBanding___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_TriggerBasedRubberBanding___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_TriggerBasedRubberBanding___VTable vtable;
};

struct List_1_TriggerBasedRubberBanding___VTable {
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

struct List_1_TriggerBasedRubberBanding___StaticFields {
    struct TriggerBasedRubberBanding__Array *_emptyArray;
};

struct List_1_TriggerBasedRubberBanding___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_TriggerBasedRubberBanding___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_TriggerBasedRubberBanding___VTable vtable;
};

struct TriggerBasedRubberBandingSet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TriggerBasedRubberBandingSet__StaticFields {
};

struct TriggerBasedRubberBandingSet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerBasedRubberBandingSet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerBasedRubberBandingSet__VTable vtable;
};

struct EntityBehaviourNode_1_LaserShooterEntity___Fields {
    struct EntityBehaviourNode__Fields _;
};

struct EntityBehaviourNode_1_LaserShooterEntity_ {
    struct EntityBehaviourNode_1_LaserShooterEntity___Class *klass;
    MonitorData *monitor;
    struct EntityBehaviourNode_1_LaserShooterEntity___Fields fields;
};

enum class LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum : int32_t {
    Invalid = 0x00000000,
    Antic = 0x00000001,
    BeamAttack = 0x00000002,
    Resolve = 0x00000003,
};

struct LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__Boxed {
    struct LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__Class *klass;
    MonitorData *monitor;
    LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum value;
    
};

struct LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields {
    struct EntityBehaviourNode_1_LaserShooterEntity___Fields _;
    struct Transform *Rotation;
    struct MoonTimeline *AnticTimeline;
    struct MoonTimeline *BeamTimeline;
    struct MoonTimeline *ResolveTimeline;
    struct GameObject *Beam;
    int32_t BeamCycles;
    struct MoonFloat *MaxAttackRange;
    struct Quaternion m_targetRotation;
    float m_maxAttackRange;
    struct MoonTimeline *m_currentTimeline;
    LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum m_state;
    
    float m_timeInState;
    int32_t m_cyclesPlayed;
};

struct LaserShooterBeamAttackWithCycleRepetitionBehaviour {
    struct LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class *klass;
    MonitorData *monitor;
    struct LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields fields;
};

struct EntityBehaviourNode_1_LaserShooterEntity___VTable {
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

struct EntityBehaviourNode_1_LaserShooterEntity___StaticFields {
};

struct EntityBehaviourNode_1_LaserShooterEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityBehaviourNode_1_LaserShooterEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityBehaviourNode_1_LaserShooterEntity___VTable vtable;
};

struct LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__VTable {
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

struct LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__StaticFields {
};

struct LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__VTable vtable;
};

struct LaserShooterBeamAttackWithCycleRepetitionBehaviour__VTable {
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

struct LaserShooterBeamAttackWithCycleRepetitionBehaviour__StaticFields {
};

struct LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LaserShooterBeamAttackWithCycleRepetitionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LaserShooterBeamAttackWithCycleRepetitionBehaviour__VTable vtable;
};

struct LaserShooterDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline *DeathTimeline;
    struct DeathStartEffectSpawnSetting *DeathStartEffect;
    struct MoonTimeline *m_currentTimeline;
};

struct LaserShooterDeathReactionBehaviour {
    struct LaserShooterDeathReactionBehaviour__Class *klass;
    MonitorData *monitor;
    struct LaserShooterDeathReactionBehaviour__Fields fields;
};

struct LaserShooterDeathReactionBehaviour__VTable {
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

}
