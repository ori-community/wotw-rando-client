namespace app {
struct RecorderPlaybackUI {
  struct RecorderPlaybackUI__Class *klass;
  struct MonitorData *monitor;
  struct RecorderPlaybackUI__Fields fields;
};
struct RecorderPlaybackUITimeline__Fields {
  struct MonoBehaviour__Fields _;
  struct Recorder_1 * Recorder;
  struct GUISkin * TimelineSkin;
  struct GUIStyle * m_background;
  struct GUIStyle * m_bar;
  struct GUIStyle * m_handle;
  struct GUIStyle * m_keyframe;
  bool m_isInitialised;
  struct List_1_System_Int32_ * Keyframes;
};
struct RecorderPlaybackUITimeline {
  struct RecorderPlaybackUITimeline__Class *klass;
  struct MonitorData *monitor;
  struct RecorderPlaybackUITimeline__Fields fields;
};
struct RecorderPlaybackUITimeline__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RecorderPlaybackUITimeline__StaticFields {
  struct RecorderPlaybackUITimeline * Instance;
};
struct RecorderPlaybackUITimeline__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderPlaybackUITimeline__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderPlaybackUITimeline__VTable vtable;
};
struct RecorderPlaybackUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RecorderPlaybackUI__StaticFields {
  struct RecorderPlaybackUI * Instance;
  struct Input_InputButtonProcessor * LeftTrigger;
  struct Input_InputButtonProcessor * RightTrigger;
};
struct RecorderPlaybackUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderPlaybackUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderPlaybackUI__VTable vtable;
};

struct __declspec(align(8)) RecorderPlaybackUI_Start_d_50__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct RecorderPlaybackUI * __4__this;
};
struct RecorderPlaybackUI_Start_d_50 {
  struct RecorderPlaybackUI_Start_d_50__Class *klass;
  struct MonitorData *monitor;
  struct RecorderPlaybackUI_Start_d_50__Fields fields;
};
struct RecorderPlaybackUI_Start_d_50__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct RecorderPlaybackUI_Start_d_50__StaticFields {
};
struct RecorderPlaybackUI_Start_d_50__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderPlaybackUI_Start_d_50__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderPlaybackUI_Start_d_50__VTable vtable;
};

struct ShowInPlaybackInspectorAttribute {
  struct ShowInPlaybackInspectorAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct ShowInPlaybackInspectorAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ShowInPlaybackInspectorAttribute__StaticFields {
};
struct ShowInPlaybackInspectorAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShowInPlaybackInspectorAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShowInPlaybackInspectorAttribute__VTable vtable;
};

struct RecorderPlaybackUIInspector__Fields {
  struct MonoBehaviour__Fields _;
  float kLabelWidth;
  float kLabelPadding;
  struct Rect inspectorPosition;
  int32_t m_CurrentFrame;
  struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ * m_dataCache;
};
struct RecorderPlaybackUIInspector {
  struct RecorderPlaybackUIInspector__Class *klass;
  struct MonitorData *monitor;
  struct RecorderPlaybackUIInspector__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
  struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct Dictionary_2_System_String_System_Reflection_FieldInfo_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields {
  struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields {
  struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields fields;
};
struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
  struct String * key;
  struct Dictionary_2_System_String_System_Reflection_FieldInfo_ * value;
};
struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Boxed {
  struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ fields;
};
struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array {
  struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable vtable;
};
struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields {
};
struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable vtable;
};
struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable {
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
struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields {
};
struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable vtable;
};
struct RecorderPlaybackUIInspector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData PlayCycle;
  VirtualInvokeData RecordCycle;
  VirtualInvokeData Exit;
};
struct RecorderPlaybackUIInspector__StaticFields {
};
struct RecorderPlaybackUIInspector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderPlaybackUIInspector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderPlaybackUIInspector__VTable vtable;
};

struct RecorderPostRender__Fields {
  struct MonoBehaviour__Fields _;
};
struct RecorderPostRender {
  struct RecorderPostRender__Class *klass;
  struct MonitorData *monitor;
  struct RecorderPostRender__Fields fields;
};
struct RecorderPostRender__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RecorderPostRender__StaticFields {
};
struct RecorderPostRender__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderPostRender__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderPostRender__VTable vtable;
};

struct RecorderTimelineManager__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * Timeline;
  bool DebugOutputEnabled;
  bool m_started;
  int32_t _OutputFrameCount_k__BackingField;
};
struct RecorderTimelineManager {
  struct RecorderTimelineManager__Class *klass;
  struct MonitorData *monitor;
  struct RecorderTimelineManager__Fields fields;
};
struct RecorderTimelineManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetTimeline;
};
struct RecorderTimelineManager__StaticFields {
  struct RecorderTimelineManager * Instance;
  int32_t FPS;
  bool m_hideUI;
};
struct RecorderTimelineManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderTimelineManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderTimelineManager__VTable vtable;
};

struct XboxControllerRenderer__Fields {
  struct MonoBehaviour__Fields _;
  struct Animator * animator;
  struct Transform * leftThumb;
  struct Transform * rightThumb;
  struct Transform * dpad;
  struct XboxControllerRenderer_ButtonContainer__Array * buttons;
};
struct XboxControllerRenderer {
  struct XboxControllerRenderer__Class *klass;
  struct MonitorData *monitor;
  struct XboxControllerRenderer__Fields fields;
};
enum XboxControllerRenderer_Button__Enum : int32_t {
  XboxControllerRenderer_Button__Enum_LT = 0,
  XboxControllerRenderer_Button__Enum_RT = 1,
  XboxControllerRenderer_Button__Enum_LB = 2,
  XboxControllerRenderer_Button__Enum_RB = 3,
  XboxControllerRenderer_Button__Enum_A = 4,
  XboxControllerRenderer_Button__Enum_B = 5,
  XboxControllerRenderer_Button__Enum_X = 6,
  XboxControllerRenderer_Button__Enum_Y = 7,
  XboxControllerRenderer_Button__Enum_Back = 8,
  XboxControllerRenderer_Button__Enum_Start = 9,
  XboxControllerRenderer_Button__Enum_LeftThumb = 10,
  XboxControllerRenderer_Button__Enum_RightThumb = 11,
};
struct XboxControllerRenderer_Button__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XboxControllerRenderer_Button__Enum value;
};
struct __declspec(align(8)) XboxControllerRenderer_ButtonContainer__Fields {
  struct String * name;
  enum XboxControllerRenderer_Button__Enum button;
  struct Renderer * renderer;
  struct Color color;
};
struct XboxControllerRenderer_ButtonContainer {
  struct XboxControllerRenderer_ButtonContainer__Class *klass;
  struct MonitorData *monitor;
  struct XboxControllerRenderer_ButtonContainer__Fields fields;
};
struct XboxControllerRenderer_ButtonContainer__Array {
  struct XboxControllerRenderer_ButtonContainer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XboxControllerRenderer_ButtonContainer * vector[32];
};
struct XboxControllerRenderer_ButtonContainer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XboxControllerRenderer_ButtonContainer__StaticFields {
};
struct XboxControllerRenderer_ButtonContainer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XboxControllerRenderer_ButtonContainer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XboxControllerRenderer_ButtonContainer__VTable vtable;
};
struct XboxControllerRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XboxControllerRenderer__StaticFields {
};
struct XboxControllerRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XboxControllerRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XboxControllerRenderer__VTable vtable;
};

struct ForceRigidBodyWakeUp__Fields {
  struct MonoBehaviour__Fields _;
};
struct ForceRigidBodyWakeUp {
  struct ForceRigidBodyWakeUp__Class *klass;
  struct MonitorData *monitor;
  struct ForceRigidBodyWakeUp__Fields fields;
};
struct ForceRigidBodyWakeUp__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ForceRigidBodyWakeUp__StaticFields {
};
struct ForceRigidBodyWakeUp__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ForceRigidBodyWakeUp__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ForceRigidBodyWakeUp__VTable vtable;
};

struct DummyGizmoTest__Fields {
  struct MonoBehaviour__Fields _;
  struct Point_1 * Target;
  struct AxisAlignedBox * Zone;
  struct AxisAlignedBox * Zone2;
};
struct DummyGizmoTest {
  struct DummyGizmoTest__Class *klass;
  struct MonitorData *monitor;
  struct DummyGizmoTest__Fields fields;
};
struct Point_1__Fields {
  struct Primitive__Fields _;
  struct Vector3 m_position;
};
struct Point_1 {
  struct Point_1__Class *klass;
  struct MonitorData *monitor;
  struct Point_1__Fields fields;
};
struct Point_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetSpace;
};
struct Point_1__StaticFields {
};
struct Point_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Point_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Point_1__VTable vtable;
};
struct DummyGizmoTest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DummyGizmoTest__StaticFields {
};
struct DummyGizmoTest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DummyGizmoTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DummyGizmoTest__VTable vtable;
};

struct OriPhysicsPostprocessTest__Fields {
  struct MonoBehaviour__Fields _;
};
struct OriPhysicsPostprocessTest {
  struct OriPhysicsPostprocessTest__Class *klass;
  struct MonitorData *monitor;
  struct OriPhysicsPostprocessTest__Fields fields;
};
struct OriPhysicsPostprocessTest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OriPhysicsPostprocessTest__StaticFields {
};
struct OriPhysicsPostprocessTest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OriPhysicsPostprocessTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OriPhysicsPostprocessTest__VTable vtable;
};

struct PetrifiedOwlRootMotionTest__Fields {
  struct MonoBehaviour__Fields _;
  struct Animator * UnityAnimator;
  struct MoonAnimator * MoonAnimator;
  struct MoonAnimation * AnimationToPlay;
};
struct PetrifiedOwlRootMotionTest {
  struct PetrifiedOwlRootMotionTest__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlRootMotionTest__Fields fields;
};
struct PetrifiedOwlRootMotionTest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PetrifiedOwlRootMotionTest__StaticFields {
};
struct PetrifiedOwlRootMotionTest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlRootMotionTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlRootMotionTest__VTable vtable;
};

struct PetrifiedOwlRootMotionTest_c {
  struct PetrifiedOwlRootMotionTest_c__Class *klass;
  struct MonitorData *monitor;
};
struct PetrifiedOwlRootMotionTest_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PetrifiedOwlRootMotionTest_c__StaticFields {
  struct PetrifiedOwlRootMotionTest_c * __9;
  struct Func_1_Boolean_ * __9__3_0;
};
struct PetrifiedOwlRootMotionTest_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlRootMotionTest_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlRootMotionTest_c__VTable vtable;
};

struct RotationTrackingChain__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * LookTarget;
  bool TrackPlayer;
  struct List_1_RotationTrackingChain_ChainEntry_ * Entries;
};
struct RotationTrackingChain {
  struct RotationTrackingChain__Class *klass;
  struct MonitorData *monitor;
  struct RotationTrackingChain__Fields fields;
};
struct __declspec(align(8)) List_1_RotationTrackingChain_ChainEntry___Fields {
  struct RotationTrackingChain_ChainEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_RotationTrackingChain_ChainEntry_ {
  struct List_1_RotationTrackingChain_ChainEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_RotationTrackingChain_ChainEntry___Fields fields;
};
struct __declspec(align(8)) RotationTrackingChain_ChainEntry__Fields {
  struct Transform * Transform;
  struct Vector3 Limits;
  float Speed;
};
struct RotationTrackingChain_ChainEntry {
  struct RotationTrackingChain_ChainEntry__Class *klass;
  struct MonitorData *monitor;
  struct RotationTrackingChain_ChainEntry__Fields fields;
};
struct RotationTrackingChain_ChainEntry__Array {
  struct RotationTrackingChain_ChainEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RotationTrackingChain_ChainEntry * vector[32];
};
struct IEnumerator_1_RotationTrackingChain_ChainEntry_ {
  struct IEnumerator_1_RotationTrackingChain_ChainEntry___Class *klass;
  struct MonitorData *monitor;
};
struct RotationTrackingChain_ChainEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RotationTrackingChain_ChainEntry__StaticFields {
};
struct RotationTrackingChain_ChainEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotationTrackingChain_ChainEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotationTrackingChain_ChainEntry__VTable vtable;
};
struct IEnumerator_1_RotationTrackingChain_ChainEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_RotationTrackingChain_ChainEntry___StaticFields {
};
struct IEnumerator_1_RotationTrackingChain_ChainEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_RotationTrackingChain_ChainEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_RotationTrackingChain_ChainEntry___VTable vtable;
};
struct List_1_RotationTrackingChain_ChainEntry___VTable {
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
struct List_1_RotationTrackingChain_ChainEntry___StaticFields {
  struct RotationTrackingChain_ChainEntry__Array * _emptyArray;
};
struct List_1_RotationTrackingChain_ChainEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_RotationTrackingChain_ChainEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_RotationTrackingChain_ChainEntry___VTable vtable;
};
struct RotationTrackingChain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RotationTrackingChain__StaticFields {
};
struct RotationTrackingChain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotationTrackingChain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotationTrackingChain__VTable vtable;
};

struct SceneScreenshotExporter__Fields {
  struct MonoBehaviour__Fields _;
  struct String * TexturePath;
  struct String * aliasName;
  float PixelsPerUnit;
  bool HideEffects;
  bool HideCharacter;
  bool ClearAlpha;
  bool ForcePowerOfTwo;
  struct Vector3 lastPosition;
  struct Transform * rootScene;
  int32_t maxSections;
  int32_t sections;
  struct List_1_System_Single_ * bordersDepth;
  struct List_1_System_Single_ * sectionsScale;
  bool DebugLeakCamera;
  int32_t previewLayer;
  int32_t lastLayerPreviwed;
  bool togglePreview;
  bool previuseToggleState;
  struct List_1_UnityEngine_GameObject_ * tempHiddenObjects;
};
struct SceneScreenshotExporter {
  struct SceneScreenshotExporter__Class *klass;
  struct MonitorData *monitor;
  struct SceneScreenshotExporter__Fields fields;
};
struct SceneScreenshotExporter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData DoStrip;
};
struct SceneScreenshotExporter__StaticFields {
};
struct SceneScreenshotExporter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneScreenshotExporter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneScreenshotExporter__VTable vtable;
};

enum SeinTrajectory_JumpType__Enum : int32_t {
  SeinTrajectory_JumpType__Enum_Jump = 0,
  SeinTrajectory_JumpType__Enum_WallJump = 1,
  SeinTrajectory_JumpType__Enum_None = 2,
};
struct SeinTrajectory_JumpType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinTrajectory_JumpType__Enum value;
};
struct SeinTrajectory__Fields {
  struct MonoBehaviour__Fields _;
  enum SeinTrajectory_JumpType__Enum Jump;
  float JumpingTime;
  float JumpingDuration;
  bool DoubleJump;
  float DoubleJumpTime;
  float RunningForwardTime;
  float RunningForwardDuration;
  float RunningBackwardTime;
  float RunningBackwardDuration;
  float StartSpeed;
  float TotalTime;
  bool Left;
  bool WallSlide;
  float WallSlideTime;
  float WallSlideDuration;
  struct Vector2 WallJump;
};
struct SeinTrajectory {
  struct SeinTrajectory__Class *klass;
  struct MonitorData *monitor;
  struct SeinTrajectory__Fields fields;
};
struct SeinTrajectory__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinTrajectory__StaticFields {
};
struct SeinTrajectory__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinTrajectory__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinTrajectory__VTable vtable;
};

struct ColorVariationRootGroup__Fields {
  struct MonoBehaviour__Fields _;
};
struct ColorVariationRootGroup {
  struct ColorVariationRootGroup__Class *klass;
  struct MonitorData *monitor;
  struct ColorVariationRootGroup__Fields fields;
};
struct ColorVariationRootGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ColorVariationRootGroup__StaticFields {
};
struct ColorVariationRootGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorVariationRootGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorVariationRootGroup__VTable vtable;
};

struct ShadowEmitter__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * Graphics;
  float GroundDistanceThreshold;
  struct AnimationCurve * ScaleX;
  struct AnimationCurve * ScaleY;
  float MaxScaleX;
  float MaxScaleY;
  bool RotateWithSurface;
  struct Transform * ReferencePointA;
  struct Transform * ReferencePointB;
  bool InvertFlip;
  struct Transform * CastAnchor;
  float CastLength;
  struct Vector3 CastDirection;
  bool CastAtZeroZ;
  bool DrawGizmos;
  struct Vector3 ShadowPosition;
  struct Vector3 ShadowNormal;
  float ShadowYRotation;
  struct Transform * GroundAnchor;
  struct Transform * PerspectiveAnchor;
  struct RaycastHit__Array * m_groundRaycastHits;
  struct Renderer__Array * m_renderers;
  int32_t m_castRequestID;
};
struct ShadowEmitter {
  struct ShadowEmitter__Class *klass;
  struct MonitorData *monitor;
  struct ShadowEmitter__Fields fields;
};
struct ShadowEmitter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShadowEmitter__StaticFields {
};
struct ShadowEmitter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShadowEmitter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShadowEmitter__VTable vtable;
};

struct HasPurchasedMapPinCondition__Fields {
  struct Condition_1__Fields _;
  bool Inverse;
};
struct HasPurchasedMapPinCondition {
  struct HasPurchasedMapPinCondition__Class *klass;
  struct MonitorData *monitor;
  struct HasPurchasedMapPinCondition__Fields fields;
};
struct HasPurchasedMapPinCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};}