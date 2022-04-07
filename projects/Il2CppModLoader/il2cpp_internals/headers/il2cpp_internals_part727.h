namespace app {
struct UberUIPostProcess__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberUIPostProcess__StaticFields {
  struct UberUIPostProcess * _Instance_k__BackingField;
};
struct UberUIPostProcess__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberUIPostProcess__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberUIPostProcess__VTable vtable;
};

struct __declspec(align(8)) ObjectReference__Fields {
  struct String * Guid;
  struct String * Type;
};
struct ObjectReference {
  struct ObjectReference__Class *klass;
  struct MonitorData *monitor;
  struct ObjectReference__Fields fields;
};
struct ObjectReference__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ObjectReference__StaticFields {
};
struct ObjectReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectReference__VTable vtable;
};

struct __declspec(align(8)) PresetSaveComponentSettings__Fields {
  bool Saved;
  struct Dictionary_2_System_String_System_Boolean_ * ExcludePaths;
  bool Implicit;
};
struct PresetSaveComponentSettings {
  struct PresetSaveComponentSettings__Class *klass;
  struct MonitorData *monitor;
  struct PresetSaveComponentSettings__Fields fields;
};
struct PresetSaveComponentSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PresetSaveComponentSettings__StaticFields {
};
struct PresetSaveComponentSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PresetSaveComponentSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PresetSaveComponentSettings__VTable vtable;
};

struct UberPresetAsset__Fields {
  struct ScriptableObject__Fields _;
  int32_t m_version;
  struct UberPresetSerializedComponent__Array * m_serializedComponents;
  struct List_1_ObjectReference_ * m_associatedObjects;
  bool m_isFullPreset;
  bool OverrideName;
  struct String * DisplayName;
  struct String * m_metaString;
  bool m_metaIsDirty;
  struct Texture2D * m_mainTex;
  struct String * m_mainTexGUID;
  bool m_mainTexDirty;
  struct String * m_cachedName;
  bool m_nameIsDirty;
  float m_lastWidth;
  struct GUIContent * m_cachedGUIContent;
};
struct UberPresetAsset {
  struct UberPresetAsset__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetAsset__Fields fields;
};
struct __declspec(align(8)) UberPresetSerializedComponent__Fields {
  struct String * m_componentType;
  struct UberPresetSerializedComponent_ReferenceDictionary * m_refDictionary;
  struct UberPresetSerializedComponent_StringDictionary * m_stringDictionary;
  struct UberPresetSerializedComponent_FloatDictionary * m_floatDictionary;
  struct UberPresetSerializedComponent_IntDictionary * m_intDictionary;
  struct UberPresetSerializedComponent_BoolDictionary * m_boolDictionary;
  struct UberPresetSerializedComponent_AnimationCurveDictionary * m_curveDictionary;
  struct UberPresetSerializedComponent_ColorDictionary * m_colorDictionary;
  struct UberPresetSerializedComponent_QuaternionDictionary * m_quaternionDictionary;
  struct UberPresetSerializedComponent_Vector2Dictionary * m_vector2Dictionary;
  struct UberPresetSerializedComponent_Vector3Dictionary * m_vector3Dictionary;
  struct UberPresetSerializedComponent_Vector4Dictionary * m_vector4Dictionary;
  bool Implicit;
};
struct UberPresetSerializedComponent {
  struct UberPresetSerializedComponent__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent__Fields fields;
};
struct UberPresetSerializedComponent__Array {
  struct UberPresetSerializedComponent__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberPresetSerializedComponent * vector[32];
};
struct UberPresetSerializedComponent_ReferenceDictionary__Fields {
  struct UberShaderDictionary_2_System_String_System_String___Fields _;
};
struct UberPresetSerializedComponent_ReferenceDictionary {
  struct UberPresetSerializedComponent_ReferenceDictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent_ReferenceDictionary__Fields fields;
};
struct UberPresetSerializedComponent_StringDictionary__Fields {
  struct UberShaderDictionary_2_System_String_System_String___Fields _;
};
struct UberPresetSerializedComponent_StringDictionary {
  struct UberPresetSerializedComponent_StringDictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent_StringDictionary__Fields fields;
};
struct __declspec(align(8)) UberShaderDictionary_2_System_String_System_Single___Fields {
  struct Dictionary_2_System_String_System_Single_ * m_dictionary;
  struct List_1_System_String_ * m_keys;
  struct List_1_System_Single_ * m_values;
};
struct UberShaderDictionary_2_System_String_System_Single_ {
  struct UberShaderDictionary_2_System_String_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct UberShaderDictionary_2_System_String_System_Single___Fields fields;
};
struct UberPresetSerializedComponent_FloatDictionary__Fields {
  struct UberShaderDictionary_2_System_String_System_Single___Fields _;
};
struct UberPresetSerializedComponent_FloatDictionary {
  struct UberPresetSerializedComponent_FloatDictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent_FloatDictionary__Fields fields;
};
struct UberPresetSerializedComponent_IntDictionary__Fields {
  struct UberShaderDictionary_2_System_String_System_Int32___Fields _;
};
struct UberPresetSerializedComponent_IntDictionary {
  struct UberPresetSerializedComponent_IntDictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent_IntDictionary__Fields fields;
};
struct __declspec(align(8)) UberShaderDictionary_2_System_String_System_Boolean___Fields {
  struct Dictionary_2_System_String_System_Boolean_ * m_dictionary;
  struct List_1_System_String_ * m_keys;
  struct List_1_System_Boolean_ * m_values;
};
struct UberShaderDictionary_2_System_String_System_Boolean_ {
  struct UberShaderDictionary_2_System_String_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct UberShaderDictionary_2_System_String_System_Boolean___Fields fields;
};
struct UberPresetSerializedComponent_BoolDictionary__Fields {
  struct UberShaderDictionary_2_System_String_System_Boolean___Fields _;
};
struct UberPresetSerializedComponent_BoolDictionary {
  struct UberPresetSerializedComponent_BoolDictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent_BoolDictionary__Fields fields;
};
struct __declspec(align(8)) UberShaderDictionary_2_System_String_UnityEngine_AnimationCurve___Fields {
  struct Dictionary_2_System_String_UnityEngine_AnimationCurve_ * m_dictionary;
  struct List_1_System_String_ * m_keys;
  struct List_1_UnityEngine_AnimationCurve_ * m_values;
};
struct UberShaderDictionary_2_System_String_UnityEngine_AnimationCurve_ {
  struct UberShaderDictionary_2_System_String_UnityEngine_AnimationCurve___Class *klass;
  struct MonitorData *monitor;
  struct UberShaderDictionary_2_System_String_UnityEngine_AnimationCurve___Fields fields;
};
struct UberPresetSerializedComponent_AnimationCurveDictionary__Fields {
  struct UberShaderDictionary_2_System_String_UnityEngine_AnimationCurve___Fields _;
};
struct UberPresetSerializedComponent_AnimationCurveDictionary {
  struct UberPresetSerializedComponent_AnimationCurveDictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent_AnimationCurveDictionary__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_UnityEngine_AnimationCurve___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_UnityEngine_AnimationCurve_ {
  struct Dictionary_2_System_String_UnityEngine_AnimationCurve___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_UnityEngine_AnimationCurve___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct AnimationCurve * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve___Fields {
  struct Dictionary_2_System_String_UnityEngine_AnimationCurve_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve___Fields {
  struct Dictionary_2_System_String_UnityEngine_AnimationCurve_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve___Fields fields;
};
struct ICollection_1_UnityEngine_AnimationCurve_ {
  struct ICollection_1_UnityEngine_AnimationCurve___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve_ {
  struct String * key;
  struct AnimationCurve * value;
};
struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve___Boxed {
  struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve_ fields;
};
struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve___Array {
  struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_AnimationCurve_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_AnimationCurve___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_AnimationCurve_ {
  struct IEnumerable_1_UnityEngine_AnimationCurve___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) UberShaderDictionary_2_System_String_UnityEngine_Color___Fields {
  struct Dictionary_2_System_String_UnityEngine_Color_ * m_dictionary;
  struct List_1_System_String_ * m_keys;
  struct List_1_UnityEngine_Color_ * m_values;
};
struct UberShaderDictionary_2_System_String_UnityEngine_Color_ {
  struct UberShaderDictionary_2_System_String_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct UberShaderDictionary_2_System_String_UnityEngine_Color___Fields fields;
};
struct UberPresetSerializedComponent_ColorDictionary__Fields {
  struct UberShaderDictionary_2_System_String_UnityEngine_Color___Fields _;
};
struct UberPresetSerializedComponent_ColorDictionary {
  struct UberPresetSerializedComponent_ColorDictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent_ColorDictionary__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_UnityEngine_Color___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Color_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Color_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_UnityEngine_Color_ {
  struct Dictionary_2_System_String_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_UnityEngine_Color___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct Color value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Color___Fields {
  struct Dictionary_2_System_String_UnityEngine_Color_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Color_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Color___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Color___Fields {
  struct Dictionary_2_System_String_UnityEngine_Color_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Color_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Color___Fields fields;
};
struct KeyValuePair_2_System_String_UnityEngine_Color_ {
  struct String * key;
  struct Color value;
};
struct KeyValuePair_2_System_String_UnityEngine_Color___Boxed {
  struct KeyValuePair_2_System_String_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_UnityEngine_Color_ fields;
};
struct KeyValuePair_2_System_String_UnityEngine_Color___Array {
  struct KeyValuePair_2_System_String_UnityEngine_Color___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_UnityEngine_Color_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Color_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) UberShaderDictionary_2_System_String_UnityEngine_Quaternion___Fields {
  struct Dictionary_2_System_String_UnityEngine_Quaternion_ * m_dictionary;
  struct List_1_System_String_ * m_keys;
  struct List_1_UnityEngine_Quaternion_ * m_values;
};
struct UberShaderDictionary_2_System_String_UnityEngine_Quaternion_ {
  struct UberShaderDictionary_2_System_String_UnityEngine_Quaternion___Class *klass;
  struct MonitorData *monitor;
  struct UberShaderDictionary_2_System_String_UnityEngine_Quaternion___Fields fields;
};
struct UberPresetSerializedComponent_QuaternionDictionary__Fields {
  struct UberShaderDictionary_2_System_String_UnityEngine_Quaternion___Fields _;
};
struct UberPresetSerializedComponent_QuaternionDictionary {
  struct UberPresetSerializedComponent_QuaternionDictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent_QuaternionDictionary__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_UnityEngine_Quaternion___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Quaternion___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Quaternion_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Quaternion_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_UnityEngine_Quaternion_ {
  struct Dictionary_2_System_String_UnityEngine_Quaternion___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_UnityEngine_Quaternion___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Quaternion_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct Quaternion value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Quaternion___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Quaternion___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Quaternion_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Quaternion___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Quaternion___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Quaternion_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Quaternion___Fields {
  struct Dictionary_2_System_String_UnityEngine_Quaternion_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Quaternion_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Quaternion___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Quaternion___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Quaternion___Fields {
  struct Dictionary_2_System_String_UnityEngine_Quaternion_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Quaternion_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Quaternion___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Quaternion___Fields fields;
};
struct ICollection_1_UnityEngine_Quaternion_ {
  struct ICollection_1_UnityEngine_Quaternion___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_UnityEngine_Quaternion_ {
  struct String * key;
  struct Quaternion value;
};
struct KeyValuePair_2_System_String_UnityEngine_Quaternion___Boxed {
  struct KeyValuePair_2_System_String_UnityEngine_Quaternion___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_UnityEngine_Quaternion_ fields;
};
struct KeyValuePair_2_System_String_UnityEngine_Quaternion___Array {
  struct KeyValuePair_2_System_String_UnityEngine_Quaternion___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_UnityEngine_Quaternion_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Quaternion_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Quaternion___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Quaternion_ {
  struct IEnumerable_1_UnityEngine_Quaternion___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) UberShaderDictionary_2_System_String_UnityEngine_Vector2___Fields {
  struct Dictionary_2_System_String_UnityEngine_Vector2_ * m_dictionary;
  struct List_1_System_String_ * m_keys;
  struct List_1_UnityEngine_Vector2_ * m_values;
};
struct UberShaderDictionary_2_System_String_UnityEngine_Vector2_ {
  struct UberShaderDictionary_2_System_String_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct UberShaderDictionary_2_System_String_UnityEngine_Vector2___Fields fields;
};
struct UberPresetSerializedComponent_Vector2Dictionary__Fields {
  struct UberShaderDictionary_2_System_String_UnityEngine_Vector2___Fields _;
};
struct UberPresetSerializedComponent_Vector2Dictionary {
  struct UberPresetSerializedComponent_Vector2Dictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent_Vector2Dictionary__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_UnityEngine_Vector2___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector2___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector2_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector2_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_UnityEngine_Vector2_ {
  struct Dictionary_2_System_String_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_UnityEngine_Vector2___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector2_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct Vector2 value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector2___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector2_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector2___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector2___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector2_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector2___Fields {
  struct Dictionary_2_System_String_UnityEngine_Vector2_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector2_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector2___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector2___Fields {
  struct Dictionary_2_System_String_UnityEngine_Vector2_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector2_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector2___Fields fields;
};
struct ICollection_1_UnityEngine_Vector2_ {
  struct ICollection_1_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_UnityEngine_Vector2_ {
  struct String * key;
  struct Vector2 value;
};
struct KeyValuePair_2_System_String_UnityEngine_Vector2___Boxed {
  struct KeyValuePair_2_System_String_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_UnityEngine_Vector2_ fields;
};
struct KeyValuePair_2_System_String_UnityEngine_Vector2___Array {
  struct KeyValuePair_2_System_String_UnityEngine_Vector2___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_UnityEngine_Vector2_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Vector2_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) UberShaderDictionary_2_System_String_UnityEngine_Vector3___Fields {
  struct Dictionary_2_System_String_UnityEngine_Vector3_ * m_dictionary;
  struct List_1_System_String_ * m_keys;
  struct List_1_UnityEngine_Vector3_ * m_values;
};
struct UberShaderDictionary_2_System_String_UnityEngine_Vector3_ {
  struct UberShaderDictionary_2_System_String_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct UberShaderDictionary_2_System_String_UnityEngine_Vector3___Fields fields;
};
struct UberPresetSerializedComponent_Vector3Dictionary__Fields {
  struct UberShaderDictionary_2_System_String_UnityEngine_Vector3___Fields _;
};
struct UberPresetSerializedComponent_Vector3Dictionary {
  struct UberPresetSerializedComponent_Vector3Dictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent_Vector3Dictionary__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_UnityEngine_Vector3___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector3___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector3_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector3_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_UnityEngine_Vector3_ {
  struct Dictionary_2_System_String_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_UnityEngine_Vector3___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector3_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct Vector3 value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector3___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector3_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector3___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector3___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector3_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector3___Fields {
  struct Dictionary_2_System_String_UnityEngine_Vector3_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector3_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector3___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector3___Fields {
  struct Dictionary_2_System_String_UnityEngine_Vector3_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector3_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector3___Fields fields;
};
struct ICollection_1_UnityEngine_Vector3_ {
  struct ICollection_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_UnityEngine_Vector3_ {
  struct String * key;
  struct Vector3 value;
};
struct KeyValuePair_2_System_String_UnityEngine_Vector3___Boxed {
  struct KeyValuePair_2_System_String_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_UnityEngine_Vector3_ fields;
};
struct KeyValuePair_2_System_String_UnityEngine_Vector3___Array {
  struct KeyValuePair_2_System_String_UnityEngine_Vector3___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_UnityEngine_Vector3_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Vector3_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Vector3_ {
  struct IEnumerable_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) UberShaderDictionary_2_System_String_UnityEngine_Vector4___Fields {
  struct Dictionary_2_System_String_UnityEngine_Vector4_ * m_dictionary;
  struct List_1_System_String_ * m_keys;
  struct List_1_UnityEngine_Vector4_ * m_values;
};
struct UberShaderDictionary_2_System_String_UnityEngine_Vector4_ {
  struct UberShaderDictionary_2_System_String_UnityEngine_Vector4___Class *klass;
  struct MonitorData *monitor;
  struct UberShaderDictionary_2_System_String_UnityEngine_Vector4___Fields fields;
};
struct UberPresetSerializedComponent_Vector4Dictionary__Fields {
  struct UberShaderDictionary_2_System_String_UnityEngine_Vector4___Fields _;
};
struct UberPresetSerializedComponent_Vector4Dictionary {
  struct UberPresetSerializedComponent_Vector4Dictionary__Class *klass;
  struct MonitorData *monitor;
  struct UberPresetSerializedComponent_Vector4Dictionary__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_UnityEngine_Vector4___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector4___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector4_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector4_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_UnityEngine_Vector4_ {
  struct Dictionary_2_System_String_UnityEngine_Vector4___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_UnityEngine_Vector4___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector4_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct Vector4 value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector4___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector4___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector4_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector4___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector4___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Vector4_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector4___Fields {
  struct Dictionary_2_System_String_UnityEngine_Vector4_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector4_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector4___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Vector4___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector4___Fields {
  struct Dictionary_2_System_String_UnityEngine_Vector4_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector4_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector4___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Vector4___Fields fields;
};
struct ICollection_1_UnityEngine_Vector4_ {
  struct ICollection_1_UnityEngine_Vector4___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_UnityEngine_Vector4_ {
  struct String * key;
  struct Vector4 value;
};
struct KeyValuePair_2_System_String_UnityEngine_Vector4___Boxed {
  struct KeyValuePair_2_System_String_UnityEngine_Vector4___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_UnityEngine_Vector4_ fields;
};
struct KeyValuePair_2_System_String_UnityEngine_Vector4___Array {
  struct KeyValuePair_2_System_String_UnityEngine_Vector4___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_UnityEngine_Vector4_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Vector4_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_Vector4___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Vector4_ {
  struct IEnumerable_1_UnityEngine_Vector4___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ObjectReference___Fields {
  struct ObjectReference__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ObjectReference_ {
  struct List_1_ObjectReference___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ObjectReference___Fields fields;
};
struct ObjectReference__Array {
  struct ObjectReference__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ObjectReference * vector[32];
};
struct IEnumerator_1_ObjectReference_ {
  struct IEnumerator_1_ObjectReference___Class *klass;
  struct MonitorData *monitor;
};
struct UberPresetSerializedComponent_ReferenceDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct UberPresetSerializedComponent_ReferenceDictionary__StaticFields {
};
struct UberPresetSerializedComponent_ReferenceDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberPresetSerializedComponent_ReferenceDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberPresetSerializedComponent_ReferenceDictionary__VTable vtable;
};
struct UberPresetSerializedComponent_StringDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct UberPresetSerializedComponent_StringDictionary__StaticFields {
};
struct UberPresetSerializedComponent_StringDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberPresetSerializedComponent_StringDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberPresetSerializedComponent_StringDictionary__VTable vtable;
};
struct UberShaderDictionary_2_System_String_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct UberShaderDictionary_2_System_String_System_Single___StaticFields {
};
struct UberShaderDictionary_2_System_String_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderDictionary_2_System_String_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderDictionary_2_System_String_System_Single___VTable vtable;
};
struct UberPresetSerializedComponent_FloatDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct UberPresetSerializedComponent_FloatDictionary__StaticFields {
};
struct UberPresetSerializedComponent_FloatDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberPresetSerializedComponent_FloatDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberPresetSerializedComponent_FloatDictionary__VTable vtable;
};
struct UberPresetSerializedComponent_IntDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct UberPresetSerializedComponent_IntDictionary__StaticFields {
};
struct UberPresetSerializedComponent_IntDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberPresetSerializedComponent_IntDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberPresetSerializedComponent_IntDictionary__VTable vtable;
};
struct UberShaderDictionary_2_System_String_System_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct UberShaderDictionary_2_System_String_System_Boolean___StaticFields {
};
struct UberShaderDictionary_2_System_String_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderDictionary_2_System_String_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderDictionary_2_System_String_System_Boolean___VTable vtable;
};
struct UberPresetSerializedComponent_BoolDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TK_TV___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};
struct UberPresetSerializedComponent_BoolDictionary__StaticFields {
};
struct UberPresetSerializedComponent_BoolDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberPresetSerializedComponent_BoolDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberPresetSerializedComponent_BoolDictionary__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve___VTable vtable;
};
struct ICollection_1_UnityEngine_AnimationCurve___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_AnimationCurve___StaticFields {
};}