namespace app {
struct MoonReference_1_IStateTransitionHolder_ {
  struct MoonReference_1_IStateTransitionHolder___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_IStateTransitionHolder___Fields fields;
};
struct IMoonType_1_IStateTransitionHolder_ {
  struct IMoonType_1_IStateTransitionHolder___Class *klass;
  struct MonitorData *monitor;
};
struct IStateTransitionHolder {
  struct IStateTransitionHolder__Class *klass;
  struct MonitorData *monitor;
};
struct CollisionEventHandler__Array {
  struct CollisionEventHandler__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CollisionEventHandler * vector[32];
};
struct IMoonType_1_IStateTransitionHolder___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_IStateTransitionHolder___StaticFields {
};
struct IMoonType_1_IStateTransitionHolder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_IStateTransitionHolder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_IStateTransitionHolder___VTable vtable;
};
struct IStateTransitionHolder__VTable {
  VirtualInvokeData PerformStateTransition;
};
struct IStateTransitionHolder__StaticFields {
};
struct IStateTransitionHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IStateTransitionHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IStateTransitionHolder__VTable vtable;
};
struct MoonReference_1_IStateTransitionHolder___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_IStateTransitionHolder___StaticFields {
};
struct MoonReference_1_IStateTransitionHolder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_IStateTransitionHolder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_IStateTransitionHolder___VTable vtable;
};
struct PressurePlate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData RemovePressing;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData GetRequirementsForTimeline;
  VirtualInvokeData StopTransitions;
};
struct PressurePlate__StaticFields {
};
struct PressurePlate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PressurePlate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PressurePlate__VTable vtable;
};

struct __declspec(align(8)) PressurePlate_c_DisplayClass28_0__Fields {
  struct ICanActivatePressurePlate * target;
};
struct PressurePlate_c_DisplayClass28_0 {
  struct PressurePlate_c_DisplayClass28_0__Class *klass;
  struct MonitorData *monitor;
  struct PressurePlate_c_DisplayClass28_0__Fields fields;
};
struct PressurePlate_c_DisplayClass28_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PressurePlate_c_DisplayClass28_0__StaticFields {
};
struct PressurePlate_c_DisplayClass28_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PressurePlate_c_DisplayClass28_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PressurePlate_c_DisplayClass28_0__VTable vtable;
};

enum ReadyForAnimationTrigger_State__Enum : int32_t {
  ReadyForAnimationTrigger_State__Enum_Inactive = 0,
  ReadyForAnimationTrigger_State__Enum_Waiting = 1,
  ReadyForAnimationTrigger_State__Enum_Started = 2,
  ReadyForAnimationTrigger_State__Enum_Finished = 3,
};
struct ReadyForAnimationTrigger_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ReadyForAnimationTrigger_State__Enum value;
};
struct ReadyForAnimationTrigger__Fields {
  struct PlayerInsideZoneChecker__Fields _;
  struct MoonAnimation * Animation;
  struct Vector3 Offset;
  struct AnimationCurve * SpeedByDistanceTraveledNormalized;
  float m_distance;
  float m_startDistance;
  enum ReadyForAnimationTrigger_State__Enum m_state;
  struct Vector3 m_initPos;
  struct GameObject * m_instance;
  struct Condition_1 * ActiveCondition;
  bool OnlyTurnToDestination;
  bool ClampPositionToTarget;
  struct AnimationCurve * AnimationCurveX;
  struct AnimationCurve * AnimationCurveY;
  struct Vector3 m_destination;
};
struct ReadyForAnimationTrigger {
  struct ReadyForAnimationTrigger__Class *klass;
  struct MonitorData *monitor;
  struct ReadyForAnimationTrigger__Fields fields;
};
struct ReadyForAnimationTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData get_VirtualTimelineTarget;
  VirtualInvokeData get_VirtualTimelineGroup;
  VirtualInvokeData get_NameDisplayedOnClip;
  VirtualInvokeData get_IsInside;
  VirtualInvokeData FixedUpdate;
  VirtualInvokeData Awake;
};
struct ReadyForAnimationTrigger__StaticFields {
};
struct ReadyForAnimationTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadyForAnimationTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadyForAnimationTrigger__VTable vtable;
};

struct SeeSeinTrigger__Fields {
  struct MonoBehaviour__Fields _;
  float DelayUntilNextTrigger;
  float TriggerDistance;
  float DistanceSmoothFactor;
  struct LayerMask LayerMask;
  float m_time;
  bool m_eventTriggered;
  struct Component_1__Array * m_recievers;
  struct Vector2 RayStartOffset;
  struct Transform * m_transform;
  bool m_canSeeSein;
  struct Ray m_lastRay;
  int32_t m_frame;
};
struct SeeSeinTrigger {
  struct SeeSeinTrigger__Class *klass;
  struct MonitorData *monitor;
  struct SeeSeinTrigger__Fields fields;
};
struct SeeSeinTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeeSeinTrigger__StaticFields {
};
struct SeeSeinTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeeSeinTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeeSeinTrigger__VTable vtable;
};

struct SeinEnterExitCollision__Fields {
  struct MonoBehaviour__Fields _;
  bool OnTrigger;
  bool OnCollision;
  struct MoonTimeline * OnEnterTimeline;
  struct Condition_1 * OnEnterCondition;
  struct MoonTimeline * OnExitTimeline;
  struct Condition_1 * OnExitCondition;
};
struct SeinEnterExitCollision {
  struct SeinEnterExitCollision__Class *klass;
  struct MonitorData *monitor;
  struct SeinEnterExitCollision__Fields fields;
};
struct SeinEnterExitCollision__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinEnterExitCollision__StaticFields {
};
struct SeinEnterExitCollision__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinEnterExitCollision__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinEnterExitCollision__VTable vtable;
};

struct SeinEnterExitTrigger__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionMethod * OnEnterAction;
  struct Condition_1 * OnEnterCondition;
  struct ActionMethod * OnExitAction;
  struct Condition_1 * OnExitCondition;
};
struct SeinEnterExitTrigger {
  struct SeinEnterExitTrigger__Class *klass;
  struct MonitorData *monitor;
  struct SeinEnterExitTrigger__Fields fields;
};
struct SeinEnterExitTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinEnterExitTrigger__StaticFields {
};
struct SeinEnterExitTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinEnterExitTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinEnterExitTrigger__VTable vtable;
};

struct SeinHeadBumpTrigger__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionMethod * Action;
};
struct SeinHeadBumpTrigger {
  struct SeinHeadBumpTrigger__Class *klass;
  struct MonitorData *monitor;
  struct SeinHeadBumpTrigger__Fields fields;
};
struct SeinHeadBumpTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinHeadBumpTrigger__StaticFields {
};
struct SeinHeadBumpTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinHeadBumpTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinHeadBumpTrigger__VTable vtable;
};

struct SeinInsideZoneCondition__Fields {
  struct Condition_1__Fields _;
  struct Transform__Array * Zones;
};
struct SeinInsideZoneCondition {
  struct SeinInsideZoneCondition__Class *klass;
  struct MonitorData *monitor;
  struct SeinInsideZoneCondition__Fields fields;
};
struct SeinInsideZoneCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct SeinInsideZoneCondition__StaticFields {
};
struct SeinInsideZoneCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinInsideZoneCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinInsideZoneCondition__VTable vtable;
};

struct SeinLandOnTrigger__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * OnLandTimeline;
  bool CanBeBrokenByEnemies;
};
struct SeinLandOnTrigger {
  struct SeinLandOnTrigger__Class *klass;
  struct MonitorData *monitor;
  struct SeinLandOnTrigger__Fields fields;
};
struct SeinLandOnTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinLandOnTrigger__StaticFields {
};
struct SeinLandOnTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinLandOnTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinLandOnTrigger__VTable vtable;
};

struct SeinOutsideZoneCondition__Fields {
  struct Condition_1__Fields _;
  struct Transform__Array * Zones;
};
struct SeinOutsideZoneCondition {
  struct SeinOutsideZoneCondition__Class *klass;
  struct MonitorData *monitor;
  struct SeinOutsideZoneCondition__Fields fields;
};
struct SeinOutsideZoneCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct SeinOutsideZoneCondition__StaticFields {
};
struct SeinOutsideZoneCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinOutsideZoneCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinOutsideZoneCondition__VTable vtable;
};

struct Spring__Fields {
  struct MonoBehaviour__Fields _;
  float Height;
  float StopDecelerationMultiplier;
  struct MoonTimeline * OnLandCharacter;
  struct MoonTimeline * OnLandGrenade;
  struct MoonTimeline * OnLandCommon;
  struct MoonTimeline * OnLaunchCharacter;
  struct Func_1_Boolean_ * AllowJumpModifier;
  struct Rigidbody * PushRigidbody;
  float PushForce;
};
struct Spring {
  struct Spring__Class *klass;
  struct MonitorData *monitor;
  struct Spring__Fields fields;
};
struct Spring__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnCollisionEnter;
};
struct Spring__StaticFields {
};
struct Spring__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Spring__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Spring__VTable vtable;
};

struct SpringSeinTrigger__Fields {
  struct MonoBehaviour__Fields _;
  float Height;
  float StopDecelerationMultiplier;
};
struct SpringSeinTrigger {
  struct SpringSeinTrigger__Class *klass;
  struct MonitorData *monitor;
  struct SpringSeinTrigger__Fields fields;
};
struct SpringSeinTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpringSeinTrigger__StaticFields {
};
struct SpringSeinTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpringSeinTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpringSeinTrigger__VTable vtable;
};

struct SpringVinedController__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacySpring * Spring;
  struct Condition_1 * AllowJumpCondition;
  struct MoonTimeline * VinesRetractingTimeline;
  struct MoonTimeline * VinesComeBackTimeline;
  struct PlayerInsideZoneChecker * RetractionZone;
  float VinesComeBackDelay;
  float m_timeUntilRetraction;
  bool m_prevRetractVines;
};
struct SpringVinedController {
  struct SpringVinedController__Class *klass;
  struct MonitorData *monitor;
  struct SpringVinedController__Fields fields;
};
struct SpringVinedController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
};
struct SpringVinedController__StaticFields {
};
struct SpringVinedController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpringVinedController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpringVinedController__VTable vtable;
};

struct StompPost__Fields {
  struct SaveSerialize__Fields _;
  int32_t NumberOfStomps;
  float StompIntoGroundAmount;
  float RisingDelay;
  float RiseSpeed;
  struct SoundProvider * StompSound;
  struct SoundProvider * AllTheWayInSound;
  struct ActionMethod * AllTheWayInAction;
  struct Vector3 m_startLocalPosition;
  struct Transform * m_transform;
  float m_distanceStompedIntoGround;
  float m_remainingRiseDelayTime;
  bool m_activated;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct StompPost {
  struct StompPost__Class *klass;
  struct MonitorData *monitor;
  struct StompPost__Fields fields;
};
struct StompPost__VTable {
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
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData CountsTowardsSuperJumpAchievement;
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
};
struct StompPost__StaticFields {
};
struct StompPost__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StompPost__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StompPost__VTable vtable;
};

struct TeleportRestrictZone__Fields {
  struct MonoBehaviour__Fields _;
  struct CageStructureTool * CageStructureTool;
};
struct TeleportRestrictZone {
  struct TeleportRestrictZone__Class *klass;
  struct MonitorData *monitor;
  struct TeleportRestrictZone__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_Object_System_Boolean___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_Object_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_Object_System_Boolean_ {
  struct Dictionary_2_UnityEngine_Object_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_Object_System_Boolean___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean_ {
  int32_t hashCode;
  int32_t next;
  struct Object_1 * key;
  bool value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___Fields {
  struct Dictionary_2_UnityEngine_Object_System_Boolean_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___Fields {
  struct Dictionary_2_UnityEngine_Object_System_Boolean_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___Fields fields;
};
struct ICollection_1_UnityEngine_Object_ {
  struct ICollection_1_UnityEngine_Object___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_Object_System_Boolean_ {
  struct Object_1 * key;
  bool value;
};
struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Boxed {
  struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_Object_System_Boolean_ fields;
};
struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Array {
  struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_Object_System_Boolean_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Object_System_Boolean___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Object_System_Boolean___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Object_System_Boolean___VTable vtable;
};
struct ICollection_1_UnityEngine_Object___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_Object___StaticFields {
};
struct ICollection_1_UnityEngine_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_Object___VTable vtable;
};
struct KeyValuePair_2_UnityEngine_Object_System_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UnityEngine_Object_System_Boolean___StaticFields {
};
struct KeyValuePair_2_UnityEngine_Object_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UnityEngine_Object_System_Boolean___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Object_System_Boolean___VTable vtable;
};
struct Dictionary_2_UnityEngine_Object_System_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_UnityEngine_Object_System_Boolean___StaticFields {
};
struct Dictionary_2_UnityEngine_Object_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UnityEngine_Object_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UnityEngine_Object_System_Boolean___VTable vtable;
};
struct TeleportRestrictZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TeleportRestrictZone__StaticFields {
  struct Dictionary_2_UnityEngine_Object_System_Boolean_ * s_restrictionZones;
};
struct TeleportRestrictZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TeleportRestrictZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TeleportRestrictZone__VTable vtable;
};

struct TiggerWithConditionOrWaitTime__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionMethod * Action;
  struct Condition_1 * Condition;
  bool TriggerOnce;
  bool UseWaitTime;
  float WaitTime;
  float m_elapsedTime;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct TiggerWithConditionOrWaitTime {
  struct TiggerWithConditionOrWaitTime__Class *klass;
  struct MonitorData *monitor;
  struct TiggerWithConditionOrWaitTime__Fields fields;
};
struct TiggerWithConditionOrWaitTime__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct TiggerWithConditionOrWaitTime__StaticFields {
};
struct TiggerWithConditionOrWaitTime__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TiggerWithConditionOrWaitTime__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TiggerWithConditionOrWaitTime__VTable vtable;
};

struct TimedTrigger__Fields {
  struct Condition_1__Fields _;
  float Duration;
  bool Repeat;
  bool Paused;
  struct MoonTimeline * Timeline;
  float m_time;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct TimedTrigger {
  struct TimedTrigger__Class *klass;
  struct MonitorData *monitor;
  struct TimedTrigger__Fields fields;
};
struct TimedTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct TimedTrigger__StaticFields {
};
struct TimedTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimedTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimedTrigger__VTable vtable;
};

enum TorchInsideZoneChecker_TorchStateType__Enum : int32_t {
  TorchInsideZoneChecker_TorchStateType__Enum_Either = 0,
  TorchInsideZoneChecker_TorchStateType__Enum_IsLit = 1,
  TorchInsideZoneChecker_TorchStateType__Enum_IsUnlit = 2,
};
struct TorchInsideZoneChecker_TorchStateType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TorchInsideZoneChecker_TorchStateType__Enum value;
};
enum TorchInsideZoneChecker_FlameColorType__Enum : int32_t {
  TorchInsideZoneChecker_FlameColorType__Enum_Either = 0,
  TorchInsideZoneChecker_FlameColorType__Enum_Red = 1,
  TorchInsideZoneChecker_FlameColorType__Enum_Blue = 2,
};
struct TorchInsideZoneChecker_FlameColorType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TorchInsideZoneChecker_FlameColorType__Enum value;
};
struct TorchInsideZoneChecker__Fields {
  struct ObjectInsideZoneChecker__Fields _;
  enum TorchInsideZoneChecker_TorchStateType__Enum TorchStateCheck;
  enum TorchInsideZoneChecker_FlameColorType__Enum FlameColorCheck;
  bool m_isInside;
};
struct TorchInsideZoneChecker {
  struct TorchInsideZoneChecker__Class *klass;
  struct MonitorData *monitor;
  struct TorchInsideZoneChecker__Fields fields;
};
struct TorchInsideZoneChecker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData get_VirtualTimelineTarget;
  VirtualInvokeData get_VirtualTimelineGroup;
  VirtualInvokeData get_NameDisplayedOnClip;
  VirtualInvokeData get_IsInside;
  VirtualInvokeData FixedUpdate;
  VirtualInvokeData Awake;
};
struct TorchInsideZoneChecker__StaticFields {
};
struct TorchInsideZoneChecker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TorchInsideZoneChecker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TorchInsideZoneChecker__VTable vtable;
};

struct __declspec(align(8)) Trigger_ProcessTrigger_d_39__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct Trigger_1 * __4__this;
  float _t_5__2;
};
struct Trigger_ProcessTrigger_d_39 {
  struct Trigger_ProcessTrigger_d_39__Class *klass;
  struct MonitorData *monitor;
  struct Trigger_ProcessTrigger_d_39__Fields fields;
};
struct Trigger_ProcessTrigger_d_39__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};}