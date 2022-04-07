namespace app {
struct PointerUIBase__Fields {
  struct MonoBehaviour__Fields _;
  float dragMovementThreshold;
  struct Action * onHandlePointers;
  struct Camera * viewCamera;
  bool enableMouseInput;
  bool enableTouchInput;
  bool enableFPSInput;
  bool enableVRInput;
  float maxDistance;
  bool disableMouseEmulation;
  struct KeyEvents * keyEvents;
  struct Browser * browser;
  bool appFocused;
  int32_t currentPointerId;
  struct List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ * currentPointers;
  struct Vector2 mouseDownPosition;
  bool dragging;
  struct Action * onClick;
  int32_t p_currentDown;
  int32_t p_anyDown;
  int32_t p_currentOver;
  int32_t p_anyOver;
  bool mouseWasOver;
  int32_t focusForceCount;
  bool _MouseHasFocus_k__BackingField;
  struct Vector2 _MousePosition_k__BackingField;
  enum MouseButton__Enum _MouseButtons_k__BackingField;
  struct Vector2 _MouseScroll_k__BackingField;
  bool _KeyboardHasFocus_k__BackingField;
  struct BrowserCursor * _BrowserCursor_k__BackingField;
  struct BrowserInputSettings * _InputSettings_k__BackingField;
};
struct PointerUIBase {
  struct PointerUIBase__Class *klass;
  struct MonitorData *monitor;
  struct PointerUIBase__Fields fields;
};
struct __declspec(align(8)) KeyEvents__Fields {
  struct List_1_UnityEngine_Event_ * keyEvents;
  struct List_1_UnityEngine_Event_ * keyEventsLast;
};
struct KeyEvents {
  struct KeyEvents__Class *klass;
  struct MonitorData *monitor;
  struct KeyEvents__Fields fields;
};
struct __declspec(align(8)) List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___Fields {
  struct PointerUIBase_PointerState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ {
  struct List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___Fields fields;
};
struct PointerUIBase_PointerState {
  int32_t id;
  bool is2D;
  struct Vector2 position2D;
  struct Ray position3D;
  enum MouseButton__Enum activeButtons;
  struct Vector2 scrollDelta;
};
struct PointerUIBase_PointerState__Boxed {
  struct PointerUIBase_PointerState__Class *klass;
  struct MonitorData *monitor;
  struct PointerUIBase_PointerState fields;
};
struct PointerUIBase_PointerState__Array {
  struct PointerUIBase_PointerState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PointerUIBase_PointerState vector[32];
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState_ {
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) BrowserInputSettings__Fields {
  int32_t scrollSpeed;
  float multiclickTolerance;
  float multiclickSpeed;
};
struct BrowserInputSettings {
  struct BrowserInputSettings__Class *klass;
  struct MonitorData *monitor;
  struct BrowserInputSettings__Fields fields;
};
struct PointerUIGUI__Fields {
  struct PointerUIBase__Fields _;
  struct RawImage * myImage;
  bool enableInput;
  bool automaticResize;
  struct BaseRaycaster * raycaster;
  struct RectTransform * rTransform;
  bool _mouseHasFocus;
  bool _keyboardHasFocus;
};
struct PointerUIGUI {
  struct PointerUIGUI__Class *klass;
  struct MonitorData *monitor;
  struct PointerUIGUI__Fields fields;
};
struct KeyEvents__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyEvents__StaticFields {
  struct KeyCode__Enum__Array * keysToCheck;
};
struct KeyEvents__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyEvents__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyEvents__VTable vtable;
};
struct PointerUIBase_PointerState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PointerUIBase_PointerState__StaticFields {
};
struct PointerUIBase_PointerState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerUIBase_PointerState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerUIBase_PointerState__VTable vtable;
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___StaticFields {
};
struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___VTable vtable;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___VTable {
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
struct List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___StaticFields {
  struct PointerUIBase_PointerState__Array * _emptyArray;
};
struct List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ZenFulcrum_EmbeddedBrowser_PointerUIBase_PointerState___VTable vtable;
};
struct BrowserInputSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BrowserInputSettings__StaticFields {
};
struct BrowserInputSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BrowserInputSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BrowserInputSettings__VTable vtable;
};
struct PointerUIGUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InputUpdate;
  VirtualInvokeData get_MouseHasFocus;
  VirtualInvokeData get_MousePosition;
  VirtualInvokeData get_MouseButtons;
  VirtualInvokeData get_MouseScroll;
  VirtualInvokeData get_KeyboardHasFocus;
  VirtualInvokeData get_KeyEvents;
  VirtualInvokeData get_BrowserCursor;
  VirtualInvokeData get_InputSettings;
  VirtualInvokeData Awake;
  VirtualInvokeData InputUpdate_1;
  VirtualInvokeData MapPointerToBrowser;
  VirtualInvokeData MapRayToBrowser;
  VirtualInvokeData GetCurrentHitLocation;
  VirtualInvokeData FeedPointerState;
  VirtualInvokeData CalculatePointer;
  VirtualInvokeData OnHandlePointers;
  VirtualInvokeData FeedTouchPointers;
  VirtualInvokeData FeedMousePointer;
  VirtualInvokeData FeedFPS;
  VirtualInvokeData FeedVRPointers;
  VirtualInvokeData get_MouseHasFocus_1;
  VirtualInvokeData set_MouseHasFocus;
  VirtualInvokeData get_MousePosition_1;
  VirtualInvokeData set_MousePosition;
  VirtualInvokeData get_MouseButtons_1;
  VirtualInvokeData set_MouseButtons;
  VirtualInvokeData get_MouseScroll_1;
  VirtualInvokeData set_MouseScroll;
  VirtualInvokeData get_KeyboardHasFocus_1;
  VirtualInvokeData set_KeyboardHasFocus;
  VirtualInvokeData get_KeyEvents_1;
  VirtualInvokeData get_BrowserCursor_1;
  VirtualInvokeData set_BrowserCursor;
  VirtualInvokeData get_InputSettings_1;
  VirtualInvokeData set_InputSettings;
  VirtualInvokeData OnSelect;
  VirtualInvokeData OnDeselect;
  VirtualInvokeData OnPointerEnter;
  VirtualInvokeData OnPointerExit;
  VirtualInvokeData OnPointerDown;
};
struct PointerUIGUI__StaticFields {
};
struct PointerUIGUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerUIGUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerUIGUI__VTable vtable;
};
struct PointerUIBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InputUpdate;
  VirtualInvokeData get_MouseHasFocus;
  VirtualInvokeData get_MousePosition;
  VirtualInvokeData get_MouseButtons;
  VirtualInvokeData get_MouseScroll;
  VirtualInvokeData get_KeyboardHasFocus;
  VirtualInvokeData get_KeyEvents;
  VirtualInvokeData get_BrowserCursor;
  VirtualInvokeData get_InputSettings;
  VirtualInvokeData Awake;
  VirtualInvokeData InputUpdate_1;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData FeedPointerState;
  VirtualInvokeData CalculatePointer;
  VirtualInvokeData OnHandlePointers;
  VirtualInvokeData FeedTouchPointers;
  VirtualInvokeData FeedMousePointer;
  VirtualInvokeData FeedFPS;
  VirtualInvokeData FeedVRPointers;
  VirtualInvokeData get_MouseHasFocus_1;
  VirtualInvokeData set_MouseHasFocus;
  VirtualInvokeData get_MousePosition_1;
  VirtualInvokeData set_MousePosition;
  VirtualInvokeData get_MouseButtons_1;
  VirtualInvokeData set_MouseButtons;
  VirtualInvokeData get_MouseScroll_1;
  VirtualInvokeData set_MouseScroll;
  VirtualInvokeData get_KeyboardHasFocus_1;
  VirtualInvokeData set_KeyboardHasFocus;
  VirtualInvokeData get_KeyEvents_1;
  VirtualInvokeData get_BrowserCursor_1;
  VirtualInvokeData set_BrowserCursor;
  VirtualInvokeData get_InputSettings_1;
  VirtualInvokeData set_InputSettings;
};
struct PointerUIBase__StaticFields {
};
struct PointerUIBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerUIBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerUIBase__VTable vtable;
};
struct CursorRendererWorldSpace__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEnable;
  VirtualInvokeData CursorChange;
};
struct CursorRendererWorldSpace__StaticFields {
};
struct CursorRendererWorldSpace__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CursorRendererWorldSpace__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CursorRendererWorldSpace__VTable vtable;
};

struct ClickMeshBrowserUI__Fields {
  struct MonoBehaviour__Fields _;
  struct MeshCollider * meshCollider;
  float maxDistance;
  struct List_1_UnityEngine_Event_ * keyEvents;
  struct List_1_UnityEngine_Event_ * keyEventsLast;
  bool mouseWasOver;
  bool _MouseHasFocus_k__BackingField;
  struct Vector2 _MousePosition_k__BackingField;
  enum MouseButton__Enum _MouseButtons_k__BackingField;
  struct Vector2 _MouseScroll_k__BackingField;
  bool _KeyboardHasFocus_k__BackingField;
  struct BrowserCursor * _BrowserCursor_k__BackingField;
  struct BrowserInputSettings * _InputSettings_k__BackingField;
};
struct ClickMeshBrowserUI {
  struct ClickMeshBrowserUI__Class *klass;
  struct MonitorData *monitor;
  struct ClickMeshBrowserUI__Fields fields;
};
struct ClickMeshBrowserUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InputUpdate;
  VirtualInvokeData get_MouseHasFocus;
  VirtualInvokeData get_MousePosition;
  VirtualInvokeData get_MouseButtons;
  VirtualInvokeData get_MouseScroll;
  VirtualInvokeData get_KeyboardHasFocus;
  VirtualInvokeData get_KeyEvents;
  VirtualInvokeData get_BrowserCursor;
  VirtualInvokeData get_InputSettings;
  VirtualInvokeData get_LookRay;
  VirtualInvokeData InputUpdate_1;
  VirtualInvokeData SetCursor;
};
struct ClickMeshBrowserUI__StaticFields {
  struct KeyCode__Enum__Array * keysToCheck;
};
struct ClickMeshBrowserUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClickMeshBrowserUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClickMeshBrowserUI__VTable vtable;
};

struct FPSBrowserUI__Fields {
  struct ClickMeshBrowserUI__Fields _;
  struct Transform * worldPointer;
  struct FPSCursorRenderer * cursorRenderer;
};
struct FPSBrowserUI {
  struct FPSBrowserUI__Class *klass;
  struct MonitorData *monitor;
  struct FPSBrowserUI__Fields fields;
};
struct FPSCursorRenderer__Fields {
  struct MonoBehaviour__Fields _;
  float scale;
  float maxDistance;
  struct Transform * pointer;
  bool _EnableInput_k__BackingField;
  struct BrowserCursor * baseCursor;
  struct BrowserCursor * currentCursor;
};
struct FPSCursorRenderer {
  struct FPSCursorRenderer__Class *klass;
  struct MonitorData *monitor;
  struct FPSCursorRenderer__Fields fields;
};
struct FPSCursorRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FPSCursorRenderer__StaticFields {
  struct FPSCursorRenderer * _instance;
};
struct FPSCursorRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSCursorRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSCursorRenderer__VTable vtable;
};
struct FPSBrowserUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InputUpdate;
  VirtualInvokeData get_MouseHasFocus;
  VirtualInvokeData get_MousePosition;
  VirtualInvokeData get_MouseButtons;
  VirtualInvokeData get_MouseScroll;
  VirtualInvokeData get_KeyboardHasFocus;
  VirtualInvokeData get_KeyEvents;
  VirtualInvokeData get_BrowserCursor;
  VirtualInvokeData get_InputSettings;
  VirtualInvokeData get_LookRay;
  VirtualInvokeData InputUpdate_1;
  VirtualInvokeData SetCursor;
};
struct FPSBrowserUI__StaticFields {
};
struct FPSBrowserUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSBrowserUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSBrowserUI__VTable vtable;
};

struct GUIBrowserUI__Fields {
  struct MonoBehaviour__Fields _;
  struct RawImage * myImage;
  struct Browser * browser;
  bool enableInput;
  bool autoResize;
  struct List_1_UnityEngine_Event_ * keyEvents;
  struct List_1_UnityEngine_Event_ * keyEventsLast;
  struct BaseRaycaster * raycaster;
  struct RectTransform * rTransform;
  bool _mouseHasFocus;
  struct Vector2 _MousePosition_k__BackingField;
  enum MouseButton__Enum _MouseButtons_k__BackingField;
  struct Vector2 _MouseScroll_k__BackingField;
  bool _keyboardHasFocus;
  struct BrowserCursor * _BrowserCursor_k__BackingField;
  struct BrowserInputSettings * _InputSettings_k__BackingField;
};
struct GUIBrowserUI {
  struct GUIBrowserUI__Class *klass;
  struct MonitorData *monitor;
  struct GUIBrowserUI__Fields fields;
};
struct GUIBrowserUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InputUpdate;
  VirtualInvokeData get_MouseHasFocus;
  VirtualInvokeData get_MousePosition;
  VirtualInvokeData get_MouseButtons;
  VirtualInvokeData get_MouseScroll;
  VirtualInvokeData get_KeyboardHasFocus;
  VirtualInvokeData get_KeyEvents;
  VirtualInvokeData get_BrowserCursor;
  VirtualInvokeData get_InputSettings;
  VirtualInvokeData OnSelect;
  VirtualInvokeData OnDeselect;
  VirtualInvokeData OnPointerEnter;
  VirtualInvokeData OnPointerExit;
  VirtualInvokeData OnPointerDown;
  VirtualInvokeData InputUpdate_1;
  VirtualInvokeData SetCursor;
};
struct GUIBrowserUI__StaticFields {
};
struct GUIBrowserUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIBrowserUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIBrowserUI__VTable vtable;
};

struct __declspec(align(8)) GUIBrowserUI_WatchResize_d_6__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct GUIBrowserUI * __4__this;
  struct Rect _currentSize_5__2;
};
struct GUIBrowserUI_WatchResize_d_6 {
  struct GUIBrowserUI_WatchResize_d_6__Class *klass;
  struct MonitorData *monitor;
  struct GUIBrowserUI_WatchResize_d_6__Fields fields;
};
struct GUIBrowserUI_WatchResize_d_6__VTable {
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
struct GUIBrowserUI_WatchResize_d_6__StaticFields {
};
struct GUIBrowserUI_WatchResize_d_6__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIBrowserUI_WatchResize_d_6__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIBrowserUI_WatchResize_d_6__VTable vtable;
};

struct PointerUIBase_c {
  struct PointerUIBase_c__Class *klass;
  struct MonitorData *monitor;
};
struct PointerUIBase_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PointerUIBase_c__StaticFields {
  struct PointerUIBase_c * __9;
  struct Action * __9__76_0;
  struct Action * __9__76_1;
};
struct PointerUIBase_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerUIBase_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerUIBase_c__VTable vtable;
};

struct __declspec(align(8)) PointerUIGUI_WatchResize_d_5__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct PointerUIGUI * __4__this;
  struct Rect _currentSize_5__2;
};
struct PointerUIGUI_WatchResize_d_5 {
  struct PointerUIGUI_WatchResize_d_5__Class *klass;
  struct MonitorData *monitor;
  struct PointerUIGUI_WatchResize_d_5__Fields fields;
};
struct PointerUIGUI_WatchResize_d_5__VTable {
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
struct PointerUIGUI_WatchResize_d_5__StaticFields {
};
struct PointerUIGUI_WatchResize_d_5__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerUIGUI_WatchResize_d_5__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerUIGUI_WatchResize_d_5__VTable vtable;
};

struct PointerUIMesh__Fields {
  struct PointerUIBase__Fields _;
  struct LayerMask layerMask;
  struct MeshCollider * meshCollider;
  struct Dictionary_2_System_Int32_UnityEngine_RaycastHit_ * rayHits;
};
struct PointerUIMesh {
  struct PointerUIMesh__Class *klass;
  struct MonitorData *monitor;
  struct PointerUIMesh__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_UnityEngine_RaycastHit___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_RaycastHit_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_RaycastHit_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_UnityEngine_RaycastHit_ {
  struct Dictionary_2_System_Int32_UnityEngine_RaycastHit___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_UnityEngine_RaycastHit___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct RaycastHit value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_RaycastHit___Fields {
  struct Dictionary_2_System_Int32_UnityEngine_RaycastHit_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_RaycastHit_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_RaycastHit___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_RaycastHit___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_RaycastHit___Fields {
  struct Dictionary_2_System_Int32_UnityEngine_RaycastHit_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_RaycastHit_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_RaycastHit___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_RaycastHit___Fields fields;
};
struct ICollection_1_UnityEngine_RaycastHit_ {
  struct ICollection_1_UnityEngine_RaycastHit___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit_ {
  int32_t key;
  struct RaycastHit value;
};
struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Boxed {
  struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit_ fields;
};
struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Array {
  struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_RaycastHit_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_RaycastHit_ {
  struct IEnumerable_1_UnityEngine_RaycastHit___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_RaycastHit___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_RaycastHit___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_RaycastHit___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_RaycastHit___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_RaycastHit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_RaycastHit___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_RaycastHit___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_RaycastHit___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_RaycastHit___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_RaycastHit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_RaycastHit___VTable vtable;
};
struct ICollection_1_UnityEngine_RaycastHit___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_RaycastHit___StaticFields {
};
struct ICollection_1_UnityEngine_RaycastHit___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_RaycastHit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_RaycastHit___VTable vtable;
};
struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___StaticFields {
};
struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_RaycastHit___VTable vtable;
};
struct IEnumerable_1_UnityEngine_RaycastHit___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_RaycastHit___StaticFields {
};
struct IEnumerable_1_UnityEngine_RaycastHit___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_RaycastHit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_RaycastHit___VTable vtable;
};
struct Dictionary_2_System_Int32_UnityEngine_RaycastHit___VTable {
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
struct Dictionary_2_System_Int32_UnityEngine_RaycastHit___StaticFields {
};
struct Dictionary_2_System_Int32_UnityEngine_RaycastHit___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_UnityEngine_RaycastHit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_UnityEngine_RaycastHit___VTable vtable;
};
struct PointerUIMesh__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InputUpdate;
  VirtualInvokeData get_MouseHasFocus;
  VirtualInvokeData get_MousePosition;
  VirtualInvokeData get_MouseButtons;
  VirtualInvokeData get_MouseScroll;
  VirtualInvokeData get_KeyboardHasFocus;
  VirtualInvokeData get_KeyEvents;
  VirtualInvokeData get_BrowserCursor;
  VirtualInvokeData get_InputSettings;
  VirtualInvokeData Awake;
  VirtualInvokeData InputUpdate_1;
  VirtualInvokeData MapPointerToBrowser;
  VirtualInvokeData MapRayToBrowser;
  VirtualInvokeData GetCurrentHitLocation;
  VirtualInvokeData FeedPointerState;
  VirtualInvokeData CalculatePointer;
  VirtualInvokeData OnHandlePointers;
  VirtualInvokeData FeedTouchPointers;
  VirtualInvokeData FeedMousePointer;
  VirtualInvokeData FeedFPS;
  VirtualInvokeData FeedVRPointers;
  VirtualInvokeData get_MouseHasFocus_1;
  VirtualInvokeData set_MouseHasFocus;
  VirtualInvokeData get_MousePosition_1;
  VirtualInvokeData set_MousePosition;
  VirtualInvokeData get_MouseButtons_1;
  VirtualInvokeData set_MouseButtons;
  VirtualInvokeData get_MouseScroll_1;
  VirtualInvokeData set_MouseScroll;
  VirtualInvokeData get_KeyboardHasFocus_1;
  VirtualInvokeData set_KeyboardHasFocus;
  VirtualInvokeData get_KeyEvents_1;
  VirtualInvokeData get_BrowserCursor_1;
  VirtualInvokeData set_BrowserCursor;
  VirtualInvokeData get_InputSettings_1;
  VirtualInvokeData set_InputSettings;
};
struct PointerUIMesh__StaticFields {
};
struct PointerUIMesh__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerUIMesh__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerUIMesh__VTable vtable;
};

struct Cookie_c {
  struct Cookie_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_String_DateTime___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_String_DateTime_ {
  struct Func_2_String_DateTime___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_String_DateTime___Fields fields;
};
struct Func_2_DateTime_String___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_DateTime_String_ {
  struct Func_2_DateTime_String___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_DateTime_String___Fields fields;
};
struct Func_2_String_DateTime___VTable {
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
struct Func_2_String_DateTime___StaticFields {
};
struct Func_2_String_DateTime___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_String_DateTime___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_String_DateTime___VTable vtable;
};
struct Func_2_DateTime_String___VTable {
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
};}