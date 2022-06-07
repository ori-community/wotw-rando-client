namespace app {
struct AnimationTriggers__StaticFields {
};

struct AnimationTriggers__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationTriggers__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationTriggers__VTable vtable;
};

enum class Navigation_Mode__Enum : int32_t {
    None = 0x00000000,
    Horizontal = 0x00000001,
    Vertical = 0x00000002,
    Automatic = 0x00000003,
    Explicit = 0x00000004,
};

struct Navigation_Mode__Enum__Boxed {
    struct Navigation_Mode__Enum__Class *klass;
    MonitorData *monitor;
    Navigation_Mode__Enum value;
    
};

struct Navigation {
    Navigation_Mode__Enum m_Mode;
    
    struct Selectable *m_SelectOnUp;
    struct Selectable *m_SelectOnDown;
    struct Selectable *m_SelectOnLeft;
    struct Selectable *m_SelectOnRight;
};

struct Navigation__Boxed {
    struct Navigation__Class *klass;
    MonitorData *monitor;
    struct Navigation fields;
};

enum class Selectable_Transition__Enum : int32_t {
    None = 0x00000000,
    ColorTint = 0x00000001,
    SpriteSwap = 0x00000002,
    Animation = 0x00000003,
};

struct Selectable_Transition__Enum__Boxed {
    struct Selectable_Transition__Enum__Class *klass;
    MonitorData *monitor;
    Selectable_Transition__Enum value;
    
};

struct ColorBlock {
    struct Color m_NormalColor;
    struct Color m_HighlightedColor;
    struct Color m_PressedColor;
    struct Color m_DisabledColor;
    float m_ColorMultiplier;
    float m_FadeDuration;
};

struct ColorBlock__Boxed {
    struct ColorBlock__Class *klass;
    MonitorData *monitor;
    struct ColorBlock fields;
};

struct SpriteState {
    struct Sprite *m_HighlightedSprite;
    struct Sprite *m_PressedSprite;
    struct Sprite *m_DisabledSprite;
};

struct SpriteState__Boxed {
    struct SpriteState__Class *klass;
    MonitorData *monitor;
    struct SpriteState fields;
};

enum class Selectable_SelectionState__Enum : int32_t {
    Normal = 0x00000000,
    Highlighted = 0x00000001,
    Pressed = 0x00000002,
    Disabled = 0x00000003,
};

struct Selectable_SelectionState__Enum__Boxed {
    struct Selectable_SelectionState__Enum__Class *klass;
    MonitorData *monitor;
    Selectable_SelectionState__Enum value;
    
};

struct Selectable__Fields {
    struct UIBehaviour__Fields _;
    struct Navigation m_Navigation;
    Selectable_Transition__Enum m_Transition;
    
    struct ColorBlock m_Colors;
    struct SpriteState m_SpriteState;
    struct AnimationTriggers *m_AnimationTriggers;
    bool m_Interactable;
    struct Graphic *m_TargetGraphic;
    bool m_GroupsAllowInteraction;
    Selectable_SelectionState__Enum m_CurrentSelectionState;
    
    bool _isPointerInside_k__BackingField;
    bool _isPointerDown_k__BackingField;
    bool _hasSelection_k__BackingField;
    struct List_1_UnityEngine_CanvasGroup_ *m_CanvasGroupCache;
};

struct Selectable {
    struct Selectable__Class *klass;
    MonitorData *monitor;
    struct Selectable__Fields fields;
};

struct Button__Fields {
    struct Selectable__Fields _;
    struct Button_ButtonClickedEvent *m_OnClick;
};

struct Button {
    struct Button__Class *klass;
    MonitorData *monitor;
    struct Button__Fields fields;
};

struct __declspec(align(8)) List_1_UnityEngine_UI_Selectable___Fields {
    struct Selectable__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_UI_Selectable_ {
    struct List_1_UnityEngine_UI_Selectable___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_UI_Selectable___Fields fields;
};

struct Selectable__Array {
    struct Selectable__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Selectable *vector[32];
};

struct IEnumerator_1_UnityEngine_UI_Selectable_ {
    struct IEnumerator_1_UnityEngine_UI_Selectable___Class *klass;
    MonitorData *monitor;
};

struct Graphic__Fields {
    struct UIBehaviour__Fields _;
    struct Material *m_Material;
    struct Color m_Color;
    bool m_RaycastTarget;
    struct RectTransform *m_RectTransform;
    struct CanvasRenderer *m_CanvasRenderer;
    struct Canvas *m_Canvas;
    bool m_VertsDirty;
    bool m_MaterialDirty;
    struct UnityAction *m_OnDirtyLayoutCallback;
    struct UnityAction *m_OnDirtyVertsCallback;
    struct UnityAction *m_OnDirtyMaterialCallback;
    struct TweenRunner_1_ColorTween_ *m_ColorTweenRunner;
    bool _useLegacyMeshGeneration_k__BackingField;
};

struct Graphic {
    struct Graphic__Class *klass;
    MonitorData *monitor;
    struct Graphic__Fields fields;
};

struct __declspec(align(8)) VertexHelper__Fields {
    struct List_1_UnityEngine_Vector3_ *m_Positions;
    struct List_1_UnityEngine_Color32_ *m_Colors;
    struct List_1_UnityEngine_Vector2_ *m_Uv0S;
    struct List_1_UnityEngine_Vector2_ *m_Uv1S;
    struct List_1_UnityEngine_Vector2_ *m_Uv2S;
    struct List_1_UnityEngine_Vector2_ *m_Uv3S;
    struct List_1_UnityEngine_Vector3_ *m_Normals;
    struct List_1_UnityEngine_Vector4_ *m_Tangents;
    struct List_1_System_Int32_ *m_Indices;
    bool m_ListsInitalized;
};

struct VertexHelper {
    struct VertexHelper__Class *klass;
    MonitorData *monitor;
    struct VertexHelper__Fields fields;
};

struct __declspec(align(8)) TweenRunner_1_ColorTween___Fields {
    struct MonoBehaviour *m_CoroutineContainer;
    struct IEnumerator *m_Tween;
};

struct TweenRunner_1_ColorTween_ {
    struct TweenRunner_1_ColorTween___Class *klass;
    MonitorData *monitor;
    struct TweenRunner_1_ColorTween___Fields fields;
};

enum class CanvasUpdate__Enum : int32_t {
    Prelayout = 0x00000000,
    Layout = 0x00000001,
    PostLayout = 0x00000002,
    PreRender = 0x00000003,
    LatePreRender = 0x00000004,
    MaxUpdateValue = 0x00000005,
};

struct CanvasUpdate__Enum__Boxed {
    struct CanvasUpdate__Enum__Class *klass;
    MonitorData *monitor;
    CanvasUpdate__Enum value;
    
};

struct __declspec(align(8)) List_1_UnityEngine_CanvasGroup___Fields {
    struct CanvasGroup__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_CanvasGroup_ {
    struct List_1_UnityEngine_CanvasGroup___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_CanvasGroup___Fields fields;
};

struct CanvasGroup__Array {
    struct CanvasGroup__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CanvasGroup *vector[32];
};

struct IEnumerator_1_UnityEngine_CanvasGroup_ {
    struct IEnumerator_1_UnityEngine_CanvasGroup___Class *klass;
    MonitorData *monitor;
};

struct Button_ButtonClickedEvent__Fields {
    struct UnityEvent__Fields _;
};

struct Button_ButtonClickedEvent {
    struct Button_ButtonClickedEvent__Class *klass;
    MonitorData *monitor;
    struct Button_ButtonClickedEvent__Fields fields;
};

struct Selectable__Array__VTable {
};

struct Selectable__Array__StaticFields {
};

struct Selectable__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Selectable__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Selectable__Array__VTable vtable;
};

struct IEnumerator_1_UnityEngine_UI_Selectable___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UnityEngine_UI_Selectable___StaticFields {
};

struct IEnumerator_1_UnityEngine_UI_Selectable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UnityEngine_UI_Selectable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct Selectable__Array *_emptyArray;
};

struct List_1_UnityEngine_UI_Selectable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_UI_Selectable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UnityEngine_UI_Selectable___VTable vtable;
};

struct Navigation_Mode__Enum__VTable {
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

struct Navigation_Mode__Enum__StaticFields {
};

struct Navigation_Mode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Navigation_Mode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Navigation_Mode__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Navigation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Navigation__VTable vtable;
};

struct Selectable_Transition__Enum__VTable {
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

struct Selectable_Transition__Enum__StaticFields {
};

struct Selectable_Transition__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Selectable_Transition__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Selectable_Transition__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ColorBlock__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpriteState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VertexHelper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TweenRunner_1_ColorTween___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TweenRunner_1_ColorTween___VTable vtable;
};

struct CanvasUpdate__Enum__VTable {
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

struct CanvasUpdate__Enum__StaticFields {
};

struct CanvasUpdate__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CanvasUpdate__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CanvasUpdate__Enum__VTable vtable;
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
    struct Material *s_DefaultUI;
    struct Texture2D *s_WhiteTexture;
    struct Mesh *s_Mesh;
    struct VertexHelper *s_VertexHelper;
};

struct Graphic__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Graphic__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Graphic__VTable vtable;
};

struct Selectable_SelectionState__Enum__VTable {
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

struct Selectable_SelectionState__Enum__StaticFields {
};

struct Selectable_SelectionState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Selectable_SelectionState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Selectable_SelectionState__Enum__VTable vtable;
};

struct CanvasGroup__Array__VTable {
};

struct CanvasGroup__Array__StaticFields {
};

struct CanvasGroup__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CanvasGroup__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CanvasGroup__Array__VTable vtable;
};

struct IEnumerator_1_UnityEngine_CanvasGroup___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UnityEngine_CanvasGroup___StaticFields {
};

struct IEnumerator_1_UnityEngine_CanvasGroup___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UnityEngine_CanvasGroup___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct CanvasGroup__Array *_emptyArray;
};

struct List_1_UnityEngine_CanvasGroup___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_CanvasGroup___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct List_1_UnityEngine_UI_Selectable_ *s_List;
};

struct Selectable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Selectable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Button_ButtonClickedEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Button__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Button__VTable vtable;
};

struct __declspec(align(8)) Button_OnFinishSubmit_c_Iterator0__Fields {
    float _fadeTime___0;
    float _elapsedTime___0;
    struct Button *_this;
    struct Object *_current;
    bool _disposing;
    int32_t _PC;
};

struct Button_OnFinishSubmit_c_Iterator0 {
    struct Button_OnFinishSubmit_c_Iterator0__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Button_OnFinishSubmit_c_Iterator0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Button_OnFinishSubmit_c_Iterator0__VTable vtable;
};

struct __declspec(align(8)) CanvasUpdateRegistry__Fields {
    bool m_PerformingLayoutUpdate;
    bool m_PerformingGraphicUpdate;
    struct IndexedSet_1_UnityEngine_UI_ICanvasElement_ *m_LayoutRebuildQueue;
    struct IndexedSet_1_UnityEngine_UI_ICanvasElement_ *m_GraphicRebuildQueue;
};

struct CanvasUpdateRegistry {
    struct CanvasUpdateRegistry__Class *klass;
    MonitorData *monitor;
    struct CanvasUpdateRegistry__Fields fields;
};

struct __declspec(align(8)) IndexedSet_1_UnityEngine_UI_ICanvasElement___Fields {
    struct List_1_UnityEngine_UI_ICanvasElement_ *m_List;
    struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32_ *m_Dictionary;
};

struct IndexedSet_1_UnityEngine_UI_ICanvasElement_ {
    struct IndexedSet_1_UnityEngine_UI_ICanvasElement___Class *klass;
    MonitorData *monitor;
    struct IndexedSet_1_UnityEngine_UI_ICanvasElement___Fields fields;
};

struct __declspec(align(8)) List_1_UnityEngine_UI_ICanvasElement___Fields {
    struct ICanvasElement__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_UI_ICanvasElement_ {
    struct List_1_UnityEngine_UI_ICanvasElement___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_UI_ICanvasElement___Fields fields;
};

struct ICanvasElement {
    struct ICanvasElement__Class *klass;
    MonitorData *monitor;
};

struct ICanvasElement__Array {
    struct ICanvasElement__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ICanvasElement *vector[32];
};

struct IEnumerator_1_UnityEngine_UI_ICanvasElement_ {
    struct IEnumerator_1_UnityEngine_UI_ICanvasElement___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_UI_ICanvasElement_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UI_ICanvasElement_System_Int32_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UI_ICanvasElement_System_Int32_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32_ {
    struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_UnityEngine_UI_ICanvasElement_System_Int32___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_UnityEngine_UI_ICanvasElement_System_Int32_ {
    int32_t hashCode;
    int32_t next;
    struct ICanvasElement *key;
    int32_t value;
};

}
