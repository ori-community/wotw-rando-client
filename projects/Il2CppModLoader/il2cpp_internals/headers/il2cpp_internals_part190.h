namespace app {
struct IndexedSet_1_UnityEngine_UI_ICanvasElement___StaticFields {
};
struct IndexedSet_1_UnityEngine_UI_ICanvasElement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IndexedSet_1_UnityEngine_UI_ICanvasElement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IndexedSet_1_UnityEngine_UI_ICanvasElement___VTable vtable;
};
struct Comparison_1_UnityEngine_UI_ICanvasElement___VTable {
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
struct Comparison_1_UnityEngine_UI_ICanvasElement___StaticFields {
};
struct Comparison_1_UnityEngine_UI_ICanvasElement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_UnityEngine_UI_ICanvasElement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_UnityEngine_UI_ICanvasElement___VTable vtable;
};
struct CanvasUpdateRegistry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CanvasUpdateRegistry__StaticFields {
  struct CanvasUpdateRegistry * s_Instance;
  struct Comparison_1_UnityEngine_UI_ICanvasElement_ * s_SortLayoutFunction;
  struct Comparison_1_UnityEngine_UI_ICanvasElement_ * __f__mg_cache0;
};
struct CanvasUpdateRegistry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CanvasUpdateRegistry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CanvasUpdateRegistry__VTable vtable;
};

struct MaskableGraphic__Fields {
  struct Graphic__Fields _;
  bool m_ShouldRecalculateStencil;
  struct Material * m_MaskMaterial;
  struct RectMask2D * m_ParentMask;
  bool m_Maskable;
  bool m_IncludeForMasking;
  struct MaskableGraphic_CullStateChangedEvent * m_OnCullStateChanged;
  bool m_ShouldRecalculate;
  int32_t m_StencilValue;
  struct Vector3__Array * m_Corners;
};
struct MaskableGraphic {
  struct MaskableGraphic__Class *klass;
  struct MonitorData *monitor;
  struct MaskableGraphic__Fields fields;
};
struct Text__Fields {
  struct MaskableGraphic__Fields _;
  struct FontData * m_FontData;
  struct String * m_Text;
  struct TextGenerator * m_TextCache;
  struct TextGenerator * m_TextCacheForLayout;
  bool m_DisableFontTextureRebuiltCallback;
  struct UIVertex__Array * m_TempVerts;
};
struct Text {
  struct Text__Class *klass;
  struct MonitorData *monitor;
  struct Text__Fields fields;
};
struct RectMask2D__Fields {
  struct UIBehaviour__Fields _;
  struct RectangularVertexClipper * m_VertexClipper;
  struct RectTransform * m_RectTransform;
  struct HashSet_1_UnityEngine_UI_IClippable_ * m_ClipTargets;
  bool m_ShouldRecalculateClipRects;
  struct List_1_UnityEngine_UI_RectMask2D_ * m_Clippers;
  struct Rect m_LastClipRectCanvasSpace;
  bool m_ForceClip;
  struct Canvas * m_Canvas;
  struct Vector3__Array * m_Corners;
};
struct RectMask2D {
  struct RectMask2D__Class *klass;
  struct MonitorData *monitor;
  struct RectMask2D__Fields fields;
};
struct __declspec(align(8)) RectangularVertexClipper__Fields {
  struct Vector3__Array * m_WorldCorners;
  struct Vector3__Array * m_CanvasCorners;
};
struct RectangularVertexClipper {
  struct RectangularVertexClipper__Class *klass;
  struct MonitorData *monitor;
  struct RectangularVertexClipper__Fields fields;
};
struct __declspec(align(8)) HashSet_1_UnityEngine_UI_IClippable___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_UnityEngine_UI_IClippable___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_UnityEngine_UI_IClippable_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_UnityEngine_UI_IClippable_ {
  struct HashSet_1_UnityEngine_UI_IClippable___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_UnityEngine_UI_IClippable___Fields fields;
};
struct HashSet_1_T_Slot_UnityEngine_UI_IClippable_ {
  int32_t hashCode;
  int32_t next;
  struct IClippable * value;
};
struct HashSet_1_T_Slot_UnityEngine_UI_IClippable___Boxed {
  struct HashSet_1_T_Slot_UnityEngine_UI_IClippable___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_UnityEngine_UI_IClippable_ fields;
};
struct HashSet_1_T_Slot_UnityEngine_UI_IClippable___Array {
  struct HashSet_1_T_Slot_UnityEngine_UI_IClippable___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_UnityEngine_UI_IClippable_ vector[32];
};
struct IClippable {
  struct IClippable__Class *klass;
  struct MonitorData *monitor;
};
struct IEqualityComparer_1_UnityEngine_UI_IClippable_ {
  struct IEqualityComparer_1_UnityEngine_UI_IClippable___Class *klass;
  struct MonitorData *monitor;
};
struct IClippable__Array {
  struct IClippable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IClippable * vector[32];
};
struct IEnumerator_1_UnityEngine_UI_IClippable_ {
  struct IEnumerator_1_UnityEngine_UI_IClippable___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_UI_IClippable_ {
  struct IEnumerable_1_UnityEngine_UI_IClippable___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_UnityEngine_UI_RectMask2D___Fields {
  struct RectMask2D__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UI_RectMask2D_ {
  struct List_1_UnityEngine_UI_RectMask2D___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UI_RectMask2D___Fields fields;
};
struct RectMask2D__Array {
  struct RectMask2D__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RectMask2D * vector[32];
};
struct IEnumerator_1_UnityEngine_UI_RectMask2D_ {
  struct IEnumerator_1_UnityEngine_UI_RectMask2D___Class *klass;
  struct MonitorData *monitor;
};
struct UnityEvent_1_System_Boolean___Fields {
  struct UnityEventBase__Fields _;
  struct Object__Array * m_InvokeArray;
};
struct UnityEvent_1_System_Boolean_ {
  struct UnityEvent_1_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct UnityEvent_1_System_Boolean___Fields fields;
};
struct MaskableGraphic_CullStateChangedEvent__Fields {
  struct UnityEvent_1_System_Boolean___Fields _;
};
struct MaskableGraphic_CullStateChangedEvent {
  struct MaskableGraphic_CullStateChangedEvent__Class *klass;
  struct MonitorData *monitor;
  struct MaskableGraphic_CullStateChangedEvent__Fields fields;
};
struct __declspec(align(8)) FontData__Fields {
  struct Font * m_Font;
  int32_t m_FontSize;
  enum FontStyle__Enum m_FontStyle;
  bool m_BestFit;
  int32_t m_MinSize;
  int32_t m_MaxSize;
  enum TextAnchor__Enum m_Alignment;
  bool m_AlignByGeometry;
  bool m_RichText;
  enum HorizontalWrapMode__Enum m_HorizontalOverflow;
  enum VerticalWrapMode__Enum m_VerticalOverflow;
  float m_LineSpacing;
};
struct FontData {
  struct FontData__Class *klass;
  struct MonitorData *monitor;
  struct FontData__Fields fields;
};
struct RectangularVertexClipper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RectangularVertexClipper__StaticFields {
};
struct RectangularVertexClipper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RectangularVertexClipper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RectangularVertexClipper__VTable vtable;
};
struct IClippable__VTable {
  VirtualInvokeData get_gameObject;
  VirtualInvokeData RecalculateClipping;
  VirtualInvokeData get_rectTransform;
  VirtualInvokeData Cull;
  VirtualInvokeData SetClipRect;
};
struct IClippable__StaticFields {
};
struct IClippable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IClippable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IClippable__VTable vtable;
};
struct HashSet_1_T_Slot_UnityEngine_UI_IClippable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HashSet_1_T_Slot_UnityEngine_UI_IClippable___StaticFields {
};
struct HashSet_1_T_Slot_UnityEngine_UI_IClippable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_T_Slot_UnityEngine_UI_IClippable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_T_Slot_UnityEngine_UI_IClippable___VTable vtable;
};
struct IEqualityComparer_1_UnityEngine_UI_IClippable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_UnityEngine_UI_IClippable___StaticFields {
};
struct IEqualityComparer_1_UnityEngine_UI_IClippable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_UnityEngine_UI_IClippable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_UnityEngine_UI_IClippable___VTable vtable;
};
struct IEnumerator_1_UnityEngine_UI_IClippable___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_UI_IClippable___StaticFields {
};
struct IEnumerator_1_UnityEngine_UI_IClippable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_UI_IClippable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_UI_IClippable___VTable vtable;
};
struct IEnumerable_1_UnityEngine_UI_IClippable___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_UI_IClippable___StaticFields {
};
struct IEnumerable_1_UnityEngine_UI_IClippable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_UI_IClippable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_UI_IClippable___VTable vtable;
};
struct HashSet_1_UnityEngine_UI_IClippable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
  VirtualInvokeData Add;
  VirtualInvokeData UnionWith;
};
struct HashSet_1_UnityEngine_UI_IClippable___StaticFields {
};
struct HashSet_1_UnityEngine_UI_IClippable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_UnityEngine_UI_IClippable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_UnityEngine_UI_IClippable___VTable vtable;
};
struct IEnumerator_1_UnityEngine_UI_RectMask2D___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_UI_RectMask2D___StaticFields {
};
struct IEnumerator_1_UnityEngine_UI_RectMask2D___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_UI_RectMask2D___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_UI_RectMask2D___VTable vtable;
};
struct List_1_UnityEngine_UI_RectMask2D___VTable {
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
struct List_1_UnityEngine_UI_RectMask2D___StaticFields {
  struct RectMask2D__Array * _emptyArray;
};
struct List_1_UnityEngine_UI_RectMask2D___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_UI_RectMask2D___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_UI_RectMask2D___VTable vtable;
};
struct RectMask2D__VTable {
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
  VirtualInvokeData PerformClipping;
  VirtualInvokeData IsRaycastLocationValid;
  VirtualInvokeData IsRaycastLocationValid_1;
  VirtualInvokeData PerformClipping_1;
};
struct RectMask2D__StaticFields {
};
struct RectMask2D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RectMask2D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RectMask2D__VTable vtable;
};
struct UnityEvent_1_System_Boolean___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  VirtualInvokeData FindMethod_Impl;
  VirtualInvokeData GetDelegate;
};
struct UnityEvent_1_System_Boolean___StaticFields {
};
struct UnityEvent_1_System_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityEvent_1_System_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityEvent_1_System_Boolean___VTable vtable;
};
struct MaskableGraphic_CullStateChangedEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  VirtualInvokeData FindMethod_Impl;
  VirtualInvokeData GetDelegate;
};
struct MaskableGraphic_CullStateChangedEvent__StaticFields {
};
struct MaskableGraphic_CullStateChangedEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaskableGraphic_CullStateChangedEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaskableGraphic_CullStateChangedEvent__VTable vtable;
};
struct MaskableGraphic__VTable {
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
struct MaskableGraphic__StaticFields {
};
struct MaskableGraphic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaskableGraphic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaskableGraphic__VTable vtable;
};
struct FontData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
};
struct FontData__StaticFields {
};
struct FontData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FontData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FontData__VTable vtable;
};
struct Text__VTable {
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
  VirtualInvokeData CalculateLayoutInputHorizontal;
  VirtualInvokeData CalculateLayoutInputVertical;
  VirtualInvokeData get_minWidth;
  VirtualInvokeData get_preferredWidth;
  VirtualInvokeData get_flexibleWidth;
  VirtualInvokeData get_minHeight;
  VirtualInvokeData get_preferredHeight;
  VirtualInvokeData get_flexibleHeight;
  VirtualInvokeData get_layoutPriority;
  VirtualInvokeData get_text;
  VirtualInvokeData set_text;
  VirtualInvokeData CalculateLayoutInputHorizontal_1;
  VirtualInvokeData CalculateLayoutInputVertical_1;
  VirtualInvokeData get_minWidth_1;
  VirtualInvokeData get_preferredWidth_1;
  VirtualInvokeData get_flexibleWidth_1;
  VirtualInvokeData get_minHeight_1;
  VirtualInvokeData get_preferredHeight_1;
  VirtualInvokeData get_flexibleHeight_1;
  VirtualInvokeData get_layoutPriority_1;
};
struct Text__StaticFields {
  struct Material * s_DefaultText;
};
struct Text__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Text__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Text__VTable vtable;
};

struct DefaultControls_Resources {
  struct Sprite * standard;
  struct Sprite * background;
  struct Sprite * inputField;
  struct Sprite * knob;
  struct Sprite * checkmark;
  struct Sprite * dropdown;
  struct Sprite * mask;
};
struct DefaultControls_Resources__Boxed {
  struct DefaultControls_Resources__Class *klass;
  struct MonitorData *monitor;
  struct DefaultControls_Resources fields;
};
struct DefaultControls_Resources__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DefaultControls_Resources__StaticFields {
};
struct DefaultControls_Resources__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultControls_Resources__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultControls_Resources__VTable vtable;
};

struct Dropdown__Fields {
  struct Selectable__Fields _;
  struct RectTransform * m_Template;
  struct Text * m_CaptionText;
  struct Image * m_CaptionImage;
  struct Text * m_ItemText;
  struct Image * m_ItemImage;
  int32_t m_Value;
  struct Dropdown_OptionDataList * m_Options;
  struct Dropdown_DropdownEvent * m_OnValueChanged;
  struct GameObject * m_Dropdown;
  struct GameObject * m_Blocker;
  struct List_1_UnityEngine_UI_Dropdown_DropdownItem_ * m_Items;
  struct TweenRunner_1_FloatTween_ * m_AlphaTweenRunner;
  bool validTemplate;
};
struct Dropdown {
  struct Dropdown__Class *klass;
  struct MonitorData *monitor;
  struct Dropdown__Fields fields;
};
enum Image_Type__Enum : int32_t {
  Image_Type__Enum_Simple = 0,
  Image_Type__Enum_Sliced = 1,
  Image_Type__Enum_Tiled = 2,
  Image_Type__Enum_Filled = 3,
};
struct Image_Type__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Image_Type__Enum value;
};
enum Image_FillMethod__Enum : int32_t {
  Image_FillMethod__Enum_Horizontal = 0,
  Image_FillMethod__Enum_Vertical = 1,
  Image_FillMethod__Enum_Radial90 = 2,
  Image_FillMethod__Enum_Radial180 = 3,
  Image_FillMethod__Enum_Radial360 = 4,
};
struct Image_FillMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Image_FillMethod__Enum value;
};
struct Image__Fields {
  struct MaskableGraphic__Fields _;
  struct Sprite * m_Sprite;
  struct Sprite * m_OverrideSprite;
  enum Image_Type__Enum m_Type;
  bool m_PreserveAspect;
  bool m_FillCenter;
  enum Image_FillMethod__Enum m_FillMethod;
  float m_FillAmount;
  bool m_FillClockwise;
  int32_t m_FillOrigin;
  float m_AlphaHitTestMinimumThreshold;
  bool m_Tracked;
  bool m_UseSpriteMesh;
};
struct Image {
  struct Image__Class *klass;
  struct MonitorData *monitor;
  struct Image__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_UI_Image___Fields {
  struct Image__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UI_Image_ {
  struct List_1_UnityEngine_UI_Image___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UI_Image___Fields fields;
};
struct Image__Array {
  struct Image__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Image * vector[32];
};
struct IEnumerator_1_UnityEngine_UI_Image_ {
  struct IEnumerator_1_UnityEngine_UI_Image___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dropdown_OptionDataList__Fields {
  struct List_1_UnityEngine_UI_Dropdown_OptionData_ * m_Options;
};
struct Dropdown_OptionDataList {
  struct Dropdown_OptionDataList__Class *klass;
  struct MonitorData *monitor;
  struct Dropdown_OptionDataList__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_UI_Dropdown_OptionData___Fields {
  struct Dropdown_OptionData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UI_Dropdown_OptionData_ {
  struct List_1_UnityEngine_UI_Dropdown_OptionData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UI_Dropdown_OptionData___Fields fields;
};
struct __declspec(align(8)) Dropdown_OptionData__Fields {
  struct String * m_Text;
  struct Sprite * m_Image;
};
struct Dropdown_OptionData {
  struct Dropdown_OptionData__Class *klass;
  struct MonitorData *monitor;
  struct Dropdown_OptionData__Fields fields;
};
struct Dropdown_OptionData__Array {
  struct Dropdown_OptionData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dropdown_OptionData * vector[32];
};
struct IEnumerator_1_UnityEngine_UI_Dropdown_OptionData_ {
  struct IEnumerator_1_UnityEngine_UI_Dropdown_OptionData___Class *klass;
  struct MonitorData *monitor;
};
struct Dropdown_DropdownEvent__Fields {
  struct UnityEvent_1_System_Int32___Fields _;
};
struct Dropdown_DropdownEvent {
  struct Dropdown_DropdownEvent__Class *klass;
  struct MonitorData *monitor;
  struct Dropdown_DropdownEvent__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_UI_Dropdown_DropdownItem___Fields {
  struct Dropdown_DropdownItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UI_Dropdown_DropdownItem_ {
  struct List_1_UnityEngine_UI_Dropdown_DropdownItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UI_Dropdown_DropdownItem___Fields fields;
};
struct Dropdown_DropdownItem__Fields {
  struct MonoBehaviour__Fields _;
  struct Text * m_Text;
  struct Image * m_Image;
  struct RectTransform * m_RectTransform;
  struct Toggle * m_Toggle;
};
struct Dropdown_DropdownItem {
  struct Dropdown_DropdownItem__Class *klass;
  struct MonitorData *monitor;
  struct Dropdown_DropdownItem__Fields fields;
};
struct Dropdown_DropdownItem__Array {
  struct Dropdown_DropdownItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dropdown_DropdownItem * vector[32];
};
enum Toggle_ToggleTransition__Enum : int32_t {
  Toggle_ToggleTransition__Enum_None = 0,
  Toggle_ToggleTransition__Enum_Fade = 1,
};
struct Toggle_ToggleTransition__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Toggle_ToggleTransition__Enum value;
};
struct Toggle__Fields {
  struct Selectable__Fields _;
  enum Toggle_ToggleTransition__Enum toggleTransition;
  struct Graphic * graphic;
  struct ToggleGroup * m_Group;
  struct Toggle_ToggleEvent * onValueChanged;
  bool m_IsOn;
};
struct Toggle {
  struct Toggle__Class *klass;
  struct MonitorData *monitor;
  struct Toggle__Fields fields;
};
struct ToggleGroup__Fields {
  struct UIBehaviour__Fields _;
  bool m_AllowSwitchOff;
  struct List_1_UnityEngine_UI_Toggle_ * m_Toggles;
};
struct ToggleGroup {
  struct ToggleGroup__Class *klass;
  struct MonitorData *monitor;
  struct ToggleGroup__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_UI_Toggle___Fields {
  struct Toggle__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UI_Toggle_ {
  struct List_1_UnityEngine_UI_Toggle___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UI_Toggle___Fields fields;
};
struct Toggle__Array {
  struct Toggle__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Toggle * vector[32];
};
struct IEnumerator_1_UnityEngine_UI_Toggle_ {
  struct IEnumerator_1_UnityEngine_UI_Toggle___Class *klass;
  struct MonitorData *monitor;
};
struct Predicate_1_UnityEngine_UI_Toggle___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_UnityEngine_UI_Toggle_ {
  struct Predicate_1_UnityEngine_UI_Toggle___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_UnityEngine_UI_Toggle___Fields fields;
};
struct Func_2_UnityEngine_UI_Toggle_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_UnityEngine_UI_Toggle_Boolean_ {
  struct Func_2_UnityEngine_UI_Toggle_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_UnityEngine_UI_Toggle_Boolean___Fields fields;
};
struct Toggle_ToggleEvent__Fields {
  struct UnityEvent_1_System_Boolean___Fields _;
};
struct Toggle_ToggleEvent {
  struct Toggle_ToggleEvent__Class *klass;
  struct MonitorData *monitor;
  struct Toggle_ToggleEvent__Fields fields;
};
struct IEnumerator_1_UnityEngine_UI_Dropdown_DropdownItem_ {
  struct IEnumerator_1_UnityEngine_UI_Dropdown_DropdownItem___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) TweenRunner_1_FloatTween___Fields {
  struct MonoBehaviour * m_CoroutineContainer;
  struct IEnumerator * m_Tween;
};
struct TweenRunner_1_FloatTween_ {
  struct TweenRunner_1_FloatTween___Class *klass;
  struct MonitorData *monitor;
  struct TweenRunner_1_FloatTween___Fields fields;
};
struct IEnumerator_1_UnityEngine_UI_Image___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_UI_Image___StaticFields {
};
struct IEnumerator_1_UnityEngine_UI_Image___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_UI_Image___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_UI_Image___VTable vtable;
};
struct List_1_UnityEngine_UI_Image___VTable {
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