namespace app {
struct List_1_SoundZoneProcessor_Job_PositionZoneEvent___VTable {
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
struct List_1_SoundZoneProcessor_Job_PositionZoneEvent___StaticFields {
  struct SoundZoneProcessor_Job_PositionZoneEvent__Array * _emptyArray;
};
struct List_1_SoundZoneProcessor_Job_PositionZoneEvent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SoundZoneProcessor_Job_PositionZoneEvent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SoundZoneProcessor_Job_PositionZoneEvent___VTable vtable;
};

struct SoundZoneProcessor_Job {
  int32_t m_index;
};
struct SoundZoneProcessor_Job__Boxed {
  struct SoundZoneProcessor_Job__Class *klass;
  struct MonitorData *monitor;
  struct SoundZoneProcessor_Job fields;
};
struct PositionSyncTask__Array__Array {
  struct PositionSyncTask__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PositionSyncTask__Array * vector[32];
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array {
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array * vector[32];
};
struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array {
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array * vector[32];
};
struct List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array {
  struct List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array * vector[32];
};
struct SoundZoneProcessor_Job__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Execute;
};
struct SoundZoneProcessor_Job__StaticFields {
  struct PositionSyncTask__Array__Array * m_positionSyncTasks;
  struct Int32__Array * m_positionSyncTaskCounts;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array * m_listenerZoneTasks;
  struct Int32__Array * m_listenerZoneTaskCounts;
  struct ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array * m_emitterZoneTasks;
  struct Int32__Array * m_emitterZoneTaskCounts;
  struct List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array__Array * m_events;
  struct JobHandle m_lastJobHandle;
  int32_t m_currentReadIndex;
  int32_t m_currentWriteIndex;
  bool m_executedOnce;
};
struct SoundZoneProcessor_Job__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundZoneProcessor_Job__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundZoneProcessor_Job__VTable vtable;
};

enum SoundZoneTrigger_SoundZoneTriggerType__Enum : int32_t {
  SoundZoneTrigger_SoundZoneTriggerType__Enum_MainCharacter = 0,
  SoundZoneTrigger_SoundZoneTriggerType__Enum_Listener = 1,
};
struct SoundZoneTrigger_SoundZoneTriggerType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SoundZoneTrigger_SoundZoneTriggerType__Enum value;
};
enum SoundZoneTrigger_SoundZoneTriggerMode__Enum : int32_t {
  SoundZoneTrigger_SoundZoneTriggerMode__Enum_OnEnter = 0,
  SoundZoneTrigger_SoundZoneTriggerMode__Enum_OnStay = 1,
  SoundZoneTrigger_SoundZoneTriggerMode__Enum_OnExit = 2,
};
struct SoundZoneTrigger_SoundZoneTriggerMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SoundZoneTrigger_SoundZoneTriggerMode__Enum value;
};
struct SoundZoneTrigger__Fields {
  struct AudioListenerZone__Fields _;
  enum SoundZoneTrigger_SoundZoneTriggerType__Enum TriggerType;
  enum SoundZoneTrigger_SoundZoneTriggerMode__Enum TriggerMode;
  struct Condition_1 * ConditionToTrigger;
  bool TriggerOnce;
  struct SerializedBooleanUberState * TriggerOnceUberState;
  struct SoundHost * TargetSoundHost;
  struct Event_1 * Event;
  struct Switch_1 * Switch;
  struct State * State;
  struct Trigger * Trigger;
  bool m_hasTriggered;
  bool m_mainCharacterInside;
  struct Rect m_bounds;
};
struct SoundZoneTrigger {
  struct SoundZoneTrigger__Class *klass;
  struct MonitorData *monitor;
  struct SoundZoneTrigger__Fields fields;
};
struct SoundZoneTrigger__VTable {
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
struct SoundZoneTrigger__StaticFields {
};
struct SoundZoneTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundZoneTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundZoneTrigger__VTable vtable;
};

struct VibrationStrengthProvider__Fields {
  struct FloatValueProvider__Fields _;
};
struct VibrationStrengthProvider {
  struct VibrationStrengthProvider__Class *klass;
  struct MonitorData *monitor;
  struct VibrationStrengthProvider__Fields fields;
};
struct VibrationStrengthProvider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetFloatValue;
};
struct VibrationStrengthProvider__StaticFields {
};
struct VibrationStrengthProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VibrationStrengthProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VibrationStrengthProvider__VTable vtable;
};

struct __declspec(align(8)) WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__Fields {
  struct String * flag;
};
struct WotwWwiseBootstrapConfiguration_c_DisplayClass7_0 {
  struct WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__Class *klass;
  struct MonitorData *monitor;
  struct WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__Fields fields;
};
struct WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__StaticFields {
};
struct WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WotwWwiseBootstrapConfiguration_c_DisplayClass7_0__VTable vtable;
};

struct PlaySoundPhaseAction__Fields {
  struct PerformingAction__Fields _;
  struct AudioClip * Sound;
  struct SoundProvider * SoundProvider;
  struct SoundCompositionTransition * Transition;
  struct SoundPlayer * m_soundPlayer;
};
struct PlaySoundPhaseAction {
  struct PlaySoundPhaseAction__Class *klass;
  struct MonitorData *monitor;
  struct PlaySoundPhaseAction__Fields fields;
};
struct SoundCompositionTransition__Fields {
  struct ScriptableObject__Fields _;
  struct List_1_SoundCompositionTransition_SoundFadeInformation_ * FadeOut;
  struct List_1_SoundCompositionTransition_SoundFadeInformation_ * FadeIn;
  struct SoundCompositionTransition_FadeInformation * DefaultFadeIn;
  struct SoundCompositionTransition_FadeInformation * DefaultFadeOut;
  float TransitionDelay;
  float NextSoundDelay;
  struct AudioClip * Sound;
  float Volume;
};
struct SoundCompositionTransition {
  struct SoundCompositionTransition__Class *klass;
  struct MonitorData *monitor;
  struct SoundCompositionTransition__Fields fields;
};
struct __declspec(align(8)) List_1_SoundCompositionTransition_SoundFadeInformation___Fields {
  struct SoundCompositionTransition_SoundFadeInformation__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SoundCompositionTransition_SoundFadeInformation_ {
  struct List_1_SoundCompositionTransition_SoundFadeInformation___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SoundCompositionTransition_SoundFadeInformation___Fields fields;
};
struct __declspec(align(8)) SoundCompositionTransition_SoundFadeInformation__Fields {
  struct AudioClip * Sound;
  struct AnimationCurve * FadeCurve;
  float FadeDuration;
  float FadeStartTime;
};
struct SoundCompositionTransition_SoundFadeInformation {
  struct SoundCompositionTransition_SoundFadeInformation__Class *klass;
  struct MonitorData *monitor;
  struct SoundCompositionTransition_SoundFadeInformation__Fields fields;
};
struct SoundCompositionTransition_SoundFadeInformation__Array {
  struct SoundCompositionTransition_SoundFadeInformation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SoundCompositionTransition_SoundFadeInformation * vector[32];
};
struct IEnumerator_1_SoundCompositionTransition_SoundFadeInformation_ {
  struct IEnumerator_1_SoundCompositionTransition_SoundFadeInformation___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SoundCompositionTransition_FadeInformation__Fields {
  struct AnimationCurve * FadeCurve;
  float FadeDuration;
  float FadeStartTime;
};
struct SoundCompositionTransition_FadeInformation {
  struct SoundCompositionTransition_FadeInformation__Class *klass;
  struct MonitorData *monitor;
  struct SoundCompositionTransition_FadeInformation__Fields fields;
};
struct SoundCompositionTransition_SoundFadeInformation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundCompositionTransition_SoundFadeInformation__StaticFields {
};
struct SoundCompositionTransition_SoundFadeInformation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundCompositionTransition_SoundFadeInformation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundCompositionTransition_SoundFadeInformation__VTable vtable;
};
struct IEnumerator_1_SoundCompositionTransition_SoundFadeInformation___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SoundCompositionTransition_SoundFadeInformation___StaticFields {
};
struct IEnumerator_1_SoundCompositionTransition_SoundFadeInformation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SoundCompositionTransition_SoundFadeInformation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SoundCompositionTransition_SoundFadeInformation___VTable vtable;
};
struct List_1_SoundCompositionTransition_SoundFadeInformation___VTable {
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
struct List_1_SoundCompositionTransition_SoundFadeInformation___StaticFields {
  struct SoundCompositionTransition_SoundFadeInformation__Array * _emptyArray;
};
struct List_1_SoundCompositionTransition_SoundFadeInformation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SoundCompositionTransition_SoundFadeInformation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SoundCompositionTransition_SoundFadeInformation___VTable vtable;
};
struct SoundCompositionTransition_FadeInformation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundCompositionTransition_FadeInformation__StaticFields {
};
struct SoundCompositionTransition_FadeInformation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundCompositionTransition_FadeInformation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundCompositionTransition_FadeInformation__VTable vtable;
};
struct SoundCompositionTransition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundCompositionTransition__StaticFields {
};
struct SoundCompositionTransition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundCompositionTransition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundCompositionTransition__VTable vtable;
};
struct PlaySoundPhaseAction__VTable {
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
  VirtualInvokeData Stop;
  VirtualInvokeData get_IsPerforming;
  VirtualInvokeData get_IsBlocking;
};
struct PlaySoundPhaseAction__StaticFields {
};
struct PlaySoundPhaseAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlaySoundPhaseAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlaySoundPhaseAction__VTable vtable;
};

struct SetSoundCompositionAction__Fields {
  struct ActionMethod__Fields _;
  struct SoundComposition * SoundComposition;
  struct SoundCompositionTransition * Transition;
};
struct SetSoundCompositionAction {
  struct SetSoundCompositionAction__Class *klass;
  struct MonitorData *monitor;
  struct SetSoundCompositionAction__Fields fields;
};
struct SoundComposition__Fields {
  struct ScriptableObject__Fields _;
  int32_t LoopCount;
  float LoopDuration;
  struct List_1_SoundComposition_SoundLoop_ * Loops;
  struct List_1_SoundComposition_SoundLayer_ * Layers;
};
struct SoundComposition {
  struct SoundComposition__Class *klass;
  struct MonitorData *monitor;
  struct SoundComposition__Fields fields;
};
struct __declspec(align(8)) List_1_SoundComposition_SoundLoop___Fields {
  struct SoundComposition_SoundLoop__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SoundComposition_SoundLoop_ {
  struct List_1_SoundComposition_SoundLoop___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SoundComposition_SoundLoop___Fields fields;
};
struct __declspec(align(8)) SoundComposition_SoundLoop__Fields {
  struct AudioClip * Sound;
  float Volume;
  struct AnimationCurve * VolumeOverTime;
};
struct SoundComposition_SoundLoop {
  struct SoundComposition_SoundLoop__Class *klass;
  struct MonitorData *monitor;
  struct SoundComposition_SoundLoop__Fields fields;
};
struct SoundComposition_SoundLoop__Array {
  struct SoundComposition_SoundLoop__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SoundComposition_SoundLoop * vector[32];
};
struct IEnumerator_1_SoundComposition_SoundLoop_ {
  struct IEnumerator_1_SoundComposition_SoundLoop___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SoundComposition_SoundLayer___Fields {
  struct SoundComposition_SoundLayer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SoundComposition_SoundLayer_ {
  struct List_1_SoundComposition_SoundLayer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SoundComposition_SoundLayer___Fields fields;
};
struct __declspec(align(8)) SoundComposition_SoundLayer__Fields {
  struct AudioClip * Sound;
  struct List_1_System_Boolean_ * LoopsToPlay;
  float Volume;
  struct AnimationCurve * VolumeOverTime;
};
struct SoundComposition_SoundLayer {
  struct SoundComposition_SoundLayer__Class *klass;
  struct MonitorData *monitor;
  struct SoundComposition_SoundLayer__Fields fields;
};
struct SoundComposition_SoundLayer__Array {
  struct SoundComposition_SoundLayer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SoundComposition_SoundLayer * vector[32];
};
struct IEnumerator_1_SoundComposition_SoundLayer_ {
  struct IEnumerator_1_SoundComposition_SoundLayer___Class *klass;
  struct MonitorData *monitor;
};
struct SoundComposition_SoundLoop__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundComposition_SoundLoop__StaticFields {
};
struct SoundComposition_SoundLoop__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundComposition_SoundLoop__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundComposition_SoundLoop__VTable vtable;
};
struct IEnumerator_1_SoundComposition_SoundLoop___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SoundComposition_SoundLoop___StaticFields {
};
struct IEnumerator_1_SoundComposition_SoundLoop___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SoundComposition_SoundLoop___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SoundComposition_SoundLoop___VTable vtable;
};
struct List_1_SoundComposition_SoundLoop___VTable {
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
struct List_1_SoundComposition_SoundLoop___StaticFields {
  struct SoundComposition_SoundLoop__Array * _emptyArray;
};
struct List_1_SoundComposition_SoundLoop___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SoundComposition_SoundLoop___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SoundComposition_SoundLoop___VTable vtable;
};
struct SoundComposition_SoundLayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundComposition_SoundLayer__StaticFields {
};
struct SoundComposition_SoundLayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundComposition_SoundLayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundComposition_SoundLayer__VTable vtable;
};
struct IEnumerator_1_SoundComposition_SoundLayer___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SoundComposition_SoundLayer___StaticFields {
};
struct IEnumerator_1_SoundComposition_SoundLayer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SoundComposition_SoundLayer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SoundComposition_SoundLayer___VTable vtable;
};
struct List_1_SoundComposition_SoundLayer___VTable {
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
struct List_1_SoundComposition_SoundLayer___StaticFields {
  struct SoundComposition_SoundLayer__Array * _emptyArray;
};
struct List_1_SoundComposition_SoundLayer___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SoundComposition_SoundLayer___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SoundComposition_SoundLayer___VTable vtable;
};
struct SoundComposition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundComposition__StaticFields {
};
struct SoundComposition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundComposition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundComposition__VTable vtable;
};
struct SetSoundCompositionAction__VTable {
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
struct SetSoundCompositionAction__StaticFields {
};
struct SetSoundCompositionAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetSoundCompositionAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetSoundCompositionAction__VTable vtable;
};

struct SoundCompositionManager__Fields {
  struct MonoBehaviour__Fields _;
  struct SoundCompositionPlayer * m_soundCompositionPlayer;
  struct SoundCompositionTransition * DefaultSilenceTransition;
};
struct SoundCompositionManager {
  struct SoundCompositionManager__Class *klass;
  struct MonitorData *monitor;
  struct SoundCompositionManager__Fields fields;
};
struct SoundCompositionPlayer__Fields {
  struct MonoBehaviour__Fields _;
  struct SoundComposition * SoundComposition;
  struct List_1_SoundPlayer_ * Layers;
  struct List_1_SoundPlayer_ * Loops;
  bool m_isPlaying;
  float m_time;
  int32_t m_loop;
  float m_loopDuration;
};
struct SoundCompositionPlayer {
  struct SoundCompositionPlayer__Class *klass;
  struct MonitorData *monitor;
  struct SoundCompositionPlayer__Fields fields;
};
struct SoundCompositionPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundCompositionPlayer__StaticFields {
};
struct SoundCompositionPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundCompositionPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundCompositionPlayer__VTable vtable;
};
struct SoundCompositionManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundCompositionManager__StaticFields {
};
struct SoundCompositionManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundCompositionManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundCompositionManager__VTable vtable;
};

struct __declspec(align(8)) SoundCompositionPlayer_c_DisplayClass12_0__Fields {
  int32_t index;
  struct SoundCompositionPlayer * __4__this;
};
struct SoundCompositionPlayer_c_DisplayClass12_0 {
  struct SoundCompositionPlayer_c_DisplayClass12_0__Class *klass;
  struct MonitorData *monitor;
  struct SoundCompositionPlayer_c_DisplayClass12_0__Fields fields;
};
struct SoundCompositionPlayer_c_DisplayClass12_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundCompositionPlayer_c_DisplayClass12_0__StaticFields {
};
struct SoundCompositionPlayer_c_DisplayClass12_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundCompositionPlayer_c_DisplayClass12_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundCompositionPlayer_c_DisplayClass12_0__VTable vtable;
};

struct SoundCompositionSoundVolumeAnimator__Fields {
  struct LegacyAnimator__Fields _;
  struct AudioClip * Sound;
};
struct SoundCompositionSoundVolumeAnimator {
  struct SoundCompositionSoundVolumeAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SoundCompositionSoundVolumeAnimator__Fields fields;
};
struct SoundCompositionSoundVolumeAnimator__VTable {
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
struct SoundCompositionSoundVolumeAnimator__StaticFields {
};
struct SoundCompositionSoundVolumeAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundCompositionSoundVolumeAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundCompositionSoundVolumeAnimator__VTable vtable;
};

struct SoundCompositionTransitionHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct SoundCompositionPlayer * From;
  struct SoundCompositionPlayer * To;
  struct SoundCompositionTransition * Transition;
  float m_time;
  struct SoundPlayer * m_transitionPlayer;
  bool m_playedTransition;
  bool m_playedNext;
};
struct SoundCompositionTransitionHandler {
  struct SoundCompositionTransitionHandler__Class *klass;
  struct MonitorData *monitor;
  struct SoundCompositionTransitionHandler__Fields fields;
};
struct SoundCompositionTransitionHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundCompositionTransitionHandler__StaticFields {
};
struct SoundCompositionTransitionHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundCompositionTransitionHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundCompositionTransitionHandler__VTable vtable;
};

struct BuilderNPC_c {
  struct BuilderNPC_c__Class *klass;
  struct MonitorData *monitor;
};
struct BuilderNPC_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BuilderNPC_c__StaticFields {
  struct BuilderNPC_c * __9;
  struct Action * __9__57_0;
  struct Action * __9__57_1;
};
struct BuilderNPC_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuilderNPC_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuilderNPC_c__VTable vtable;
};

enum CartographerNPC_State__Enum : int32_t {
  CartographerNPC_State__Enum_Idle = 0,
  CartographerNPC_State__Enum_MoveOriToPosition = 1,
  CartographerNPC_State__Enum_Purchase = 2,
  CartographerNPC_State__Enum_GiveMap = 3,
  CartographerNPC_State__Enum_DidNotBuy = 4,
  CartographerNPC_State__Enum_AfterMapBuy = 5,
  CartographerNPC_State__Enum_AlternateInteraction = 6,
};
struct CartographerNPC_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CartographerNPC_State__Enum value;
};
struct CartographerNPC__Fields {
  struct BaseNPC__Fields _;
  struct PlayerStayInsideZoneTrigger * InteractionZone;
  struct SeinAbilityRestrictZone * AbilityRestrictZone;
  float m_restrictAbilitiesTimer;
  struct LayerMask CollisionMaskCanInteract;
  struct GameWorldArea * WorldArea;
  struct ActionSequence * MapRitual;
  struct CartographerEntity * m_entity;
  struct MessageProvider * InteractionHintMessage;
  struct MessageProvider * InteractionMessageProvider;
  struct InteractionSettings * PurchaseInteraction;
  struct InteractionSettings * MapPurcahsedInteraction;
  struct MessageProvider * NoPurchaseMessageProvider;
  struct MessageProvider * AfterMapBuyMessageProvider;
  struct MessageProvider * NotEnoughMessageProvider;
  struct MessageProvider__Array * AlternateInteractionMessageProviders;
  struct SoundProvider * notEnoughSpiritLightSoundProvider;
  struct SoundProvider * purchaseSuccessSoundProvider;
  struct CameraOffsetZone * InteractionCameraOffsetZone;
  struct MoonTimeline * TalkingTimelineLeft;
  struct MoonTimeline * TalkingTimelineRight;
  struct MoonTimeline * m_currentTimeline;
  struct MoonTimeline * NoSpiritTimelineLeft;
  struct MoonTimeline * NoSpiritTimelineRight;
  struct MoonTimeline * GiveMapTimelineLeft;
  struct MoonTimeline * GiveMapTimelineRight;
  struct EventTriggerAnimator__Array * GiveMapTriggers;
  struct GameObject * MapEntityPrefab;
  struct Transform * MapBone;
  struct GameObject * ConfirmationOverlayPrefab;
  struct Locomotion * TurningHandler;
  struct Transform * OriPositionForInteractionLeft;
  struct Transform * OriPositionForInteractionRight;
  float OriPositionMoveRate;
  struct MoonAnimation * OriMoveToPositionAnimation;
  struct MoonAnimation * OriGiveMapAnimation;
  struct GroundEntityLocomotion * Locomotion;
  struct BuyMapUIConfirmationOverlay * m_confirmationOverlay;
  struct GameObject * m_mapEntity;
  enum CartographerNPC_State__Enum m_currentState;
  float m_currentStateTime;
  struct MessageBox * m_interactionHintMessageBox;
  struct RuntimeGameWorldArea * m_runtimeArea;
  bool m_moveOri;
  struct Vector2 m_oriInteractionPosition;
  bool MapIsAvailableToBuy;
  struct DynamicDataResolver * m_dataResolver;
};
struct CartographerNPC {
  struct CartographerNPC__Class *klass;
  struct MonitorData *monitor;
  struct CartographerNPC__Fields fields;
};
struct CartographerNPC__VTable {
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
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData GetResolverForType;
};
struct CartographerNPC__StaticFields {
};
struct CartographerNPC__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartographerNPC__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartographerNPC__VTable vtable;
};

struct CartographerPlaceholder__Fields {
  struct NPCEntityPlaceholder__Fields _;
  struct Blackboard * Blackboard;
};
struct CartographerPlaceholder {
  struct CartographerPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct CartographerPlaceholder__Fields fields;
};}