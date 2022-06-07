namespace app {
struct TimescaleAnimator__StaticFields {
};

struct TimescaleAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimescaleAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimescaleAnimator__VTable vtable;
};

struct TriggerActionAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct ActionMethod *Action;
};

struct TriggerActionAnimator {
    struct TriggerActionAnimator__Class *klass;
    MonitorData *monitor;
    struct TriggerActionAnimator__Fields fields;
};

struct TriggerActionAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
};

struct TriggerActionAnimator__StaticFields {
};

struct TriggerActionAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerActionAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerActionAnimator__VTable vtable;
};

struct __declspec(align(8)) ExperimentalTransparencyAnimatorSystemStrategy__Fields {
    struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array *m_computer;
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ *m_hideSceneActions;
    struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ *m_statePool;
    struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ *m_stateMap;
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ *m_states;
};

struct ExperimentalTransparencyAnimatorSystemStrategy {
    struct ExperimentalTransparencyAnimatorSystemStrategy__Class *klass;
    MonitorData *monitor;
    struct ExperimentalTransparencyAnimatorSystemStrategy__Fields fields;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue {
    float TotalValue;
    float TotalPersistantValue;
    bool IsSet;
    bool PersistantIsSet;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Boxed {
    struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Class *klass;
    MonitorData *monitor;
    struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue fields;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array {
    struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue vector[32];
};

struct __declspec(align(8)) List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Fields {
    struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ {
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Fields fields;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction {
    struct MoonGuid *SceneGuid;
    bool Hidden;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Boxed {
    struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class *klass;
    MonitorData *monitor;
    struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction fields;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array {
    struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction vector[32];
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ {
    struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields {
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
    struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
    MonitorData *monitor;
    struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields fields;
};

struct __declspec(align(8)) ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Fields {
    bool OriginalHiddenFlag;
    int32_t InstanceID;
    struct Renderer *Renderer;
    int32_t _ProcessedFrame_k__BackingField;
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ *Requests;
    struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array *Properties;
    float m_handoverAlpha;
    bool m_hasValidAlphaHandover;
    bool HasImportantRequest;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState {
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Class *klass;
    MonitorData *monitor;
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___Fields {
    struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ {
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___Fields fields;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_Request {
    UberShaderProperty_Color__Enum Color;
    
    float Value;
    bool Persistant;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Boxed {
    struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Class *klass;
    MonitorData *monitor;
    struct ExperimentalTransparencyAnimatorSystemStrategy_Request fields;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array {
    struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ExperimentalTransparencyAnimatorSystemStrategy_Request vector[32];
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request_ {
    struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___Class *klass;
    MonitorData *monitor;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState {
    float Original;
    float Current;
    float HandoverValue;
    bool HasHandover;
    bool IsSet;
    HandoverMode__Enum LastHandoverMode;
    
    TransparencyMode__Enum LastTransparencyMode;
    
};

struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Boxed {
    struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class *klass;
    MonitorData *monitor;
    struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState fields;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array {
    struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState vector[32];
};

struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array {
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState *vector[32];
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
    struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
    struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields {
    struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields {
    struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields fields;
};

struct ICollection_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
    struct ICollection_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
    int32_t key;
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState *value;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Boxed {
    struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ fields;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array {
    struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
    struct IEnumerable_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields {
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState_ {
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Fields fields;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__StaticFields {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__VTable vtable;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__VTable {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__StaticFields {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExperimentalTransparencyAnimatorSystemStrategy_ComputedValue__Array__VTable vtable;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__StaticFields {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__VTable vtable;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__VTable {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__StaticFields {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__VTable vtable;
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields {
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable vtable;
};

struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable {
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

struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields {
    struct ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array *_emptyArray;
};

struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable vtable;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_Request__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_Request__StaticFields {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExperimentalTransparencyAnimatorSystemStrategy_Request__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExperimentalTransparencyAnimatorSystemStrategy_Request__VTable vtable;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array__VTable {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array__StaticFields {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array__VTable vtable;
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___StaticFields {
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___VTable vtable;
};

struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___VTable {
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

struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___StaticFields {
    struct ExperimentalTransparencyAnimatorSystemStrategy_Request__Array *_emptyArray;
};

struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_Request___VTable vtable;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__StaticFields {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__VTable vtable;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__VTable {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__StaticFields {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array__VTable vtable;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__StaticFields {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__VTable vtable;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__VTable {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__StaticFields {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState__Array__VTable vtable;
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields {
};

struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
};

struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
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

struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields {
};

struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Queue_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
};

struct ICollection_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields {
};

struct ICollection_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
};

struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields {
};

struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields {
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__VTable {
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__StaticFields {
};

struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
};

struct IEnumerable_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields {
};

struct IEnumerable_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
};

struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
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

struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields {
};

struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Int32_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
};

struct List_1_Moon_Timeline_ExperimentalTransparencyAnimatorSystemStrategy_RendererState___VTable {
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

}
