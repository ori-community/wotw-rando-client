namespace app {
struct List_1_GenericCastManager_1_NativeArrays__2__StaticFields {
  struct GenericCastManager_1_Command_NativeArrays_UnityEngine_CapsulecastCommand___Array * _emptyArray;
};
struct List_1_GenericCastManager_1_NativeArrays__2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_GenericCastManager_1_NativeArrays__2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_GenericCastManager_1_NativeArrays__2__VTable vtable;
};
struct GenericCastManager_1_UnityEngine_CapsulecastCommand___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CompleteJobs;
  VirtualInvokeData ScheduleNewJobs;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData CompleteJobs_1;
  VirtualInvokeData ScheduleNewJobs_1;
};
struct GenericCastManager_1_UnityEngine_CapsulecastCommand___StaticFields {
  int32_t s_nextRequestID;
  struct Dictionary_2_System_Int32_UnityEngine_MonoBehaviour_ * m_debugClientNameLookup;
  bool m_instanceValid;
  struct GenericCastManager_1_UnityEngine_CapsulecastCommand_ * m_instance;
};
struct GenericCastManager_1_UnityEngine_CapsulecastCommand___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericCastManager_1_UnityEngine_CapsulecastCommand___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericCastManager_1_UnityEngine_CapsulecastCommand___VTable vtable;
};
struct CapsuleCastManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CompleteJobs;
  VirtualInvokeData ScheduleNewJobs;
  VirtualInvokeData get_InvalidCmd;
  VirtualInvokeData CheckDuplicate;
  VirtualInvokeData ScheduleBatch;
  VirtualInvokeData PerformImmediateCast;
  VirtualInvokeData CompleteJobs_1;
  VirtualInvokeData ScheduleNewJobs_1;
};
struct CapsuleCastManager__StaticFields {
  struct CapsulecastCommand InvalidCmdStatic;
};
struct CapsuleCastManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CapsuleCastManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CapsuleCastManager__VTable vtable;
};

struct __declspec(align(8)) AsyncRaycast_Manager__Fields {
  struct List_1_AsyncRaycast_ * m_instances;
  int32_t m_capacity;
  struct RaycastCommand__Array * m_cmd;
  struct RaycastHit__Array * m_hit;
  struct NativeArray_1_UnityEngine_RaycastCommand_ m_cmd_native;
  struct NativeArray_1_UnityEngine_RaycastHit_ m_hit_native;
  struct AsyncRaycast__Array * m_active;
  int32_t m_activeCount;
  struct JobHandle m_job;
};
struct AsyncRaycast_Manager {
  struct AsyncRaycast_Manager__Class *klass;
  struct MonitorData *monitor;
  struct AsyncRaycast_Manager__Fields fields;
};
struct __declspec(align(8)) List_1_AsyncRaycast___Fields {
  struct AsyncRaycast__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AsyncRaycast_ {
  struct List_1_AsyncRaycast___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AsyncRaycast___Fields fields;
};
struct AsyncRaycast__Array {
  struct AsyncRaycast__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AsyncRaycast * vector[32];
};
struct IEnumerator_1_AsyncRaycast_ {
  struct IEnumerator_1_AsyncRaycast___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_AsyncRaycast___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AsyncRaycast___StaticFields {
};
struct IEnumerator_1_AsyncRaycast___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AsyncRaycast___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AsyncRaycast___VTable vtable;
};
struct List_1_AsyncRaycast___VTable {
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
struct List_1_AsyncRaycast___StaticFields {
  struct AsyncRaycast__Array * _emptyArray;
};
struct List_1_AsyncRaycast___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AsyncRaycast___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AsyncRaycast___VTable vtable;
};
struct AsyncRaycast_Manager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncRaycast_Manager__StaticFields {
  struct AsyncRaycast_Manager * s_instance;
};
struct AsyncRaycast_Manager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncRaycast_Manager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncRaycast_Manager__VTable vtable;
};

struct BreakingWall__Fields {
  struct MonoBehaviour__Fields _;
  struct HealthController * m_healthController;
};
struct BreakingWall {
  struct BreakingWall__Class *klass;
  struct MonitorData *monitor;
  struct BreakingWall__Fields fields;
};
struct BreakingWall__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
};
struct BreakingWall__StaticFields {
};
struct BreakingWall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BreakingWall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BreakingWall__VTable vtable;
};

struct StateHolder_1_DashableSwitchSetupData___Fields {
  struct StateHolder__Fields _;
  struct List_1_DashableSwitchSetupData_ * StateData;
  struct List_1_IIndexedItem_ * m_cachedStates;
};
struct StateHolder_1_DashableSwitchSetupData_ {
  struct StateHolder_1_DashableSwitchSetupData___Class *klass;
  struct MonitorData *monitor;
  struct StateHolder_1_DashableSwitchSetupData___Fields fields;
};
struct TransitionBasedSetupHolder_1_DashableSwitchSetupData___Fields {
  struct StateHolder_1_DashableSwitchSetupData___Fields _;
};
struct TransitionBasedSetupHolder_1_DashableSwitchSetupData_ {
  struct TransitionBasedSetupHolder_1_DashableSwitchSetupData___Class *klass;
  struct MonitorData *monitor;
  struct TransitionBasedSetupHolder_1_DashableSwitchSetupData___Fields fields;
};
struct DashableSwitchSetupHolder__Fields {
  struct TransitionBasedSetupHolder_1_DashableSwitchSetupData___Fields _;
};
struct DashableSwitchSetupHolder {
  struct DashableSwitchSetupHolder__Class *klass;
  struct MonitorData *monitor;
  struct DashableSwitchSetupHolder__Fields fields;
};
struct __declspec(align(8)) List_1_DashableSwitchSetupData___Fields {
  struct DashableSwitchSetupData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DashableSwitchSetupData_ {
  struct List_1_DashableSwitchSetupData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DashableSwitchSetupData___Fields fields;
};
struct __declspec(align(8)) DashableSwitchSetupData__Fields {
  struct MoonTimeline * m_transition;
  bool m_desiredValue;
};
struct DashableSwitchSetupData {
  struct DashableSwitchSetupData__Class *klass;
  struct MonitorData *monitor;
  struct DashableSwitchSetupData__Fields fields;
};
struct DashableSwitchSetupData__Array {
  struct DashableSwitchSetupData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DashableSwitchSetupData * vector[32];
};
struct IEnumerator_1_DashableSwitchSetupData_ {
  struct IEnumerator_1_DashableSwitchSetupData___Class *klass;
  struct MonitorData *monitor;
};
struct DashableSwitchSetupData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Transition;
  VirtualInvokeData get_DesiredValue;
};
struct DashableSwitchSetupData__StaticFields {
};
struct DashableSwitchSetupData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DashableSwitchSetupData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DashableSwitchSetupData__VTable vtable;
};
struct IEnumerator_1_DashableSwitchSetupData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_DashableSwitchSetupData___StaticFields {
};
struct IEnumerator_1_DashableSwitchSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_DashableSwitchSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_DashableSwitchSetupData___VTable vtable;
};
struct List_1_DashableSwitchSetupData___VTable {
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
struct List_1_DashableSwitchSetupData___StaticFields {
  struct DashableSwitchSetupData__Array * _emptyArray;
};
struct List_1_DashableSwitchSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_DashableSwitchSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_DashableSwitchSetupData___VTable vtable;
};
struct StateHolder_1_DashableSwitchSetupData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
};
struct StateHolder_1_DashableSwitchSetupData___StaticFields {
};
struct StateHolder_1_DashableSwitchSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateHolder_1_DashableSwitchSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateHolder_1_DashableSwitchSetupData___VTable vtable;
};
struct TransitionBasedSetupHolder_1_DashableSwitchSetupData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
  VirtualInvokeData GetRequirementsForTimeline;
};
struct TransitionBasedSetupHolder_1_DashableSwitchSetupData___StaticFields {
};
struct TransitionBasedSetupHolder_1_DashableSwitchSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransitionBasedSetupHolder_1_DashableSwitchSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransitionBasedSetupHolder_1_DashableSwitchSetupData___VTable vtable;
};
struct DashableSwitchSetupHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
  VirtualInvokeData GetRequirementsForTimeline;
};
struct DashableSwitchSetupHolder__StaticFields {
};
struct DashableSwitchSetupHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DashableSwitchSetupHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DashableSwitchSetupHolder__VTable vtable;
};

struct Pushables {
  struct Pushables__Class *klass;
  struct MonitorData *monitor;
};
struct Pushables__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Pushables__StaticFields {
  struct AllContainer_1_IPushable_ * All;
};
struct Pushables__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Pushables__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Pushables__VTable vtable;
};

struct LaserObstacle__Fields {
  struct MonoBehaviour__Fields _;
  struct AnimationCurve * BeamTransparancyCurve;
  struct AnimationCurve * AnticipationCurve;
  struct GameObject * Beam;
  struct GameObject * Impact;
  struct GameObject * Anticipation;
  float Offset;
  struct Varying2DSoundProvider * AnticipationSoundProvider;
  struct Varying2DSoundProvider * StartSoundProvider;
  struct Varying2DSoundProvider * EndSoundProvider;
  struct Varying2DSoundProvider * LoopSoundProvider;
  struct Varying2DSoundProvider * ImpactSoundProvider;
  struct SoundPlayer * m_lastLoop;
  struct SoundPlayer * m_lastImpactLoop;
  float m_anticipationSoundOffset;
  float m_curveDuration;
  float m_time;
  float m_anticipationCountdown;
  float m_beamStartCountdown;
  float m_beamStartOffset;
  float m_beamDuration;
  float m_beamOnCountdown;
};
struct LaserObstacle {
  struct LaserObstacle__Class *klass;
  struct MonitorData *monitor;
  struct LaserObstacle__Fields fields;
};
struct LaserObstacle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LaserObstacle__StaticFields {
};
struct LaserObstacle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaserObstacle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LaserObstacle__VTable vtable;
};

struct LaserPulsator__Fields {
  struct SaveSerialize__Fields _;
  struct AnimationCurve * LaserCurve;
  struct AnimationCurve * AnticipationCurve;
  struct BlockableLaser * BlockableLaser;
  float Offset;
  float Speed;
  float m_time;
  bool m_shouldPlayAnticipation;
  float m_previousAnticipationValue;
  bool m_isSuspended;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct LaserPulsator {
  struct LaserPulsator__Class *klass;
  struct MonitorData *monitor;
  struct LaserPulsator__Fields fields;
};
struct LaserPulsator__VTable {
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
struct LaserPulsator__StaticFields {
};
struct LaserPulsator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaserPulsator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LaserPulsator__VTable vtable;
};

struct PushPullBlock_c {
  struct PushPullBlock_c__Class *klass;
  struct MonitorData *monitor;
};
struct PushPullBlock_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PushPullBlock_c__StaticFields {
  struct PushPullBlock_c * __9;
  struct Action * __9__136_0;
};
struct PushPullBlock_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PushPullBlock_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PushPullBlock_c__VTable vtable;
};

struct PushPullBlockJuggleAchievement__Fields {
  struct MonoBehaviour__Fields _;
  struct IPushable * m_pushPullBlock;
  int32_t m_bashedInAirCount;
};
struct PushPullBlockJuggleAchievement {
  struct PushPullBlockJuggleAchievement__Class *klass;
  struct MonitorData *monitor;
  struct PushPullBlockJuggleAchievement__Fields fields;
};
struct PushPullBlockJuggleAchievement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PushPullBlockJuggleAchievement__StaticFields {
};
struct PushPullBlockJuggleAchievement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PushPullBlockJuggleAchievement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PushPullBlockJuggleAchievement__VTable vtable;
};

struct PushPullBlockOneWayHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct Rigidbody * m_rigidbody;
  struct List_1_UnityEngine_Collider_ * m_ignoredColliders;
};
struct PushPullBlockOneWayHandler {
  struct PushPullBlockOneWayHandler__Class *klass;
  struct MonitorData *monitor;
  struct PushPullBlockOneWayHandler__Fields fields;
};
struct PushPullBlockOneWayHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PushPullBlockOneWayHandler__StaticFields {
};
struct PushPullBlockOneWayHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PushPullBlockOneWayHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PushPullBlockOneWayHandler__VTable vtable;
};

enum OneWayCapsuleCollider_OneWayDirection__Enum : int32_t {
  OneWayCapsuleCollider_OneWayDirection__Enum_XPositive = 0,
  OneWayCapsuleCollider_OneWayDirection__Enum_XNegative = 1,
  OneWayCapsuleCollider_OneWayDirection__Enum_YPositive = 2,
  OneWayCapsuleCollider_OneWayDirection__Enum_YNegative = 3,
  OneWayCapsuleCollider_OneWayDirection__Enum_ZPositive = 4,
  OneWayCapsuleCollider_OneWayDirection__Enum_ZNegative = 5,
};
struct OneWayCapsuleCollider_OneWayDirection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum OneWayCapsuleCollider_OneWayDirection__Enum value;
};
struct OneWayCapsuleCollider__Fields {
  struct MonoBehaviour__Fields _;
  enum OneWayCapsuleCollider_OneWayDirection__Enum CollisionDirectionType;
  float Tolerance;
  float TriggerExpand;
  struct LayerMask CollisionMask;
  struct List_1_OneWayCapsuleCollider_ColliderEntry_ * m_ignoredColliders;
  struct Dictionary_2_UnityEngine_Collider_System_Int32_ * m_ignoredCollidersMap;
  struct Transform * m_transform;
  struct CapsuleCollider * m_collider;
  struct BoxCollider * m_trigger;
};
struct OneWayCapsuleCollider {
  struct OneWayCapsuleCollider__Class *klass;
  struct MonitorData *monitor;
  struct OneWayCapsuleCollider__Fields fields;
};
struct __declspec(align(8)) List_1_OneWayCapsuleCollider_ColliderEntry___Fields {
  struct OneWayCapsuleCollider_ColliderEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_OneWayCapsuleCollider_ColliderEntry_ {
  struct List_1_OneWayCapsuleCollider_ColliderEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_OneWayCapsuleCollider_ColliderEntry___Fields fields;
};
struct OneWayCapsuleCollider_ColliderEntry {
  struct Collider * Collider;
  struct LayerMask Mask;
};
struct OneWayCapsuleCollider_ColliderEntry__Boxed {
  struct OneWayCapsuleCollider_ColliderEntry__Class *klass;
  struct MonitorData *monitor;
  struct OneWayCapsuleCollider_ColliderEntry fields;
};
struct OneWayCapsuleCollider_ColliderEntry__Array {
  struct OneWayCapsuleCollider_ColliderEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct OneWayCapsuleCollider_ColliderEntry vector[32];
};
struct IEnumerator_1_OneWayCapsuleCollider_ColliderEntry_ {
  struct IEnumerator_1_OneWayCapsuleCollider_ColliderEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_Collider_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_Collider_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_Collider_System_Int32_ {
  struct Dictionary_2_UnityEngine_Collider_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_Collider_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  struct Collider * key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_System_Int32___Fields {
  struct Dictionary_2_UnityEngine_Collider_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_System_Int32___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_System_Int32___Fields {
  struct Dictionary_2_UnityEngine_Collider_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_System_Int32___Fields fields;
};
struct KeyValuePair_2_UnityEngine_Collider_System_Int32_ {
  struct Collider * key;
  int32_t value;
};
struct KeyValuePair_2_UnityEngine_Collider_System_Int32___Boxed {
  struct KeyValuePair_2_UnityEngine_Collider_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_Collider_System_Int32_ fields;
};
struct KeyValuePair_2_UnityEngine_Collider_System_Int32___Array {
  struct KeyValuePair_2_UnityEngine_Collider_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_Collider_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct OneWayCapsuleCollider_ColliderEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OneWayCapsuleCollider_ColliderEntry__StaticFields {
};
struct OneWayCapsuleCollider_ColliderEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OneWayCapsuleCollider_ColliderEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OneWayCapsuleCollider_ColliderEntry__VTable vtable;
};
struct IEnumerator_1_OneWayCapsuleCollider_ColliderEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_OneWayCapsuleCollider_ColliderEntry___StaticFields {
};
struct IEnumerator_1_OneWayCapsuleCollider_ColliderEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_OneWayCapsuleCollider_ColliderEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_OneWayCapsuleCollider_ColliderEntry___VTable vtable;
};
struct List_1_OneWayCapsuleCollider_ColliderEntry___VTable {
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
struct List_1_OneWayCapsuleCollider_ColliderEntry___StaticFields {
  struct OneWayCapsuleCollider_ColliderEntry__Array * _emptyArray;
};
struct List_1_OneWayCapsuleCollider_ColliderEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_OneWayCapsuleCollider_ColliderEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_OneWayCapsuleCollider_ColliderEntry___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_System_Int32___VTable vtable;
};
struct KeyValuePair_2_UnityEngine_Collider_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UnityEngine_Collider_System_Int32___StaticFields {
};
struct KeyValuePair_2_UnityEngine_Collider_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UnityEngine_Collider_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UnityEngine_Collider_System_Int32___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_System_Int32___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_System_Int32___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_System_Int32___VTable vtable;
};
struct Dictionary_2_UnityEngine_Collider_System_Int32___VTable {
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
struct Dictionary_2_UnityEngine_Collider_System_Int32___StaticFields {
};
struct Dictionary_2_UnityEngine_Collider_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UnityEngine_Collider_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UnityEngine_Collider_System_Int32___VTable vtable;
};
struct OneWayCapsuleCollider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OneWayCapsuleCollider__StaticFields {
};
struct OneWayCapsuleCollider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OneWayCapsuleCollider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OneWayCapsuleCollider__VTable vtable;
};

enum Ori_State__Enum : int32_t {
  Ori_State__Enum_Hovering = 0,
  Ori_State__Enum_MoveToPosition = 1,
  Ori_State__Enum_MoveAlongCurve = 2,
  Ori_State__Enum_HoverForGrenade = 3,
};
struct Ori_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Ori_State__Enum value;
};}