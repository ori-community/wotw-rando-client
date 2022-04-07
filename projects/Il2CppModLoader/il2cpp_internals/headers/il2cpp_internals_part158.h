namespace app {
struct Action_1_UnityEngine_Font_ {
  struct Action_1_UnityEngine_Font___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Font___Fields fields;
};
struct Font_FontTextureRebuildCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct Font_FontTextureRebuildCallback {
  struct Font_FontTextureRebuildCallback__Class *klass;
  struct MonitorData *monitor;
  struct Font_FontTextureRebuildCallback__Fields fields;
};
struct Action_1_UnityEngine_Font___VTable {
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
struct Action_1_UnityEngine_Font___StaticFields {
};
struct Action_1_UnityEngine_Font___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Font___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Font___VTable vtable;
};
struct Font_FontTextureRebuildCallback__VTable {
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
struct Font_FontTextureRebuildCallback__StaticFields {
};
struct Font_FontTextureRebuildCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Font_FontTextureRebuildCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Font_FontTextureRebuildCallback__VTable vtable;
};
struct Font__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Font__StaticFields {
  struct Action_1_UnityEngine_Font_ * textureRebuilt;
};
struct Font__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Font__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Font__VTable vtable;
};
struct TextGenerationSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextGenerationSettings__StaticFields {
};
struct TextGenerationSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextGenerationSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextGenerationSettings__VTable vtable;
};

enum TextGenerationError__Enum : int32_t {
  TextGenerationError__Enum_None = 0,
  TextGenerationError__Enum_CustomSizeOnNonDynamicFont = 1,
  TextGenerationError__Enum_CustomStyleOnNonDynamicFont = 2,
  TextGenerationError__Enum_NoFont = 4,
};
struct TextGenerationError__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextGenerationError__Enum value;
};
struct __declspec(align(8)) TextGenerator__Fields {
  void * m_Ptr;
  struct String * m_LastString;
  struct TextGenerationSettings m_LastSettings;
  bool m_HasGenerated;
  enum TextGenerationError__Enum m_LastValid;
  struct List_1_UnityEngine_UIVertex_ * m_Verts;
  struct List_1_UnityEngine_UICharInfo_ * m_Characters;
  struct List_1_UnityEngine_UILineInfo_ * m_Lines;
  bool m_CachedVerts;
  bool m_CachedCharacters;
  bool m_CachedLines;
};
struct TextGenerator {
  struct TextGenerator__Class *klass;
  struct MonitorData *monitor;
  struct TextGenerator__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_UIVertex___Fields {
  struct UIVertex__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UIVertex_ {
  struct List_1_UnityEngine_UIVertex___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UIVertex___Fields fields;
};
struct UIVertex {
  struct Vector3 position;
  struct Vector3 normal;
  struct Vector4 tangent;
  struct Color32 color;
  struct Vector2 uv0;
  struct Vector2 uv1;
  struct Vector2 uv2;
  struct Vector2 uv3;
};
struct UIVertex__Boxed {
  struct UIVertex__Class *klass;
  struct MonitorData *monitor;
  struct UIVertex fields;
};
struct UIVertex__Array {
  struct UIVertex__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UIVertex vector[32];
};
struct IEnumerator_1_UnityEngine_UIVertex_ {
  struct IEnumerator_1_UnityEngine_UIVertex___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_UnityEngine_UICharInfo___Fields {
  struct UICharInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UICharInfo_ {
  struct List_1_UnityEngine_UICharInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UICharInfo___Fields fields;
};
struct UICharInfo {
  struct Vector2 cursorPos;
  float charWidth;
};
struct UICharInfo__Boxed {
  struct UICharInfo__Class *klass;
  struct MonitorData *monitor;
  struct UICharInfo fields;
};
struct UICharInfo__Array {
  struct UICharInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UICharInfo vector[32];
};
struct IEnumerator_1_UnityEngine_UICharInfo_ {
  struct IEnumerator_1_UnityEngine_UICharInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_UnityEngine_UILineInfo___Fields {
  struct UILineInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UILineInfo_ {
  struct List_1_UnityEngine_UILineInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UILineInfo___Fields fields;
};
struct UILineInfo {
  int32_t startCharIdx;
  int32_t height;
  float topY;
  float leading;
};
struct UILineInfo__Boxed {
  struct UILineInfo__Class *klass;
  struct MonitorData *monitor;
  struct UILineInfo fields;
};
struct UILineInfo__Array {
  struct UILineInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UILineInfo vector[32];
};
struct IEnumerator_1_UnityEngine_UILineInfo_ {
  struct IEnumerator_1_UnityEngine_UILineInfo___Class *klass;
  struct MonitorData *monitor;
};
struct UIVertex__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UIVertex__StaticFields {
  struct Color32 s_DefaultColor;
  struct Vector4 s_DefaultTangent;
  struct UIVertex simpleVert;
};
struct UIVertex__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UIVertex__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UIVertex__VTable vtable;
};
struct IEnumerator_1_UnityEngine_UIVertex___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_UIVertex___StaticFields {
};
struct IEnumerator_1_UnityEngine_UIVertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_UIVertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_UIVertex___VTable vtable;
};
struct List_1_UnityEngine_UIVertex___VTable {
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
struct List_1_UnityEngine_UIVertex___StaticFields {
  struct UIVertex__Array * _emptyArray;
};
struct List_1_UnityEngine_UIVertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_UIVertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_UIVertex___VTable vtable;
};
struct UICharInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UICharInfo__StaticFields {
};
struct UICharInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UICharInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UICharInfo__VTable vtable;
};
struct IEnumerator_1_UnityEngine_UICharInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_UICharInfo___StaticFields {
};
struct IEnumerator_1_UnityEngine_UICharInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_UICharInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_UICharInfo___VTable vtable;
};
struct List_1_UnityEngine_UICharInfo___VTable {
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
struct List_1_UnityEngine_UICharInfo___StaticFields {
  struct UICharInfo__Array * _emptyArray;
};
struct List_1_UnityEngine_UICharInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_UICharInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_UICharInfo___VTable vtable;
};
struct UILineInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UILineInfo__StaticFields {
};
struct UILineInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UILineInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UILineInfo__VTable vtable;
};
struct IEnumerator_1_UnityEngine_UILineInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_UILineInfo___StaticFields {
};
struct IEnumerator_1_UnityEngine_UILineInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_UILineInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_UILineInfo___VTable vtable;
};
struct List_1_UnityEngine_UILineInfo___VTable {
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
struct List_1_UnityEngine_UILineInfo___StaticFields {
  struct UILineInfo__Array * _emptyArray;
};
struct List_1_UnityEngine_UILineInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_UILineInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_UILineInfo___VTable vtable;
};
struct TextGenerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_IDisposable_Dispose;
};
struct TextGenerator__StaticFields {
};
struct TextGenerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextGenerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextGenerator__VTable vtable;
};

struct IList_1_UnityEngine_UIVertex_ {
  struct IList_1_UnityEngine_UIVertex___Class *klass;
  struct MonitorData *monitor;
};
struct IList_1_UnityEngine_UIVertex___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_UnityEngine_UIVertex___StaticFields {
};
struct IList_1_UnityEngine_UIVertex___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_UnityEngine_UIVertex___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_UnityEngine_UIVertex___VTable vtable;
};

struct IList_1_UnityEngine_UICharInfo_ {
  struct IList_1_UnityEngine_UICharInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IList_1_UnityEngine_UICharInfo___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_UnityEngine_UICharInfo___StaticFields {
};
struct IList_1_UnityEngine_UICharInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_UnityEngine_UICharInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_UnityEngine_UICharInfo___VTable vtable;
};

struct IList_1_UnityEngine_UILineInfo_ {
  struct IList_1_UnityEngine_UILineInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IList_1_UnityEngine_UILineInfo___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_UnityEngine_UILineInfo___StaticFields {
};
struct IList_1_UnityEngine_UILineInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_UnityEngine_UILineInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_UnityEngine_UILineInfo___VTable vtable;
};

struct GUIText__Fields {
  struct GUIElement__Fields _;
};
struct GUIText {
  struct GUIText__Class *klass;
  struct MonitorData *monitor;
  struct GUIText__Fields fields;
};
struct GUIText__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GUIText__StaticFields {
};
struct GUIText__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIText__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIText__VTable vtable;
};

struct TextMesh__Fields {
  struct Component_1__Fields _;
};
struct TextMesh {
  struct TextMesh__Class *klass;
  struct MonitorData *monitor;
  struct TextMesh__Fields fields;
};
struct TextMesh__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextMesh__StaticFields {
};
struct TextMesh__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextMesh__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextMesh__VTable vtable;
};

enum TextAlignment__Enum : int32_t {
  TextAlignment__Enum_Left = 0,
  TextAlignment__Enum_Center = 1,
  TextAlignment__Enum_Right = 2,
};
struct TextAlignment__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextAlignment__Enum value;
};

struct __declspec(align(8)) Event__Fields {
  void * m_Ptr;
};
struct Event {
  struct Event__Class *klass;
  struct MonitorData *monitor;
  struct Event__Fields fields;
};
struct Event__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Event__StaticFields {
  struct Event * s_Current;
  struct Event * s_MasterEvent;
  struct Dictionary_2_System_String_System_Int32_ * __f__switch_map0;
};
struct Event__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Event__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Event__VTable vtable;
};

enum EventType__Enum : int32_t {
  EventType__Enum_MouseDown = 0,
  EventType__Enum_MouseUp = 1,
  EventType__Enum_MouseMove = 2,
  EventType__Enum_MouseDrag = 3,
  EventType__Enum_KeyDown = 4,
  EventType__Enum_KeyUp = 5,
  EventType__Enum_ScrollWheel = 6,
  EventType__Enum_Repaint = 7,
  EventType__Enum_Layout = 8,
  EventType__Enum_DragUpdated = 9,
  EventType__Enum_DragPerform = 10,
  EventType__Enum_DragExited = 15,
  EventType__Enum_Ignore = 11,
  EventType__Enum_Used = 12,
  EventType__Enum_ValidateCommand = 13,
  EventType__Enum_ExecuteCommand = 14,
  EventType__Enum_ContextClick = 16,
  EventType__Enum_MouseEnterWindow = 20,
  EventType__Enum_MouseLeaveWindow = 21,
  EventType__Enum_mouseDown = 0,
  EventType__Enum_mouseUp = 1,
  EventType__Enum_mouseMove = 2,
  EventType__Enum_mouseDrag = 3,
  EventType__Enum_keyDown = 4,
  EventType__Enum_keyUp = 5,
  EventType__Enum_scrollWheel = 6,
  EventType__Enum_repaint = 7,
  EventType__Enum_layout = 8,
  EventType__Enum_dragUpdated = 9,
  EventType__Enum_dragPerform = 10,
  EventType__Enum_ignore = 11,
  EventType__Enum_used = 12,
};
struct EventType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventType__Enum value;
};

enum EventModifiers__Enum : int32_t {
  EventModifiers__Enum_None = 0,
  EventModifiers__Enum_Shift = 1,
  EventModifiers__Enum_Control = 2,
  EventModifiers__Enum_Alt = 4,
  EventModifiers__Enum_Command = 8,
  EventModifiers__Enum_Numeric = 16,
  EventModifiers__Enum_CapsLock = 32,
  EventModifiers__Enum_FunctionKey = 64,
};
struct EventModifiers__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EventModifiers__Enum value;
};

struct GUISkin__Fields {
  struct ScriptableObject__Fields _;
  struct Font * m_Font;
  struct GUIStyle * m_box;
  struct GUIStyle * m_button;
  struct GUIStyle * m_toggle;
  struct GUIStyle * m_label;
  struct GUIStyle * m_textField;
  struct GUIStyle * m_textArea;
  struct GUIStyle * m_window;
  struct GUIStyle * m_horizontalSlider;
  struct GUIStyle * m_horizontalSliderThumb;
  struct GUIStyle * m_verticalSlider;
  struct GUIStyle * m_verticalSliderThumb;
  struct GUIStyle * m_horizontalScrollbar;
  struct GUIStyle * m_horizontalScrollbarThumb;
  struct GUIStyle * m_horizontalScrollbarLeftButton;
  struct GUIStyle * m_horizontalScrollbarRightButton;
  struct GUIStyle * m_verticalScrollbar;
  struct GUIStyle * m_verticalScrollbarThumb;
  struct GUIStyle * m_verticalScrollbarUpButton;
  struct GUIStyle * m_verticalScrollbarDownButton;
  struct GUIStyle * m_ScrollView;
  struct GUIStyle__Array * m_CustomStyles;
  struct GUISettings * m_Settings;
  struct Dictionary_2_System_String_UnityEngine_GUIStyle_ * m_Styles;
};
struct GUISkin {
  struct GUISkin__Class *klass;
  struct MonitorData *monitor;
  struct GUISkin__Fields fields;
};
struct __declspec(align(8)) GUIStyle__Fields {
  void * m_Ptr;
  struct GUIStyleState * m_Normal;
  struct GUIStyleState * m_Hover;
  struct GUIStyleState * m_Active;
  struct GUIStyleState * m_Focused;
  struct GUIStyleState * m_OnNormal;
  struct GUIStyleState * m_OnHover;
  struct GUIStyleState * m_OnActive;
  struct GUIStyleState * m_OnFocused;
  struct RectOffset * m_Border;
  struct RectOffset * m_Padding;
  struct RectOffset * m_Margin;
  struct RectOffset * m_Overflow;
};
struct GUIStyle {
  struct GUIStyle__Class *klass;
  struct MonitorData *monitor;
  struct GUIStyle__Fields fields;
};
struct __declspec(align(8)) GUIStyleState__Fields {
  void * m_Ptr;
  struct GUIStyle * m_SourceStyle;
};
struct GUIStyleState {
  struct GUIStyleState__Class *klass;
  struct MonitorData *monitor;
  struct GUIStyleState__Fields fields;
};
struct GUIStyle__Array {
  struct GUIStyle__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GUIStyle * vector[32];
};
struct __declspec(align(8)) GUISettings__Fields {
  bool m_DoubleClickSelectsWord;
  bool m_TripleClickSelectsLine;
  struct Color m_CursorColor;
  float m_CursorFlashSpeed;
  struct Color m_SelectionColor;
};
struct GUISettings {
  struct GUISettings__Class *klass;
  struct MonitorData *monitor;
  struct GUISettings__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_UnityEngine_GUIStyle___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_UnityEngine_GUIStyle_ {
  struct Dictionary_2_System_String_UnityEngine_GUIStyle___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_UnityEngine_GUIStyle___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct GUIStyle * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___Fields {
  struct Dictionary_2_System_String_UnityEngine_GUIStyle_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___Fields {
  struct Dictionary_2_System_String_UnityEngine_GUIStyle_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___Fields fields;
};
struct IEnumerator_1_UnityEngine_GUIStyle_ {
  struct IEnumerator_1_UnityEngine_GUIStyle___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UnityEngine_GUIStyle_ {
  struct ICollection_1_UnityEngine_GUIStyle___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_UnityEngine_GUIStyle_ {
  struct String * key;
  struct GUIStyle * value;
};
struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Boxed {
  struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_UnityEngine_GUIStyle_ fields;
};
struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Array {
  struct KeyValuePair_2_System_String_UnityEngine_GUIStyle___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_UnityEngine_GUIStyle_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_GUIStyle_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_GUIStyle___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_GUIStyle_ {
  struct IEnumerable_1_UnityEngine_GUIStyle___Class *klass;
  struct MonitorData *monitor;
};
struct GUISkin_SkinChangedDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct GUISkin_SkinChangedDelegate {
  struct GUISkin_SkinChangedDelegate__Class *klass;
  struct MonitorData *monitor;
  struct GUISkin_SkinChangedDelegate__Fields fields;
};
struct GUIStyleState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GUIStyleState__StaticFields {
};
struct GUIStyleState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIStyleState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIStyleState__VTable vtable;
};
struct GUIStyle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GUIStyle__StaticFields {
  bool showKeyboardFocus;
  struct GUIStyle * s_None;
};
struct GUIStyle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIStyle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIStyle__VTable vtable;
};
struct GUISettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GUISettings__StaticFields {
};
struct GUISettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUISettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUISettings__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_GUIStyle___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_GUIStyle___VTable vtable;
};
struct IEnumerator_1_UnityEngine_GUIStyle___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_GUIStyle___StaticFields {
};
struct IEnumerator_1_UnityEngine_GUIStyle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_GUIStyle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_GUIStyle___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle___VTable vtable;
};}