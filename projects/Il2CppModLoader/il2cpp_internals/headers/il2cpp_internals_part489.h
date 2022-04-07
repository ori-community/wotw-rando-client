namespace app {
struct List_1_Moon_BehaviourSystem_EntityTask___StaticFields {
  struct EntityTask__Array * _emptyArray;
};
struct List_1_Moon_BehaviourSystem_EntityTask___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_BehaviourSystem_EntityTask___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_BehaviourSystem_EntityTask___VTable vtable;
};
struct IsNotRunningBehaviourCondition__VTable {
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
struct IsNotRunningBehaviourCondition__StaticFields {
};
struct IsNotRunningBehaviourCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsNotRunningBehaviourCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsNotRunningBehaviourCondition__VTable vtable;
};
struct Condition_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData __unknown;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct Condition_1__StaticFields {
};
struct Condition_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Condition_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Condition_1__VTable vtable;
};
struct AuxBus__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData get_WwiseObjectType;
  VirtualInvokeData get_Name;
  VirtualInvokeData IsValid;
};
struct AuxBus__StaticFields {
};
struct AuxBus__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AuxBus__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AuxBus__VTable vtable;
};
struct AuxiliarySendZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_GizmoText;
  VirtualInvokeData OnEmitterEnteredZone;
  VirtualInvokeData OnEmitterExitsZone;
  VirtualInvokeData OnEmitterUpdate;
  VirtualInvokeData get_Category;
};
struct AuxiliarySendZone__StaticFields {
};
struct AuxiliarySendZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AuxiliarySendZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AuxiliarySendZone__VTable vtable;
};
struct AudioEmitterZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_GizmoText;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
};
struct AudioEmitterZone__StaticFields {
};
struct AudioEmitterZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioEmitterZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioEmitterZone__VTable vtable;
};
struct AudioEmitterZoneReference__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct AudioEmitterZoneReference__StaticFields {
};
struct AudioEmitterZoneReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioEmitterZoneReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioEmitterZoneReference__VTable vtable;
};

struct AudioListenerZoneReference {
  struct AudioListenerZone * Zone;
  int64_t Version;
  int32_t ZoneInstanceId;
};
struct AudioListenerZoneReference__Boxed {
  struct AudioListenerZoneReference__Class *klass;
  struct MonitorData *monitor;
  struct AudioListenerZoneReference fields;
};
struct AudioListenerZone__Fields {
  struct MonoBehaviour__Fields _;
  int64_t Version;
  bool IsActive;
  enum AudioZoneShape__Enum ZoneShape;
  bool IsMoving;
};
struct AudioListenerZone {
  struct AudioListenerZone__Class *klass;
  struct MonitorData *monitor;
  struct AudioListenerZone__Fields fields;
};
enum AmbienceZone_AmbienceBoxMode__Enum : int32_t {
  AmbienceZone_AmbienceBoxMode__Enum_Horizontal = 0,
  AmbienceZone_AmbienceBoxMode__Enum_Vertical = 1,
  AmbienceZone_AmbienceBoxMode__Enum_Both = 2,
};
struct AmbienceZone_AmbienceBoxMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AmbienceZone_AmbienceBoxMode__Enum value;
};
struct AmbienceZone__Fields {
  struct AudioListenerZone__Fields _;
  struct Transform * AlternativeEmitterPoint;
  struct Event_1 * WiseEvent;
  struct Event_1 * WiseEventOnEnter;
  struct Event_1 * WiseEventOnExit;
  float WWiseFadeOutDuration;
  enum AkCurveInterpolation__Enum WWiseFadeType;
  bool EnableDynamicAmbience;
  enum AmbienceZone_AmbienceBoxMode__Enum DynamicMode;
  float OnEnterCooldown;
  float OnExitCooldown;
  struct State * StateOnEnter;
  struct State * StateOnExit;
  struct Switch_1 * SwitchOnEnter;
  struct Switch_1 * SwitchOnExit;
  struct Trigger * TriggerOnEnter;
  struct Trigger * TriggerOnExit;
  struct RTPC * RTPC;
  struct RTPC * DistanceBasedRTPC;
  struct ArtificialSoundHostReference SoundHost;
  struct Object_1__Array * RTPCFeedObjects;
  bool InnerBoundsEnabled;
  struct Rect InnerBounds;
  float m_lastRtpcValue;
  struct Rect m_bounds;
  struct WwiseEventSystem_SoundHandle m_soundHandle;
  float m_timeLastEntered;
  float m_timeLastExited;
  struct Vector3 m_previousPosition;
  struct Vector3 m_previousScale;
  struct Vector3 m_point;
};
struct AmbienceZone {
  struct AmbienceZone__Class *klass;
  struct MonitorData *monitor;
  struct AmbienceZone__Fields fields;
};
struct AmbienceZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_GizmoText;
  VirtualInvokeData OnListenerEnteredZone;
  VirtualInvokeData OnListenerExitsZone;
  VirtualInvokeData OnListenerUpdateZone;
  VirtualInvokeData ResetAdditionalTracking;
  VirtualInvokeData get_Category;
};
struct AmbienceZone__StaticFields {
};
struct AmbienceZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmbienceZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmbienceZone__VTable vtable;
};
struct AudioListenerZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_GizmoText;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
};
struct AudioListenerZone__StaticFields {
};
struct AudioListenerZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioListenerZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioListenerZone__VTable vtable;
};
struct AudioListenerZoneReference__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct AudioListenerZoneReference__StaticFields {
};
struct AudioListenerZoneReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioListenerZoneReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioListenerZoneReference__VTable vtable;
};

struct __declspec(align(8)) ZoneProcessor__Fields {
  int32_t _ActiveListenerZones_k__BackingField;
  int32_t _MaxListenerZones_k__BackingField;
  int32_t _ActiveEmitterZones_k__BackingField;
  int32_t _MaxEmitterZones_k__BackingField;
};
struct ZoneProcessor {
  struct ZoneProcessor__Class *klass;
  struct MonitorData *monitor;
  struct ZoneProcessor__Fields fields;
};
struct ZoneProcessor_2_LZData_EZData___Fields {
  struct ZoneProcessor__Fields _;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array * m_listenerZoneTasks;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Array * m_emitterZoneTasks;
  int32_t m_validListenerZoneTasksSize;
  int32_t m_validEmitterZoneTasksSize;
  struct List_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask_ * m_listenerTasksToReset;
  struct List_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask_ * m_emitterTasksToReset;
};
struct ZoneProcessor_2_LZData_EZData_ {
  struct ZoneProcessor_2_LZData_EZData___Class *klass;
  struct MonitorData *monitor;
  struct ZoneProcessor_2_LZData_EZData___Fields fields;
};
struct ExampleZoneProcessor__Fields {
  struct ZoneProcessor_2_LZData_EZData___Fields _;
};
struct ExampleZoneProcessor {
  struct ExampleZoneProcessor__Class *klass;
  struct MonitorData *monitor;
  struct ExampleZoneProcessor__Fields fields;
};
struct PositionSyncTask_PositioningCache {
  struct Vector3 Position;
  struct Quaternion Rotation;
};
struct PositionSyncTask_PositioningCache__Boxed {
  struct PositionSyncTask_PositioningCache__Class *klass;
  struct MonitorData *monitor;
  struct PositionSyncTask_PositioningCache fields;
};
struct SoundListenerReference {
  struct ISoundListener * _Listener_k__BackingField;
  int64_t _Version_k__BackingField;
};
struct SoundListenerReference__Boxed {
  struct SoundListenerReference__Class *klass;
  struct MonitorData *monitor;
  struct SoundListenerReference fields;
};
struct __declspec(align(8)) PositionSyncTask__Fields {
  int32_t Id;
  int32_t FrameQuantinization;
  struct SoundHostReference Host;
  struct PositionSyncTask_PositioningCache CachedPositioning;
  struct SoundListenerReference _AsListener_k__BackingField;
  struct HashSet_1_System_Int32_ * Effectors;
  bool HasChangedThisFrame;
};
struct PositionSyncTask {
  struct PositionSyncTask__Class *klass;
  struct MonitorData *monitor;
  struct PositionSyncTask__Fields fields;
};
struct PositionSyncTask__Array {
  struct PositionSyncTask__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PositionSyncTask * vector[32];
};
struct LZData {
};
struct LZData__Boxed {
  struct LZData__Class *klass;
  struct MonitorData *monitor;
  struct LZData fields;
};
struct __declspec(align(8)) ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Fields {
  int32_t Id;
  struct LZData _Data_k__BackingField;
  int32_t _FrameQuantinization_k__BackingField;
  struct AudioListenerZoneReference Zone;
  bool _ForceFirstFrame_k__BackingField;
  bool _IsBound_k__BackingField;
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ {
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Class *klass;
  struct MonitorData *monitor;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Fields fields;
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array {
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * vector[32];
};
struct EZData {
};
struct EZData__Boxed {
  struct EZData__Class *klass;
  struct MonitorData *monitor;
  struct EZData fields;
};
struct __declspec(align(8)) ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Fields {
  int32_t Id;
  struct EZData _Data_k__BackingField;
  int32_t _FrameQuantinization_k__BackingField;
  struct AudioEmitterZoneReference _Zone_k__BackingField;
  bool _IsBound_k__BackingField;
  bool _ForceFirstFrame_k__BackingField;
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ {
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Class *klass;
  struct MonitorData *monitor;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Fields fields;
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Array {
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * vector[32];
};
struct __declspec(align(8)) List_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___Fields {
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask_ {
  struct List_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___Fields fields;
};
struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask_ {
  struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___Fields {
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask_ {
  struct List_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___Fields fields;
};
struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask_ {
  struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___Class *klass;
  struct MonitorData *monitor;
};
struct PositionSyncTask_PositioningCache__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PositionSyncTask_PositioningCache__StaticFields {
};
struct PositionSyncTask_PositioningCache__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PositionSyncTask_PositioningCache__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PositionSyncTask_PositioningCache__VTable vtable;
};
struct SoundListenerReference__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct SoundListenerReference__StaticFields {
};
struct SoundListenerReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundListenerReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundListenerReference__VTable vtable;
};
struct PositionSyncTask__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PositionSyncTask__StaticFields {
};
struct PositionSyncTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PositionSyncTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PositionSyncTask__VTable vtable;
};
struct ZoneProcessor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData get_ActiveListenerZones;
  VirtualInvokeData get_MaxListenerZones;
  VirtualInvokeData get_ActiveEmitterZones;
  VirtualInvokeData get_MaxEmitterZones;
};
struct ZoneProcessor__StaticFields {
};
struct ZoneProcessor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ZoneProcessor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ZoneProcessor__VTable vtable;
};
struct LZData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LZData__StaticFields {
};
struct LZData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LZData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LZData__VTable vtable;
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___StaticFields {
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___VTable vtable;
};
struct EZData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EZData__StaticFields {
};
struct EZData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EZData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EZData__VTable vtable;
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___StaticFields {
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___VTable vtable;
};
struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___StaticFields {
};
struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___VTable vtable;
};
struct List_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___VTable {
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
struct List_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___StaticFields {
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array * _emptyArray;
};
struct List_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Wwise_ZoneProcessor_2_ListenerZoneTask___VTable vtable;
};
struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___StaticFields {
};
struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___VTable vtable;
};
struct List_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___VTable {
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
struct List_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___StaticFields {
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Array * _emptyArray;
};
struct List_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Wwise_ZoneProcessor_2_EmitterZoneTask___VTable vtable;
};
struct ZoneProcessor_2_LZData_EZData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData RegisterListenerZoneTask;
  VirtualInvokeData RegisterEmitterZoneTask;
  VirtualInvokeData Initialize;
  VirtualInvokeData Update;
  VirtualInvokeData ResetListener;
  VirtualInvokeData DefragmentStructures;
  VirtualInvokeData get_ActiveListenerZones;
  VirtualInvokeData get_MaxListenerZones;
  VirtualInvokeData get_ActiveEmitterZones;
  VirtualInvokeData get_MaxEmitterZones;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData InitializeEmitterZoneTask;
  VirtualInvokeData InitializeListenerZoneTask;
  VirtualInvokeData TearDownListenerZoneTask;
  VirtualInvokeData TearDownEmitterZoneTask;
};
struct ZoneProcessor_2_LZData_EZData___StaticFields {
};
struct ZoneProcessor_2_LZData_EZData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ZoneProcessor_2_LZData_EZData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ZoneProcessor_2_LZData_EZData___VTable vtable;
};
struct ExampleZoneProcessor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData RegisterListenerZoneTask;
  VirtualInvokeData RegisterEmitterZoneTask;
  VirtualInvokeData Initialize;
  VirtualInvokeData Update;
  VirtualInvokeData ResetListener;
  VirtualInvokeData DefragmentStructures;
  VirtualInvokeData get_ActiveListenerZones;
  VirtualInvokeData get_MaxListenerZones;
  VirtualInvokeData get_ActiveEmitterZones;
  VirtualInvokeData get_MaxEmitterZones;
  VirtualInvokeData ProcessZoneTasks;
  VirtualInvokeData ResetListenerTracking;
  VirtualInvokeData InitializeEmitterZoneTask;
  VirtualInvokeData InitializeListenerZoneTask;
  VirtualInvokeData TearDownListenerZoneTask;
  VirtualInvokeData TearDownEmitterZoneTask;
};
struct ExampleZoneProcessor__StaticFields {
};
struct ExampleZoneProcessor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExampleZoneProcessor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExampleZoneProcessor__VTable vtable;
};

struct __declspec(align(8)) ListenerSyncProcessor__Fields {
  struct ListenerSyncProcessor_ListenerSyncTask__Array * m_listenerSyncTasks;
  struct UInt64__Array * m_defaultListeners;
  bool m_defaultListenersRequireUpdate;
};
struct ListenerSyncProcessor {
  struct ListenerSyncProcessor__Class *klass;
  struct MonitorData *monitor;
  struct ListenerSyncProcessor__Fields fields;
};
struct __declspec(align(8)) ListenerSyncProcessor_ListenerSyncTask__Fields {
  int32_t Id;
  int32_t _FrameQuantinization_k__BackingField;
  struct SoundListenerReference _Listener_k__BackingField;
  bool _IsInitialized_k__BackingField;
};
struct ListenerSyncProcessor_ListenerSyncTask {
  struct ListenerSyncProcessor_ListenerSyncTask__Class *klass;
  struct MonitorData *monitor;
  struct ListenerSyncProcessor_ListenerSyncTask__Fields fields;
};
struct ListenerSyncProcessor_ListenerSyncTask__Array {
  struct ListenerSyncProcessor_ListenerSyncTask__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ListenerSyncProcessor_ListenerSyncTask * vector[32];
};
struct ListenerSyncProcessor_ListenerSyncTask__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ListenerSyncProcessor_ListenerSyncTask__StaticFields {
};
struct ListenerSyncProcessor_ListenerSyncTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListenerSyncProcessor_ListenerSyncTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListenerSyncProcessor_ListenerSyncTask__VTable vtable;
};
struct ListenerSyncProcessor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData RegisterListenerSync;
  VirtualInvokeData Update;
  VirtualInvokeData Initialize;
  VirtualInvokeData ReregisterAudioListeners;
};
struct ListenerSyncProcessor__StaticFields {
};
struct ListenerSyncProcessor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ListenerSyncProcessor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ListenerSyncProcessor__VTable vtable;
};

struct __declspec(align(8)) WwiseSyncProcessor__Fields {
  struct WwiseSyncProcessor_RtpcSyncTask__Array * m_rtpcSyncTasks;
  struct PositionSyncTask__Array * m_positionSyncTasks;
  struct ZoneProcessor * m_zoneProcessor;
  struct IListenerSyncProcessor * m_listenerSyncProcessor;
  int32_t m_validPositionSyncsSize;
  int32_t m_validRTPCSyncTaskSize;
};
struct WwiseSyncProcessor {
  struct WwiseSyncProcessor__Class *klass;
  struct MonitorData *monitor;
  struct WwiseSyncProcessor__Fields fields;
};
struct __declspec(align(8)) WwiseSyncProcessor_RtpcSyncTask__Fields {
  int32_t Id;
  struct Func_1_Single_ * _Getter_k__BackingField;
  struct SoundHostReference _Host_k__BackingField;
  struct RTPC * _Target_k__BackingField;
  float _CachedValue_k__BackingField;
  int32_t _FrameQuantinization_k__BackingField;
};
struct WwiseSyncProcessor_RtpcSyncTask {
  struct WwiseSyncProcessor_RtpcSyncTask__Class *klass;
  struct MonitorData *monitor;
  struct WwiseSyncProcessor_RtpcSyncTask__Fields fields;
};
struct WwiseSyncProcessor_RtpcSyncTask__Array {
  struct WwiseSyncProcessor_RtpcSyncTask__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WwiseSyncProcessor_RtpcSyncTask * vector[32];
};
struct Func_1_Single___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_Single_ {
  struct Func_1_Single___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_Single___Fields fields;
};
struct IListenerSyncProcessor {
  struct IListenerSyncProcessor__Class *klass;
  struct MonitorData *monitor;
};
struct Func_1_Single___VTable {
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
struct Func_1_Single___StaticFields {
};
struct Func_1_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_Single___VTable vtable;
};
struct WwiseSyncProcessor_RtpcSyncTask__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseSyncProcessor_RtpcSyncTask__StaticFields {
};
struct WwiseSyncProcessor_RtpcSyncTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseSyncProcessor_RtpcSyncTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseSyncProcessor_RtpcSyncTask__VTable vtable;
};
struct IListenerSyncProcessor__VTable {
  VirtualInvokeData RegisterListenerSync;
  VirtualInvokeData Update;
  VirtualInvokeData Initialize;
  VirtualInvokeData ReregisterAudioListeners;
};
struct IListenerSyncProcessor__StaticFields {
};
struct IListenerSyncProcessor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IListenerSyncProcessor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IListenerSyncProcessor__VTable vtable;
};
struct WwiseSyncProcessor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseSyncProcessor__StaticFields {
  bool DisableZoneSync;
};
struct WwiseSyncProcessor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseSyncProcessor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseSyncProcessor__VTable vtable;
};

struct __declspec(align(8)) HashSet_1_System_UInt32___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_System_UInt32___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_System_UInt32_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_System_UInt32_ {
  struct HashSet_1_System_UInt32___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_System_UInt32___Fields fields;
};
struct HashSet_1_T_Slot_System_UInt32_ {
  int32_t hashCode;
  int32_t next;
  uint32_t value;
};
struct HashSet_1_T_Slot_System_UInt32___Boxed {
  struct HashSet_1_T_Slot_System_UInt32___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_System_UInt32_ fields;
};
struct HashSet_1_T_Slot_System_UInt32___Array {
  struct HashSet_1_T_Slot_System_UInt32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_System_UInt32_ vector[32];
};
struct HashSet_1_T_Slot_System_UInt32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_System_UInt32___StaticFields {
};
struct HashSet_1_T_Slot_System_UInt32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_System_UInt32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_System_UInt32___VTable vtable;
};
struct HashSet_1_System_UInt32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
  VirtualInvokeData Add;
  VirtualInvokeData UnionWith;
};}