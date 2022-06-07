namespace app {
struct List_1_Moon_ISuspendable___StaticFields {
    struct ISuspendable__Array *_emptyArray;
};

struct List_1_Moon_ISuspendable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_ISuspendable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_ISuspendable___VTable vtable;
};

struct __declspec(align(8)) SuspensionManager_SuspensionTicket__Fields {
    int32_t ID;
    SuspendableMask__Enum Mask_1;
    
};

struct SuspensionManager_SuspensionTicket {
    struct SuspensionManager_SuspensionTicket__Class *klass;
    MonitorData *monitor;
    struct SuspensionManager_SuspensionTicket__Fields fields;
};

struct SuspensionManager_SuspensionTicket__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SuspensionManager_SuspensionTicket__StaticFields {
};

struct SuspensionManager_SuspensionTicket__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SuspensionManager_SuspensionTicket__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SuspensionManager_SuspensionTicket__VTable vtable;
};

struct __declspec(align(8)) SuspensionManager_SuspendableInfo__Fields {
    int32_t m_counter;
};

struct SuspensionManager_SuspendableInfo {
    struct SuspensionManager_SuspendableInfo__Class *klass;
    MonitorData *monitor;
    struct SuspensionManager_SuspendableInfo__Fields fields;
};

struct SuspensionManager_SuspendableInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SuspensionManager_SuspendableInfo__StaticFields {
};

struct SuspensionManager_SuspendableInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SuspensionManager_SuspendableInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SuspensionManager_SuspendableInfo__VTable vtable;
};

struct UIBehaviour__Fields {
    struct MonoBehaviour__Fields _;
};

struct UIBehaviour {
    struct UIBehaviour__Class *klass;
    MonitorData *monitor;
    struct UIBehaviour__Fields fields;
};

struct EventSystem__Fields {
    struct UIBehaviour__Fields _;
    struct List_1_UnityEngine_EventSystems_BaseInputModule_ *m_SystemInputModules;
    struct BaseInputModule *m_CurrentInputModule;
    struct GameObject *m_FirstSelected;
    bool m_sendNavigationEvents;
    int32_t m_DragThreshold;
    struct GameObject *m_CurrentSelected;
    bool m_HasFocus;
    bool m_SelectionGuard;
    struct BaseEventData *m_DummyData;
};

struct EventSystem {
    struct EventSystem__Class *klass;
    MonitorData *monitor;
    struct EventSystem__Fields fields;
};

struct __declspec(align(8)) List_1_UnityEngine_EventSystems_BaseInputModule___Fields {
    struct BaseInputModule__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_EventSystems_BaseInputModule_ {
    struct List_1_UnityEngine_EventSystems_BaseInputModule___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_EventSystems_BaseInputModule___Fields fields;
};

struct BaseInputModule__Fields {
    struct UIBehaviour__Fields _;
    struct List_1_UnityEngine_EventSystems_RaycastResult_ *m_RaycastResultCache;
    struct AxisEventData *m_AxisEventData;
    struct EventSystem *m_EventSystem;
    struct BaseEventData *m_BaseEventData;
    struct BaseInput *m_InputOverride;
    struct BaseInput *m_DefaultInput;
};

struct BaseInputModule {
    struct BaseInputModule__Class *klass;
    MonitorData *monitor;
    struct BaseInputModule__Fields fields;
};

struct __declspec(align(8)) List_1_UnityEngine_EventSystems_RaycastResult___Fields {
    struct RaycastResult__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_EventSystems_RaycastResult_ {
    struct List_1_UnityEngine_EventSystems_RaycastResult___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_EventSystems_RaycastResult___Fields fields;
};

struct RaycastResult {
    struct GameObject *m_GameObject;
    struct BaseRaycaster *module;
    float distance;
    float index;
    int32_t depth;
    int32_t sortingLayer;
    int32_t sortingOrder;
    struct Vector3 worldPosition;
    struct Vector3 worldNormal;
    struct Vector2 screenPosition;
    int32_t displayIndex;
};

struct RaycastResult__Boxed {
    struct RaycastResult__Class *klass;
    MonitorData *monitor;
    struct RaycastResult fields;
};

struct BaseRaycaster__Fields {
    struct UIBehaviour__Fields _;
};

struct BaseRaycaster {
    struct BaseRaycaster__Class *klass;
    MonitorData *monitor;
    struct BaseRaycaster__Fields fields;
};

struct PhysicsRaycaster__Fields {
    struct BaseRaycaster__Fields _;
    struct Camera *m_EventCamera;
    struct LayerMask m_EventMask;
    int32_t m_MaxRayIntersections;
    int32_t m_LastMaxRayIntersections;
    struct RaycastHit__Array *m_Hits;
};

struct PhysicsRaycaster {
    struct PhysicsRaycaster__Class *klass;
    MonitorData *monitor;
    struct PhysicsRaycaster__Fields fields;
};

struct Physics2DRaycaster__Fields {
    struct PhysicsRaycaster__Fields _;
    struct RaycastHit2D__Array *m_Hits;
};

struct Physics2DRaycaster {
    struct Physics2DRaycaster__Class *klass;
    MonitorData *monitor;
    struct Physics2DRaycaster__Fields fields;
};

struct Comparison_1_UnityEngine_RaycastHit___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_UnityEngine_RaycastHit_ {
    struct Comparison_1_UnityEngine_RaycastHit___Class *klass;
    MonitorData *monitor;
    struct Comparison_1_UnityEngine_RaycastHit___Fields fields;
};

struct __declspec(align(8)) AbstractEventData__Fields {
    bool m_Used;
};

struct AbstractEventData {
    struct AbstractEventData__Class *klass;
    MonitorData *monitor;
    struct AbstractEventData__Fields fields;
};

struct BaseEventData__Fields {
    struct AbstractEventData__Fields _;
    struct EventSystem *m_EventSystem;
};

struct BaseEventData {
    struct BaseEventData__Class *klass;
    MonitorData *monitor;
    struct BaseEventData__Fields fields;
};

enum class PointerEventData_InputButton__Enum : int32_t {
    Left = 0x00000000,
    Right = 0x00000001,
    Middle = 0x00000002,
};

struct PointerEventData_InputButton__Enum__Boxed {
    struct PointerEventData_InputButton__Enum__Class *klass;
    MonitorData *monitor;
    PointerEventData_InputButton__Enum value;
    
};

struct PointerEventData__Fields {
    struct BaseEventData__Fields _;
    struct GameObject *_pointerEnter_k__BackingField;
    struct GameObject *m_PointerPress;
    struct GameObject *_lastPress_k__BackingField;
    struct GameObject *_rawPointerPress_k__BackingField;
    struct GameObject *_pointerDrag_k__BackingField;
    struct RaycastResult _pointerCurrentRaycast_k__BackingField;
    struct RaycastResult _pointerPressRaycast_k__BackingField;
    struct List_1_UnityEngine_GameObject_ *hovered;
    bool _eligibleForClick_k__BackingField;
    int32_t _pointerId_k__BackingField;
    struct Vector2 _position_k__BackingField;
    struct Vector2 _delta_k__BackingField;
    struct Vector2 _pressPosition_k__BackingField;
    struct Vector3 _worldPosition_k__BackingField;
    struct Vector3 _worldNormal_k__BackingField;
    float _clickTime_k__BackingField;
    int32_t _clickCount_k__BackingField;
    struct Vector2 _scrollDelta_k__BackingField;
    bool _useDragThreshold_k__BackingField;
    bool _dragging_k__BackingField;
    PointerEventData_InputButton__Enum _button_k__BackingField;
    
};

struct PointerEventData {
    struct PointerEventData__Class *klass;
    MonitorData *monitor;
    struct PointerEventData__Fields fields;
};

struct RaycastResult__Array {
    struct RaycastResult__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct RaycastResult vector[32];
};

struct IEnumerator_1_UnityEngine_EventSystems_RaycastResult_ {
    struct IEnumerator_1_UnityEngine_EventSystems_RaycastResult___Class *klass;
    MonitorData *monitor;
};

enum class MoveDirection__Enum : int32_t {
    Left = 0x00000000,
    Up = 0x00000001,
    Right = 0x00000002,
    Down = 0x00000003,
    None = 0x00000004,
};

struct MoveDirection__Enum__Boxed {
    struct MoveDirection__Enum__Class *klass;
    MonitorData *monitor;
    MoveDirection__Enum value;
    
};

struct AxisEventData__Fields {
    struct BaseEventData__Fields _;
    struct Vector2 _moveVector_k__BackingField;
    MoveDirection__Enum _moveDir_k__BackingField;
    
};

struct AxisEventData {
    struct AxisEventData__Class *klass;
    MonitorData *monitor;
    struct AxisEventData__Fields fields;
};

struct BaseInput__Fields {
    struct UIBehaviour__Fields _;
};

struct BaseInput {
    struct BaseInput__Class *klass;
    MonitorData *monitor;
    struct BaseInput__Fields fields;
};

struct PointerInputModule__Fields {
    struct BaseInputModule__Fields _;
    struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ *m_PointerData;
    struct PointerInputModule_MouseState *m_MouseState;
};

struct PointerInputModule {
    struct PointerInputModule__Class *klass;
    MonitorData *monitor;
    struct PointerInputModule__Fields fields;
};

struct StandaloneInputModule__Fields {
    struct PointerInputModule__Fields _;
    float m_PrevActionTime;
    struct Vector2 m_LastMoveVector;
    int32_t m_ConsecutiveMoveCount;
    struct Vector2 m_LastMousePosition;
    struct Vector2 m_MousePosition;
    struct GameObject *m_CurrentFocusedGameObject;
    struct PointerEventData *m_InputPointerEvent;
    struct String *m_HorizontalAxis;
    struct String *m_VerticalAxis;
    struct String *m_SubmitButton;
    struct String *m_CancelButton;
    float m_InputActionsPerSecond;
    float m_RepeatDelay;
    bool m_ForceModuleActive;
};

struct StandaloneInputModule {
    struct StandaloneInputModule__Class *klass;
    MonitorData *monitor;
    struct StandaloneInputModule__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
    struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct PointerEventData *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_EventSystems_PointerEventData_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields {
    struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields {
    struct Dictionary_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_EventSystems_PointerEventData___Fields fields;
};

struct PointerEventData__Array {
    struct PointerEventData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PointerEventData *vector[32];
};

struct IEnumerator_1_UnityEngine_EventSystems_PointerEventData_ {
    struct IEnumerator_1_UnityEngine_EventSystems_PointerEventData___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_UnityEngine_EventSystems_PointerEventData_ {
    struct ICollection_1_UnityEngine_EventSystems_PointerEventData___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
    int32_t key;
    struct PointerEventData *value;
};

struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Boxed {
    struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ fields;
};

struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Array {
    struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_EventSystems_PointerEventData___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UnityEngine_EventSystems_PointerEventData_ {
    struct IEnumerable_1_UnityEngine_EventSystems_PointerEventData___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) PointerInputModule_MouseState__Fields {
    struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState_ *m_TrackedButtons;
};

struct PointerInputModule_MouseState {
    struct PointerInputModule_MouseState__Class *klass;
    MonitorData *monitor;
    struct PointerInputModule_MouseState__Fields fields;
};

struct __declspec(align(8)) List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___Fields {
    struct PointerInputModule_ButtonState__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState_ {
    struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___Fields fields;
};

struct __declspec(align(8)) PointerInputModule_ButtonState__Fields {
    PointerEventData_InputButton__Enum m_Button;
    
    struct PointerInputModule_MouseButtonEventData *m_EventData;
};

struct PointerInputModule_ButtonState {
    struct PointerInputModule_ButtonState__Class *klass;
    MonitorData *monitor;
    struct PointerInputModule_ButtonState__Fields fields;
};

enum class PointerEventData_FramePressState__Enum : int32_t {
    Pressed = 0x00000000,
    Released = 0x00000001,
    PressedAndReleased = 0x00000002,
    NotChanged = 0x00000003,
};

struct PointerEventData_FramePressState__Enum__Boxed {
    struct PointerEventData_FramePressState__Enum__Class *klass;
    MonitorData *monitor;
    PointerEventData_FramePressState__Enum value;
    
};

struct __declspec(align(8)) PointerInputModule_MouseButtonEventData__Fields {
    PointerEventData_FramePressState__Enum buttonState;
    
    struct PointerEventData *buttonData;
};

struct PointerInputModule_MouseButtonEventData {
    struct PointerInputModule_MouseButtonEventData__Class *klass;
    MonitorData *monitor;
    struct PointerInputModule_MouseButtonEventData__Fields fields;
};

struct PointerInputModule_ButtonState__Array {
    struct PointerInputModule_ButtonState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct PointerInputModule_ButtonState *vector[32];
};

struct IEnumerator_1_UnityEngine_EventSystems_PointerInputModule_ButtonState_ {
    struct IEnumerator_1_UnityEngine_EventSystems_PointerInputModule_ButtonState___Class *klass;
    MonitorData *monitor;
};

struct BaseInputModule__Array {
    struct BaseInputModule__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct BaseInputModule *vector[32];
};

struct IEnumerator_1_UnityEngine_EventSystems_BaseInputModule_ {
    struct IEnumerator_1_UnityEngine_EventSystems_BaseInputModule___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_UnityEngine_EventSystems_EventSystem___Fields {
    struct EventSystem__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_EventSystems_EventSystem_ {
    struct List_1_UnityEngine_EventSystems_EventSystem___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_EventSystems_EventSystem___Fields fields;
};

struct EventSystem__Array {
    struct EventSystem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EventSystem *vector[32];
};

struct IEnumerator_1_UnityEngine_EventSystems_EventSystem_ {
    struct IEnumerator_1_UnityEngine_EventSystems_EventSystem___Class *klass;
    MonitorData *monitor;
};

struct Comparison_1_UnityEngine_EventSystems_RaycastResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Comparison_1_UnityEngine_EventSystems_RaycastResult_ {
    struct Comparison_1_UnityEngine_EventSystems_RaycastResult___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UIBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Comparison_1_UnityEngine_RaycastHit___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AbstractEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseEventData__VTable vtable;
};

struct PointerEventData_InputButton__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct PointerEventData_InputButton__Enum__StaticFields {
};

struct PointerEventData_InputButton__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PointerEventData_InputButton__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PointerEventData_InputButton__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PointerEventData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct Comparison_1_UnityEngine_RaycastHit_ *__f__am_cache0;
};

struct PhysicsRaycaster__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsRaycaster__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Physics2DRaycaster__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseRaycaster__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaycastResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaycastResult__VTable vtable;
};

struct RaycastResult__Array__VTable {
};

struct RaycastResult__Array__StaticFields {
};

struct RaycastResult__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RaycastResult__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RaycastResult__Array__VTable vtable;
};

struct IEnumerator_1_UnityEngine_EventSystems_RaycastResult___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UnityEngine_EventSystems_RaycastResult___StaticFields {
};

struct IEnumerator_1_UnityEngine_EventSystems_RaycastResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UnityEngine_EventSystems_RaycastResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct RaycastResult__Array *_emptyArray;
};

struct List_1_UnityEngine_EventSystems_RaycastResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_EventSystems_RaycastResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UnityEngine_EventSystems_RaycastResult___VTable vtable;
};

struct MoveDirection__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct MoveDirection__Enum__StaticFields {
};

}
