namespace app {
struct BoidSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BoidSettings__StaticFields {
};

struct BoidSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BoidSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BoidSettings__VTable vtable;
};

struct Boid__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Boid__StaticFields {
    struct List_1_Boid_ *All;
};

struct Boid__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Boid__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Boid__VTable vtable;
};

enum class Shift__Enum : int32_t {
    up = 0x00000000,
    down = 0x00000001,
};

struct Shift__Enum__Boxed {
    struct Shift__Enum__Class *klass;
    MonitorData *monitor;
    Shift__Enum value;
    
};

struct CameraBasedColliderChain__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform__Array *centerPoints;
    struct Transform__Array *colliders;
    struct Vector3__Array *positions;
    float colliderThickness;
    float colliderDepth;
    Shift__Enum direction;
    
    struct Vector3 colliderShiftVector;
};

struct CameraBasedColliderChain {
    struct CameraBasedColliderChain__Class *klass;
    MonitorData *monitor;
    struct CameraBasedColliderChain__Fields fields;
};

struct Shift__Enum__VTable {
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

struct Shift__Enum__StaticFields {
};

struct Shift__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Shift__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Shift__Enum__VTable vtable;
};

struct CameraBasedColliderChain__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CameraBasedColliderChain__StaticFields {
};

struct CameraBasedColliderChain__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CameraBasedColliderChain__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CameraBasedColliderChain__VTable vtable;
};

struct RaycastHit__1__VTable {
};

struct RaycastHit__1__StaticFields {
};

struct RaycastHit__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaycastHit__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaycastHit__1__VTable vtable;
};

struct Enemy__Fields {
    struct LegacyEntity__Fields _;
};

struct Enemy {
    struct Enemy__Class *klass;
    MonitorData *monitor;
    struct Enemy__Fields fields;
};

struct Enemy__VTable {
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

struct Enemy__StaticFields {
};

struct Enemy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Enemy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Enemy__VTable vtable;
};

struct CartBashPush__Fields {
    struct MonoBehaviour__Fields _;
    struct Cart *Cart;
};

struct CartBashPush {
    struct CartBashPush__Class *klass;
    MonitorData *monitor;
    struct CartBashPush__Fields fields;
};

struct CartBashPush__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_BashPriority;
    VirtualInvokeData OnEnterBash;
    VirtualInvokeData OnBashHighlight;
    VirtualInvokeData OnBashDehighlight;
};

struct CartBashPush__StaticFields {
};

struct CartBashPush__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartBashPush__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartBashPush__VTable vtable;
};

struct CartController_c {
    struct CartController_c__Class *klass;
    MonitorData *monitor;
};

struct CartController_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CartController_c__StaticFields {
    struct CartController_c *__9;
    struct Action *__9__66_0;
};

struct CartController_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartController_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartController_c__VTable vtable;
};

struct CartDashValueProvider__Fields {
    struct FloatValueProvider__Fields _;
    struct CartBoost *CartBoost;
};

struct CartDashValueProvider {
    struct CartDashValueProvider__Class *klass;
    MonitorData *monitor;
    struct CartDashValueProvider__Fields fields;
};

struct CartDashValueProvider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetFloatValue;
};

struct CartDashValueProvider__StaticFields {
};

struct CartDashValueProvider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartDashValueProvider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartDashValueProvider__VTable vtable;
};

struct CartEnter__Fields {
    struct MonoBehaviour__Fields _;
    struct Cart *Cart;
    struct MoonTimeline *EnterCarrySequence;
};

struct CartEnter {
    struct CartEnter__Class *klass;
    MonitorData *monitor;
    struct CartEnter__Fields fields;
};

struct CartEnter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CartEnter__StaticFields {
};

struct CartEnter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartEnter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartEnter__VTable vtable;
};

struct RespawningPlaceholder__Fields {
    struct MonoBehaviour__Fields _;
    bool RespawnOnTimeout;
    bool RespawnOnScreen;
    float RespawnTime;
    float MinDistanceFromPlayer;
    bool DestroyCurrentOnDeath;
    bool m_isKilled;
    float m_respawnTime;
    bool m_needsToRespawn;
    struct Transform *m_transform;
    struct MoonGuid *m_sceneRootGUID;
    struct Action_1_Damage_ *OnCurrentInstanceDeath;
    bool WasTimedRespawn;
    float m_enableTime;
    struct LegacyEntity *m_currentEntity;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct RespawningPlaceholder {
    struct RespawningPlaceholder__Class *klass;
    MonitorData *monitor;
    struct RespawningPlaceholder__Fields fields;
};

struct CartPlaceholder__Fields {
    struct RespawningPlaceholder__Fields _;
    struct CartPlaceholder_CartPlaceholderSettings *Settings;
    struct GameObject *CartObject;
    struct GameObject *SpawnEffect;
    struct LayerMask CartLayer;
    bool startEmpty;
    struct Renderer *m_renderer;
    struct Collider__Array *m_colliderCheck;
    struct Cart *m_activeCart;
    struct CartSet *m_mySet;
};

struct CartPlaceholder {
    struct CartPlaceholder__Class *klass;
    MonitorData *monitor;
    struct CartPlaceholder__Fields fields;
};

struct __declspec(align(8)) List_1_RespawningPlaceholder___Fields {
    struct RespawningPlaceholder__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_RespawningPlaceholder_ {
    struct List_1_RespawningPlaceholder___Class *klass;
    MonitorData *monitor;
    struct List_1_RespawningPlaceholder___Fields fields;
};

struct RespawningPlaceholder__Array {
    struct RespawningPlaceholder__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct RespawningPlaceholder *vector[32];
};

struct IEnumerator_1_RespawningPlaceholder_ {
    struct IEnumerator_1_RespawningPlaceholder___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) CartPlaceholder_CartPlaceholderSettings__Fields {
    float MaxEnterDistance;
    float FlipDistance;
    float MaxSpeed;
    float Acceleration;
    float Decceleration;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet *SlopeDownMaxMultiplier;
    float SlopeDownMaxAngle;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet *SlopeUpMaxMultiplier;
    float SlopeUpMaxAngle;
};

struct CartPlaceholder_CartPlaceholderSettings {
    struct CartPlaceholder_CartPlaceholderSettings__Class *klass;
    MonitorData *monitor;
    struct CartPlaceholder_CartPlaceholderSettings__Fields fields;
};

struct CartSet__Fields {
    struct MonoBehaviour__Fields _;
    struct CartPlaceholder__Array *m_cartPlaceholders;
    bool _IsSpawningLocked_k__BackingField;
};

struct CartSet {
    struct CartSet__Class *klass;
    MonitorData *monitor;
    struct CartSet__Fields fields;
};

struct CartPlaceholder__Array {
    struct CartPlaceholder__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CartPlaceholder *vector[32];
};

struct RespawningPlaceholder__Array__VTable {
};

struct RespawningPlaceholder__Array__StaticFields {
};

struct RespawningPlaceholder__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RespawningPlaceholder__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RespawningPlaceholder__Array__VTable vtable;
};

struct IEnumerator_1_RespawningPlaceholder___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_RespawningPlaceholder___StaticFields {
};

struct IEnumerator_1_RespawningPlaceholder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_RespawningPlaceholder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_RespawningPlaceholder___VTable vtable;
};

struct List_1_RespawningPlaceholder___VTable {
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

struct List_1_RespawningPlaceholder___StaticFields {
    struct RespawningPlaceholder__Array *_emptyArray;
};

struct List_1_RespawningPlaceholder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_RespawningPlaceholder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_RespawningPlaceholder___VTable vtable;
};

struct RespawningPlaceholder__VTable {
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
    VirtualInvokeData __unknown;
};

struct RespawningPlaceholder__StaticFields {
    struct List_1_RespawningPlaceholder_ *All;
};

struct RespawningPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RespawningPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RespawningPlaceholder__VTable vtable;
};

struct CartPlaceholder_CartPlaceholderSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CartPlaceholder_CartPlaceholderSettings__StaticFields {
};

struct CartPlaceholder_CartPlaceholderSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartPlaceholder_CartPlaceholderSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartPlaceholder_CartPlaceholderSettings__VTable vtable;
};

struct CartPlaceholder__Array__VTable {
};

struct CartPlaceholder__Array__StaticFields {
};

struct CartPlaceholder__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartPlaceholder__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartPlaceholder__Array__VTable vtable;
};

struct CartSet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CartSet__StaticFields {
};

struct CartSet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartSet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartSet__VTable vtable;
};

struct CartPlaceholder__VTable {
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

struct CartPlaceholder__StaticFields {
};

struct CartPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartPlaceholder__VTable vtable;
};

struct CartSparkEffect__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_GameObject_ *Lights;
    struct ParticleSystem *Sparks;
    struct AnimationCurve *Noise;
    float MaxSampleSpeed;
    float AccelerationForceToSparks;
    float MinSparkInterval;
    struct GameObject *EletricityFX;
    struct Transform *EletricityAnchor;
    float TrailDeactivationDelay;
    struct GameObject *m_eletricityFxInstance;
    struct MoonTrail__Array *m_trails;
    struct CartPlatformMovement *m_cartMov;
    struct Cart *m_cart;
    float m_sampleTimer;
    float noise;
    bool m_wasOn;
    bool m_forceSparks;
    float m_oldSpeed;
    float m_cartAcceleration;
    float m_emisionTimer;
    bool m_trailsActive;
    float m_offRailTime;
};

struct CartSparkEffect {
    struct CartSparkEffect__Class *klass;
    MonitorData *monitor;
    struct CartSparkEffect__Fields fields;
};

struct CartSparkEffect__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CartSparkEffect__StaticFields {
};

struct CartSparkEffect__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartSparkEffect__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartSparkEffect__VTable vtable;
};

struct CartStopper___VTable {
};

struct CartStopper___StaticFields {
};

struct CartStopper___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartStopper___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartStopper___VTable vtable;
};

struct LaunchCartFromStopperAction__Fields {
    struct ActionMethod__Fields _;
    struct CartStopper *CartStopper;
};

struct LaunchCartFromStopperAction {
    struct LaunchCartFromStopperAction__Class *klass;
    MonitorData *monitor;
    struct LaunchCartFromStopperAction__Fields fields;
};

struct LaunchCartFromStopperAction__VTable {
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

struct LaunchCartFromStopperAction__StaticFields {
};

struct LaunchCartFromStopperAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LaunchCartFromStopperAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LaunchCartFromStopperAction__VTable vtable;
};

struct SeinRidePuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct FloatAnimationParameter *FallSpeed;
};

struct SeinRidePuppet {
    struct SeinRidePuppet__Class *klass;
    MonitorData *monitor;
    struct SeinRidePuppet__Fields fields;
};

struct SeinRidePuppet__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_Id;
    VirtualInvokeData get_UniqueRecordingId;
    VirtualInvokeData get_IsRecording;
    VirtualInvokeData OnInitializeGhostRecorder;
    VirtualInvokeData OnFinishedRecording;
    VirtualInvokeData OnFinishedPlayback;
    VirtualInvokeData OnPerform;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData OnPoolDespawned_1;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData OnInitializeLivePuppetMaster;
    VirtualInvokeData OnInitializeGhostPuppetMaster;
};

struct SeinRidePuppet__StaticFields {
};

struct SeinRidePuppet__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinRidePuppet__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinRidePuppet__VTable vtable;
};

struct __declspec(align(8)) List_1_EquipmentType___Fields {
    struct EquipmentType__Enum__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_EquipmentType_ {
    struct List_1_EquipmentType___Class *klass;
    MonitorData *monitor;
    struct List_1_EquipmentType___Fields fields;
};

struct List_1_EquipmentType___VTable {
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

struct List_1_EquipmentType___StaticFields {
    struct EquipmentType__Enum__Array *_emptyArray;
};

struct List_1_EquipmentType___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_EquipmentType___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_EquipmentType___VTable vtable;
};

struct __declspec(align(8)) SeinRide_KuRidingState_c_DisplayClass23_0__Fields {
    struct Func_1_Boolean_ *sourceContinueCondition;
};

struct SeinRide_KuRidingState_c_DisplayClass23_0 {
    struct SeinRide_KuRidingState_c_DisplayClass23_0__Class *klass;
    MonitorData *monitor;
    struct SeinRide_KuRidingState_c_DisplayClass23_0__Fields fields;
};

struct SeinRide_KuRidingState_c_DisplayClass23_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SeinRide_KuRidingState_c_DisplayClass23_0__StaticFields {
};

struct SeinRide_KuRidingState_c_DisplayClass23_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SeinRide_KuRidingState_c_DisplayClass23_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SeinRide_KuRidingState_c_DisplayClass23_0__VTable vtable;
};

enum class ChakramProjectileEffect_ChakramProjectileTriggerType__Enum : int32_t {
    OnDestroy = 0x00000000,
    OnSpinStop = 0x00000001,
};

struct ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Boxed {
    struct ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class *klass;
    MonitorData *monitor;
    ChakramProjectileEffect_ChakramProjectileTriggerType__Enum value;
    
};

struct ChakramProjectileEffect__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline *m_timeline;
    float m_destroyDelay;
    ChakramProjectileEffect_ChakramProjectileTriggerType__Enum m_triggerType;
    
    struct ChakramProjectile *m_chakramProjectile;
    bool m_triggered;
    float m_timer;
};

struct ChakramProjectileEffect {
    struct ChakramProjectileEffect__Class *klass;
    MonitorData *monitor;
    struct ChakramProjectileEffect__Fields fields;
};

struct ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__VTable {
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

struct ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__StaticFields {
};

struct ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ChakramProjectileEffect_ChakramProjectileTriggerType__Enum__VTable vtable;
};

struct ChakramProjectileEffect__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ChakramProjectileEffect__StaticFields {
};

struct ChakramProjectileEffect__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ChakramProjectileEffect__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ChakramProjectileEffect__VTable vtable;
};

struct ColorVariation__Fields {
    struct MonoBehaviour__Fields _;
    struct Renderer__Array *m_renderers;
    struct Color__Array *m_cachedColors;
    struct Vector4__Array *m_cachedPositions;
    struct Vector3__Array *m_cachedLossyScales;
    struct Vector4__Array *m_cachedSlicesRanges;
    float m_time;
    float m_speed;
    int32_t m_triesToGetRenderers;
    struct MoonGuid *MetaDataGUID;
};

struct ColorVariation {
    struct ColorVariation__Class *klass;
    MonitorData *monitor;
    struct ColorVariation__Fields fields;
};

struct ColorVariation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnBeforeStrip;
    VirtualInvokeData DoStrip;
};

struct ColorVariation__StaticFields {
};

struct ColorVariation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ColorVariation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ColorVariation__VTable vtable;
};

struct Vector4__1__VTable {
};

struct Vector4__1__StaticFields {
};

struct Vector4__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Vector4__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Vector4__1__VTable vtable;
};

}
