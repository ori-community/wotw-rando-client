namespace app {
struct Button__Fields {
  struct Selectable__Fields _;
  struct Button_ButtonClickedEvent * m_OnClick;
};
struct Button {
  struct Button__Class *klass;
  struct MonitorData *monitor;
  struct Button__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_UI_Selectable___Fields {
  struct Selectable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UI_Selectable_ {
  struct List_1_UnityEngine_UI_Selectable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UI_Selectable___Fields fields;
};
struct Selectable__Array {
  struct Selectable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Selectable * vector[32];
};
struct IEnumerator_1_UnityEngine_UI_Selectable_ {
  struct IEnumerator_1_UnityEngine_UI_Selectable___Class *klass;
  struct MonitorData *monitor;
};
struct Graphic__Fields {
  struct UIBehaviour__Fields _;
  struct Material * m_Material;
  struct Color m_Color;
  bool m_RaycastTarget;
  struct RectTransform * m_RectTransform;
  struct CanvasRenderer * m_CanvasRenderer;
  struct Canvas * m_Canvas;
  bool m_VertsDirty;
  bool m_MaterialDirty;
  struct UnityAction * m_OnDirtyLayoutCallback;
  struct UnityAction * m_OnDirtyVertsCallback;
  struct UnityAction * m_OnDirtyMaterialCallback;
  struct TweenRunner_1_ColorTween_ * m_ColorTweenRunner;
  bool _useLegacyMeshGeneration_k__BackingField;
};
struct Graphic {
  struct Graphic__Class *klass;
  struct MonitorData *monitor;
  struct Graphic__Fields fields;
};
struct __declspec(align(8)) VertexHelper__Fields {
  struct List_1_UnityEngine_Vector3_ * m_Positions;
  struct List_1_UnityEngine_Color32_ * m_Colors;
  struct List_1_UnityEngine_Vector2_ * m_Uv0S;
  struct List_1_UnityEngine_Vector2_ * m_Uv1S;
  struct List_1_UnityEngine_Vector2_ * m_Uv2S;
  struct List_1_UnityEngine_Vector2_ * m_Uv3S;
  struct List_1_UnityEngine_Vector3_ * m_Normals;
  struct List_1_UnityEngine_Vector4_ * m_Tangents;
  struct List_1_System_Int32_ * m_Indices;
  bool m_ListsInitalized;
};
struct VertexHelper {
  struct VertexHelper__Class *klass;
  struct MonitorData *monitor;
  struct VertexHelper__Fields fields;
};
struct __declspec(align(8)) TweenRunner_1_ColorTween___Fields {
  struct MonoBehaviour * m_CoroutineContainer;
  struct IEnumerator * m_Tween;
};
struct TweenRunner_1_ColorTween_ {
  struct TweenRunner_1_ColorTween___Class *klass;
  struct MonitorData *monitor;
  struct TweenRunner_1_ColorTween___Fields fields;
};
enum CanvasUpdate__Enum : int32_t {
  CanvasUpdate__Enum_Prelayout = 0,
  CanvasUpdate__Enum_Layout = 1,
  CanvasUpdate__Enum_PostLayout = 2,
  CanvasUpdate__Enum_PreRender = 3,
  CanvasUpdate__Enum_LatePreRender = 4,
  CanvasUpdate__Enum_MaxUpdateValue = 5,
};
struct CanvasUpdate__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CanvasUpdate__Enum value;
};
struct __declspec(align(8)) List_1_UnityEngine_CanvasGroup___Fields {
  struct CanvasGroup__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_CanvasGroup_ {
  struct List_1_UnityEngine_CanvasGroup___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_CanvasGroup___Fields fields;
};
struct CanvasGroup__Array {
  struct CanvasGroup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CanvasGroup * vector[32];
};
struct IEnumerator_1_UnityEngine_CanvasGroup_ {
  struct IEnumerator_1_UnityEngine_CanvasGroup___Class *klass;
  struct MonitorData *monitor;
};
struct Button_ButtonClickedEvent__Fields {
  struct UnityEvent__Fields _;
};
struct Button_ButtonClickedEvent {
  struct Button_ButtonClickedEvent__Class *klass;
  struct MonitorData *monitor;
  struct Button_ButtonClickedEvent__Fields fields;
};
struct IEnumerator_1_UnityEngine_UI_Selectable___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_UI_Selectable___StaticFields {
};
struct IEnumerator_1_UnityEngine_UI_Selectable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_UI_Selectable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_UI_Selectable___VTable vtable;
};
struct List_1_UnityEngine_UI_Selectable___VTable {
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
struct List_1_UnityEngine_UI_Selectable___StaticFields {
  struct Selectable__Array * _emptyArray;
};
struct List_1_UnityEngine_UI_Selectable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_UI_Selectable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_UI_Selectable___VTable vtable;
};
struct Navigation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Navigation__StaticFields {
};
struct Navigation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Navigation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Navigation__VTable vtable;
};
struct ColorBlock__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct ColorBlock__StaticFields {
};
struct ColorBlock__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ColorBlock__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ColorBlock__VTable vtable;
};
struct SpriteState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct SpriteState__StaticFields {
};
struct SpriteState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpriteState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpriteState__VTable vtable;
};
struct VertexHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct VertexHelper__StaticFields {
  struct Vector4 s_DefaultTangent;
  struct Vector3 s_DefaultNormal;
};
struct VertexHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VertexHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VertexHelper__VTable vtable;
};
struct TweenRunner_1_ColorTween___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TweenRunner_1_ColorTween___StaticFields {
};
struct TweenRunner_1_ColorTween___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TweenRunner_1_ColorTween___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TweenRunner_1_ColorTween___VTable vtable;
};
struct Graphic__VTable {
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
};
struct Graphic__StaticFields {
  struct Material * s_DefaultUI;
  struct Texture2D * s_WhiteTexture;
  struct Mesh * s_Mesh;
  struct VertexHelper * s_VertexHelper;
};
struct Graphic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Graphic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Graphic__VTable vtable;
};
struct IEnumerator_1_UnityEngine_CanvasGroup___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_CanvasGroup___StaticFields {
};
struct IEnumerator_1_UnityEngine_CanvasGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_CanvasGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_CanvasGroup___VTable vtable;
};
struct List_1_UnityEngine_CanvasGroup___VTable {
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
struct List_1_UnityEngine_CanvasGroup___StaticFields {
  struct CanvasGroup__Array * _emptyArray;
};
struct List_1_UnityEngine_CanvasGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_CanvasGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_CanvasGroup___VTable vtable;
};
struct Selectable__VTable {
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
};
struct Selectable__StaticFields {
  struct List_1_UnityEngine_UI_Selectable_ * s_List;
};
struct Selectable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Selectable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Selectable__VTable vtable;
};
struct Button_ButtonClickedEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize;
  VirtualInvokeData UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize;
  VirtualInvokeData FindMethod_Impl;
  VirtualInvokeData GetDelegate;
};
struct Button_ButtonClickedEvent__StaticFields {
};
struct Button_ButtonClickedEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Button_ButtonClickedEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Button_ButtonClickedEvent__VTable vtable;
};
struct Button__VTable {
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
  VirtualInvokeData OnPointerClick;
  VirtualInvokeData OnSubmit;
  VirtualInvokeData OnPointerClick_1;
  VirtualInvokeData OnSubmit_1;
};
struct Button__StaticFields {
};
struct Button__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Button__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Button__VTable vtable;
};

struct __declspec(align(8)) Button_OnFinishSubmit_c_Iterator0__Fields {
  float _fadeTime___0;
  float _elapsedTime___0;
  struct Button * _this;
  struct Object * _current;
  bool _disposing;
  int32_t __PC;
};
struct Button_OnFinishSubmit_c_Iterator0 {
  struct Button_OnFinishSubmit_c_Iterator0__Class *klass;
  struct MonitorData *monitor;
  struct Button_OnFinishSubmit_c_Iterator0__Fields fields;
};
struct Button_OnFinishSubmit_c_Iterator0__VTable {
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
struct Button_OnFinishSubmit_c_Iterator0__StaticFields {
};
struct Button_OnFinishSubmit_c_Iterator0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Button_OnFinishSubmit_c_Iterator0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Button_OnFinishSubmit_c_Iterator0__VTable vtable;
};

struct __declspec(align(8)) CanvasUpdateRegistry__Fields {
  bool m_PerformingLayoutUpdate;
  bool m_PerformingGraphicUpdate;
  struct IndexedSet_1_UnityEngine_UI_ICanvasElement_ * m_LayoutRebuildQueue;
  struct IndexedSet_1_UnityEngine_UI_ICanvasElement_ * m_GraphicRebuildQueue;
};
struct CanvasUpdateRegistry {
  struct CanvasUpdateRegistry__Class *klass;
  struct MonitorData *monitor;
  struct CanvasUpdateRegistry__Fields fields;
};
struct __declspec(align(8)) IndexedSet_1_UnityEngine_UI_ICanvasElement___Fields {
  struct List_1_UnityEngine_UI_ICanvasElement_ * m_List;
  struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32_ * m_Dictionary;
};
struct IndexedSet_1_UnityEngine_UI_ICanvasElement_ {
  struct IndexedSet_1_UnityEngine_UI_ICanvasElement___Class *klass;
  struct MonitorData *monitor;
  struct IndexedSet_1_UnityEngine_UI_ICanvasElement___Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_UI_ICanvasElement___Fields {
  struct ICanvasElement__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_UI_ICanvasElement_ {
  struct List_1_UnityEngine_UI_ICanvasElement___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_UI_ICanvasElement___Fields fields;
};
struct ICanvasElement {
  struct ICanvasElement__Class *klass;
  struct MonitorData *monitor;
};
struct ICanvasElement__Array {
  struct ICanvasElement__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ICanvasElement * vector[32];
};
struct IEnumerator_1_UnityEngine_UI_ICanvasElement_ {
  struct IEnumerator_1_UnityEngine_UI_ICanvasElement___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_UI_ICanvasElement_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_ICanvasElement_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_ICanvasElement_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32_ {
  struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  struct ICanvasElement * key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32_ vector[32];
};
struct IEqualityComparer_1_UnityEngine_UI_ICanvasElement_ {
  struct IEqualityComparer_1_UnityEngine_UI_ICanvasElement___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_ICanvasElement_System_Int32___Fields {
  struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_ICanvasElement_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_ICanvasElement_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_ICanvasElement_System_Int32___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_ICanvasElement_System_Int32___Fields {
  struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_ICanvasElement_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_ICanvasElement_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_ICanvasElement_System_Int32___Fields fields;
};
struct ICollection_1_UnityEngine_UI_ICanvasElement_ {
  struct ICollection_1_UnityEngine_UI_ICanvasElement___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32_ {
  struct ICanvasElement * key;
  int32_t value;
};
struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___Boxed {
  struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32_ fields;
};
struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___Array {
  struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_UI_ICanvasElement_ {
  struct IEnumerable_1_UnityEngine_UI_ICanvasElement___Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_UnityEngine_UI_ICanvasElement___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_UnityEngine_UI_ICanvasElement_ {
  struct Comparison_1_UnityEngine_UI_ICanvasElement___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_UnityEngine_UI_ICanvasElement___Fields fields;
};
struct ICanvasElement__VTable {
  VirtualInvokeData Rebuild;
  VirtualInvokeData get_transform;
  VirtualInvokeData LayoutComplete;
  VirtualInvokeData GraphicUpdateComplete;
  VirtualInvokeData IsDestroyed;
};
struct ICanvasElement__StaticFields {
};
struct ICanvasElement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICanvasElement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICanvasElement__VTable vtable;
};
struct IEnumerator_1_UnityEngine_UI_ICanvasElement___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_UI_ICanvasElement___StaticFields {
};
struct IEnumerator_1_UnityEngine_UI_ICanvasElement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_UI_ICanvasElement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_UI_ICanvasElement___VTable vtable;
};
struct List_1_UnityEngine_UI_ICanvasElement___VTable {
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
struct List_1_UnityEngine_UI_ICanvasElement___StaticFields {
  struct ICanvasElement__Array * _emptyArray;
};
struct List_1_UnityEngine_UI_ICanvasElement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_UI_ICanvasElement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_UI_ICanvasElement___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32___VTable vtable;
};
struct IEqualityComparer_1_UnityEngine_UI_ICanvasElement___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_UnityEngine_UI_ICanvasElement___StaticFields {
};
struct IEqualityComparer_1_UnityEngine_UI_ICanvasElement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_UnityEngine_UI_ICanvasElement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_UnityEngine_UI_ICanvasElement___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_ICanvasElement_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_ICanvasElement_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_ICanvasElement_System_Int32___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_ICanvasElement_System_Int32___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_ICanvasElement_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_ICanvasElement_System_Int32___VTable vtable;
};
struct ICollection_1_UnityEngine_UI_ICanvasElement___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_UI_ICanvasElement___StaticFields {
};
struct ICollection_1_UnityEngine_UI_ICanvasElement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_UI_ICanvasElement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_UI_ICanvasElement___VTable vtable;
};
struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields {
};
struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_UI_ICanvasElement_System_Int32___VTable vtable;
};
struct IEnumerable_1_UnityEngine_UI_ICanvasElement___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_UI_ICanvasElement___StaticFields {
};
struct IEnumerable_1_UnityEngine_UI_ICanvasElement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_UI_ICanvasElement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_UI_ICanvasElement___VTable vtable;
};
struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32___VTable {
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
struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields {
};
struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32___VTable vtable;
};
struct IndexedSet_1_UnityEngine_UI_ICanvasElement___VTable {
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
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
};}