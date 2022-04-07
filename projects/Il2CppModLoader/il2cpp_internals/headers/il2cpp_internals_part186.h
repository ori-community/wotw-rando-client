namespace app {
struct StandaloneInputModule__Fields {
  struct PointerInputModule__Fields _;
  float m_PrevActionTime;
  struct Vector2 m_LastMoveVector;
  int32_t m_ConsecutiveMoveCount;
  struct Vector2 m_LastMousePosition;
  struct Vector2 m_MousePosition;
  struct GameObject * m_CurrentFocusedGameObject;
  struct PointerEventData * m_InputPointerEvent;
  struct String * m_HorizontalAxis;
  struct String * m_VerticalAxis;
  struct String * m_SubmitButton;
  struct String * m_CancelButton;
  float m_InputActionsPerSecond;
  float m_RepeatDelay;
  bool m_ForceModuleActive;
};
struct StandaloneInputModule {
  struct StandaloneInputModule__Class *klass;
  struct MonitorData *monitor;
  struct StandaloneInputModule__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
  struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct PointerEventData * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields {
  struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields {
  struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields fields;
};
struct PointerEventData__Array {
  struct PointerEventData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PointerEventData * vector[32];
};
struct IEnumerator_1_UnityEngine_EventSystems_PointerEventData_ {
  struct IEnumerator_1_UnityEngine_EventSystems_PointerEventData___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UnityEngine_EventSystems_PointerEventData_ {
  struct ICollection_1_UnityEngine_EventSystems_PointerEventData___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
  int32_t key;
  struct PointerEventData * value;
};
struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Boxed {
  struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ fields;
};
struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Array {
  struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_EventSystems_PointerEventData_ {
  struct IEnumerable_1_UnityEngine_EventSystems_PointerEventData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) PointerInputModule_MouseState__Fields {
  struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState_ * m_TrackedButtons;
};
struct PointerInputModule_MouseState {
  struct PointerInputModule_MouseState__Class *klass;
  struct MonitorData *monitor;
  struct PointerInputModule_MouseState__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___Fields {
  struct PointerInputModule_ButtonState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState_ {
  struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___Fields fields;
};
struct __declspec(align(8)) PointerInputModule_ButtonState__Fields {
  enum PointerEventData_InputButton__Enum m_Button;
  struct PointerInputModule_MouseButtonEventData * m_EventData;
};
struct PointerInputModule_ButtonState {
  struct PointerInputModule_ButtonState__Class *klass;
  struct MonitorData *monitor;
  struct PointerInputModule_ButtonState__Fields fields;
};
struct PointerInputModule_ButtonState__Array {
  struct PointerInputModule_ButtonState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PointerInputModule_ButtonState * vector[32];
};
enum PointerEventData_FramePressState__Enum : int32_t {
  PointerEventData_FramePressState__Enum_Pressed = 0,
  PointerEventData_FramePressState__Enum_Released = 1,
  PointerEventData_FramePressState__Enum_PressedAndReleased = 2,
  PointerEventData_FramePressState__Enum_NotChanged = 3,
};
struct PointerEventData_FramePressState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PointerEventData_FramePressState__Enum value;
};
struct __declspec(align(8)) PointerInputModule_MouseButtonEventData__Fields {
  enum PointerEventData_FramePressState__Enum buttonState;
  struct PointerEventData * buttonData;
};
struct PointerInputModule_MouseButtonEventData {
  struct PointerInputModule_MouseButtonEventData__Class *klass;
  struct MonitorData *monitor;
  struct PointerInputModule_MouseButtonEventData__Fields fields;
};
struct IEnumerator_1_UnityEngine_EventSystems_PointerInputModule_ButtonState_ {
  struct IEnumerator_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_EventSystems_BaseInputModule_ {
  struct IEnumerator_1_UnityEngine_EventSystems_BaseInputModule___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_UnityEngine_EventSystems_EventSystem___Fields {
  struct EventSystem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_EventSystems_EventSystem_ {
  struct List_1_UnityEngine_EventSystems_EventSystem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_EventSystems_EventSystem___Fields fields;
};
struct EventSystem__Array {
  struct EventSystem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EventSystem * vector[32];
};
struct IEnumerator_1_UnityEngine_EventSystems_EventSystem_ {
  struct IEnumerator_1_UnityEngine_EventSystems_EventSystem___Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_UnityEngine_EventSystems_RaycastResult___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_UnityEngine_EventSystems_RaycastResult_ {
  struct Comparison_1_UnityEngine_EventSystems_RaycastResult___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_UnityEngine_EventSystems_RaycastResult___Fields fields;
};
struct UIBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData OnEnable;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData IsActive;
  VirtualInvokeData OnRectTransformDimensionsChange;
  VirtualInvokeData OnBeforeTransformParentChanged;
  VirtualInvokeData OnTransformParentChanged;
  VirtualInvokeData OnDidApplyAnimationProperties;
  VirtualInvokeData OnCanvasGroupChanged;
  VirtualInvokeData OnCanvasHierarchyChanged;
  VirtualInvokeData IsDestroyed;
};
struct UIBehaviour__StaticFields {
};
struct UIBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UIBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UIBehaviour__VTable vtable;
};
struct Comparison_1_UnityEngine_RaycastHit___VTable {
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
struct Comparison_1_UnityEngine_RaycastHit___StaticFields {
};
struct Comparison_1_UnityEngine_RaycastHit___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_UnityEngine_RaycastHit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_UnityEngine_RaycastHit___VTable vtable;
};
struct AbstractEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
  VirtualInvokeData Use;
  VirtualInvokeData get_used;
};
struct AbstractEventData__StaticFields {
};
struct AbstractEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AbstractEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AbstractEventData__VTable vtable;
};
struct BaseEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
  VirtualInvokeData Use;
  VirtualInvokeData get_used;
};
struct BaseEventData__StaticFields {
};
struct BaseEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseEventData__VTable vtable;
};
struct PointerEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
  VirtualInvokeData Use;
  VirtualInvokeData get_used;
};
struct PointerEventData__StaticFields {
};
struct PointerEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerEventData__VTable vtable;
};
struct PhysicsRaycaster__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData OnEnable;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData IsActive;
  VirtualInvokeData OnRectTransformDimensionsChange;
  VirtualInvokeData OnBeforeTransformParentChanged;
  VirtualInvokeData OnTransformParentChanged;
  VirtualInvokeData OnDidApplyAnimationProperties;
  VirtualInvokeData OnCanvasGroupChanged;
  VirtualInvokeData OnCanvasHierarchyChanged;
  VirtualInvokeData IsDestroyed;
  VirtualInvokeData Raycast;
  VirtualInvokeData get_eventCamera;
  VirtualInvokeData get_priority;
  VirtualInvokeData get_sortOrderPriority;
  VirtualInvokeData get_renderOrderPriority;
  VirtualInvokeData get_depth;
};
struct PhysicsRaycaster__StaticFields {
  struct Comparison_1_UnityEngine_RaycastHit_ * __f__am_cache0;
};
struct PhysicsRaycaster__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhysicsRaycaster__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhysicsRaycaster__VTable vtable;
};
struct Physics2DRaycaster__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData OnEnable;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData IsActive;
  VirtualInvokeData OnRectTransformDimensionsChange;
  VirtualInvokeData OnBeforeTransformParentChanged;
  VirtualInvokeData OnTransformParentChanged;
  VirtualInvokeData OnDidApplyAnimationProperties;
  VirtualInvokeData OnCanvasGroupChanged;
  VirtualInvokeData OnCanvasHierarchyChanged;
  VirtualInvokeData IsDestroyed;
  VirtualInvokeData Raycast;
  VirtualInvokeData get_eventCamera;
  VirtualInvokeData get_priority;
  VirtualInvokeData get_sortOrderPriority;
  VirtualInvokeData get_renderOrderPriority;
  VirtualInvokeData get_depth;
};
struct Physics2DRaycaster__StaticFields {
};
struct Physics2DRaycaster__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Physics2DRaycaster__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Physics2DRaycaster__VTable vtable;
};
struct BaseRaycaster__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData OnEnable;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData IsActive;
  VirtualInvokeData OnRectTransformDimensionsChange;
  VirtualInvokeData OnBeforeTransformParentChanged;
  VirtualInvokeData OnTransformParentChanged;
  VirtualInvokeData OnDidApplyAnimationProperties;
  VirtualInvokeData OnCanvasGroupChanged;
  VirtualInvokeData OnCanvasHierarchyChanged;
  VirtualInvokeData IsDestroyed;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData get_priority;
  VirtualInvokeData get_sortOrderPriority;
  VirtualInvokeData get_renderOrderPriority;
};
struct BaseRaycaster__StaticFields {
};
struct BaseRaycaster__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseRaycaster__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseRaycaster__VTable vtable;
};
struct RaycastResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaycastResult__StaticFields {
};
struct RaycastResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaycastResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaycastResult__VTable vtable;
};
struct IEnumerator_1_UnityEngine_EventSystems_RaycastResult___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_EventSystems_RaycastResult___StaticFields {
};
struct IEnumerator_1_UnityEngine_EventSystems_RaycastResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_EventSystems_RaycastResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_EventSystems_RaycastResult___VTable vtable;
};
struct List_1_UnityEngine_EventSystems_RaycastResult___VTable {
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
struct List_1_UnityEngine_EventSystems_RaycastResult___StaticFields {
  struct RaycastResult__Array * _emptyArray;
};
struct List_1_UnityEngine_EventSystems_RaycastResult___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_EventSystems_RaycastResult___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_EventSystems_RaycastResult___VTable vtable;
};
struct AxisEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Reset;
  VirtualInvokeData Use;
  VirtualInvokeData get_used;
};
struct AxisEventData__StaticFields {
};
struct AxisEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AxisEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AxisEventData__VTable vtable;
};
struct BaseInput__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData OnEnable;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData IsActive;
  VirtualInvokeData OnRectTransformDimensionsChange;
  VirtualInvokeData OnBeforeTransformParentChanged;
  VirtualInvokeData OnTransformParentChanged;
  VirtualInvokeData OnDidApplyAnimationProperties;
  VirtualInvokeData OnCanvasGroupChanged;
  VirtualInvokeData OnCanvasHierarchyChanged;
  VirtualInvokeData IsDestroyed;
  VirtualInvokeData get_compositionString;
  VirtualInvokeData get_imeCompositionMode;
  VirtualInvokeData set_imeCompositionMode;
  VirtualInvokeData get_compositionCursorPos;
  VirtualInvokeData set_compositionCursorPos;
  VirtualInvokeData get_mousePresent;
  VirtualInvokeData GetMouseButtonDown;
  VirtualInvokeData GetMouseButtonUp;
  VirtualInvokeData GetMouseButton;
  VirtualInvokeData get_mousePosition;
  VirtualInvokeData get_mouseScrollDelta;
  VirtualInvokeData get_touchSupported;
  VirtualInvokeData get_touchCount;
  VirtualInvokeData GetTouch;
  VirtualInvokeData GetAxisRaw;
  VirtualInvokeData GetButtonDown;
};
struct BaseInput__StaticFields {
};
struct BaseInput__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseInput__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseInput__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable vtable;
};
struct IEnumerator_1_UnityEngine_EventSystems_PointerEventData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_EventSystems_PointerEventData___StaticFields {
};
struct IEnumerator_1_UnityEngine_EventSystems_PointerEventData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_EventSystems_PointerEventData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_EventSystems_PointerEventData___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable vtable;
};
struct ICollection_1_UnityEngine_EventSystems_PointerEventData___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_EventSystems_PointerEventData___StaticFields {
};
struct ICollection_1_UnityEngine_EventSystems_PointerEventData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_EventSystems_PointerEventData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_EventSystems_PointerEventData___VTable vtable;
};
struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields {
};
struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable vtable;
};
struct IEnumerable_1_UnityEngine_EventSystems_PointerEventData___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_EventSystems_PointerEventData___StaticFields {
};
struct IEnumerable_1_UnityEngine_EventSystems_PointerEventData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_EventSystems_PointerEventData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_EventSystems_PointerEventData___VTable vtable;
};
struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable {
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
struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields {
};
struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData___VTable vtable;
};
struct PointerInputModule_MouseButtonEventData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PointerInputModule_MouseButtonEventData__StaticFields {
};
struct PointerInputModule_MouseButtonEventData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerInputModule_MouseButtonEventData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerInputModule_MouseButtonEventData__VTable vtable;
};
struct PointerInputModule_ButtonState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PointerInputModule_ButtonState__StaticFields {
};
struct PointerInputModule_ButtonState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerInputModule_ButtonState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerInputModule_ButtonState__VTable vtable;
};
struct IEnumerator_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___StaticFields {
};
struct IEnumerator_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___VTable vtable;
};
struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___VTable {
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
struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___StaticFields {
  struct PointerInputModule_ButtonState__Array * _emptyArray;
};
struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___VTable vtable;
};
struct PointerInputModule_MouseState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PointerInputModule_MouseState__StaticFields {
};
struct PointerInputModule_MouseState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerInputModule_MouseState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerInputModule_MouseState__VTable vtable;
};
struct PointerInputModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData OnEnable;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData IsActive;
  VirtualInvokeData OnRectTransformDimensionsChange;
  VirtualInvokeData OnBeforeTransformParentChanged;
  VirtualInvokeData OnTransformParentChanged;
  VirtualInvokeData OnDidApplyAnimationProperties;
  VirtualInvokeData OnCanvasGroupChanged;
  VirtualInvokeData OnCanvasHierarchyChanged;
  VirtualInvokeData IsDestroyed;
  VirtualInvokeData __unknown;
  VirtualInvokeData GetAxisEventData;
  VirtualInvokeData GetBaseEventData;
  VirtualInvokeData IsPointerOverGameObject;
  VirtualInvokeData ShouldActivateModule;
  VirtualInvokeData DeactivateModule;
  VirtualInvokeData ActivateModule;
  VirtualInvokeData UpdateModule;
  VirtualInvokeData IsModuleSupported;
  VirtualInvokeData GetMousePointerEventData;
  VirtualInvokeData GetMousePointerEventData_1;
  VirtualInvokeData ProcessMove;
  VirtualInvokeData ProcessDrag;
};
struct PointerInputModule__StaticFields {
};
struct PointerInputModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointerInputModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointerInputModule__VTable vtable;
};
struct StandaloneInputModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData OnEnable;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData IsActive;
  VirtualInvokeData OnRectTransformDimensionsChange;
  VirtualInvokeData OnBeforeTransformParentChanged;
  VirtualInvokeData OnTransformParentChanged;
  VirtualInvokeData OnDidApplyAnimationProperties;
  VirtualInvokeData OnCanvasGroupChanged;
  VirtualInvokeData OnCanvasHierarchyChanged;
  VirtualInvokeData IsDestroyed;
  VirtualInvokeData Process;
  VirtualInvokeData GetAxisEventData;
  VirtualInvokeData GetBaseEventData;
  VirtualInvokeData IsPointerOverGameObject;
  VirtualInvokeData ShouldActivateModule;
  VirtualInvokeData DeactivateModule;
  VirtualInvokeData ActivateModule;
  VirtualInvokeData UpdateModule;
  VirtualInvokeData IsModuleSupported;
  VirtualInvokeData GetMousePointerEventData;
  VirtualInvokeData GetMousePointerEventData_1;
  VirtualInvokeData ProcessMove;
  VirtualInvokeData ProcessDrag;
  VirtualInvokeData ForceAutoSelect;
};
struct StandaloneInputModule__StaticFields {
};
struct StandaloneInputModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StandaloneInputModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StandaloneInputModule__VTable vtable;
};
struct BaseInputModule__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData OnEnable;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData IsActive;
  VirtualInvokeData OnRectTransformDimensionsChange;
  VirtualInvokeData OnBeforeTransformParentChanged;
  VirtualInvokeData OnTransformParentChanged;
  VirtualInvokeData OnDidApplyAnimationProperties;
  VirtualInvokeData OnCanvasGroupChanged;
  VirtualInvokeData OnCanvasHierarchyChanged;
  VirtualInvokeData IsDestroyed;
  VirtualInvokeData __unknown;
  VirtualInvokeData GetAxisEventData;
  VirtualInvokeData GetBaseEventData;
  VirtualInvokeData IsPointerOverGameObject;
  VirtualInvokeData ShouldActivateModule;
  VirtualInvokeData DeactivateModule;
  VirtualInvokeData ActivateModule;
  VirtualInvokeData UpdateModule;
  VirtualInvokeData IsModuleSupported;
};
struct BaseInputModule__StaticFields {
};
struct BaseInputModule__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseInputModule__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseInputModule__VTable vtable;
};}