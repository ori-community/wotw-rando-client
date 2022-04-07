namespace app {
struct InputField__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputField__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputField__VTable vtable;
};

enum InputField_EditState__Enum : int32_t {
  InputField_EditState__Enum_Continue = 0,
  InputField_EditState__Enum_Finish = 1,
};
struct InputField_EditState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InputField_EditState__Enum value;
};

struct InputField_ContentType__Enum__Array {
  struct InputField_ContentType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum InputField_ContentType__Enum vector[32];
};

struct __declspec(align(8)) InputField_CaretBlink_c_Iterator0__Fields {
  float _blinkPeriod___1;
  bool _blinkState___1;
  struct InputField * _this;
  struct Object * _current;
  bool _disposing;
  int32_t __PC;
};
struct InputField_CaretBlink_c_Iterator0 {
  struct InputField_CaretBlink_c_Iterator0__Class *klass;
  struct MonitorData *monitor;
  struct InputField_CaretBlink_c_Iterator0__Fields fields;
};
struct InputField_CaretBlink_c_Iterator0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData Reset;
  VirtualInvokeData Dispose;
  VirtualInvokeData System_Collections_Generic_IEnumerator_object__get_Current;
};
struct InputField_CaretBlink_c_Iterator0__StaticFields {
};
struct InputField_CaretBlink_c_Iterator0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputField_CaretBlink_c_Iterator0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputField_CaretBlink_c_Iterator0__VTable vtable;
};

struct __declspec(align(8)) InputField_MouseDragOutsideRect_c_Iterator1__Fields {
  struct Vector2 _position___1;
  struct PointerEventData * eventData;
  struct Vector2 _localMousePos___1;
  struct Rect _rect___1;
  float _delay___1;
  struct InputField * _this;
  struct Object * _current;
  bool _disposing;
  int32_t __PC;
};
struct InputField_MouseDragOutsideRect_c_Iterator1 {
  struct InputField_MouseDragOutsideRect_c_Iterator1__Class *klass;
  struct MonitorData *monitor;
  struct InputField_MouseDragOutsideRect_c_Iterator1__Fields fields;
};
struct InputField_MouseDragOutsideRect_c_Iterator1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData Reset;
  VirtualInvokeData Dispose;
  VirtualInvokeData System_Collections_Generic_IEnumerator_object__get_Current;
};
struct InputField_MouseDragOutsideRect_c_Iterator1__StaticFields {
};
struct InputField_MouseDragOutsideRect_c_Iterator1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputField_MouseDragOutsideRect_c_Iterator1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputField_MouseDragOutsideRect_c_Iterator1__VTable vtable;
};

struct Mask__Fields {
  struct UIBehaviour__Fields _;
  struct RectTransform * m_RectTransform;
  bool m_ShowMaskGraphic;
  struct Graphic * m_Graphic;
  struct Material * m_MaskMaterial;
  struct Material * m_UnmaskMaterial;
};
struct Mask {
  struct Mask__Class *klass;
  struct MonitorData *monitor;
  struct Mask__Fields fields;
};
struct Mask__VTable {
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
  VirtualInvokeData IsRaycastLocationValid;
  VirtualInvokeData GetModifiedMaterial;
  VirtualInvokeData MaskEnabled;
  VirtualInvokeData OnSiblingGraphicEnabledDisabled;
  VirtualInvokeData IsRaycastLocationValid_1;
  VirtualInvokeData GetModifiedMaterial_1;
};
struct Mask__StaticFields {
};
struct Mask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Mask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Mask__VTable vtable;
};

struct MaskUtilities {
  struct MaskUtilities__Class *klass;
  struct MonitorData *monitor;
};
struct MaskUtilities__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MaskUtilities__StaticFields {
};
struct MaskUtilities__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaskUtilities__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaskUtilities__VTable vtable;
};

struct RawImage__Fields {
  struct MaskableGraphic__Fields _;
  struct Texture * m_Texture;
  struct Rect m_UVRect;
};
struct RawImage {
  struct RawImage__Class *klass;
  struct MonitorData *monitor;
  struct RawImage__Fields fields;
};
struct RawImage__VTable {
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
  VirtualInvokeData Rebuild;
  VirtualInvokeData UnityEngine_UI_ICanvasElement_get_transform;
  VirtualInvokeData LayoutComplete;
  VirtualInvokeData GraphicUpdateComplete;
  VirtualInvokeData IsDestroyed_1;
  VirtualInvokeData get_color;
  VirtualInvokeData set_color;
  VirtualInvokeData get_raycastTarget;
  VirtualInvokeData set_raycastTarget;
  VirtualInvokeData SetAllDirty;
  VirtualInvokeData SetLayoutDirty;
  VirtualInvokeData SetVerticesDirty;
  VirtualInvokeData SetMaterialDirty;
  VirtualInvokeData get_rectTransform;
  VirtualInvokeData get_defaultMaterial;
  VirtualInvokeData get_material;
  VirtualInvokeData set_material;
  VirtualInvokeData get_materialForRendering;
  VirtualInvokeData get_mainTexture;
  VirtualInvokeData OnCullingChanged;
  VirtualInvokeData Rebuild_1;
  VirtualInvokeData LayoutComplete_1;
  VirtualInvokeData GraphicUpdateComplete_1;
  VirtualInvokeData UpdateMaterial;
  VirtualInvokeData UpdateGeometry;
  VirtualInvokeData OnFillVBO;
  VirtualInvokeData OnPopulateMesh;
  VirtualInvokeData OnPopulateMesh_1;
  VirtualInvokeData SetNativeSize;
  VirtualInvokeData Raycast;
  VirtualInvokeData CrossFadeColor;
  VirtualInvokeData CrossFadeColor_1;
  VirtualInvokeData CrossFadeAlpha;
  VirtualInvokeData UnityEngine_UI_IClippable_get_gameObject;
  VirtualInvokeData RecalculateClipping;
  VirtualInvokeData get_rectTransform_1;
  VirtualInvokeData Cull;
  VirtualInvokeData SetClipRect;
  VirtualInvokeData RecalculateMasking;
  VirtualInvokeData GetModifiedMaterial;
  VirtualInvokeData GetModifiedMaterial_1;
  VirtualInvokeData Cull_1;
  VirtualInvokeData SetClipRect_1;
  VirtualInvokeData ParentMaskStateChanged;
  VirtualInvokeData RecalculateClipping_1;
  VirtualInvokeData RecalculateMasking_1;
};
struct RawImage__StaticFields {
};
struct RawImage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RawImage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RawImage__VTable vtable;
};

enum Scrollbar_Direction__Enum : int32_t {
  Scrollbar_Direction__Enum_LeftToRight = 0,
  Scrollbar_Direction__Enum_RightToLeft = 1,
  Scrollbar_Direction__Enum_BottomToTop = 2,
  Scrollbar_Direction__Enum_TopToBottom = 3,
};
struct Scrollbar_Direction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Scrollbar_Direction__Enum value;
};
struct Scrollbar__Fields {
  struct Selectable__Fields _;
  struct RectTransform * m_HandleRect;
  enum Scrollbar_Direction__Enum m_Direction;
  float m_Value;
  float m_Size;
  int32_t m_NumberOfSteps;
  struct Scrollbar_ScrollEvent * m_OnValueChanged;
  struct RectTransform * m_ContainerRect;
  struct Vector2 m_Offset;
  struct DrivenRectTransformTracker m_Tracker;
  struct Coroutine * m_PointerDownRepeat;
  bool isPointerDownAndNotDragging;
};
struct Scrollbar {
  struct Scrollbar__Class *klass;
  struct MonitorData *monitor;
  struct Scrollbar__Fields fields;
};
struct Scrollbar_ScrollEvent__Fields {
  struct UnityEvent_1_System_Single___Fields _;
};
struct Scrollbar_ScrollEvent {
  struct Scrollbar_ScrollEvent__Class *klass;
  struct MonitorData *monitor;
  struct Scrollbar_ScrollEvent__Fields fields;
};
struct Scrollbar_ScrollEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  VirtualInvokeData FindMethod_Impl;
  VirtualInvokeData GetDelegate;
};
struct Scrollbar_ScrollEvent__StaticFields {
};
struct Scrollbar_ScrollEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Scrollbar_ScrollEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Scrollbar_ScrollEvent__VTable vtable;
};
struct Scrollbar__VTable {
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
  VirtualInvokeData OnMove;
  VirtualInvokeData OnPointerDown;
  VirtualInvokeData OnPointerUp;
  VirtualInvokeData OnPointerEnter;
  VirtualInvokeData OnPointerExit;
  VirtualInvokeData OnSelect;
  VirtualInvokeData OnDeselect;
  VirtualInvokeData IsInteractable;
  VirtualInvokeData InstantClearState;
  VirtualInvokeData DoStateTransition;
  VirtualInvokeData FindSelectableOnLeft;
  VirtualInvokeData FindSelectableOnRight;
  VirtualInvokeData FindSelectableOnUp;
  VirtualInvokeData FindSelectableOnDown;
  VirtualInvokeData OnMove_1;
  VirtualInvokeData OnPointerDown_1;
  VirtualInvokeData OnPointerUp_1;
  VirtualInvokeData OnPointerEnter_1;
  VirtualInvokeData OnPointerExit_1;
  VirtualInvokeData OnSelect_1;
  VirtualInvokeData OnDeselect_1;
  VirtualInvokeData Select;
  VirtualInvokeData OnBeginDrag;
  VirtualInvokeData OnDrag;
  VirtualInvokeData OnInitializePotentialDrag;
  VirtualInvokeData Rebuild;
  VirtualInvokeData UnityEngine_UI_ICanvasElement_get_transform;
  VirtualInvokeData LayoutComplete;
  VirtualInvokeData GraphicUpdateComplete;
  VirtualInvokeData IsDestroyed_1;
  VirtualInvokeData Rebuild_1;
  VirtualInvokeData LayoutComplete_1;
  VirtualInvokeData GraphicUpdateComplete_1;
  VirtualInvokeData OnBeginDrag_1;
  VirtualInvokeData OnDrag_1;
  VirtualInvokeData OnInitializePotentialDrag_1;
};
struct Scrollbar__StaticFields {
};
struct Scrollbar__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Scrollbar__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Scrollbar__VTable vtable;
};

enum Scrollbar_Axis__Enum : int32_t {
  Scrollbar_Axis__Enum_Horizontal = 0,
  Scrollbar_Axis__Enum_Vertical = 1,
};
struct Scrollbar_Axis__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Scrollbar_Axis__Enum value;
};

struct __declspec(align(8)) Scrollbar_ClickRepeat_c_Iterator0__Fields {
  struct PointerEventData * eventData;
  struct Scrollbar * _this;
  struct Object * _current;
  bool _disposing;
  int32_t __PC;
};
struct Scrollbar_ClickRepeat_c_Iterator0 {
  struct Scrollbar_ClickRepeat_c_Iterator0__Class *klass;
  struct MonitorData *monitor;
  struct Scrollbar_ClickRepeat_c_Iterator0__Fields fields;
};
struct Scrollbar_ClickRepeat_c_Iterator0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData Reset;
  VirtualInvokeData Dispose;
  VirtualInvokeData System_Collections_Generic_IEnumerator_object__get_Current;
};
struct Scrollbar_ClickRepeat_c_Iterator0__StaticFields {
};
struct Scrollbar_ClickRepeat_c_Iterator0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Scrollbar_ClickRepeat_c_Iterator0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Scrollbar_ClickRepeat_c_Iterator0__VTable vtable;
};

enum ScrollRect_MovementType__Enum : int32_t {
  ScrollRect_MovementType__Enum_Unrestricted = 0,
  ScrollRect_MovementType__Enum_Elastic = 1,
  ScrollRect_MovementType__Enum_Clamped = 2,
};
struct ScrollRect_MovementType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScrollRect_MovementType__Enum value;
};
enum ScrollRect_ScrollbarVisibility__Enum : int32_t {
  ScrollRect_ScrollbarVisibility__Enum_Permanent = 0,
  ScrollRect_ScrollbarVisibility__Enum_AutoHide = 1,
  ScrollRect_ScrollbarVisibility__Enum_AutoHideAndExpandViewport = 2,
};
struct ScrollRect_ScrollbarVisibility__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScrollRect_ScrollbarVisibility__Enum value;
};
struct ScrollRect__Fields {
  struct UIBehaviour__Fields _;
  struct RectTransform * m_Content;
  bool m_Horizontal;
  bool m_Vertical;
  enum ScrollRect_MovementType__Enum m_MovementType;
  float m_Elasticity;
  bool m_Inertia;
  float m_DecelerationRate;
  float m_ScrollSensitivity;
  struct RectTransform * m_Viewport;
  struct Scrollbar * m_HorizontalScrollbar;
  struct Scrollbar * m_VerticalScrollbar;
  enum ScrollRect_ScrollbarVisibility__Enum m_HorizontalScrollbarVisibility;
  enum ScrollRect_ScrollbarVisibility__Enum m_VerticalScrollbarVisibility;
  float m_HorizontalScrollbarSpacing;
  float m_VerticalScrollbarSpacing;
  struct ScrollRect_ScrollRectEvent * m_OnValueChanged;
  struct Vector2 m_PointerStartLocalCursor;
  struct Vector2 m_ContentStartPosition;
  struct RectTransform * m_ViewRect;
  struct Bounds m_ContentBounds;
  struct Bounds m_ViewBounds;
  struct Vector2 m_Velocity;
  bool m_Dragging;
  bool m_Scrolling;
  struct Vector2 m_PrevPosition;
  struct Bounds m_PrevContentBounds;
  struct Bounds m_PrevViewBounds;
  bool m_HasRebuiltLayout;
  bool m_HSliderExpand;
  bool m_VSliderExpand;
  float m_HSliderHeight;
  float m_VSliderWidth;
  struct RectTransform * m_Rect;
  struct RectTransform * m_HorizontalScrollbarRect;
  struct RectTransform * m_VerticalScrollbarRect;
  struct DrivenRectTransformTracker m_Tracker;
  struct Vector3__Array * m_Corners;
};
struct ScrollRect {
  struct ScrollRect__Class *klass;
  struct MonitorData *monitor;
  struct ScrollRect__Fields fields;
};
struct UnityEvent_1_UnityEngine_Vector2___Fields {
  struct UnityEventBase__Fields _;
  struct Object__Array * m_InvokeArray;
};
struct UnityEvent_1_UnityEngine_Vector2_ {
  struct UnityEvent_1_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct UnityEvent_1_UnityEngine_Vector2___Fields fields;
};
struct ScrollRect_ScrollRectEvent__Fields {
  struct UnityEvent_1_UnityEngine_Vector2___Fields _;
};
struct ScrollRect_ScrollRectEvent {
  struct ScrollRect_ScrollRectEvent__Class *klass;
  struct MonitorData *monitor;
  struct ScrollRect_ScrollRectEvent__Fields fields;
};
struct UnityEvent_1_UnityEngine_Vector2___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  VirtualInvokeData FindMethod_Impl;
  VirtualInvokeData GetDelegate;
};
struct UnityEvent_1_UnityEngine_Vector2___StaticFields {
};
struct UnityEvent_1_UnityEngine_Vector2___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityEvent_1_UnityEngine_Vector2___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityEvent_1_UnityEngine_Vector2___VTable vtable;
};
struct ScrollRect_ScrollRectEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  VirtualInvokeData FindMethod_Impl;
  VirtualInvokeData GetDelegate;
};
struct ScrollRect_ScrollRectEvent__StaticFields {
};
struct ScrollRect_ScrollRectEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScrollRect_ScrollRectEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScrollRect_ScrollRectEvent__VTable vtable;
};
struct ScrollRect__VTable {
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
  VirtualInvokeData OnInitializePotentialDrag;
  VirtualInvokeData OnBeginDrag;
  VirtualInvokeData OnEndDrag;
  VirtualInvokeData OnDrag;
  VirtualInvokeData OnScroll;
  VirtualInvokeData Rebuild;
  VirtualInvokeData UnityEngine_UI_ICanvasElement_get_transform;
  VirtualInvokeData LayoutComplete;
  VirtualInvokeData GraphicUpdateComplete;
  VirtualInvokeData IsDestroyed_1;
  VirtualInvokeData CalculateLayoutInputHorizontal;
  VirtualInvokeData CalculateLayoutInputVertical;
  VirtualInvokeData get_minWidth;
  VirtualInvokeData get_preferredWidth;
  VirtualInvokeData get_flexibleWidth;
  VirtualInvokeData get_minHeight;
  VirtualInvokeData get_preferredHeight;
  VirtualInvokeData get_flexibleHeight;
  VirtualInvokeData get_layoutPriority;
  VirtualInvokeData SetLayoutHorizontal;
  VirtualInvokeData SetLayoutVertical;
  VirtualInvokeData Rebuild_1;
  VirtualInvokeData LayoutComplete_1;
  VirtualInvokeData GraphicUpdateComplete_1;
  VirtualInvokeData StopMovement;
  VirtualInvokeData OnScroll_1;
  VirtualInvokeData OnInitializePotentialDrag_1;
  VirtualInvokeData OnBeginDrag_1;
  VirtualInvokeData OnEndDrag_1;
  VirtualInvokeData OnDrag_1;
  VirtualInvokeData SetContentAnchoredPosition;
  VirtualInvokeData LateUpdate;
  VirtualInvokeData SetNormalizedPosition;
  VirtualInvokeData CalculateLayoutInputHorizontal_1;
  VirtualInvokeData CalculateLayoutInputVertical_1;
  VirtualInvokeData get_minWidth_1;
  VirtualInvokeData get_preferredWidth_1;
  VirtualInvokeData get_flexibleWidth_1;
  VirtualInvokeData get_minHeight_1;
  VirtualInvokeData get_preferredHeight_1;
  VirtualInvokeData get_flexibleHeight_1;
  VirtualInvokeData get_layoutPriority_1;
  VirtualInvokeData SetLayoutHorizontal_1;
  VirtualInvokeData SetLayoutVertical_1;
};
struct ScrollRect__StaticFields {
};
struct ScrollRect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScrollRect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScrollRect__VTable vtable;
};

enum Slider_Direction__Enum : int32_t {
  Slider_Direction__Enum_LeftToRight = 0,
  Slider_Direction__Enum_RightToLeft = 1,
  Slider_Direction__Enum_BottomToTop = 2,
  Slider_Direction__Enum_TopToBottom = 3,
};
struct Slider_Direction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Slider_Direction__Enum value;
};
struct Slider__Fields {
  struct Selectable__Fields _;
  struct RectTransform * m_FillRect;
  struct RectTransform * m_HandleRect;
  enum Slider_Direction__Enum m_Direction;
  float m_MinValue;
  float m_MaxValue;
  bool m_WholeNumbers;
  float m_Value;
  struct Slider_SliderEvent * m_OnValueChanged;
  struct Image * m_FillImage;
  struct Transform * m_FillTransform;
  struct RectTransform * m_FillContainerRect;
  struct Transform * m_HandleTransform;
  struct RectTransform * m_HandleContainerRect;
  struct Vector2 m_Offset;
  struct DrivenRectTransformTracker m_Tracker;
};
struct Slider {
  struct Slider__Class *klass;
  struct MonitorData *monitor;
  struct Slider__Fields fields;
};
struct Slider_SliderEvent__Fields {
  struct UnityEvent_1_System_Single___Fields _;
};
struct Slider_SliderEvent {
  struct Slider_SliderEvent__Class *klass;
  struct MonitorData *monitor;
  struct Slider_SliderEvent__Fields fields;
};
struct Slider_SliderEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  VirtualInvokeData FindMethod_Impl;
  VirtualInvokeData GetDelegate;
};
struct Slider_SliderEvent__StaticFields {
};
struct Slider_SliderEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Slider_SliderEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Slider_SliderEvent__VTable vtable;
};
struct Slider__VTable {
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
  VirtualInvokeData OnMove;
  VirtualInvokeData OnPointerDown;
  VirtualInvokeData OnPointerUp;
  VirtualInvokeData OnPointerEnter;
  VirtualInvokeData OnPointerExit;
  VirtualInvokeData OnSelect;
  VirtualInvokeData OnDeselect;
  VirtualInvokeData IsInteractable;
  VirtualInvokeData InstantClearState;
  VirtualInvokeData DoStateTransition;
  VirtualInvokeData FindSelectableOnLeft;
  VirtualInvokeData FindSelectableOnRight;
  VirtualInvokeData FindSelectableOnUp;
  VirtualInvokeData FindSelectableOnDown;
  VirtualInvokeData OnMove_1;
  VirtualInvokeData OnPointerDown_1;
  VirtualInvokeData OnPointerUp_1;
  VirtualInvokeData OnPointerEnter_1;
  VirtualInvokeData OnPointerExit_1;
  VirtualInvokeData OnSelect_1;
  VirtualInvokeData OnDeselect_1;
  VirtualInvokeData Select;
  VirtualInvokeData OnDrag;
  VirtualInvokeData OnInitializePotentialDrag;
  VirtualInvokeData Rebuild;
  VirtualInvokeData UnityEngine_UI_ICanvasElement_get_transform;
  VirtualInvokeData LayoutComplete;
  VirtualInvokeData GraphicUpdateComplete;
  VirtualInvokeData IsDestroyed_1;
  VirtualInvokeData get_value;
  VirtualInvokeData set_value;
  VirtualInvokeData Rebuild_1;
  VirtualInvokeData LayoutComplete_1;
  VirtualInvokeData GraphicUpdateComplete_1;
  VirtualInvokeData Set;
  VirtualInvokeData OnDrag_1;
  VirtualInvokeData OnInitializePotentialDrag_1;
};
struct Slider__StaticFields {
};
struct Slider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Slider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Slider__VTable vtable;
};

enum Slider_Axis__Enum : int32_t {
  Slider_Axis__Enum_Horizontal = 0,
  Slider_Axis__Enum_Vertical = 1,
};
struct Slider_Axis__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Slider_Axis__Enum value;
};

struct __declspec(align(8)) StencilMaterial_MatEntry__Fields {
  struct Material * baseMat;
  struct Material * customMat;
  int32_t count;
  int32_t stencilId;
  enum StencilOp__Enum operation;
  enum CompareFunction__Enum compareFunction;
  int32_t readMask;
  int32_t writeMask;
  bool useAlphaClip;
  enum ColorWriteMask__Enum colorMask;
};
struct StencilMaterial_MatEntry {
  struct StencilMaterial_MatEntry__Class *klass;
  struct MonitorData *monitor;
  struct StencilMaterial_MatEntry__Fields fields;
};
struct StencilMaterial_MatEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StencilMaterial_MatEntry__StaticFields {
};
struct StencilMaterial_MatEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StencilMaterial_MatEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StencilMaterial_MatEntry__VTable vtable;
};

struct IEnumerable_1_UnityEngine_UI_Toggle_ {
  struct IEnumerable_1_UnityEngine_UI_Toggle___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_UI_Toggle___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_UI_Toggle___StaticFields {
};
struct IEnumerable_1_UnityEngine_UI_Toggle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_UI_Toggle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_UI_Toggle___VTable vtable;
};

struct __declspec(align(8)) ClipperRegistry__Fields {
  struct IndexedSet_1_UnityEngine_UI_IClipper_ * m_Clippers;
};
struct ClipperRegistry {
  struct ClipperRegistry__Class *klass;
  struct MonitorData *monitor;
  struct ClipperRegistry__Fields fields;
};
struct __declspec(align(8)) IndexedSet_1_UnityEngine_UI_IClipper___Fields {
  struct List_1_UnityEngine_UI_IClipper_ * m_List;
  struct Dictionary_2_UnityEngine_UI_IClipper_System_Int32_ * m_Dictionary;
};
struct IndexedSet_1_UnityEngine_UI_IClipper_ {
  struct IndexedSet_1_UnityEngine_UI_IClipper___Class *klass;
  struct MonitorData *monitor;
  struct IndexedSet_1_UnityEngine_UI_IClipper___Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_UI_IClipper___Fields {
  struct IClipper__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UI_IClipper_ {
  struct List_1_UnityEngine_UI_IClipper___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UI_IClipper___Fields fields;
};
struct IClipper {
  struct IClipper__Class *klass;
  struct MonitorData *monitor;
};
struct IClipper__Array {
  struct IClipper__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IClipper * vector[32];
};
struct IEnumerator_1_UnityEngine_UI_IClipper_ {
  struct IEnumerator_1_UnityEngine_UI_IClipper___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_UI_IClipper_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_IClipper_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_UI_IClipper_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_IClipper_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_IClipper_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_UI_IClipper_System_Int32_ {
  struct Dictionary_2_UnityEngine_UI_IClipper_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_UI_IClipper_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_IClipper_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  struct IClipper * key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_IClipper_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_IClipper_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_IClipper_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_IClipper_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_IClipper_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_IClipper_System_Int32_ vector[32];
};
struct IEqualityComparer_1_UnityEngine_UI_IClipper_ {
  struct IEqualityComparer_1_UnityEngine_UI_IClipper___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_IClipper_System_Int32___Fields {
  struct Dictionary_2_UnityEngine_UI_IClipper_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_IClipper_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_IClipper_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_IClipper_System_Int32___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_IClipper_System_Int32___Fields {
  struct Dictionary_2_UnityEngine_UI_IClipper_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_IClipper_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_IClipper_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_IClipper_System_Int32___Fields fields;
};
struct ICollection_1_UnityEngine_UI_IClipper_ {
  struct ICollection_1_UnityEngine_UI_IClipper___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_UI_IClipper_System_Int32_ {
  struct IClipper * key;
  int32_t value;
};
struct KeyValuePair_2_UnityEngine_UI_IClipper_System_Int32___Boxed {
  struct KeyValuePair_2_UnityEngine_UI_IClipper_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_UI_IClipper_System_Int32_ fields;
};
struct KeyValuePair_2_UnityEngine_UI_IClipper_System_Int32___Array {
  struct KeyValuePair_2_UnityEngine_UI_IClipper_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_UI_IClipper_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_UI_IClipper_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_UI_IClipper_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_UI_IClipper_ {
  struct IEnumerable_1_UnityEngine_UI_IClipper___Class *klass;
  struct MonitorData *monitor;
};
struct IClipper__VTable {
  VirtualInvokeData PerformClipping;
};
struct IClipper__StaticFields {
};
struct IClipper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IClipper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IClipper__VTable vtable;
};
struct IEnumerator_1_UnityEngine_UI_IClipper___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_UI_IClipper___StaticFields {
};
struct IEnumerator_1_UnityEngine_UI_IClipper___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_UI_IClipper___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_UI_IClipper___VTable vtable;
};
struct List_1_UnityEngine_UI_IClipper___VTable {
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
};}