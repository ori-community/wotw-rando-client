namespace app {
struct LegacyDistanceAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *Target;
    struct AnimationCurve *AnimationCurve;
    bool ShouldTargetPlayer;
    bool AccountForX;
    bool AccountForY;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
};

struct LegacyDistanceAnimator {
    struct LegacyDistanceAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyDistanceAnimator__Fields fields;
};

struct LegacyDistanceAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Start;
    VirtualInvokeData __unknown;
};

struct LegacyDistanceAnimator__StaticFields {
};

struct LegacyDistanceAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyDistanceAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyDistanceAnimator__VTable vtable;
};

struct LegacyEnvironmentFogColorAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct Color TargetFogColor;
    struct Color m_initialFogColor;
};

struct LegacyEnvironmentFogColorAnimator {
    struct LegacyEnvironmentFogColorAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyEnvironmentFogColorAnimator__Fields fields;
};

struct LegacyEnvironmentFogColorAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyEnvironmentFogColorAnimator__StaticFields {
};

struct LegacyEnvironmentFogColorAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyEnvironmentFogColorAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyEnvironmentFogColorAnimator__VTable vtable;
};

struct LegacyFloatShaderPropertyAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct String *PropertyName;
    int32_t m_propertyID;
    struct Renderer *m_renderer;
    struct Material *m_material;
    float m_originalValue;
    struct Vector4 m_originalValueVector;
    bool AnimateVectorXYAsFloat;
};

struct LegacyFloatShaderPropertyAnimator {
    struct LegacyFloatShaderPropertyAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyFloatShaderPropertyAnimator__Fields fields;
};

struct LegacyFloatShaderPropertyAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyFloatShaderPropertyAnimator__StaticFields {
};

struct LegacyFloatShaderPropertyAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyFloatShaderPropertyAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyFloatShaderPropertyAnimator__VTable vtable;
};

struct LegacyHierarchyTransparancyAnimatorController__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve *AnimationCurve;
    bool PlayAutomatically;
    bool DeactivateWhenInvisible;
    bool RestartOnEnable;
    float Speed;
    struct List_1_LegacyTransparancyAnimator_ *m_list;
};

struct LegacyHierarchyTransparancyAnimatorController {
    struct LegacyHierarchyTransparancyAnimatorController__Class *klass;
    MonitorData *monitor;
    struct LegacyHierarchyTransparancyAnimatorController__Fields fields;
};

struct __declspec(align(8)) List_1_LegacyTransparancyAnimator___Fields {
    struct LegacyTransparancyAnimator__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LegacyTransparancyAnimator_ {
    struct List_1_LegacyTransparancyAnimator___Class *klass;
    MonitorData *monitor;
    struct List_1_LegacyTransparancyAnimator___Fields fields;
};

struct LegacyTransparancyAnimator__Fields {
    struct LegacyAnimator__Fields _;
    bool DestroyWhenInvisible;
    bool DeactivateWhenInvisible;
    struct Color__Array *m_colors;
    struct Single__Array *m_originalAlphas;
    struct UberShaderProperty_Color__Enum__Array *m_colorPropertyNames;
    bool m_isDirty;
    struct Collider *m_collider;
    bool OptimizeRenderEnable;
    struct Renderer *m_renderer;
};

struct LegacyTransparancyAnimator {
    struct LegacyTransparancyAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyTransparancyAnimator__Fields fields;
};

struct LegacyTransparancyAnimator__Array {
    struct LegacyTransparancyAnimator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LegacyTransparancyAnimator *vector[32];
};

struct IEnumerator_1_LegacyTransparancyAnimator_ {
    struct IEnumerator_1_LegacyTransparancyAnimator___Class *klass;
    MonitorData *monitor;
};

struct LegacyTransparancyAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyTransparancyAnimator__StaticFields {
    struct UberShaderProperty_Color__Enum__Array *SupportedProperties;
};

struct LegacyTransparancyAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyTransparancyAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyTransparancyAnimator__VTable vtable;
};

struct LegacyTransparancyAnimator__Array__VTable {
};

struct LegacyTransparancyAnimator__Array__StaticFields {
};

struct LegacyTransparancyAnimator__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyTransparancyAnimator__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyTransparancyAnimator__Array__VTable vtable;
};

struct IEnumerator_1_LegacyTransparancyAnimator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_LegacyTransparancyAnimator___StaticFields {
};

struct IEnumerator_1_LegacyTransparancyAnimator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_LegacyTransparancyAnimator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_LegacyTransparancyAnimator___VTable vtable;
};

struct List_1_LegacyTransparancyAnimator___VTable {
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

struct List_1_LegacyTransparancyAnimator___StaticFields {
    struct LegacyTransparancyAnimator__Array *_emptyArray;
};

struct List_1_LegacyTransparancyAnimator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_LegacyTransparancyAnimator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_LegacyTransparancyAnimator___VTable vtable;
};

struct LegacyHierarchyTransparancyAnimatorController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LegacyHierarchyTransparancyAnimatorController__StaticFields {
};

struct LegacyHierarchyTransparancyAnimatorController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyHierarchyTransparancyAnimatorController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyHierarchyTransparancyAnimatorController__VTable vtable;
};

struct LegacyMaterialColorAnimator__Fields {
    struct LegacyAnimator__Fields _;
    bool AnimateChildren;
    struct Color Value;
    bool Red;
    bool Green;
    bool Blue;
    bool Alpha;
    struct String *Property;
    int32_t _PropertyID;
    struct List_1_LegacyMaterialColorAnimator_RendererData_ *m_rendererData;
};

struct LegacyMaterialColorAnimator {
    struct LegacyMaterialColorAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyMaterialColorAnimator__Fields fields;
};

struct __declspec(align(8)) List_1_LegacyMaterialColorAnimator_RendererData___Fields {
    struct LegacyMaterialColorAnimator_RendererData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LegacyMaterialColorAnimator_RendererData_ {
    struct List_1_LegacyMaterialColorAnimator_RendererData___Class *klass;
    MonitorData *monitor;
    struct List_1_LegacyMaterialColorAnimator_RendererData___Fields fields;
};

struct __declspec(align(8)) LegacyMaterialColorAnimator_RendererData__Fields {
    struct Color OriginalValue;
    struct Renderer *Renderer;
};

struct LegacyMaterialColorAnimator_RendererData {
    struct LegacyMaterialColorAnimator_RendererData__Class *klass;
    MonitorData *monitor;
    struct LegacyMaterialColorAnimator_RendererData__Fields fields;
};

struct LegacyMaterialColorAnimator_RendererData__Array {
    struct LegacyMaterialColorAnimator_RendererData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LegacyMaterialColorAnimator_RendererData *vector[32];
};

struct IEnumerator_1_LegacyMaterialColorAnimator_RendererData_ {
    struct IEnumerator_1_LegacyMaterialColorAnimator_RendererData___Class *klass;
    MonitorData *monitor;
};

struct LegacyMaterialColorAnimator_RendererData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LegacyMaterialColorAnimator_RendererData__StaticFields {
};

struct LegacyMaterialColorAnimator_RendererData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyMaterialColorAnimator_RendererData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyMaterialColorAnimator_RendererData__VTable vtable;
};

struct LegacyMaterialColorAnimator_RendererData__Array__VTable {
};

struct LegacyMaterialColorAnimator_RendererData__Array__StaticFields {
};

struct LegacyMaterialColorAnimator_RendererData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyMaterialColorAnimator_RendererData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyMaterialColorAnimator_RendererData__Array__VTable vtable;
};

struct IEnumerator_1_LegacyMaterialColorAnimator_RendererData___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_LegacyMaterialColorAnimator_RendererData___StaticFields {
};

struct IEnumerator_1_LegacyMaterialColorAnimator_RendererData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_LegacyMaterialColorAnimator_RendererData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_LegacyMaterialColorAnimator_RendererData___VTable vtable;
};

struct List_1_LegacyMaterialColorAnimator_RendererData___VTable {
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

struct List_1_LegacyMaterialColorAnimator_RendererData___StaticFields {
    struct LegacyMaterialColorAnimator_RendererData__Array *_emptyArray;
};

struct List_1_LegacyMaterialColorAnimator_RendererData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_LegacyMaterialColorAnimator_RendererData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_LegacyMaterialColorAnimator_RendererData___VTable vtable;
};

struct LegacyMaterialColorAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyMaterialColorAnimator__StaticFields {
};

struct LegacyMaterialColorAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyMaterialColorAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyMaterialColorAnimator__VTable vtable;
};

struct LegacyMaterialFloatAnimator__Fields {
    struct LegacyAnimator__Fields _;
    bool AnimateChildren;
    float Value;
    struct String *Property;
    int32_t _PropertyID;
    struct List_1_LegacyMaterialFloatAnimator_RendererData_ *m_rendererData;
    bool m_madeMaterial;
};

struct LegacyMaterialFloatAnimator {
    struct LegacyMaterialFloatAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyMaterialFloatAnimator__Fields fields;
};

struct __declspec(align(8)) List_1_LegacyMaterialFloatAnimator_RendererData___Fields {
    struct LegacyMaterialFloatAnimator_RendererData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LegacyMaterialFloatAnimator_RendererData_ {
    struct List_1_LegacyMaterialFloatAnimator_RendererData___Class *klass;
    MonitorData *monitor;
    struct List_1_LegacyMaterialFloatAnimator_RendererData___Fields fields;
};

struct __declspec(align(8)) LegacyMaterialFloatAnimator_RendererData__Fields {
    float OriginalValue;
    struct Renderer *Renderer;
};

struct LegacyMaterialFloatAnimator_RendererData {
    struct LegacyMaterialFloatAnimator_RendererData__Class *klass;
    MonitorData *monitor;
    struct LegacyMaterialFloatAnimator_RendererData__Fields fields;
};

struct LegacyMaterialFloatAnimator_RendererData__Array {
    struct LegacyMaterialFloatAnimator_RendererData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LegacyMaterialFloatAnimator_RendererData *vector[32];
};

struct IEnumerator_1_LegacyMaterialFloatAnimator_RendererData_ {
    struct IEnumerator_1_LegacyMaterialFloatAnimator_RendererData___Class *klass;
    MonitorData *monitor;
};

struct LegacyMaterialFloatAnimator_RendererData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LegacyMaterialFloatAnimator_RendererData__StaticFields {
};

struct LegacyMaterialFloatAnimator_RendererData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyMaterialFloatAnimator_RendererData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyMaterialFloatAnimator_RendererData__VTable vtable;
};

struct LegacyMaterialFloatAnimator_RendererData__Array__VTable {
};

struct LegacyMaterialFloatAnimator_RendererData__Array__StaticFields {
};

struct LegacyMaterialFloatAnimator_RendererData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyMaterialFloatAnimator_RendererData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyMaterialFloatAnimator_RendererData__Array__VTable vtable;
};

struct IEnumerator_1_LegacyMaterialFloatAnimator_RendererData___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_LegacyMaterialFloatAnimator_RendererData___StaticFields {
};

struct IEnumerator_1_LegacyMaterialFloatAnimator_RendererData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_LegacyMaterialFloatAnimator_RendererData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_LegacyMaterialFloatAnimator_RendererData___VTable vtable;
};

struct List_1_LegacyMaterialFloatAnimator_RendererData___VTable {
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

struct List_1_LegacyMaterialFloatAnimator_RendererData___StaticFields {
    struct LegacyMaterialFloatAnimator_RendererData__Array *_emptyArray;
};

struct List_1_LegacyMaterialFloatAnimator_RendererData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_LegacyMaterialFloatAnimator_RendererData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_LegacyMaterialFloatAnimator_RendererData___VTable vtable;
};

struct LegacyMaterialFloatAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyMaterialFloatAnimator__StaticFields {
};

struct LegacyMaterialFloatAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyMaterialFloatAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyMaterialFloatAnimator__VTable vtable;
};

struct LegacyMaterialTransparencyAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct String *Property;
    int32_t _PropertyID;
    float m_originalValue;
    struct Renderer *m_renderer;
    bool m_madeMaterial;
};

struct LegacyMaterialTransparencyAnimator {
    struct LegacyMaterialTransparencyAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyMaterialTransparencyAnimator__Fields fields;
};

struct LegacyMaterialTransparencyAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyMaterialTransparencyAnimator__StaticFields {
};

struct LegacyMaterialTransparencyAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyMaterialTransparencyAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyMaterialTransparencyAnimator__VTable vtable;
};

struct LegacyParticleEmissionRateAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct ParticleSystem *m_particleSystem;
    float m_startMinEmission;
    float m_startMaxEmission;
    float m_startEmission;
};

struct LegacyParticleEmissionRateAnimator {
    struct LegacyParticleEmissionRateAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyParticleEmissionRateAnimator__Fields fields;
};

struct LegacyParticleEmissionRateAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyParticleEmissionRateAnimator__StaticFields {
};

struct LegacyParticleEmissionRateAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyParticleEmissionRateAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyParticleEmissionRateAnimator__VTable vtable;
};

struct LegacyRotateAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct Vector3 RotateAxisFilter;
    struct Transform *m_transform;
    struct Quaternion m_originalRotation;
};

struct LegacyRotateAnimator {
    struct LegacyRotateAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyRotateAnimator__Fields fields;
};

struct LegacyRotateAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyRotateAnimator__StaticFields {
};

struct LegacyRotateAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyRotateAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyRotateAnimator__VTable vtable;
};

struct LegacyTextureUVAnimator__Fields {
    struct LegacyAnimator__Fields _;
    float UMultiplier;
    float VMultiplier;
    struct String *TextureName;
    int32_t _TextureID;
    struct Material *m_mainMaterial;
    struct Vector2 m_originalOffset;
    struct Renderer *m_renderer;
};

struct LegacyTextureUVAnimator {
    struct LegacyTextureUVAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyTextureUVAnimator__Fields fields;
};

struct LegacyTextureUVAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyTextureUVAnimator__StaticFields {
};

struct LegacyTextureUVAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyTextureUVAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyTextureUVAnimator__VTable vtable;
};

struct LegacyTranslateAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct Transform *Target;
    struct Transform *m_transform;
    struct Vector3 m_originalPosition;
    struct Vector3 Translate;
    bool AnimateX;
    bool AnimateY;
    bool AnimateZ;
};

struct LegacyTranslateAnimator {
    struct LegacyTranslateAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyTranslateAnimator__Fields fields;
};

struct LegacyTranslateAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyTranslateAnimator__StaticFields {
};

}
