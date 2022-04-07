namespace app {
struct GUILayoutGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_marginLeft;
  VirtualInvokeData get_marginRight;
  VirtualInvokeData get_marginTop;
  VirtualInvokeData get_marginBottom;
  VirtualInvokeData CalcWidth;
  VirtualInvokeData CalcHeight;
  VirtualInvokeData SetHorizontal;
  VirtualInvokeData SetVertical;
  VirtualInvokeData ApplyStyleSettings;
  VirtualInvokeData ApplyOptions;
};
struct GUILayoutGroup__StaticFields {
};
struct GUILayoutGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUILayoutGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUILayoutGroup__VTable vtable;
};
struct GUILayoutUtility_LayoutCache__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GUILayoutUtility_LayoutCache__StaticFields {
};
struct GUILayoutUtility_LayoutCache__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUILayoutUtility_LayoutCache__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUILayoutUtility_LayoutCache__VTable vtable;
};

enum ImagePosition__Enum : int32_t {
  ImagePosition__Enum_ImageLeft = 0,
  ImagePosition__Enum_ImageAbove = 1,
  ImagePosition__Enum_ImageOnly = 2,
  ImagePosition__Enum_TextOnly = 3,
};
struct ImagePosition__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ImagePosition__Enum value;
};

enum TextClipping__Enum : int32_t {
  TextClipping__Enum_Overflow = 0,
  TextClipping__Enum_Clip = 1,
};
struct TextClipping__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextClipping__Enum value;
};

struct GUIWordWrapSizer__Fields {
  struct GUILayoutEntry__Fields _;
  struct GUIContent * m_Content;
  float m_ForcedMinHeight;
  float m_ForcedMaxHeight;
};
struct GUIWordWrapSizer {
  struct GUIWordWrapSizer__Class *klass;
  struct MonitorData *monitor;
  struct GUIWordWrapSizer__Fields fields;
};
struct GUIWordWrapSizer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_marginLeft;
  VirtualInvokeData get_marginRight;
  VirtualInvokeData get_marginTop;
  VirtualInvokeData get_marginBottom;
  VirtualInvokeData CalcWidth;
  VirtualInvokeData CalcHeight;
  VirtualInvokeData SetHorizontal;
  VirtualInvokeData SetVertical;
  VirtualInvokeData ApplyStyleSettings;
  VirtualInvokeData ApplyOptions;
};
struct GUIWordWrapSizer__StaticFields {
};
struct GUIWordWrapSizer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIWordWrapSizer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIWordWrapSizer__VTable vtable;
};

struct GUIScrollGroup__Fields {
  struct GUILayoutGroup__Fields _;
  float calcMinWidth;
  float calcMaxWidth;
  float calcMinHeight;
  float calcMaxHeight;
  float clientWidth;
  float clientHeight;
  bool allowHorizontalScroll;
  bool allowVerticalScroll;
  bool needsHorizontalScrollbar;
  bool needsVerticalScrollbar;
  struct GUIStyle * horizontalScrollbar;
  struct GUIStyle * verticalScrollbar;
};
struct GUIScrollGroup {
  struct GUIScrollGroup__Class *klass;
  struct MonitorData *monitor;
  struct GUIScrollGroup__Fields fields;
};
struct GUIScrollGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_marginLeft;
  VirtualInvokeData get_marginRight;
  VirtualInvokeData get_marginTop;
  VirtualInvokeData get_marginBottom;
  VirtualInvokeData CalcWidth;
  VirtualInvokeData CalcHeight;
  VirtualInvokeData SetHorizontal;
  VirtualInvokeData SetVertical;
  VirtualInvokeData ApplyStyleSettings;
  VirtualInvokeData ApplyOptions;
};
struct GUIScrollGroup__StaticFields {
};
struct GUIScrollGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIScrollGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIScrollGroup__VTable vtable;
};

struct __declspec(align(8)) SliderState__Fields {
  float dragStartPos;
  float dragStartValue;
  bool isDragging;
};
struct SliderState {
  struct SliderState__Class *klass;
  struct MonitorData *monitor;
  struct SliderState__Fields fields;
};
struct SliderState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SliderState__StaticFields {
};
struct SliderState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SliderState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SliderState__VTable vtable;
};

struct SliderHandler {
  struct Rect position;
  float currentValue;
  float size;
  float start;
  float end;
  struct GUIStyle * slider;
  struct GUIStyle * thumb;
  bool horiz;
  int32_t id;
};
struct SliderHandler__Boxed {
  struct SliderHandler__Class *klass;
  struct MonitorData *monitor;
  struct SliderHandler fields;
};
struct SliderHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SliderHandler__StaticFields {
};
struct SliderHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SliderHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SliderHandler__VTable vtable;
};

enum TextEditor_CharacterType__Enum : int32_t {
  TextEditor_CharacterType__Enum_LetterLike = 0,
  TextEditor_CharacterType__Enum_Symbol = 1,
  TextEditor_CharacterType__Enum_Symbol2 = 2,
  TextEditor_CharacterType__Enum_WhiteSpace = 3,
};
struct TextEditor_CharacterType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextEditor_CharacterType__Enum value;
};

enum TextEditor_Direction__Enum : int32_t {
  TextEditor_Direction__Enum_Forward = 0,
  TextEditor_Direction__Enum_Backward = 1,
};
struct TextEditor_Direction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextEditor_Direction__Enum value;
};

struct GenerateAOTDataAttribute {
  struct GenerateAOTDataAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct GenerateAOTDataAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct GenerateAOTDataAttribute__StaticFields {
};
struct GenerateAOTDataAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenerateAOTDataAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenerateAOTDataAttribute__VTable vtable;
};

struct UseTypeForAOTGenerationAttribute {
  struct UseTypeForAOTGenerationAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct UseTypeForAOTGenerationAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct UseTypeForAOTGenerationAttribute__StaticFields {
};
struct UseTypeForAOTGenerationAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UseTypeForAOTGenerationAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UseTypeForAOTGenerationAttribute__VTable vtable;
};

struct CrossSceneReferenceId {
  int32_t m_sceneGuidA;
  int32_t m_sceneGuidB;
  int32_t m_sceneGuidC;
  int32_t m_sceneGuidD;
  int32_t m_objectId;
};
struct CrossSceneReferenceId__Boxed {
  struct CrossSceneReferenceId__Class *klass;
  struct MonitorData *monitor;
  struct CrossSceneReferenceId fields;
};
struct IEqualityComparer_1_Moon_CrossSceneReferenceId_ {
  struct IEqualityComparer_1_Moon_CrossSceneReferenceId___Class *klass;
  struct MonitorData *monitor;
};
struct IEqualityComparer_1_Moon_CrossSceneReferenceId___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_Moon_CrossSceneReferenceId___StaticFields {
};
struct IEqualityComparer_1_Moon_CrossSceneReferenceId___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_Moon_CrossSceneReferenceId___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_Moon_CrossSceneReferenceId___VTable vtable;
};
struct CrossSceneReferenceId__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct CrossSceneReferenceId__StaticFields {
  struct IEqualityComparer_1_Moon_CrossSceneReferenceId_ * CrossSceneReferenceIdComparerInstance;
};
struct CrossSceneReferenceId__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossSceneReferenceId__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossSceneReferenceId__VTable vtable;
};

struct CrossSceneReferenceExportData__Fields {
  struct MonoBehaviour__Fields _;
  struct CrossSceneReferenceId m_crossSceneReferenceId;
  struct Object_1 * m_objectRef;
};
struct CrossSceneReferenceExportData {
  struct CrossSceneReferenceExportData__Class *klass;
  struct MonitorData *monitor;
  struct CrossSceneReferenceExportData__Fields fields;
};
struct CrossSceneReferenceExportData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CrossSceneReferenceExportData__StaticFields {
};
struct CrossSceneReferenceExportData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossSceneReferenceExportData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossSceneReferenceExportData__VTable vtable;
};

struct CrossSceneReferenceExportRegistry__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_Moon_CrossSceneReferenceExportData_ * _ExportedObjects_k__BackingField;
  bool m_objectsNeedToBeRemoved;
};
struct CrossSceneReferenceExportRegistry {
  struct CrossSceneReferenceExportRegistry__Class *klass;
  struct MonitorData *monitor;
  struct CrossSceneReferenceExportRegistry__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_CrossSceneReferenceExportData___Fields {
  struct CrossSceneReferenceExportData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_CrossSceneReferenceExportData_ {
  struct List_1_Moon_CrossSceneReferenceExportData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_CrossSceneReferenceExportData___Fields fields;
};
struct CrossSceneReferenceExportData__Array {
  struct CrossSceneReferenceExportData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CrossSceneReferenceExportData * vector[32];
};
struct IEnumerator_1_Moon_CrossSceneReferenceExportData_ {
  struct IEnumerator_1_Moon_CrossSceneReferenceExportData___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_CrossSceneReferenceExportData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_CrossSceneReferenceExportData___StaticFields {
};
struct IEnumerator_1_Moon_CrossSceneReferenceExportData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_CrossSceneReferenceExportData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_CrossSceneReferenceExportData___VTable vtable;
};
struct List_1_Moon_CrossSceneReferenceExportData___VTable {
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
struct List_1_Moon_CrossSceneReferenceExportData___StaticFields {
  struct CrossSceneReferenceExportData__Array * _emptyArray;
};
struct List_1_Moon_CrossSceneReferenceExportData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_CrossSceneReferenceExportData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_CrossSceneReferenceExportData___VTable vtable;
};
struct CrossSceneReferenceExportRegistry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CrossSceneReferenceExportRegistry__StaticFields {
};
struct CrossSceneReferenceExportRegistry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossSceneReferenceExportRegistry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossSceneReferenceExportRegistry__VTable vtable;
};

struct CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer {
  struct CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class *klass;
  struct MonitorData *monitor;
};
struct CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetHashCode_1;
};
struct CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__StaticFields {
};
struct CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossSceneReferenceId_CrossSceneReferenceIdEqualityComparer__VTable vtable;
};

struct CrossSceneReferenceImportData__Fields {
  struct MonoBehaviour__Fields _;
  struct CrossSceneReferenceId m_crossSceneReferenceId;
};
struct CrossSceneReferenceImportData {
  struct CrossSceneReferenceImportData__Class *klass;
  struct MonitorData *monitor;
  struct CrossSceneReferenceImportData__Fields fields;
};
struct CrossSceneReferenceImportData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CrossSceneReferenceImportData__StaticFields {
};
struct CrossSceneReferenceImportData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossSceneReferenceImportData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossSceneReferenceImportData__VTable vtable;
};

struct CrossSceneReferenceImportRegistry__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_Moon_CrossSceneReferenceImportData_ * _ImportedObjects_k__BackingField;
};
struct CrossSceneReferenceImportRegistry {
  struct CrossSceneReferenceImportRegistry__Class *klass;
  struct MonitorData *monitor;
  struct CrossSceneReferenceImportRegistry__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_CrossSceneReferenceImportData___Fields {
  struct CrossSceneReferenceImportData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_CrossSceneReferenceImportData_ {
  struct List_1_Moon_CrossSceneReferenceImportData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_CrossSceneReferenceImportData___Fields fields;
};
struct CrossSceneReferenceImportData__Array {
  struct CrossSceneReferenceImportData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CrossSceneReferenceImportData * vector[32];
};
struct IEnumerator_1_Moon_CrossSceneReferenceImportData_ {
  struct IEnumerator_1_Moon_CrossSceneReferenceImportData___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_CrossSceneReferenceImportData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_CrossSceneReferenceImportData___StaticFields {
};
struct IEnumerator_1_Moon_CrossSceneReferenceImportData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_CrossSceneReferenceImportData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_CrossSceneReferenceImportData___VTable vtable;
};
struct List_1_Moon_CrossSceneReferenceImportData___VTable {
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
struct List_1_Moon_CrossSceneReferenceImportData___StaticFields {
  struct CrossSceneReferenceImportData__Array * _emptyArray;
};
struct List_1_Moon_CrossSceneReferenceImportData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_CrossSceneReferenceImportData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_CrossSceneReferenceImportData___VTable vtable;
};
struct CrossSceneReferenceImportRegistry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CrossSceneReferenceImportRegistry__StaticFields {
};
struct CrossSceneReferenceImportRegistry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrossSceneReferenceImportRegistry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrossSceneReferenceImportRegistry__VTable vtable;
};

struct AssetBundle__Fields {
  struct Object_1__Fields _;
};
struct AssetBundle {
  struct AssetBundle__Class *klass;
  struct MonitorData *monitor;
  struct AssetBundle__Fields fields;
};
struct AssetBundle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AssetBundle__StaticFields {
};
struct AssetBundle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AssetBundle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AssetBundle__VTable vtable;
};

struct ParticleSystem__Fields {
  struct Component_1__Fields _;
};
struct ParticleSystem {
  struct ParticleSystem__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem__Fields fields;
};
struct ParticleSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParticleSystem__StaticFields {
};
struct ParticleSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem__VTable vtable;
};

struct ParticleSystem_Particle {
  struct Vector3 m_Position;
  struct Vector3 m_Velocity;
  struct Vector3 m_AnimatedVelocity;
  struct Vector3 m_InitialVelocity;
  struct Vector3 m_AxisOfRotation;
  struct Vector3 m_Rotation;
  struct Vector3 m_AngularVelocity;
  struct Vector3 m_StartSize;
  struct Color32 m_StartColor;
  uint32_t m_RandomSeed;
  float m_Lifetime;
  float m_StartLifetime;
  float m_EmitAccumulator0;
  float m_EmitAccumulator1;
  uint32_t m_Flags;
};
struct ParticleSystem_Particle__Boxed {
  struct ParticleSystem_Particle__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_Particle fields;
};
struct ParticleSystem_Particle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParticleSystem_Particle__StaticFields {
};
struct ParticleSystem_Particle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_Particle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_Particle__VTable vtable;
};

enum ParticleSystemSimulationSpace__Enum : int32_t {
  ParticleSystemSimulationSpace__Enum_Local = 0,
  ParticleSystemSimulationSpace__Enum_World = 1,
  ParticleSystemSimulationSpace__Enum_Custom = 2,
};
struct ParticleSystemSimulationSpace__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ParticleSystemSimulationSpace__Enum value;
};

struct ParticleSystem_MainModule {
  struct ParticleSystem * m_ParticleSystem;
};
struct ParticleSystem_MainModule__Boxed {
  struct ParticleSystem_MainModule__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_MainModule fields;
};
struct ParticleSystem_MainModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParticleSystem_MainModule__StaticFields {
};
struct ParticleSystem_MainModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_MainModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_MainModule__VTable vtable;
};

struct ParticleSystem_EmissionModule {
  struct ParticleSystem * m_ParticleSystem;
};
struct ParticleSystem_EmissionModule__Boxed {
  struct ParticleSystem_EmissionModule__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_EmissionModule fields;
};
struct ParticleSystem_EmissionModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParticleSystem_EmissionModule__StaticFields {
};
struct ParticleSystem_EmissionModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_EmissionModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_EmissionModule__VTable vtable;
};

struct ParticleSystem_ShapeModule {
  struct ParticleSystem * m_ParticleSystem;
};
struct ParticleSystem_ShapeModule__Boxed {
  struct ParticleSystem_ShapeModule__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_ShapeModule fields;
};
struct ParticleSystem_ShapeModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParticleSystem_ShapeModule__StaticFields {
};
struct ParticleSystem_ShapeModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_ShapeModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_ShapeModule__VTable vtable;
};

struct ParticleSystem_VelocityOverLifetimeModule {
  struct ParticleSystem * m_ParticleSystem;
};
struct ParticleSystem_VelocityOverLifetimeModule__Boxed {
  struct ParticleSystem_VelocityOverLifetimeModule__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_VelocityOverLifetimeModule fields;
};
struct ParticleSystem_VelocityOverLifetimeModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParticleSystem_VelocityOverLifetimeModule__StaticFields {
};
struct ParticleSystem_VelocityOverLifetimeModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_VelocityOverLifetimeModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_VelocityOverLifetimeModule__VTable vtable;
};

struct ParticleSystem_ForceOverLifetimeModule {
  struct ParticleSystem * m_ParticleSystem;
};
struct ParticleSystem_ForceOverLifetimeModule__Boxed {
  struct ParticleSystem_ForceOverLifetimeModule__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_ForceOverLifetimeModule fields;
};
struct ParticleSystem_ForceOverLifetimeModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParticleSystem_ForceOverLifetimeModule__StaticFields {
};
struct ParticleSystem_ForceOverLifetimeModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_ForceOverLifetimeModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_ForceOverLifetimeModule__VTable vtable;
};

struct ParticleSystem_ColorOverLifetimeModule {
  struct ParticleSystem * m_ParticleSystem;
};
struct ParticleSystem_ColorOverLifetimeModule__Boxed {
  struct ParticleSystem_ColorOverLifetimeModule__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_ColorOverLifetimeModule fields;
};
struct ParticleSystem_ColorOverLifetimeModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParticleSystem_ColorOverLifetimeModule__StaticFields {
};
struct ParticleSystem_ColorOverLifetimeModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_ColorOverLifetimeModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_ColorOverLifetimeModule__VTable vtable;
};

struct ParticleSystem_CollisionModule {
  struct ParticleSystem * m_ParticleSystem;
};
struct ParticleSystem_CollisionModule__Boxed {
  struct ParticleSystem_CollisionModule__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_CollisionModule fields;
};
struct ParticleSystem_CollisionModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParticleSystem_CollisionModule__StaticFields {
};
struct ParticleSystem_CollisionModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_CollisionModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_CollisionModule__VTable vtable;
};

struct ParticleSystem_Particle__Array {
  struct ParticleSystem_Particle__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ParticleSystem_Particle vector[32];
};

enum ParticleSystemStopBehavior__Enum : int32_t {
  ParticleSystemStopBehavior__Enum_StopEmittingAndClear = 0,
  ParticleSystemStopBehavior__Enum_StopEmitting = 1,
};
struct ParticleSystemStopBehavior__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ParticleSystemStopBehavior__Enum value;
};

struct ParticleSystem_EmitParams {
  struct ParticleSystem_Particle m_Particle;
  bool m_PositionSet;
  bool m_VelocitySet;
  bool m_AxisOfRotationSet;
  bool m_RotationSet;
  bool m_AngularVelocitySet;
  bool m_StartSizeSet;
  bool m_StartColorSet;
  bool m_RandomSeedSet;
  bool m_StartLifetimeSet;
  bool m_ApplyShapeToPosition;
};
struct ParticleSystem_EmitParams__Boxed {
  struct ParticleSystem_EmitParams__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_EmitParams fields;
};
struct ParticleSystem_EmitParams__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParticleSystem_EmitParams__StaticFields {
};
struct ParticleSystem_EmitParams__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_EmitParams__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_EmitParams__VTable vtable;
};

enum ParticleSystemCurveMode__Enum : int32_t {
  ParticleSystemCurveMode__Enum_Constant = 0,
  ParticleSystemCurveMode__Enum_Curve = 1,
  ParticleSystemCurveMode__Enum_TwoCurves = 2,
  ParticleSystemCurveMode__Enum_TwoConstants = 3,
};
struct ParticleSystemCurveMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ParticleSystemCurveMode__Enum value;
};
struct ParticleSystem_MinMaxCurve {
  enum ParticleSystemCurveMode__Enum m_Mode;
  float m_CurveMultiplier;
  struct AnimationCurve * m_CurveMin;
  struct AnimationCurve * m_CurveMax;
  float m_ConstantMin;
  float m_ConstantMax;
};
struct ParticleSystem_MinMaxCurve__Boxed {
  struct ParticleSystem_MinMaxCurve__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_MinMaxCurve fields;
};
struct ParticleSystem_MinMaxCurve__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ParticleSystem_MinMaxCurve__StaticFields {
};
struct ParticleSystem_MinMaxCurve__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_MinMaxCurve__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_MinMaxCurve__VTable vtable;
};

enum ParticleSystemGradientMode__Enum : int32_t {
  ParticleSystemGradientMode__Enum_Color = 0,
  ParticleSystemGradientMode__Enum_Gradient = 1,
  ParticleSystemGradientMode__Enum_TwoColors = 2,
  ParticleSystemGradientMode__Enum_TwoGradients = 3,
  ParticleSystemGradientMode__Enum_RandomColor = 4,
};}