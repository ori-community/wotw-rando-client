namespace app {
struct SpiritLeashHook__StaticFields {
};
struct SpiritLeashHook__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLeashHook__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLeashHook__VTable vtable;
};

struct SpiritLeashInteractable__Fields {
  struct SaveSerialize__Fields _;
  struct ActionMethod * OnSpiritLeashAction;
  enum SpiritLeashMode__Enum SpiritLeashMode;
  bool CanTargetBeSustained;
  struct Transform * m_transform;
  bool _Activated_k__BackingField;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct SpiritLeashInteractable {
  struct SpiritLeashInteractable__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLeashInteractable__Fields fields;
};
struct SpiritLeashInteractable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
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
  VirtualInvokeData get_SpiritLeashCost;
  VirtualInvokeData OnSpiritLeashHighlight;
  VirtualInvokeData OnSpiritLeashDehighlight;
  VirtualInvokeData OnSpiritLeashed;
  VirtualInvokeData get_HookTargetTransform;
  VirtualInvokeData get_PositionOffset;
  VirtualInvokeData get_OriCloseEnoughDistance;
  VirtualInvokeData get_ShouldDecelerateOnApproach;
  VirtualInvokeData get_CanBeSustained;
  VirtualInvokeData get_LeashInteractionMode;
};
struct SpiritLeashInteractable__StaticFields {
};
struct SpiritLeashInteractable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritLeashInteractable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritLeashInteractable__VTable vtable;
};

struct Spear__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * TrailPrefab;
  struct MoonTrail__Array * m_trails;
  struct Transform * m_trailTransform;
};
struct Spear {
  struct Spear__Class *klass;
  struct MonitorData *monitor;
  struct Spear__Fields fields;
};
struct Spear__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
};
struct Spear__StaticFields {
};
struct Spear__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Spear__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Spear__VTable vtable;
};

struct SpringPlaceholder__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * Spring;
  float Height;
};
struct SpringPlaceholder {
  struct SpringPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct SpringPlaceholder__Fields fields;
};
struct SpringPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpringPlaceholder__StaticFields {
};
struct SpringPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpringPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpringPlaceholder__VTable vtable;
};

enum Stomper_State__Enum : int32_t {
  Stomper_State__Enum_Normal = 0,
  Stomper_State__Enum_Shake = 1,
  Stomper_State__Enum_Falling = 2,
  Stomper_State__Enum_Fallen = 3,
  Stomper_State__Enum_Raising = 4,
};
struct Stomper_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Stomper_State__Enum value;
};
struct Stomper__Fields {
  struct MonoBehaviour__Fields _;
  float StartFallSpeed;
  float FallGravity;
  float RiseDeccleration;
  float RiseSpeed;
  float DelayTillRise;
  float ShakeTime;
  struct SoundSource * StompSound;
  struct SoundSource * StompStartSound;
  struct SoundSource * StompResetSound;
  struct SoundSource * ReelInSound;
  struct GameObject * StompImpactDust;
  struct Transform * StompDustSpawnTransform;
  struct DamageDealer * DamageDealer;
  struct Vector3 m_fallDirection;
  enum Stomper_State__Enum m_state;
  float m_time;
  struct AnimatingFloat * m_fall;
  bool m_hasPlayedResetSound;
  struct Vector3 m_originalLocalPosition;
  struct Transform * m_transform;
  struct Rigidbody * m_rigidbody;
  struct AnimationCurve * OnTriggerDecorationCurve;
  float Distance;
  bool DistanceSet;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct Stomper {
  struct Stomper__Class *klass;
  struct MonitorData *monitor;
  struct Stomper__Fields fields;
};
struct Stomper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct Stomper__StaticFields {
};
struct Stomper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stomper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stomper__VTable vtable;
};

struct StomperTrigger__Fields {
  struct MonoBehaviour__Fields _;
  bool TriggerOncePerOnEnter;
  struct Stomper * StomperToTrigger;
  struct StomperLogic * StomperLogicToTrigger;
  bool Activated;
};
struct StomperTrigger {
  struct StomperTrigger__Class *klass;
  struct MonitorData *monitor;
  struct StomperTrigger__Fields fields;
};
enum StomperLogic_State__Enum : int32_t {
  StomperLogic_State__Enum_Normal = 0,
  StomperLogic_State__Enum_Shake = 1,
  StomperLogic_State__Enum_Falling = 2,
  StomperLogic_State__Enum_Fallen = 3,
  StomperLogic_State__Enum_Raising = 4,
};
struct StomperLogic_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StomperLogic_State__Enum value;
};
struct StomperLogic__Fields {
  struct MonoBehaviour__Fields _;
  float StartFallSpeed;
  float FallGravity;
  float RiseDeccleration;
  float RiseSpeed;
  float DelayTillRise;
  float ShakeTime;
  struct Transform * StompDustSpawnTransform;
  struct DamageDealer * DamageDealer;
  bool m_initialized;
  struct Vector3 m_fallDirection;
  enum StomperLogic_State__Enum m_state;
  float m_time;
  struct AnimatingFloat * m_fall;
  bool m_hasPlayedResetSound;
  struct Vector3 m_originalLocalPosition;
  struct Transform * m_transform;
  struct Rigidbody * m_rigidbody;
  struct AnimationCurve * OnTriggerDecorationCurve;
  float Distance;
  bool DistanceSet;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct StomperAnimator * Animator;
};
struct StomperLogic {
  struct StomperLogic__Class *klass;
  struct MonitorData *monitor;
  struct StomperLogic__Fields fields;
};
struct StomperAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct StomperVisuals * Visuals;
};
struct StomperAnimator {
  struct StomperAnimator__Class *klass;
  struct MonitorData *monitor;
  struct StomperAnimator__Fields fields;
};
struct StomperVisuals__Fields {
  struct MonoBehaviour__Fields _;
  struct FixedJoint * VisualsFixedJoint;
  struct Event_1 * StompSoundEvent;
  struct Event_1 * StompStartSoundEvent;
  struct Event_1 * StompResetSoundEvent;
  struct Event_1 * StompReelInSoundEvent;
  struct MoonTimeline * TriggerStomperTimeline;
  struct MoonTimeline * StomperFallingTimeline;
  struct GameObject * StompImpactDust;
  struct SoundHost * m_soundHost;
  struct WwiseEventSystem_SoundHandle m_soundHandle;
};
struct StomperVisuals {
  struct StomperVisuals__Class *klass;
  struct MonitorData *monitor;
  struct StomperVisuals__Fields fields;
};
struct FixedJoint__Fields {
  struct Joint__Fields _;
};
struct FixedJoint {
  struct FixedJoint__Class *klass;
  struct MonitorData *monitor;
  struct FixedJoint__Fields fields;
};
struct FixedJoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FixedJoint__StaticFields {
};
struct FixedJoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FixedJoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FixedJoint__VTable vtable;
};
struct StomperVisuals__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StomperVisuals__StaticFields {
};
struct StomperVisuals__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StomperVisuals__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StomperVisuals__VTable vtable;
};
struct StomperAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_MoonSetupVisuals;
};
struct StomperAnimator__StaticFields {
};
struct StomperAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StomperAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StomperAnimator__VTable vtable;
};
struct StomperLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_MoonSetupAnimator;
};
struct StomperLogic__StaticFields {
};
struct StomperLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StomperLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StomperLogic__VTable vtable;
};
struct StomperTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Category;
};
struct StomperTrigger__StaticFields {
};
struct StomperTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StomperTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StomperTrigger__VTable vtable;
};

struct SwitchActionSystem__Fields {
  struct SaveSerialize__Fields _;
  struct ActionMethod * AllSwitchesOnAction;
  struct ActionMethod * OnAllSwitchesOffAction;
  bool TriggerOnce;
  struct List_1_UnityEngine_MonoBehaviour_ * SwitchesObjects;
  struct List_1_ISwitch_ * m_switches;
  bool m_lastAllOn;
  bool m_lastAllOff;
  bool m_canTrigger;
};
struct SwitchActionSystem {
  struct SwitchActionSystem__Class *klass;
  struct MonitorData *monitor;
  struct SwitchActionSystem__Fields fields;
};
struct __declspec(align(8)) List_1_ISwitch___Fields {
  struct ISwitch__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ISwitch_ {
  struct List_1_ISwitch___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ISwitch___Fields fields;
};
struct ISwitch__Array {
  struct ISwitch__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ISwitch * vector[32];
};
struct IEnumerator_1_ISwitch_ {
  struct IEnumerator_1_ISwitch___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_ISwitch___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ISwitch___StaticFields {
};
struct IEnumerator_1_ISwitch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ISwitch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ISwitch___VTable vtable;
};
struct List_1_ISwitch___VTable {
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
struct List_1_ISwitch___StaticFields {
  struct ISwitch__Array * _emptyArray;
};
struct List_1_ISwitch___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ISwitch___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ISwitch___VTable vtable;
};
struct SwitchActionSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct SwitchActionSystem__StaticFields {
};
struct SwitchActionSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwitchActionSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwitchActionSystem__VTable vtable;
};

struct TimedDoor__Fields {
  struct SaveSerialize__Fields _;
  struct AudioClip * ChallengeCompleteSound;
  struct ActionMethod * ActionAtTimeout;
  struct ActionMethod * ActionAtSolved;
  bool ShutdownDoor;
  bool m_isSolved;
  struct LegacyTranslateAnimator * m_animator;
};
struct TimedDoor {
  struct TimedDoor__Class *klass;
  struct MonitorData *monitor;
  struct TimedDoor__Fields fields;
};
struct TimedDoor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct TimedDoor__StaticFields {
};
struct TimedDoor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimedDoor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimedDoor__VTable vtable;
};

struct CustomWater__Fields {
  struct MonoBehaviour__Fields _;
  struct Camera * reflectionCamera;
  struct RenderTexture * reflectionRenderTexture;
  struct Vector2 uvOffset;
  float textureSizeMultiplier;
  float clipPlaneOffset;
  float wavesSize;
  float wavesHeight;
  float wavesSpeed;
  bool m_insideWater;
};
struct CustomWater {
  struct CustomWater__Class *klass;
  struct MonitorData *monitor;
  struct CustomWater__Fields fields;
};
struct CustomWater__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CustomWater__StaticFields {
};
struct CustomWater__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomWater__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomWater__VTable vtable;
};

struct MetaBallWaterZone__Fields {
  struct WaterZone__Fields _;
  struct MetaballWaterBlobs * MetaBallWaterBlobs;
  float ZValueThreshold;
  float InheritVelocityOnEnter;
  float InheritVelocityOnExit;
  float RadiusErrorMargin;
  struct AnimationCurve * BreakVelocityVsRadiusCurve;
  struct ParticleSystem * SplashEffect;
  float SplashParticleMultiplier;
};
struct MetaBallWaterZone {
  struct MetaBallWaterZone__Class *klass;
  struct MonitorData *monitor;
  struct MetaBallWaterZone__Fields fields;
};
struct MetaBallWaterZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData AreaType;
  VirtualInvokeData ContainsPoint;
  VirtualInvokeData GetVelocityAtPoint;
  VirtualInvokeData get_Category;
  VirtualInvokeData GetVelocityAtPoint_1;
  VirtualInvokeData Contains;
  VirtualInvokeData Overlaps;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData FixedUpdate;
};
struct MetaBallWaterZone__StaticFields {
  struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball_ * m_metaBalls;
};
struct MetaBallWaterZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MetaBallWaterZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MetaBallWaterZone__VTable vtable;
};

struct SphericalWaterZone__Fields {
  struct WaterZone__Fields _;
  float Radius;
};
struct SphericalWaterZone {
  struct SphericalWaterZone__Class *klass;
  struct MonitorData *monitor;
  struct SphericalWaterZone__Fields fields;
};
struct SphericalWaterZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData AreaType;
  VirtualInvokeData ContainsPoint;
  VirtualInvokeData GetVelocityAtPoint;
  VirtualInvokeData get_Category;
  VirtualInvokeData GetVelocityAtPoint_1;
  VirtualInvokeData Contains;
  VirtualInvokeData Overlaps;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData FixedUpdate;
};
struct SphericalWaterZone__StaticFields {
};
struct SphericalWaterZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SphericalWaterZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SphericalWaterZone__VTable vtable;
};

struct WaterPurityLogic__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * CleanGroup;
  struct GameObject * DiseasedGroup;
};
struct WaterPurityLogic {
  struct WaterPurityLogic__Class *klass;
  struct MonitorData *monitor;
  struct WaterPurityLogic__Fields fields;
};
struct WaterPurityLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterPurityLogic__StaticFields {
};
struct WaterPurityLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterPurityLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterPurityLogic__VTable vtable;
};

struct WaterReflectionRenderer__Fields {
  struct MonoBehaviour__Fields _;
  struct Camera * Camera;
  struct Water * m_water;
};
struct WaterReflectionRenderer {
  struct WaterReflectionRenderer__Class *klass;
  struct MonitorData *monitor;
  struct WaterReflectionRenderer__Fields fields;
};
struct WaterReflectionRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterReflectionRenderer__StaticFields {
};
struct WaterReflectionRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterReflectionRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterReflectionRenderer__VTable vtable;
};

enum WaterCurrentController_State__Enum : int32_t {
  WaterCurrentController_State__Enum_Outside = 0,
  WaterCurrentController_State__Enum_Inside = 1,
};
struct WaterCurrentController_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WaterCurrentController_State__Enum value;
};
struct WaterCurrentController__Fields {
  struct MonoBehaviour__Fields _;
  enum WaterCurrentController_State__Enum CurrentState;
  float CurrentStateTime;
  struct AnimationCurve * Curve;
  struct AnimationCurve * FadeOutCurve;
  struct WaterCurrentZone * m_lastZone;
  float m_rampUpTime;
};
struct WaterCurrentController {
  struct WaterCurrentController__Class *klass;
  struct MonitorData *monitor;
  struct WaterCurrentController__Fields fields;
};
struct WaterCurrentController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterCurrentController__StaticFields {
  struct WaterCurrentController * m_instance;
};
struct WaterCurrentController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterCurrentController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterCurrentController__VTable vtable;
};

struct WaterThatRockFallsInto__Fields {
  struct MonoBehaviour__Fields _;
  float AngularVelocityMultiplier;
  float AngularFriction;
  float MaxAngularVelocity;
  float FloatHeight;
  float BounceDamp;
  struct Vector2 EnterWaterDamp;
  struct GameObject * SplashEffect;
  float WaterHorizontalMaxVelocity;
  float WaterHorizontalMultiplier;
  float WaterHorizontalFriction;
};
struct WaterThatRockFallsInto {
  struct WaterThatRockFallsInto__Class *klass;
  struct MonitorData *monitor;
  struct WaterThatRockFallsInto__Fields fields;
};
struct WaterThatRockFallsInto__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterThatRockFallsInto__StaticFields {
};
struct WaterThatRockFallsInto__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterThatRockFallsInto__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterThatRockFallsInto__VTable vtable;
};

struct WindArea__Fields {
  struct MonoBehaviour__Fields _;
  bool RequiresWindRestored;
  struct Transform * _Transform_k__BackingField;
  float Speed;
  float HorizontalAcceleration;
  float VerticalAcceleration;
  struct AnimationCurve * HorizontalAccelerationOverSpeed;
  struct AnimationCurve * VerticalAccelerationOverSpeed;
  bool CancelGravity;
  bool _IsOverlapping_k__BackingField;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct WindArea {
  struct WindArea__Class *klass;
  struct MonitorData *monitor;
  struct WindArea__Fields fields;
};
struct WindArea__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct WindArea__StaticFields {
};
struct WindArea__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindArea__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindArea__VTable vtable;
};

struct WindSpeedAnimator__Fields {
  struct LegacyAnimator__Fields _;
  struct WindArea * Area;
  float m_windSpeed;
};
struct WindSpeedAnimator {
  struct WindSpeedAnimator__Class *klass;
  struct MonitorData *monitor;
  struct WindSpeedAnimator__Fields fields;
};
struct WindSpeedAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData Start;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData Restart;
  VirtualInvokeData RestartReverse;
  VirtualInvokeData AnimateIt;
  VirtualInvokeData RestoreToOriginalState;
};
struct WindSpeedAnimator__StaticFields {
};
struct WindSpeedAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindSpeedAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindSpeedAnimator__VTable vtable;
};

struct WindZoneVisualizer__Fields {
  struct MonoBehaviour__Fields _;
  struct WindArea * m_windArea;
  struct Renderer * m_windAreaRenderer;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct WindZoneVisualizer {
  struct WindZoneVisualizer__Class *klass;
  struct MonitorData *monitor;
  struct WindZoneVisualizer__Fields fields;
};
struct WindZoneVisualizer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct WindZoneVisualizer__StaticFields {
};
struct WindZoneVisualizer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindZoneVisualizer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindZoneVisualizer__VTable vtable;
};

struct WindupSwitch__Fields {
  struct LegacyAttackableSwitch__Fields _;
  int32_t TargetRotation;
  struct AnimationCurve * DamageToRotationCurve;
  struct AnimationCurve * RotationDistanceToSpeedCurve;
  struct AnimationCurve * WindupDistanceToSpeedCurve;
  bool AccountForHitDirection;
  bool ShouldActivateDeactivate;
  struct SoundProvider * OnHitSoundProvider;
  struct SoundProvider * OnUnwindSoundProvider;
  struct SoundProvider * OnActivateSoundProvider;
  struct WindupSwitch_DamageMultiplier__Array * AttackDamageMultipliers;
  float m_currentTargetRotation;
  float m_actualRotation;
  float m_previousRotation;
  struct List_1_BaseAnimator_ * m_animators;
};
struct WindupSwitch {
  struct WindupSwitch__Class *klass;
  struct MonitorData *monitor;
  struct WindupSwitch__Fields fields;
};
struct __declspec(align(8)) WindupSwitch_DamageMultiplier__Fields {
  enum DamageType__Enum DamageType;
  float Multiplier;
};
struct WindupSwitch_DamageMultiplier {
  struct WindupSwitch_DamageMultiplier__Class *klass;
  struct MonitorData *monitor;
  struct WindupSwitch_DamageMultiplier__Fields fields;
};
struct WindupSwitch_DamageMultiplier__Array {
  struct WindupSwitch_DamageMultiplier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WindupSwitch_DamageMultiplier * vector[32];
};
struct WindupSwitch_DamageMultiplier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WindupSwitch_DamageMultiplier__StaticFields {
};
struct WindupSwitch_DamageMultiplier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindupSwitch_DamageMultiplier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindupSwitch_DamageMultiplier__VTable vtable;
};
struct WindupSwitch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
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
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_SpiritSlashPriority;
  VirtualInvokeData OnSpiritSlashHighlight;
  VirtualInvokeData OnSpiritSlashDehighlight;
  VirtualInvokeData GetSpiritSlashDamageAmount;
  VirtualInvokeData get_BashPriority;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnBashHighlight;
  VirtualInvokeData OnBashDehighlight;
  VirtualInvokeData get_BowPriority;
  VirtualInvokeData get_BowEnableAutoTarget;
  VirtualInvokeData ShouldArrowExplode;
  VirtualInvokeData get_BowAutoTargetPosition;
  VirtualInvokeData ShouldArrowBeReflected;
  VirtualInvokeData get_HammerPriority;
  VirtualInvokeData get_HammerEnableAutoTarget;
  VirtualInvokeData CanDetonateProjectiles;
  VirtualInvokeData get_IsOn;
  VirtualInvokeData RegisterAnimator;
  VirtualInvokeData UnregisterAnimator;
  VirtualInvokeData DriverFixedUpdate;
};}