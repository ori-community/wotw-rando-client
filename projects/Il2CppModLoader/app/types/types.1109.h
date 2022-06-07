namespace app {
struct CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__StaticFields {
};

struct CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__VTable vtable;
};

struct CartographerDesertPatrolBehaviour_IdleStop__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CartographerDesertPatrolBehaviour_IdleStop__StaticFields {
};

struct CartographerDesertPatrolBehaviour_IdleStop__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartographerDesertPatrolBehaviour_IdleStop__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartographerDesertPatrolBehaviour_IdleStop__VTable vtable;
};

struct CartographerDesertPatrolBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
};

struct CartographerDesertPatrolBehaviour__StaticFields {
};

struct CartographerDesertPatrolBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartographerDesertPatrolBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartographerDesertPatrolBehaviour__VTable vtable;
};

struct Counter_1 {
    int64_t count;
    double sum;
    double avg;
    double max;
};

struct Counter_1__Boxed {
    struct Counter_1__Class *klass;
    MonitorData *monitor;
    struct Counter_1 fields;
};

struct Counter_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Counter_1__StaticFields {
};

struct Counter_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Counter_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Counter_1__VTable vtable;
};

struct __declspec(align(8)) ArtManagerData__Fields {
    int32_t CurrentModeIndex;
    int32_t DressingModeIndex;
    int32_t SolidsModeIndex;
};

struct ArtManagerData {
    struct ArtManagerData__Class *klass;
    MonitorData *monitor;
    struct ArtManagerData__Fields fields;
};

struct ArtManagerData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ArtManagerData__StaticFields {
};

struct ArtManagerData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ArtManagerData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ArtManagerData__VTable vtable;
};

struct CrossSceneDependency__Fields {
    struct MonoBehaviour__Fields _;
    int32_t ObjectID;
    struct CrossSceneDependencyDatabase *DependencyDatabase;
};

struct CrossSceneDependency {
    struct CrossSceneDependency__Class *klass;
    MonitorData *monitor;
    struct CrossSceneDependency__Fields fields;
};

struct CrossSceneDependencyDatabase__Fields {
    struct ScriptableObject__Fields _;
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_ *DependencyDatas;
    int32_t m_incrementer;
    struct List_1_Moon_CrossSceneDependencyData_ *m_dependencyDatas;
};

struct CrossSceneDependencyDatabase {
    struct CrossSceneDependencyDatabase__Class *klass;
    MonitorData *monitor;
    struct CrossSceneDependencyDatabase__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_CrossSceneDependency___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependency_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependency_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_Moon_CrossSceneDependency_ {
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependency___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependency___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct CrossSceneDependency *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependency___Fields {
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependency_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependency_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependency___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependency___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependency___Fields {
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependency_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependency_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependency___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependency___Fields fields;
};

struct CrossSceneDependency__Array {
    struct CrossSceneDependency__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CrossSceneDependency *vector[32];
};

struct IEnumerator_1_Moon_CrossSceneDependency_ {
    struct IEnumerator_1_Moon_CrossSceneDependency___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_CrossSceneDependency_ {
    struct ICollection_1_Moon_CrossSceneDependency___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency_ {
    int32_t key;
    struct CrossSceneDependency *value;
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Boxed {
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency_ fields;
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Array {
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_CrossSceneDependency_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_CrossSceneDependency_ {
    struct IEnumerable_1_Moon_CrossSceneDependency___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ {
    struct Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct List_1_Moon_CrossSceneDependencyInjector_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ fields;
};

struct __declspec(align(8)) List_1_Moon_CrossSceneDependencyInjector___Fields {
    struct CrossSceneDependencyInjector__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_CrossSceneDependencyInjector_ {
    struct List_1_Moon_CrossSceneDependencyInjector___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_CrossSceneDependencyInjector___Fields fields;
};

struct CrossSceneDependencyInjector__Fields {
    struct MonoBehaviour__Fields _;
    struct CrossSceneDependencyInjector_ObjectReference__Array *References;
};

struct CrossSceneDependencyInjector {
    struct CrossSceneDependencyInjector__Class *klass;
    MonitorData *monitor;
    struct CrossSceneDependencyInjector__Fields fields;
};

struct __declspec(align(8)) CrossSceneDependencyInjector_ObjectReference__Fields {
    struct Component_1 *Component;
    struct String *FieldName;
    int32_t ReferencedObjectID;
    struct CrossSceneDependencyDatabase *DependencyDatabase;
    bool _Injected_k__BackingField;
};

struct CrossSceneDependencyInjector_ObjectReference {
    struct CrossSceneDependencyInjector_ObjectReference__Class *klass;
    MonitorData *monitor;
    struct CrossSceneDependencyInjector_ObjectReference__Fields fields;
};

struct CrossSceneDependencyInjector_ObjectReference__Array {
    struct CrossSceneDependencyInjector_ObjectReference__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CrossSceneDependencyInjector_ObjectReference *vector[32];
};

struct CrossSceneDependencyInjector__Array {
    struct CrossSceneDependencyInjector__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CrossSceneDependencyInjector *vector[32];
};

struct IEnumerator_1_Moon_CrossSceneDependencyInjector_ {
    struct IEnumerator_1_Moon_CrossSceneDependencyInjector___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Fields {
    struct Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Fields {
    struct Dictionary_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Fields fields;
};

struct List_1_Moon_CrossSceneDependencyInjector___Array {
    struct List_1_Moon_CrossSceneDependencyInjector___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct List_1_Moon_CrossSceneDependencyInjector_ *vector[32];
};

struct IEnumerator_1_List_1_Moon_CrossSceneDependencyInjector_ {
    struct IEnumerator_1_List_1_Moon_CrossSceneDependencyInjector___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_List_1_Moon_CrossSceneDependencyInjector_ {
    struct ICollection_1_List_1_Moon_CrossSceneDependencyInjector___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ {
    int32_t key;
    struct List_1_Moon_CrossSceneDependencyInjector_ *value;
};

struct KeyValuePair_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Boxed {
    struct KeyValuePair_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ fields;
};

struct KeyValuePair_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Array {
    struct KeyValuePair_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_List_1_Moon_CrossSceneDependencyInjector___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_List_1_Moon_CrossSceneDependencyInjector_ {
    struct IEnumerable_1_List_1_Moon_CrossSceneDependencyInjector___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_CrossSceneDependencyData___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependencyData___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_Int32_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependencyData_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependencyData_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_ {
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependencyData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependencyData___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependencyData_ {
    int32_t hashCode;
    int32_t next;
    int32_t key;
    struct CrossSceneDependencyData *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependencyData___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependencyData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependencyData_ fields;
};

struct __declspec(align(8)) CrossSceneDependencyData__Fields {
    int32_t ObjectID;
    struct String *Name;
    struct MoonGuid *SceneMoonGuid;
};

struct CrossSceneDependencyData {
    struct CrossSceneDependencyData__Class *klass;
    MonitorData *monitor;
    struct CrossSceneDependencyData__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependencyData___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependencyData___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependencyData_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependencyData___Fields {
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependencyData_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependencyData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependencyData___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependencyData___Fields {
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependencyData_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependencyData___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependencyData___Fields fields;
};

struct CrossSceneDependencyData__Array {
    struct CrossSceneDependencyData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct CrossSceneDependencyData *vector[32];
};

struct IEnumerator_1_Moon_CrossSceneDependencyData_ {
    struct IEnumerator_1_Moon_CrossSceneDependencyData___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_CrossSceneDependencyData_ {
    struct ICollection_1_Moon_CrossSceneDependencyData___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependencyData_ {
    int32_t key;
    struct CrossSceneDependencyData *value;
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependencyData___Boxed {
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependencyData___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependencyData_ fields;
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependencyData___Array {
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependencyData___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependencyData_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_CrossSceneDependencyData_ {
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_CrossSceneDependencyData___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_CrossSceneDependencyData_ {
    struct IEnumerable_1_Moon_CrossSceneDependencyData___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_CrossSceneDependencyData___Fields {
    struct CrossSceneDependencyData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_CrossSceneDependencyData_ {
    struct List_1_Moon_CrossSceneDependencyData___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_CrossSceneDependencyData___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_CrossSceneDependency___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependency___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependency___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependency___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependency___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_CrossSceneDependency___VTable vtable;
};

struct CrossSceneDependency__Array__VTable {
};

struct CrossSceneDependency__Array__StaticFields {
};

struct CrossSceneDependency__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CrossSceneDependency__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CrossSceneDependency__Array__VTable vtable;
};

struct IEnumerator_1_Moon_CrossSceneDependency___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_CrossSceneDependency___StaticFields {
};

struct IEnumerator_1_Moon_CrossSceneDependency___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_CrossSceneDependency___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_CrossSceneDependency___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependency___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependency___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependency___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependency___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_CrossSceneDependency___VTable vtable;
};

struct ICollection_1_Moon_CrossSceneDependency___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Moon_CrossSceneDependency___StaticFields {
};

struct ICollection_1_Moon_CrossSceneDependency___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Moon_CrossSceneDependency___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Moon_CrossSceneDependency___VTable vtable;
};

struct CrossSceneDependency___VTable {
};

struct CrossSceneDependency___StaticFields {
};

struct CrossSceneDependency___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CrossSceneDependency___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CrossSceneDependency___VTable vtable;
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___StaticFields {
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___VTable vtable;
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Array__VTable {
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Array__StaticFields {
};

struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_CrossSceneDependency___VTable vtable;
};

struct IEnumerable_1_Moon_CrossSceneDependency___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Moon_CrossSceneDependency___StaticFields {
};

struct IEnumerable_1_Moon_CrossSceneDependency___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Moon_CrossSceneDependency___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Moon_CrossSceneDependency___VTable vtable;
};

struct Dictionary_2_System_Int32_Moon_CrossSceneDependency___VTable {
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

struct Dictionary_2_System_Int32_Moon_CrossSceneDependency___StaticFields {
};

struct Dictionary_2_System_Int32_Moon_CrossSceneDependency___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependency___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependency___VTable vtable;
};

struct CrossSceneDependencyInjector_ObjectReference__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CrossSceneDependencyInjector_ObjectReference__StaticFields {
};

struct CrossSceneDependencyInjector_ObjectReference__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CrossSceneDependencyInjector_ObjectReference__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CrossSceneDependencyInjector_ObjectReference__VTable vtable;
};

struct CrossSceneDependencyInjector_ObjectReference__Array__VTable {
};

struct CrossSceneDependencyInjector_ObjectReference__Array__StaticFields {
};

struct CrossSceneDependencyInjector_ObjectReference__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CrossSceneDependencyInjector_ObjectReference__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CrossSceneDependencyInjector_ObjectReference__Array__VTable vtable;
};

struct CrossSceneDependencyInjector__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CrossSceneDependencyInjector__StaticFields {
};

struct CrossSceneDependencyInjector__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CrossSceneDependencyInjector__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CrossSceneDependencyInjector__VTable vtable;
};

struct CrossSceneDependencyInjector__Array__VTable {
};

struct CrossSceneDependencyInjector__Array__StaticFields {
};

struct CrossSceneDependencyInjector__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CrossSceneDependencyInjector__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CrossSceneDependencyInjector__Array__VTable vtable;
};

struct IEnumerator_1_Moon_CrossSceneDependencyInjector___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_CrossSceneDependencyInjector___StaticFields {
};

struct IEnumerator_1_Moon_CrossSceneDependencyInjector___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_CrossSceneDependencyInjector___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_CrossSceneDependencyInjector___VTable vtable;
};

struct List_1_Moon_CrossSceneDependencyInjector___VTable {
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

struct List_1_Moon_CrossSceneDependencyInjector___StaticFields {
    struct CrossSceneDependencyInjector__Array *_emptyArray;
};

struct List_1_Moon_CrossSceneDependencyInjector___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_CrossSceneDependencyInjector___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_CrossSceneDependencyInjector___VTable vtable;
};

}
