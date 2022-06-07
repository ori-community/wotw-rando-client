namespace app {
struct HorizontalLayoutGroup__StaticFields {
};

struct HorizontalLayoutGroup__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HorizontalLayoutGroup__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HorizontalLayoutGroup__VTable vtable;
};

struct LayoutElement__Fields {
    struct UIBehaviour__Fields _;
    bool m_IgnoreLayout;
    float m_MinWidth;
    float m_MinHeight;
    float m_PreferredWidth;
    float m_PreferredHeight;
    float m_FlexibleWidth;
    float m_FlexibleHeight;
    int32_t m_LayoutPriority;
};

struct LayoutElement {
    struct LayoutElement__Class *klass;
    MonitorData *monitor;
    struct LayoutElement__Fields fields;
};

struct LayoutElement__VTable {
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
    VirtualInvokeData CalculateLayoutInputHorizontal;
    VirtualInvokeData CalculateLayoutInputVertical;
    VirtualInvokeData get_minWidth;
    VirtualInvokeData get_preferredWidth;
    VirtualInvokeData get_flexibleWidth;
    VirtualInvokeData get_minHeight;
    VirtualInvokeData get_preferredHeight;
    VirtualInvokeData get_flexibleHeight;
    VirtualInvokeData get_layoutPriority;
    VirtualInvokeData get_ignoreLayout;
    VirtualInvokeData get_ignoreLayout_1;
    VirtualInvokeData set_ignoreLayout;
    VirtualInvokeData CalculateLayoutInputHorizontal_1;
    VirtualInvokeData CalculateLayoutInputVertical_1;
    VirtualInvokeData get_minWidth_1;
    VirtualInvokeData set_minWidth;
    VirtualInvokeData get_minHeight_1;
    VirtualInvokeData set_minHeight;
    VirtualInvokeData get_preferredWidth_1;
    VirtualInvokeData set_preferredWidth;
    VirtualInvokeData get_preferredHeight_1;
    VirtualInvokeData set_preferredHeight;
    VirtualInvokeData get_flexibleWidth_1;
    VirtualInvokeData set_flexibleWidth;
    VirtualInvokeData get_flexibleHeight_1;
    VirtualInvokeData set_flexibleHeight;
    VirtualInvokeData get_layoutPriority_1;
    VirtualInvokeData set_layoutPriority;
};

struct LayoutElement__StaticFields {
};

struct LayoutElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LayoutElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LayoutElement__VTable vtable;
};

struct __declspec(align(8)) LayoutGroup_DelayedSetDirty_c_Iterator0__Fields {
    struct RectTransform *rectTransform;
    struct Object *_current;
    bool _disposing;
    int32_t _PC;
};

struct LayoutGroup_DelayedSetDirty_c_Iterator0 {
    struct LayoutGroup_DelayedSetDirty_c_Iterator0__Class *klass;
    MonitorData *monitor;
    struct LayoutGroup_DelayedSetDirty_c_Iterator0__Fields fields;
};

struct LayoutGroup_DelayedSetDirty_c_Iterator0__VTable {
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

struct LayoutGroup_DelayedSetDirty_c_Iterator0__StaticFields {
};

struct LayoutGroup_DelayedSetDirty_c_Iterator0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LayoutGroup_DelayedSetDirty_c_Iterator0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LayoutGroup_DelayedSetDirty_c_Iterator0__VTable vtable;
};

struct __declspec(align(8)) LayoutRebuilder__Fields {
    struct RectTransform *m_ToRebuild;
    int32_t m_CachedHashFromTransform;
};

struct LayoutRebuilder {
    struct LayoutRebuilder__Class *klass;
    MonitorData *monitor;
    struct LayoutRebuilder__Fields fields;
};

struct __declspec(align(8)) ObjectPool_1_LayoutRebuilder___Fields {
    struct Stack_1_UnityEngine_UI_LayoutRebuilder_ *m_Stack;
    struct UnityAction_1_UnityEngine_UI_LayoutRebuilder_ *m_ActionOnGet;
    struct UnityAction_1_UnityEngine_UI_LayoutRebuilder_ *m_ActionOnRelease;
    int32_t _countAll_k__BackingField;
};

struct ObjectPool_1_LayoutRebuilder_ {
    struct ObjectPool_1_LayoutRebuilder___Class *klass;
    MonitorData *monitor;
    struct ObjectPool_1_LayoutRebuilder___Fields fields;
};

struct __declspec(align(8)) Stack_1_UnityEngine_UI_LayoutRebuilder___Fields {
    struct LayoutRebuilder__Array *_array;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Stack_1_UnityEngine_UI_LayoutRebuilder_ {
    struct Stack_1_UnityEngine_UI_LayoutRebuilder___Class *klass;
    MonitorData *monitor;
    struct Stack_1_UnityEngine_UI_LayoutRebuilder___Fields fields;
};

struct LayoutRebuilder__Array {
    struct LayoutRebuilder__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LayoutRebuilder *vector[32];
};

struct IEnumerator_1_UnityEngine_UI_LayoutRebuilder_ {
    struct IEnumerator_1_UnityEngine_UI_LayoutRebuilder___Class *klass;
    MonitorData *monitor;
};

struct UnityAction_1_UnityEngine_UI_LayoutRebuilder___Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityAction_1_UnityEngine_UI_LayoutRebuilder_ {
    struct UnityAction_1_UnityEngine_UI_LayoutRebuilder___Class *klass;
    MonitorData *monitor;
    struct UnityAction_1_UnityEngine_UI_LayoutRebuilder___Fields fields;
};

struct Predicate_1_UnityEngine_Component___Fields {
    struct MulticastDelegate__Fields _;
};

struct Predicate_1_UnityEngine_Component_ {
    struct Predicate_1_UnityEngine_Component___Class *klass;
    MonitorData *monitor;
    struct Predicate_1_UnityEngine_Component___Fields fields;
};

struct UnityAction_1_UnityEngine_Component___Fields {
    struct MulticastDelegate__Fields _;
};

struct UnityAction_1_UnityEngine_Component_ {
    struct UnityAction_1_UnityEngine_Component___Class *klass;
    MonitorData *monitor;
    struct UnityAction_1_UnityEngine_Component___Fields fields;
};

struct LayoutRebuilder__Array__VTable {
};

struct LayoutRebuilder__Array__StaticFields {
};

struct LayoutRebuilder__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LayoutRebuilder__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LayoutRebuilder__Array__VTable vtable;
};

struct IEnumerator_1_UnityEngine_UI_LayoutRebuilder___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UnityEngine_UI_LayoutRebuilder___StaticFields {
};

struct IEnumerator_1_UnityEngine_UI_LayoutRebuilder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UnityEngine_UI_LayoutRebuilder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UnityEngine_UI_LayoutRebuilder___VTable vtable;
};

struct Stack_1_UnityEngine_UI_LayoutRebuilder___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_1;
};

struct Stack_1_UnityEngine_UI_LayoutRebuilder___StaticFields {
};

struct Stack_1_UnityEngine_UI_LayoutRebuilder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Stack_1_UnityEngine_UI_LayoutRebuilder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Stack_1_UnityEngine_UI_LayoutRebuilder___VTable vtable;
};

struct UnityAction_1_UnityEngine_UI_LayoutRebuilder___VTable {
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

struct UnityAction_1_UnityEngine_UI_LayoutRebuilder___StaticFields {
};

struct UnityAction_1_UnityEngine_UI_LayoutRebuilder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityAction_1_UnityEngine_UI_LayoutRebuilder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnityAction_1_UnityEngine_UI_LayoutRebuilder___VTable vtable;
};

struct ObjectPool_1_LayoutRebuilder___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ObjectPool_1_LayoutRebuilder___StaticFields {
};

struct ObjectPool_1_LayoutRebuilder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ObjectPool_1_LayoutRebuilder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ObjectPool_1_LayoutRebuilder___VTable vtable;
};

struct Predicate_1_UnityEngine_Component___VTable {
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

struct Predicate_1_UnityEngine_Component___StaticFields {
};

struct Predicate_1_UnityEngine_Component___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Predicate_1_UnityEngine_Component___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Predicate_1_UnityEngine_Component___VTable vtable;
};

struct UnityAction_1_UnityEngine_Component___VTable {
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

struct UnityAction_1_UnityEngine_Component___StaticFields {
};

struct UnityAction_1_UnityEngine_Component___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityAction_1_UnityEngine_Component___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnityAction_1_UnityEngine_Component___VTable vtable;
};

struct LayoutRebuilder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Rebuild;
    VirtualInvokeData get_transform;
    VirtualInvokeData LayoutComplete;
    VirtualInvokeData GraphicUpdateComplete;
    VirtualInvokeData IsDestroyed;
};

struct LayoutRebuilder__StaticFields {
    struct ObjectPool_1_LayoutRebuilder_ *s_Rebuilders;
    struct RectTransform_ReapplyDrivenProperties *__f__mg_cache0;
    struct Predicate_1_UnityEngine_Component_ *__f__am_cache0;
    struct UnityAction_1_UnityEngine_Component_ *__f__am_cache1;
    struct UnityAction_1_UnityEngine_Component_ *__f__am_cache2;
    struct UnityAction_1_UnityEngine_Component_ *__f__am_cache3;
    struct UnityAction_1_UnityEngine_Component_ *__f__am_cache4;
};

struct LayoutRebuilder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LayoutRebuilder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LayoutRebuilder__VTable vtable;
};

struct Func_2_UnityEngine_UI_ILayoutElement_Single___Fields {
    struct MulticastDelegate__Fields _;
};

struct Func_2_UnityEngine_UI_ILayoutElement_Single_ {
    struct Func_2_UnityEngine_UI_ILayoutElement_Single___Class *klass;
    MonitorData *monitor;
    struct Func_2_UnityEngine_UI_ILayoutElement_Single___Fields fields;
};

struct ILayoutElement {
    struct ILayoutElement__Class *klass;
    MonitorData *monitor;
};

struct ILayoutElement__VTable {
    VirtualInvokeData CalculateLayoutInputHorizontal;
    VirtualInvokeData CalculateLayoutInputVertical;
    VirtualInvokeData get_minWidth;
    VirtualInvokeData get_preferredWidth;
    VirtualInvokeData get_flexibleWidth;
    VirtualInvokeData get_minHeight;
    VirtualInvokeData get_preferredHeight;
    VirtualInvokeData get_flexibleHeight;
    VirtualInvokeData get_layoutPriority;
};

struct ILayoutElement__StaticFields {
};

struct ILayoutElement__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ILayoutElement__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ILayoutElement__VTable vtable;
};

struct Func_2_UnityEngine_UI_ILayoutElement_Single___VTable {
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

struct Func_2_UnityEngine_UI_ILayoutElement_Single___StaticFields {
};

struct Func_2_UnityEngine_UI_ILayoutElement_Single___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Func_2_UnityEngine_UI_ILayoutElement_Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Func_2_UnityEngine_UI_ILayoutElement_Single___VTable vtable;
};

struct ILayoutElement___VTable {
};

struct ILayoutElement___StaticFields {
};

struct ILayoutElement___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ILayoutElement___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ILayoutElement___VTable vtable;
};

struct VerticalLayoutGroup__Fields {
    struct HorizontalOrVerticalLayoutGroup__Fields _;
};

struct VerticalLayoutGroup {
    struct VerticalLayoutGroup__Class *klass;
    MonitorData *monitor;
    struct VerticalLayoutGroup__Fields fields;
};

struct VerticalLayoutGroup__VTable {
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
    VirtualInvokeData OnTransformChildrenChanged;
};

struct VerticalLayoutGroup__StaticFields {
};

struct VerticalLayoutGroup__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VerticalLayoutGroup__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VerticalLayoutGroup__VTable vtable;
};

struct __declspec(align(8)) ReflectionMethodsCache__Fields {
    struct ReflectionMethodsCache_Raycast3DCallback *raycast3D;
    struct ReflectionMethodsCache_RaycastAllCallback *raycast3DAll;
    struct ReflectionMethodsCache_Raycast2DCallback *raycast2D;
    struct ReflectionMethodsCache_GetRayIntersectionAllCallback *getRayIntersectionAll;
    struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback *getRayIntersectionAllNonAlloc;
    struct ReflectionMethodsCache_GetRaycastNonAllocCallback *getRaycastNonAlloc;
};

struct ReflectionMethodsCache {
    struct ReflectionMethodsCache__Class *klass;
    MonitorData *monitor;
    struct ReflectionMethodsCache__Fields fields;
};

struct ReflectionMethodsCache_Raycast3DCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct ReflectionMethodsCache_Raycast3DCallback {
    struct ReflectionMethodsCache_Raycast3DCallback__Class *klass;
    MonitorData *monitor;
    struct ReflectionMethodsCache_Raycast3DCallback__Fields fields;
};

struct ReflectionMethodsCache_RaycastAllCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct ReflectionMethodsCache_RaycastAllCallback {
    struct ReflectionMethodsCache_RaycastAllCallback__Class *klass;
    MonitorData *monitor;
    struct ReflectionMethodsCache_RaycastAllCallback__Fields fields;
};

struct ReflectionMethodsCache_Raycast2DCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct ReflectionMethodsCache_Raycast2DCallback {
    struct ReflectionMethodsCache_Raycast2DCallback__Class *klass;
    MonitorData *monitor;
    struct ReflectionMethodsCache_Raycast2DCallback__Fields fields;
};

struct ReflectionMethodsCache_GetRayIntersectionAllCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct ReflectionMethodsCache_GetRayIntersectionAllCallback {
    struct ReflectionMethodsCache_GetRayIntersectionAllCallback__Class *klass;
    MonitorData *monitor;
    struct ReflectionMethodsCache_GetRayIntersectionAllCallback__Fields fields;
};

struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback {
    struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class *klass;
    MonitorData *monitor;
    struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Fields fields;
};

struct ReflectionMethodsCache_GetRaycastNonAllocCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct ReflectionMethodsCache_GetRaycastNonAllocCallback {
    struct ReflectionMethodsCache_GetRaycastNonAllocCallback__Class *klass;
    MonitorData *monitor;
    struct ReflectionMethodsCache_GetRaycastNonAllocCallback__Fields fields;
};

struct ReflectionMethodsCache_Raycast3DCallback__VTable {
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

struct ReflectionMethodsCache_Raycast3DCallback__StaticFields {
};

struct ReflectionMethodsCache_Raycast3DCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionMethodsCache_Raycast3DCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionMethodsCache_Raycast3DCallback__VTable vtable;
};

struct ReflectionMethodsCache_RaycastAllCallback__VTable {
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

struct ReflectionMethodsCache_RaycastAllCallback__StaticFields {
};

struct ReflectionMethodsCache_RaycastAllCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionMethodsCache_RaycastAllCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionMethodsCache_RaycastAllCallback__VTable vtable;
};

struct ReflectionMethodsCache_Raycast2DCallback__VTable {
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

struct ReflectionMethodsCache_Raycast2DCallback__StaticFields {
};

struct ReflectionMethodsCache_Raycast2DCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionMethodsCache_Raycast2DCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionMethodsCache_Raycast2DCallback__VTable vtable;
};

struct ReflectionMethodsCache_GetRayIntersectionAllCallback__VTable {
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

struct ReflectionMethodsCache_GetRayIntersectionAllCallback__StaticFields {
};

struct ReflectionMethodsCache_GetRayIntersectionAllCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionMethodsCache_GetRayIntersectionAllCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionMethodsCache_GetRayIntersectionAllCallback__VTable vtable;
};

struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__VTable {
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

struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__StaticFields {
};

struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback__VTable vtable;
};

struct ReflectionMethodsCache_GetRaycastNonAllocCallback__VTable {
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

struct ReflectionMethodsCache_GetRaycastNonAllocCallback__StaticFields {
};

struct ReflectionMethodsCache_GetRaycastNonAllocCallback__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionMethodsCache_GetRaycastNonAllocCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionMethodsCache_GetRaycastNonAllocCallback__VTable vtable;
};

struct ReflectionMethodsCache__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReflectionMethodsCache__StaticFields {
    struct ReflectionMethodsCache *s_ReflectionMethodsCache;
};

struct ReflectionMethodsCache__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionMethodsCache__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionMethodsCache__VTable vtable;
};

struct UIVertex___VTable {
};

struct UIVertex___StaticFields {
};

struct UIVertex___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UIVertex___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UIVertex___VTable vtable;
};

struct BaseVertexEffect {
    struct BaseVertexEffect__Class *klass;
    MonitorData *monitor;
};

struct BaseVertexEffect__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
};

struct BaseVertexEffect__StaticFields {
};

struct BaseVertexEffect__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseVertexEffect__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseVertexEffect__VTable vtable;
};

struct BaseMeshEffect__Fields {
    struct UIBehaviour__Fields _;
    struct Graphic *m_Graphic;
};

struct BaseMeshEffect {
    struct BaseMeshEffect__Class *klass;
    MonitorData *monitor;
    struct BaseMeshEffect__Fields fields;
};

struct Shadow__Fields {
    struct BaseMeshEffect__Fields _;
    struct Color m_EffectColor;
    struct Vector2 m_EffectDistance;
    bool m_UseGraphicAlpha;
};

struct Shadow {
    struct Shadow__Class *klass;
    MonitorData *monitor;
    struct Shadow__Fields fields;
};

struct Outline__Fields {
    struct Shadow__Fields _;
};

struct Outline {
    struct Outline__Class *klass;
    MonitorData *monitor;
    struct Outline__Fields fields;
};

struct Shadow__VTable {
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
    VirtualInvokeData ModifyMesh;
    VirtualInvokeData ModifyMesh_1;
    VirtualInvokeData ModifyMesh_2;
    VirtualInvokeData ModifyMesh_3;
};

struct Shadow__StaticFields {
};

struct Shadow__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Shadow__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Shadow__VTable vtable;
};

struct Outline__VTable {
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
    VirtualInvokeData ModifyMesh;
    VirtualInvokeData ModifyMesh_1;
    VirtualInvokeData ModifyMesh_2;
    VirtualInvokeData ModifyMesh_3;
};

struct Outline__StaticFields {
};

struct Outline__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Outline__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Outline__VTable vtable;
};

struct BaseMeshEffect__VTable {
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
    VirtualInvokeData ModifyMesh;
    VirtualInvokeData ModifyMesh_1;
    VirtualInvokeData ModifyMesh_2;
    VirtualInvokeData __unknown;
};

struct BaseMeshEffect__StaticFields {
};

}
