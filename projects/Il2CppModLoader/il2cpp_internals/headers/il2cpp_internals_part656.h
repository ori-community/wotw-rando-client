namespace app {
struct PoolAnalyzeToggler__StaticFields {
};
struct PoolAnalyzeToggler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PoolAnalyzeToggler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PoolAnalyzeToggler__VTable vtable;
};

struct PoolToggler__Fields {
  struct MonoBehaviour__Fields _;
  bool m_doPool;
};
struct PoolToggler {
  struct PoolToggler__Class *klass;
  struct MonitorData *monitor;
  struct PoolToggler__Fields fields;
};
struct PoolToggler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_HelpText;
  VirtualInvokeData get_ToggleOptions;
  VirtualInvokeData get_CurrentToggleOptionId;
  VirtualInvokeData set_CurrentToggleOptionId;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_Path;
  VirtualInvokeData get_Column;
};
struct PoolToggler__StaticFields {
};
struct PoolToggler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PoolToggler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PoolToggler__VTable vtable;
};

struct SceneFrameworkDebugger__Fields {
  struct MonoBehaviour__Fields _;
  float m_lastRenderStringUpdate;
  struct List_1_System_Tuple_2__1 * m_history;
  struct String * m_renderString;
  bool m_imGuiRegistered;
  struct GUIStyle * m_labelStyle;
  bool m_forceTextUpdate;
  struct String * m_loadingColor;
  struct String * m_loadedColor;
  struct String * m_enabledColor;
  struct String * m_disabledColor;
  struct String * m_fallbackColor;
  struct String * m_loadingCancelledColor;
  struct String * m_noBoostColor;
  struct String * m_boostColor;
  struct String * m_criticalColor;
};
struct SceneFrameworkDebugger {
  struct SceneFrameworkDebugger__Class *klass;
  struct MonitorData *monitor;
  struct SceneFrameworkDebugger__Fields fields;
};
struct SceneFrameworkDebugger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneFrameworkDebugger__StaticFields {
  struct SceneFrameworkDebugger * m_instance;
};
struct SceneFrameworkDebugger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneFrameworkDebugger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneFrameworkDebugger__VTable vtable;
};

enum LoadingBoostController_BoostModeLevel__Enum : int32_t {
  LoadingBoostController_BoostModeLevel__Enum_Boot = 0,
  LoadingBoostController_BoostModeLevel__Enum_ShaderPrewarm = 1,
  LoadingBoostController_BoostModeLevel__Enum_Off = 2,
  LoadingBoostController_BoostModeLevel__Enum_On = 3,
  LoadingBoostController_BoostModeLevel__Enum_Critical = 4,
  LoadingBoostController_BoostModeLevel__Enum_OffLow = 5,
  LoadingBoostController_BoostModeLevel__Enum_Editor = 6,
};
struct LoadingBoostController_BoostModeLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LoadingBoostController_BoostModeLevel__Enum value;
};

struct SceneFrameworkDebugger_c {
  struct SceneFrameworkDebugger_c__Class *klass;
  struct MonitorData *monitor;
};
struct SceneFrameworkDebugger_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SceneFrameworkDebugger_c__StaticFields {
  struct SceneFrameworkDebugger_c * __9;
  struct Func_2_Tuple_2_String_Single_Single_ * __9__32_1;
  struct Predicate_1_Tuple_2_String_Single_ * __9__32_0;
};
struct SceneFrameworkDebugger_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SceneFrameworkDebugger_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SceneFrameworkDebugger_c__VTable vtable;
};

struct __declspec(align(8)) SearchDebugMenuItem__Fields {
  struct String * _Path_k__BackingField;
  struct String * _Text_k__BackingField;
  struct String * _HelpText_k__BackingField;
  struct String * m_lastText;
  struct String * m_focus;
  struct List_1_IDebugMenuItem_ * m_results;
  struct List_1_System_String_ * m_searchTerms;
  struct Func_1_String_ * _DynamicText_k__BackingField;
};
struct SearchDebugMenuItem {
  struct SearchDebugMenuItem__Class *klass;
  struct MonitorData *monitor;
  struct SearchDebugMenuItem__Fields fields;
};
struct SearchDebugMenuItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData set_Path;
  VirtualInvokeData get_Text;
  VirtualInvokeData set_Text;
  VirtualInvokeData get_HelpText;
  VirtualInvokeData set_HelpText;
  VirtualInvokeData Draw;
  VirtualInvokeData OnSelected;
  VirtualInvokeData OnSelectedUpdate;
  VirtualInvokeData OnSelectedFixedUpdate;
  VirtualInvokeData get_DynamicText;
};
struct SearchDebugMenuItem__StaticFields {
};
struct SearchDebugMenuItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SearchDebugMenuItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SearchDebugMenuItem__VTable vtable;
};

struct SearchDebugMenuItem_c {
  struct SearchDebugMenuItem_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_IDebugMenuItem___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_IDebugMenuItem_ {
  struct Comparison_1_IDebugMenuItem___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_IDebugMenuItem___Fields fields;
};
struct Comparison_1_IDebugMenuItem___VTable {
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
struct Comparison_1_IDebugMenuItem___StaticFields {
};
struct Comparison_1_IDebugMenuItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_IDebugMenuItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_IDebugMenuItem___VTable vtable;
};
struct SearchDebugMenuItem_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SearchDebugMenuItem_c__StaticFields {
  struct SearchDebugMenuItem_c * __9;
  struct Comparison_1_IDebugMenuItem_ * __9__21_0;
};
struct SearchDebugMenuItem_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SearchDebugMenuItem_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SearchDebugMenuItem_c__VTable vtable;
};

struct SeinLevelUpDownDebugMenuItem__Fields {
  struct FloatDebugMenuItem__Fields _;
};
struct SeinLevelUpDownDebugMenuItem {
  struct SeinLevelUpDownDebugMenuItem__Class *klass;
  struct MonitorData *monitor;
  struct SeinLevelUpDownDebugMenuItem__Fields fields;
};
struct SeinLevelUpDownDebugMenuItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData set_Path;
  VirtualInvokeData get_Text;
  VirtualInvokeData set_Text;
  VirtualInvokeData get_HelpText;
  VirtualInvokeData set_HelpText;
  VirtualInvokeData Draw;
  VirtualInvokeData OnSelected;
  VirtualInvokeData OnSelectedUpdate;
  VirtualInvokeData OnSelectedFixedUpdate;
  VirtualInvokeData get_DynamicText;
  VirtualInvokeData OnSelectedUpdate_1;
  VirtualInvokeData OnSelectedFixedUpdate_1;
  VirtualInvokeData IncrementValue;
};
struct SeinLevelUpDownDebugMenuItem__StaticFields {
};
struct SeinLevelUpDownDebugMenuItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinLevelUpDownDebugMenuItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinLevelUpDownDebugMenuItem__VTable vtable;
};

struct SeinSkillUpDownDebugMenuItem__Fields {
  struct FloatDebugMenuItem__Fields _;
};
struct SeinSkillUpDownDebugMenuItem {
  struct SeinSkillUpDownDebugMenuItem__Class *klass;
  struct MonitorData *monitor;
  struct SeinSkillUpDownDebugMenuItem__Fields fields;
};
struct SeinSkillUpDownDebugMenuItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData set_Path;
  VirtualInvokeData get_Text;
  VirtualInvokeData set_Text;
  VirtualInvokeData get_HelpText;
  VirtualInvokeData set_HelpText;
  VirtualInvokeData Draw;
  VirtualInvokeData OnSelected;
  VirtualInvokeData OnSelectedUpdate;
  VirtualInvokeData OnSelectedFixedUpdate;
  VirtualInvokeData get_DynamicText;
  VirtualInvokeData OnSelectedUpdate_1;
  VirtualInvokeData OnSelectedFixedUpdate_1;
  VirtualInvokeData IncrementValue;
};
struct SeinSkillUpDownDebugMenuItem__StaticFields {
};
struct SeinSkillUpDownDebugMenuItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinSkillUpDownDebugMenuItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinSkillUpDownDebugMenuItem__VTable vtable;
};

struct SplitFlameMenuItem__Fields {
  struct FloatDebugMenuItem__Fields _;
};
struct SplitFlameMenuItem {
  struct SplitFlameMenuItem__Class *klass;
  struct MonitorData *monitor;
  struct SplitFlameMenuItem__Fields fields;
};
struct SplitFlameMenuItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData set_Path;
  VirtualInvokeData get_Text;
  VirtualInvokeData set_Text;
  VirtualInvokeData get_HelpText;
  VirtualInvokeData set_HelpText;
  VirtualInvokeData Draw;
  VirtualInvokeData OnSelected;
  VirtualInvokeData OnSelectedUpdate;
  VirtualInvokeData OnSelectedFixedUpdate;
  VirtualInvokeData get_DynamicText;
  VirtualInvokeData OnSelectedUpdate_1;
  VirtualInvokeData OnSelectedFixedUpdate_1;
  VirtualInvokeData IncrementValue;
};
struct SplitFlameMenuItem__StaticFields {
};
struct SplitFlameMenuItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SplitFlameMenuItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SplitFlameMenuItem__VTable vtable;
};

struct TimeScaleDebugMenuItem__Fields {
  struct FloatDebugMenuItem__Fields _;
};
struct TimeScaleDebugMenuItem {
  struct TimeScaleDebugMenuItem__Class *klass;
  struct MonitorData *monitor;
  struct TimeScaleDebugMenuItem__Fields fields;
};
struct TimeScaleDebugMenuItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData set_Path;
  VirtualInvokeData get_Text;
  VirtualInvokeData set_Text;
  VirtualInvokeData get_HelpText;
  VirtualInvokeData set_HelpText;
  VirtualInvokeData Draw;
  VirtualInvokeData OnSelected;
  VirtualInvokeData OnSelectedUpdate;
  VirtualInvokeData OnSelectedFixedUpdate;
  VirtualInvokeData get_DynamicText;
  VirtualInvokeData OnSelectedUpdate_1;
  VirtualInvokeData OnSelectedFixedUpdate_1;
  VirtualInvokeData IncrementValue;
};
struct TimeScaleDebugMenuItem__StaticFields {
};
struct TimeScaleDebugMenuItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeScaleDebugMenuItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeScaleDebugMenuItem__VTable vtable;
};

struct TimeSlicedAwakeBudgetMenuItem__Fields {
  struct FloatDebugMenuItem__Fields _;
};
struct TimeSlicedAwakeBudgetMenuItem {
  struct TimeSlicedAwakeBudgetMenuItem__Class *klass;
  struct MonitorData *monitor;
  struct TimeSlicedAwakeBudgetMenuItem__Fields fields;
};
struct TimeSlicedAwakeBudgetMenuItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData set_Path;
  VirtualInvokeData get_Text;
  VirtualInvokeData set_Text;
  VirtualInvokeData get_HelpText;
  VirtualInvokeData set_HelpText;
  VirtualInvokeData Draw;
  VirtualInvokeData OnSelected;
  VirtualInvokeData OnSelectedUpdate;
  VirtualInvokeData OnSelectedFixedUpdate;
  VirtualInvokeData get_DynamicText;
  VirtualInvokeData OnSelectedUpdate_1;
  VirtualInvokeData OnSelectedFixedUpdate_1;
  VirtualInvokeData IncrementValue;
};
struct TimeSlicedAwakeBudgetMenuItem__StaticFields {
};
struct TimeSlicedAwakeBudgetMenuItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeSlicedAwakeBudgetMenuItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeSlicedAwakeBudgetMenuItem__VTable vtable;
};

struct ToggleAllKinematic__Fields {
  struct MonoBehaviour__Fields _;
  int32_t m_currentOption;
  struct List_1_UnityEngine_Rigidbody_ * m_modifiedRigidBodies;
};
struct ToggleAllKinematic {
  struct ToggleAllKinematic__Class *klass;
  struct MonitorData *monitor;
  struct ToggleAllKinematic__Fields fields;
};
struct ToggleAllKinematic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_HelpText;
  VirtualInvokeData get_ToggleOptions;
  VirtualInvokeData get_CurrentToggleOptionId;
  VirtualInvokeData set_CurrentToggleOptionId;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_Path;
  VirtualInvokeData get_Column;
};
struct ToggleAllKinematic__StaticFields {
};
struct ToggleAllKinematic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ToggleAllKinematic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ToggleAllKinematic__VTable vtable;
};

struct UberShaderDetector__Fields {
  struct MonoBehaviour__Fields _;
  struct Dictionary_2_System_String_System_Single_ * m_found;
  struct HashSet_1_System_String_ * m_instantiationsChecked;
  float m_lastRenderStringUpdate;
  struct String * m_renderString;
  bool m_imGuiRegistered;
  struct GUIStyle * m_labelStyle;
  bool m_forceTextUpdate;
};
struct UberShaderDetector {
  struct UberShaderDetector__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderDetector__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Single___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Single_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Single_ {
  struct Dictionary_2_System_String_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Single___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  float value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single___Fields {
  struct Dictionary_2_System_String_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Single___Fields {
  struct Dictionary_2_System_String_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Single_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Single___Fields fields;
};
struct KeyValuePair_2_System_String_System_Single_ {
  struct String * key;
  float value;
};
struct KeyValuePair_2_System_String_System_Single___Boxed {
  struct KeyValuePair_2_System_String_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Single_ fields;
};
struct KeyValuePair_2_System_String_System_Single___Array {
  struct KeyValuePair_2_System_String_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Single_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Single_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Single___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Single___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Single___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Single___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Single___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Single___VTable vtable;
};
struct KeyValuePair_2_System_String_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_String_System_Single___StaticFields {
};
struct KeyValuePair_2_System_String_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_String_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_String_System_Single___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Single___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Single___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Single___VTable vtable;
};
struct Dictionary_2_System_String_System_Single___VTable {
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
struct Dictionary_2_System_String_System_Single___StaticFields {
};
struct Dictionary_2_System_String_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_String_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_String_System_Single___VTable vtable;
};
struct UberShaderDetector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderDetector__StaticFields {
  struct UberShaderDetector * m_instance;
};
struct UberShaderDetector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderDetector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderDetector__VTable vtable;
};

struct VSyncToggler__Fields {
  struct MonoBehaviour__Fields _;
  int32_t m_currentOption;
};
struct VSyncToggler {
  struct VSyncToggler__Class *klass;
  struct MonitorData *monitor;
  struct VSyncToggler__Fields fields;
};
struct VSyncToggler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_HelpText;
  VirtualInvokeData get_ToggleOptions;
  VirtualInvokeData get_CurrentToggleOptionId;
  VirtualInvokeData set_CurrentToggleOptionId;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_Path;
  VirtualInvokeData get_Column;
};
struct VSyncToggler__StaticFields {
};
struct VSyncToggler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VSyncToggler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VSyncToggler__VTable vtable;
};

struct __declspec(align(8)) YouCanLeaveYourHatOn_Data__Fields {
  struct String * Type;
  struct List_1_System_String_ * Names;
};
struct YouCanLeaveYourHatOn_Data {
  struct YouCanLeaveYourHatOn_Data__Class *klass;
  struct MonitorData *monitor;
  struct YouCanLeaveYourHatOn_Data__Fields fields;
};
struct YouCanLeaveYourHatOn_Data__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct YouCanLeaveYourHatOn_Data__StaticFields {
};
struct YouCanLeaveYourHatOn_Data__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct YouCanLeaveYourHatOn_Data__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct YouCanLeaveYourHatOn_Data__VTable vtable;
};

struct __declspec(align(8)) YouCanLeaveYourHatOn_AssetWithSize__Fields {
  struct Object_1 * Asset;
  int32_t Size;
};
struct YouCanLeaveYourHatOn_AssetWithSize {
  struct YouCanLeaveYourHatOn_AssetWithSize__Class *klass;
  struct MonitorData *monitor;
  struct YouCanLeaveYourHatOn_AssetWithSize__Fields fields;
};
struct YouCanLeaveYourHatOn_AssetWithSize__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct YouCanLeaveYourHatOn_AssetWithSize__StaticFields {
};
struct YouCanLeaveYourHatOn_AssetWithSize__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct YouCanLeaveYourHatOn_AssetWithSize__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct YouCanLeaveYourHatOn_AssetWithSize__VTable vtable;
};

struct __declspec(align(8)) YouCanLeaveYourHatOn_c_DisplayClass5_0__Fields {
  struct String * type;
};
struct YouCanLeaveYourHatOn_c_DisplayClass5_0 {
  struct YouCanLeaveYourHatOn_c_DisplayClass5_0__Class *klass;
  struct MonitorData *monitor;
  struct YouCanLeaveYourHatOn_c_DisplayClass5_0__Fields fields;
};
struct YouCanLeaveYourHatOn_c_DisplayClass5_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct YouCanLeaveYourHatOn_c_DisplayClass5_0__StaticFields {
};
struct YouCanLeaveYourHatOn_c_DisplayClass5_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct YouCanLeaveYourHatOn_c_DisplayClass5_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct YouCanLeaveYourHatOn_c_DisplayClass5_0__VTable vtable;
};

struct YouCanLeaveYourHatOn_c {
  struct YouCanLeaveYourHatOn_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_YouCanLeaveYourHatOn_Data___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_YouCanLeaveYourHatOn_Data_ {
  struct Comparison_1_YouCanLeaveYourHatOn_Data___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_YouCanLeaveYourHatOn_Data___Fields fields;
};
struct Comparison_1_YouCanLeaveYourHatOn_AssetWithSize___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_YouCanLeaveYourHatOn_AssetWithSize_ {
  struct Comparison_1_YouCanLeaveYourHatOn_AssetWithSize___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_YouCanLeaveYourHatOn_AssetWithSize___Fields fields;
};
struct Comparison_1_YouCanLeaveYourHatOn_Data___VTable {
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
struct Comparison_1_YouCanLeaveYourHatOn_Data___StaticFields {
};
struct Comparison_1_YouCanLeaveYourHatOn_Data___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_YouCanLeaveYourHatOn_Data___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_YouCanLeaveYourHatOn_Data___VTable vtable;
};
struct Comparison_1_YouCanLeaveYourHatOn_AssetWithSize___VTable {
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
struct Comparison_1_YouCanLeaveYourHatOn_AssetWithSize___StaticFields {
};
struct Comparison_1_YouCanLeaveYourHatOn_AssetWithSize___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_YouCanLeaveYourHatOn_AssetWithSize___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_YouCanLeaveYourHatOn_AssetWithSize___VTable vtable;
};
struct YouCanLeaveYourHatOn_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct YouCanLeaveYourHatOn_c__StaticFields {
  struct YouCanLeaveYourHatOn_c * __9;
  struct Comparison_1_YouCanLeaveYourHatOn_Data_ * __9__5_0;
  struct Comparison_1_YouCanLeaveYourHatOn_AssetWithSize_ * __9__5_2;
  struct Comparison_1_YouCanLeaveYourHatOn_AssetWithSize_ * __9__5_3;
};
struct YouCanLeaveYourHatOn_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct YouCanLeaveYourHatOn_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct YouCanLeaveYourHatOn_c__VTable vtable;
};

struct ZoomDebugMenuItem__Fields {
  struct FloatDebugMenuItem__Fields _;
};
struct ZoomDebugMenuItem {
  struct ZoomDebugMenuItem__Class *klass;
  struct MonitorData *monitor;
  struct ZoomDebugMenuItem__Fields fields;
};
struct ZoomDebugMenuItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Path;
  VirtualInvokeData set_Path;
  VirtualInvokeData get_Text;
  VirtualInvokeData set_Text;
  VirtualInvokeData get_HelpText;
  VirtualInvokeData set_HelpText;
  VirtualInvokeData Draw;
  VirtualInvokeData OnSelected;
  VirtualInvokeData OnSelectedUpdate;
  VirtualInvokeData OnSelectedFixedUpdate;
  VirtualInvokeData get_DynamicText;
  VirtualInvokeData OnSelectedUpdate_1;
  VirtualInvokeData OnSelectedFixedUpdate_1;
  VirtualInvokeData IncrementValue;
};
struct ZoomDebugMenuItem__StaticFields {
};
struct ZoomDebugMenuItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ZoomDebugMenuItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ZoomDebugMenuItem__VTable vtable;
};

struct ObjectProfilerViewer__Fields {
  struct MonoBehaviour__Fields _;
};
struct ObjectProfilerViewer {
  struct ObjectProfilerViewer__Class *klass;
  struct MonitorData *monitor;
  struct ObjectProfilerViewer__Fields fields;
};
struct ObjectProfilerViewer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ObjectProfilerViewer__StaticFields {
};
struct ObjectProfilerViewer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectProfilerViewer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectProfilerViewer__VTable vtable;
};

struct AdvancedDebugMenuPage__Fields {
  struct MonoBehaviour__Fields _;
  struct String * m_name;
  bool m_highFPSPhysics;
  bool m_superSlowMotion;
  bool m_imguiForceEnabled;
  bool m_showMeshTrailDebug;
  bool m_showAchievementDebug;
  bool m_showEnemyDebug;
  bool m_showWormDebug;
  int32_t m_stressTestStartScene;
  struct DebugPlayerTeleporter * m_debugPlayerTeleporter;
};}