namespace app {
struct List_1_UnityEngine_Object_ {
  struct List_1_UnityEngine_Object___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Object___Fields fields;
};
struct IEnumerator_1_UnityEngine_Object_ {
  struct IEnumerator_1_UnityEngine_Object___Class *klass;
  struct MonitorData *monitor;
};
struct ITimelineEntityCreationListener {
  struct ITimelineEntityCreationListener__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_Object___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Object___StaticFields {
};
struct IEnumerator_1_UnityEngine_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Object___VTable vtable;
};
struct List_1_UnityEngine_Object___VTable {
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
struct List_1_UnityEngine_Object___StaticFields {
  struct Object_1__Array * _emptyArray;
};
struct List_1_UnityEngine_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Object___VTable vtable;
};
struct ITimelineEntityCreationListener__VTable {
  VirtualInvokeData OnEntityCreated;
};
struct ITimelineEntityCreationListener__StaticFields {
};
struct ITimelineEntityCreationListener__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ITimelineEntityCreationListener__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ITimelineEntityCreationListener__VTable vtable;
};

enum AutoFillOnCreationAttribute_ResolveConflict__Enum : int32_t {
  AutoFillOnCreationAttribute_ResolveConflict__Enum_PickFirst = 0,
  AutoFillOnCreationAttribute_ResolveConflict__Enum_PickLast = 1,
};
struct AutoFillOnCreationAttribute_ResolveConflict__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AutoFillOnCreationAttribute_ResolveConflict__Enum value;
};
struct __declspec(align(8)) AutoFillOnCreationAttribute__Fields {
  enum AutoFillOnCreationAttribute_ResolveConflict__Enum m_resolveConflict;
};
struct AutoFillOnCreationAttribute {
  struct AutoFillOnCreationAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AutoFillOnCreationAttribute__Fields fields;
};
struct AutoFillOnCreationAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AutoFillOnCreationAttribute__StaticFields {
};
struct AutoFillOnCreationAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AutoFillOnCreationAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AutoFillOnCreationAttribute__VTable vtable;
};

struct __declspec(align(8)) MarkerEntity__Fields {
  enum AnimatorPlayState__Enum _PlayState_k__BackingField;
  struct PlaybackStatus * _PlaybackStatus_k__BackingField;
  struct EntityId m_entityId;
  struct MoonReference_1_Moon_Timeline_ITimelineEntityParent_ * m_entityParent;
  struct Nullable_1_Boolean_ m_isFinished;
  double _PreviewTime_k__BackingField;
  int32_t m_hash;
  struct IEventReciever * _EventReciever_k__BackingField;
};
struct MarkerEntity {
  struct MarkerEntity__Class *klass;
  struct MonitorData *monitor;
  struct MarkerEntity__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_Moon_Timeline_ITimelineEntityParent___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_Moon_Timeline_ITimelineEntityParent_ * m_cachedProxyType;
  struct ITimelineEntityParent * m_volatileValue;
};
struct MoonReference_1_Moon_Timeline_ITimelineEntityParent_ {
  struct MoonReference_1_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_Moon_Timeline_ITimelineEntityParent___Fields fields;
};
struct IMoonType_1_Moon_Timeline_ITimelineEntityParent_ {
  struct IMoonType_1_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_Moon_Timeline_ITimelineEntityParent___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_Moon_Timeline_ITimelineEntityParent___StaticFields {
};
struct IMoonType_1_Moon_Timeline_ITimelineEntityParent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_Moon_Timeline_ITimelineEntityParent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_Moon_Timeline_ITimelineEntityParent___VTable vtable;
};
struct MoonReference_1_Moon_Timeline_ITimelineEntityParent___VTable {
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
struct MoonReference_1_Moon_Timeline_ITimelineEntityParent___StaticFields {
};
struct MoonReference_1_Moon_Timeline_ITimelineEntityParent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_Moon_Timeline_ITimelineEntityParent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_Moon_Timeline_ITimelineEntityParent___VTable vtable;
};
struct MarkerEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData HasFinished;
};
struct MarkerEntity__StaticFields {
};
struct MarkerEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MarkerEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MarkerEntity__VTable vtable;
};

struct __declspec(align(8)) MoonTimeline_c_DisplayClass128_0__Fields {
  struct MoonTimeline * timelineEntity;
};
struct MoonTimeline_c_DisplayClass128_0 {
  struct MoonTimeline_c_DisplayClass128_0__Class *klass;
  struct MonitorData *monitor;
  struct MoonTimeline_c_DisplayClass128_0__Fields fields;
};
struct MoonTimeline_c_DisplayClass128_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTimeline_c_DisplayClass128_0__StaticFields {
};
struct MoonTimeline_c_DisplayClass128_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTimeline_c_DisplayClass128_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTimeline_c_DisplayClass128_0__VTable vtable;
};

struct IEnumerable_1_Moon_Timeline_TimelineEntityRecord_ {
  struct IEnumerable_1_Moon_Timeline_TimelineEntityRecord___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Timeline_TimelineEntityRecord___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_Timeline_TimelineEntityRecord___StaticFields {
};
struct IEnumerable_1_Moon_Timeline_TimelineEntityRecord___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_Timeline_TimelineEntityRecord___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_Timeline_TimelineEntityRecord___VTable vtable;
};

struct MoonTimeline_c {
  struct MoonTimeline_c__Class *klass;
  struct MonitorData *monitor;
};
struct MoonTimeline_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTimeline_c__StaticFields {
  struct MoonTimeline_c * __9;
  struct Action * __9__139_0;
  struct Action * __9__139_1;
};
struct MoonTimeline_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTimeline_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTimeline_c__VTable vtable;
};

enum RecordableType__Enum : uint8_t {
  RecordableType__Enum_Instantiated = 0,
  RecordableType__Enum_ChildOfInstantiated = 1,
  RecordableType__Enum_SceneRecordable = 2,
  RecordableType__Enum_PuppetRecordable = 3,
  RecordableType__Enum_Undefined = 4,
};
struct RecordableType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RecordableType__Enum value;
};
struct RecordingContext {
  enum RecordableType__Enum _RecordableType_k__BackingField;
  bool _ShouldRecord_k__BackingField;
  struct Component_1 * _Puppet_k__BackingField;
};
struct RecordingContext__Boxed {
  struct RecordingContext__Class *klass;
  struct MonitorData *monitor;
  struct RecordingContext fields;
};
struct RecordingContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ShouldRecord;
};
struct RecordingContext__StaticFields {
};
struct RecordingContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecordingContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecordingContext__VTable vtable;
};

struct BranchingContext {
  int32_t Branch;
  bool _ShouldRecord_k__BackingField;
};
struct BranchingContext__Boxed {
  struct BranchingContext__Class *klass;
  struct MonitorData *monitor;
  struct BranchingContext fields;
};
struct BranchingContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ShouldRecord;
};
struct BranchingContext__StaticFields {
};
struct BranchingContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BranchingContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BranchingContext__VTable vtable;
};

struct AnimationContext {
  float NormalizedTime;
  bool _ShouldRecord_k__BackingField;
};
struct AnimationContext__Boxed {
  struct AnimationContext__Class *klass;
  struct MonitorData *monitor;
  struct AnimationContext fields;
};
struct AnimationContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ShouldRecord;
};
struct AnimationContext__StaticFields {
};
struct AnimationContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationContext__VTable vtable;
};

enum MoonTimelineNotifier_Action__Enum : int32_t {
  MoonTimelineNotifier_Action__Enum_Start = 0,
  MoonTimelineNotifier_Action__Enum_Stop = 1,
  MoonTimelineNotifier_Action__Enum_Branching = 2,
  MoonTimelineNotifier_Action__Enum_AnimationNormalizedTime = 3,
};
struct MoonTimelineNotifier_Action__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonTimelineNotifier_Action__Enum value;
};

struct MoonTimelineNotifier {
  struct MoonTimelineNotifier__Class *klass;
  struct MonitorData *monitor;
};
struct Action_3_Moon_Timeline_ITimelineEntity_IContext_Moon_Timeline_MoonTimelineNotifier_Action___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_3_Moon_Timeline_ITimelineEntity_IContext_Moon_Timeline_MoonTimelineNotifier_Action_ {
  struct Action_3_Moon_Timeline_ITimelineEntity_IContext_Moon_Timeline_MoonTimelineNotifier_Action___Class *klass;
  struct MonitorData *monitor;
  struct Action_3_Moon_Timeline_ITimelineEntity_IContext_Moon_Timeline_MoonTimelineNotifier_Action___Fields fields;
};
struct Action_3_Moon_Timeline_ITimelineEntity_IContext_Moon_Timeline_MoonTimelineNotifier_Action___VTable {
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
struct Action_3_Moon_Timeline_ITimelineEntity_IContext_Moon_Timeline_MoonTimelineNotifier_Action___StaticFields {
};
struct Action_3_Moon_Timeline_ITimelineEntity_IContext_Moon_Timeline_MoonTimelineNotifier_Action___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_3_Moon_Timeline_ITimelineEntity_IContext_Moon_Timeline_MoonTimelineNotifier_Action___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_3_Moon_Timeline_ITimelineEntity_IContext_Moon_Timeline_MoonTimelineNotifier_Action___VTable vtable;
};
struct MoonTimelineNotifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTimelineNotifier__StaticFields {
  struct Action_3_Moon_Timeline_ITimelineEntity_IContext_Moon_Timeline_MoonTimelineNotifier_Action_ * OnTimelineEventFired;
};
struct MoonTimelineNotifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTimelineNotifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTimelineNotifier__VTable vtable;
};

struct MoonTimelineNotifier_c {
  struct MoonTimelineNotifier_c__Class *klass;
  struct MonitorData *monitor;
};
struct MoonTimelineNotifier_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTimelineNotifier_c__StaticFields {
  struct MoonTimelineNotifier_c * __9;
};
struct MoonTimelineNotifier_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTimelineNotifier_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTimelineNotifier_c__VTable vtable;
};

struct PlayMoonTimeline__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * m_timeline;
};
struct PlayMoonTimeline {
  struct PlayMoonTimeline__Class *klass;
  struct MonitorData *monitor;
  struct PlayMoonTimeline__Fields fields;
};
struct PlayMoonTimeline__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayMoonTimeline__StaticFields {
};
struct PlayMoonTimeline__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayMoonTimeline__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayMoonTimeline__VTable vtable;
};

struct __declspec(align(8)) TimelineConstrainedEntity__Fields {
  struct TimelineEntityRecord * m_timelineEntityRecord;
};
struct TimelineConstrainedEntity {
  struct TimelineConstrainedEntity__Class *klass;
  struct MonitorData *monitor;
  struct TimelineConstrainedEntity__Fields fields;
};
struct TimelineConstrainedEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_StartConstraint;
  VirtualInvokeData get_EndConstraint;
  VirtualInvokeData get_EntityId;
  VirtualInvokeData get_Entity;
  VirtualInvokeData HasFinished;
};
struct TimelineConstrainedEntity__StaticFields {
};
struct TimelineConstrainedEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineConstrainedEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineConstrainedEntity__VTable vtable;
};

struct TimelineConstrainedTimelineEntity__Fields {
  struct TimelineConstrainedEntity__Fields _;
  struct MoonTimeline * m_moonTimeline;
};
struct TimelineConstrainedTimelineEntity {
  struct TimelineConstrainedTimelineEntity__Class *klass;
  struct MonitorData *monitor;
  struct TimelineConstrainedTimelineEntity__Fields fields;
};
struct TimelineConstrainedTimelineEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_StartConstraint;
  VirtualInvokeData get_EndConstraint;
  VirtualInvokeData get_EntityId;
  VirtualInvokeData get_Entity;
  VirtualInvokeData HasFinished;
  VirtualInvokeData get_ConstrainedEntitiesCount;
  VirtualInvokeData get_Progress;
  VirtualInvokeData GetConstrainedEntityFrom;
  VirtualInvokeData GetConstrainedEntity;
  VirtualInvokeData get_GetITimelineEntityParent;
  VirtualInvokeData IsTheSame;
};
struct TimelineConstrainedTimelineEntity__StaticFields {
};
struct TimelineConstrainedTimelineEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineConstrainedTimelineEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineConstrainedTimelineEntity__VTable vtable;
};

struct VirtualTimelineConstrainedTimelineEntity__Fields {
  struct TimelineConstrainedEntity__Fields _;
  struct VirtualMoonTimeline * m_moonTimeline;
};
struct VirtualTimelineConstrainedTimelineEntity {
  struct VirtualTimelineConstrainedTimelineEntity__Class *klass;
  struct MonitorData *monitor;
  struct VirtualTimelineConstrainedTimelineEntity__Fields fields;
};
struct VirtualTimelineConstrainedTimelineEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_StartConstraint;
  VirtualInvokeData get_EndConstraint;
  VirtualInvokeData get_EntityId;
  VirtualInvokeData get_Entity;
  VirtualInvokeData HasFinished;
  VirtualInvokeData get_ConstrainedEntitiesCount;
  VirtualInvokeData get_Progress;
  VirtualInvokeData GetConstrainedEntityFrom;
  VirtualInvokeData GetConstrainedEntity;
  VirtualInvokeData get_GetITimelineEntityParent;
  VirtualInvokeData IsTheSame;
};
struct VirtualTimelineConstrainedTimelineEntity__StaticFields {
};
struct VirtualTimelineConstrainedTimelineEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VirtualTimelineConstrainedTimelineEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VirtualTimelineConstrainedTimelineEntity__VTable vtable;
};

struct __declspec(align(8)) TimelineEntityReference__Fields {
  struct MonoBehaviour * m_data;
};
struct TimelineEntityReference {
  struct TimelineEntityReference__Class *klass;
  struct MonitorData *monitor;
  struct TimelineEntityReference__Fields fields;
};
struct TimelineEntityReference__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ResolveReference;
};
struct TimelineEntityReference__StaticFields {
};
struct TimelineEntityReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineEntityReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineEntityReference__VTable vtable;
};

struct IEnumerable_1_Moon_Timeline_TimelineHelper_ConstraintWrapper_ {
  struct IEnumerable_1_Moon_Timeline_TimelineHelper_ConstraintWrapper___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Timeline_TimelineHelper_ConstraintWrapper___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_Timeline_TimelineHelper_ConstraintWrapper___StaticFields {
};
struct IEnumerable_1_Moon_Timeline_TimelineHelper_ConstraintWrapper___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_Timeline_TimelineHelper_ConstraintWrapper___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_Timeline_TimelineHelper_ConstraintWrapper___VTable vtable;
};

struct IDictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ {
  struct IDictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
};
struct IDictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
};
struct IDictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields {
};
struct IDictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable vtable;
};

struct __declspec(align(8)) Dictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_Timeline_ITimelineEntity_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ {
  struct Dictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ {
  int32_t hashCode;
  int32_t next;
  struct ITimelineEntity * key;
  struct ITimelineEntityParent * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ vector[32];
};
struct IEqualityComparer_1_Moon_Timeline_ITimelineEntity_ {
  struct IEqualityComparer_1_Moon_Timeline_ITimelineEntity___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Fields {
  struct Dictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Fields fields;
};
struct ITimelineEntity__Array {
  struct ITimelineEntity__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ITimelineEntity * vector[32];
};
struct IEnumerator_1_Moon_Timeline_ITimelineEntity_ {
  struct IEnumerator_1_Moon_Timeline_ITimelineEntity___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Fields {
  struct Dictionary_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Fields fields;
};
struct ITimelineEntityParent__Array {
  struct ITimelineEntityParent__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ITimelineEntityParent * vector[32];
};
struct IEnumerator_1_Moon_Timeline_ITimelineEntityParent_ {
  struct IEnumerator_1_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_Timeline_ITimelineEntity_ {
  struct ICollection_1_Moon_Timeline_ITimelineEntity___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_Timeline_ITimelineEntityParent_ {
  struct ICollection_1_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ {
  struct ITimelineEntity * key;
  struct ITimelineEntityParent * value;
};
struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Boxed {
  struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ fields;
};
struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Array {
  struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Timeline_ITimelineEntity_ {
  struct IEnumerable_1_Moon_Timeline_ITimelineEntity___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_Timeline_ITimelineEntityParent_ {
  struct IEnumerable_1_Moon_Timeline_ITimelineEntityParent___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable vtable;
};
struct IEqualityComparer_1_Moon_Timeline_ITimelineEntity___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_Moon_Timeline_ITimelineEntity___StaticFields {
};
struct IEqualityComparer_1_Moon_Timeline_ITimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_Moon_Timeline_ITimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_Moon_Timeline_ITimelineEntity___VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_ITimelineEntity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_ITimelineEntity___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_ITimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_ITimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_ITimelineEntity___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable vtable;
};
struct IEnumerator_1_Moon_Timeline_ITimelineEntityParent___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_ITimelineEntityParent___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_ITimelineEntityParent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_ITimelineEntityParent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_ITimelineEntityParent___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable vtable;
};
struct ICollection_1_Moon_Timeline_ITimelineEntity___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_Timeline_ITimelineEntity___StaticFields {
};
struct ICollection_1_Moon_Timeline_ITimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_Timeline_ITimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_Timeline_ITimelineEntity___VTable vtable;
};
struct ICollection_1_Moon_Timeline_ITimelineEntityParent___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_Timeline_ITimelineEntityParent___StaticFields {
};
struct ICollection_1_Moon_Timeline_ITimelineEntityParent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_Timeline_ITimelineEntityParent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_Timeline_ITimelineEntityParent___VTable vtable;
};
struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields {
};
struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_Moon_Timeline_ITimelineEntity_Moon_Timeline_ITimelineEntityParent___VTable vtable;
};
struct IEnumerable_1_Moon_Timeline_ITimelineEntity___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_Timeline_ITimelineEntity___StaticFields {
};
struct IEnumerable_1_Moon_Timeline_ITimelineEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_Timeline_ITimelineEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_Timeline_ITimelineEntity___VTable vtable;
};
struct IEnumerable_1_Moon_Timeline_ITimelineEntityParent___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_Timeline_ITimelineEntityParent___StaticFields {
};
struct IEnumerable_1_Moon_Timeline_ITimelineEntityParent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_Timeline_ITimelineEntityParent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_Timeline_ITimelineEntityParent___VTable vtable;
};}