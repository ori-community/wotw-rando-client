namespace app {
    struct ScenesManagerSettings {
        struct ScenesManagerSettings__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerSettings__Fields fields;
    };

    struct __declspec(align(8)) List_1_SceneManagerScene___Fields {
        struct SceneManagerScene__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SceneManagerScene_ {
        struct List_1_SceneManagerScene___Class* klass;
        MonitorData* monitor;
        struct List_1_SceneManagerScene___Fields fields;
    };

    struct SceneManagerScene__Array {
        struct SceneManagerScene__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SceneManagerScene* vector[32];
    };

    struct IEnumerator_1_SceneManagerScene_ {
        struct IEnumerator_1_SceneManagerScene___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_System_Tuple_2__3__Fields {
        struct Tuple_2_MoonGuid_Boolean___Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Tuple_2__3 {
        struct List_1_System_Tuple_2__3__Class* klass;
        MonitorData* monitor;
        struct List_1_System_Tuple_2__3__Fields fields;
    };

    struct __declspec(align(8)) Tuple_2_MoonGuid_Boolean___Fields {
        struct MoonGuid* m_Item1;
        bool m_Item2;
    };

    struct Tuple_2_MoonGuid_Boolean_ {
        struct Tuple_2_MoonGuid_Boolean___Class* klass;
        MonitorData* monitor;
        struct Tuple_2_MoonGuid_Boolean___Fields fields;
    };

    struct Tuple_2_MoonGuid_Boolean___Array {
        struct Tuple_2_MoonGuid_Boolean___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Tuple_2_MoonGuid_Boolean_* vector[32];
    };

    struct IEnumerator_1_System_Tuple_2__4 {
        struct IEnumerator_1_System_Tuple_2__4__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_RuntimeSceneMetaData___Fields {
        struct RuntimeSceneMetaData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_RuntimeSceneMetaData_ {
        struct List_1_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct List_1_RuntimeSceneMetaData___Fields fields;
    };

    struct IEnumerator_1_RuntimeSceneMetaData_ {
        struct IEnumerator_1_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) HashSet_1_RuntimeSceneMetaData___Fields {
        struct Int32__Array* _buckets;
        struct HashSet_1_T_Slot_RuntimeSceneMetaData___Array* _slots;
        int32_t _count;
        int32_t _lastIndex;
        int32_t _freeList;
        struct IEqualityComparer_1_RuntimeSceneMetaData_* _comparer;
        int32_t _version;
        struct SerializationInfo* _siInfo;
    };

    struct HashSet_1_RuntimeSceneMetaData_ {
        struct HashSet_1_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_RuntimeSceneMetaData___Fields fields;
    };

    struct HashSet_1_T_Slot_RuntimeSceneMetaData_ {
        int32_t hashCode;
        int32_t next;
        struct RuntimeSceneMetaData* value;
    };

    struct HashSet_1_T_Slot_RuntimeSceneMetaData___Boxed {
        struct HashSet_1_T_Slot_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_T_Slot_RuntimeSceneMetaData_ fields;
    };

    struct HashSet_1_T_Slot_RuntimeSceneMetaData___Array {
        struct HashSet_1_T_Slot_RuntimeSceneMetaData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HashSet_1_T_Slot_RuntimeSceneMetaData_ vector[32];
    };

    struct IEqualityComparer_1_RuntimeSceneMetaData_ {
        struct IEqualityComparer_1_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_RuntimeSceneMetaData_ {
        struct IEnumerable_1_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_MoonGuid_RuntimeSceneMetaData___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_RuntimeSceneMetaData___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_MoonGuid_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_RuntimeSceneMetaData_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_RuntimeSceneMetaData_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_MoonGuid_RuntimeSceneMetaData_ {
        struct Dictionary_2_MoonGuid_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_MoonGuid_RuntimeSceneMetaData___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_RuntimeSceneMetaData_ {
        int32_t hashCode;
        int32_t next;
        struct MoonGuid* key;
        struct RuntimeSceneMetaData* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_RuntimeSceneMetaData___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_RuntimeSceneMetaData_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_RuntimeSceneMetaData___Array {
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_RuntimeSceneMetaData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_RuntimeSceneMetaData_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_RuntimeSceneMetaData___Fields {
        struct Dictionary_2_MoonGuid_RuntimeSceneMetaData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_RuntimeSceneMetaData_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_RuntimeSceneMetaData___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_RuntimeSceneMetaData___Fields {
        struct Dictionary_2_MoonGuid_RuntimeSceneMetaData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_RuntimeSceneMetaData_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_RuntimeSceneMetaData___Fields fields;
    };

    struct ICollection_1_RuntimeSceneMetaData_ {
        struct ICollection_1_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_MoonGuid_RuntimeSceneMetaData_ {
        struct MoonGuid* key;
        struct RuntimeSceneMetaData* value;
    };

    struct KeyValuePair_2_MoonGuid_RuntimeSceneMetaData___Boxed {
        struct KeyValuePair_2_MoonGuid_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_MoonGuid_RuntimeSceneMetaData_ fields;
    };

    struct KeyValuePair_2_MoonGuid_RuntimeSceneMetaData___Array {
        struct KeyValuePair_2_MoonGuid_RuntimeSceneMetaData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_MoonGuid_RuntimeSceneMetaData_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_MoonGuid_RuntimeSceneMetaData_ {
        struct IEnumerator_1_KeyValuePair_2_MoonGuid_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_RuntimeSceneMetaData___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_RuntimeSceneMetaData___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RuntimeSceneMetaData_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RuntimeSceneMetaData_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_RuntimeSceneMetaData_ {
        struct Dictionary_2_System_Int32_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_RuntimeSceneMetaData___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_RuntimeSceneMetaData_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct RuntimeSceneMetaData* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_RuntimeSceneMetaData___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_RuntimeSceneMetaData_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_RuntimeSceneMetaData___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_RuntimeSceneMetaData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_RuntimeSceneMetaData_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RuntimeSceneMetaData___Fields {
        struct Dictionary_2_System_Int32_RuntimeSceneMetaData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RuntimeSceneMetaData_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_RuntimeSceneMetaData___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RuntimeSceneMetaData___Fields {
        struct Dictionary_2_System_Int32_RuntimeSceneMetaData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RuntimeSceneMetaData_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_RuntimeSceneMetaData___Fields fields;
    };

    struct KeyValuePair_2_System_Int32_RuntimeSceneMetaData_ {
        int32_t key;
        struct RuntimeSceneMetaData* value;
    };

    struct KeyValuePair_2_System_Int32_RuntimeSceneMetaData___Boxed {
        struct KeyValuePair_2_System_Int32_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_RuntimeSceneMetaData_ fields;
    };

    struct KeyValuePair_2_System_Int32_RuntimeSceneMetaData___Array {
        struct KeyValuePair_2_System_Int32_RuntimeSceneMetaData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_RuntimeSceneMetaData_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_RuntimeSceneMetaData_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_RuntimeSceneMetaData___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) ScenesManagerContext__Fields {
        struct ScenesManager* Manager;
    };

    struct ScenesManagerContext {
        struct ScenesManagerContext__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerContext__Fields fields;
    };

    struct __declspec(align(8)) SceneLoadingQueue__Fields {
        struct List_1_SceneLoadingQueue_QueueSceneToLoad_* m_queuedScenesToLoad;
        struct SceneLoadingQueue_QueueListComparer* m_queueComparer;
        int32_t MinScenesInQueue;
        float QueuePurgeTime;
        int32_t MaxUtilityToLoad;
    };

    struct SceneLoadingQueue {
        struct SceneLoadingQueue__Class* klass;
        MonitorData* monitor;
        struct SceneLoadingQueue__Fields fields;
    };

    struct __declspec(align(8)) List_1_SceneLoadingQueue_QueueSceneToLoad___Fields {
        struct SceneLoadingQueue_QueueSceneToLoad__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SceneLoadingQueue_QueueSceneToLoad_ {
        struct List_1_SceneLoadingQueue_QueueSceneToLoad___Class* klass;
        MonitorData* monitor;
        struct List_1_SceneLoadingQueue_QueueSceneToLoad___Fields fields;
    };

    struct SceneLoadingQueue_QueueSceneToLoad {
        struct RuntimeSceneMetaData* Data;
        struct List_1_MoonGuid_* IncludedScenes;
        float AddTime;
        bool PreventUnloading;
    };

    struct SceneLoadingQueue_QueueSceneToLoad__Boxed {
        struct SceneLoadingQueue_QueueSceneToLoad__Class* klass;
        MonitorData* monitor;
        struct SceneLoadingQueue_QueueSceneToLoad fields;
    };

    struct SceneLoadingQueue_QueueSceneToLoad__Array {
        struct SceneLoadingQueue_QueueSceneToLoad__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SceneLoadingQueue_QueueSceneToLoad vector[32];
    };

    struct IEnumerator_1_SceneLoadingQueue_QueueSceneToLoad_ {
        struct IEnumerator_1_SceneLoadingQueue_QueueSceneToLoad___Class* klass;
        MonitorData* monitor;
    };

    struct SceneLoadingQueue_QueueListComparer {
        struct SceneLoadingQueue_QueueListComparer__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_MoonGuid_List_1_MoonGuid___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_List_1_MoonGuid___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_MoonGuid_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_List_1_MoonGuid_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_List_1_MoonGuid_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_MoonGuid_List_1_MoonGuid_ {
        struct Dictionary_2_MoonGuid_List_1_MoonGuid___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_MoonGuid_List_1_MoonGuid___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_List_1_MoonGuid_ {
        int32_t hashCode;
        int32_t next;
        struct MoonGuid* key;
        struct List_1_MoonGuid_* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_List_1_MoonGuid___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_List_1_MoonGuid___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_List_1_MoonGuid_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_List_1_MoonGuid___Array {
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_List_1_MoonGuid___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_MoonGuid_List_1_MoonGuid_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_List_1_MoonGuid___Fields {
        struct Dictionary_2_MoonGuid_List_1_MoonGuid_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_List_1_MoonGuid_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_List_1_MoonGuid___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_List_1_MoonGuid___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_List_1_MoonGuid___Fields {
        struct Dictionary_2_MoonGuid_List_1_MoonGuid_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_List_1_MoonGuid_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_List_1_MoonGuid___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_List_1_MoonGuid___Fields fields;
    };

    struct List_1_MoonGuid___Array {
        struct List_1_MoonGuid___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct List_1_MoonGuid_* vector[32];
    };

    struct IEnumerator_1_List_1_MoonGuid_ {
        struct IEnumerator_1_List_1_MoonGuid___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_List_1_MoonGuid_ {
        struct ICollection_1_List_1_MoonGuid___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_MoonGuid_List_1_MoonGuid_ {
        struct MoonGuid* key;
        struct List_1_MoonGuid_* value;
    };

    struct KeyValuePair_2_MoonGuid_List_1_MoonGuid___Boxed {
        struct KeyValuePair_2_MoonGuid_List_1_MoonGuid___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_MoonGuid_List_1_MoonGuid_ fields;
    };

    struct KeyValuePair_2_MoonGuid_List_1_MoonGuid___Array {
        struct KeyValuePair_2_MoonGuid_List_1_MoonGuid___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_MoonGuid_List_1_MoonGuid_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_MoonGuid_List_1_MoonGuid_ {
        struct IEnumerator_1_KeyValuePair_2_MoonGuid_List_1_MoonGuid___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_List_1_MoonGuid_ {
        struct IEnumerable_1_List_1_MoonGuid___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_System_Tuple_2__4__Fields {
        struct Tuple_2_SceneManagerScene_SceneState___Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Tuple_2__4 {
        struct List_1_System_Tuple_2__4__Class* klass;
        MonitorData* monitor;
        struct List_1_System_Tuple_2__4__Fields fields;
    };

    struct __declspec(align(8)) Tuple_2_SceneManagerScene_SceneState___Fields {
        struct SceneManagerScene* m_Item1;
        SceneState__Enum m_Item2;
    };

    struct Tuple_2_SceneManagerScene_SceneState_ {
        struct Tuple_2_SceneManagerScene_SceneState___Class* klass;
        MonitorData* monitor;
        struct Tuple_2_SceneManagerScene_SceneState___Fields fields;
    };

    struct Tuple_2_SceneManagerScene_SceneState___Array {
        struct Tuple_2_SceneManagerScene_SceneState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Tuple_2_SceneManagerScene_SceneState_* vector[32];
    };

    struct IEnumerator_1_System_Tuple_2__5 {
        struct IEnumerator_1_System_Tuple_2__5__Class* klass;
        MonitorData* monitor;
    };

    struct GoToSceneController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GoToSceneController__StaticFields {
        struct GoToSceneController* Instance;
    };

    struct GoToSceneController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GoToSceneController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GoToSceneController__VTable vtable;
    };

    struct SceneResourcesUnloadSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneResourcesUnloadSystem__StaticFields {
        ResoucesUnloadingMode__Enum m_mode;
    };

    struct SceneResourcesUnloadSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneResourcesUnloadSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneResourcesUnloadSystem__VTable vtable;
    };

    struct IScenesManagerBehaviour__VTable {
        VirtualInvokeData Initialize;
        VirtualInvokeData Update;
        VirtualInvokeData SetTargetPosition;
        VirtualInvokeData Reset;
        VirtualInvokeData FindScenesToUnload;
        VirtualInvokeData FindUneededScenesToUnload;
        VirtualInvokeData get_SceneOperationsEnable;
        VirtualInvokeData get_SceneOperationsLoad;
        VirtualInvokeData get_SceneOperationsUnload;
        VirtualInvokeData get_PredictedTargetPosition;
        VirtualInvokeData get_CurrentUpdateType;
    };

    struct IScenesManagerBehaviour__StaticFields {
    };

    struct IScenesManagerBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IScenesManagerBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IScenesManagerBehaviour__VTable vtable;
    };

    struct IScenesManagerBehaviour__Array__VTable {
    };

    struct IScenesManagerBehaviour__Array__StaticFields {
    };

    struct IScenesManagerBehaviour__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IScenesManagerBehaviour__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IScenesManagerBehaviour__Array__VTable vtable;
    };

    struct SceneLoadingQueuePriorityMode__Enum__VTable {
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

    struct SceneLoadingQueuePriorityMode__Enum__StaticFields {
    };

    struct SceneLoadingQueuePriorityMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneLoadingQueuePriorityMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneLoadingQueuePriorityMode__Enum__VTable vtable;
    };

    struct ScenesManagerSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ScenesManagerSettings__StaticFields {
        bool UnreadyEnabledScenes;
        bool DontReadyScenesIfTheyreNotAlreadyEnabled;
        bool HideEnabledScenes;
        int32_t DefaultUnloadJobPriority;
        int32_t InstantUnloadJobPriority;
        int32_t LoadJobPriority;
        bool BumpUnloadPriorityOnInstantUnloads;
        bool FilterSceneSoundBanks;
    };

    struct ScenesManagerSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerSettings__VTable vtable;
    };

    struct SceneManagerScene__Array__VTable {
    };

    struct SceneManagerScene__Array__StaticFields {
    };

    struct SceneManagerScene__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneManagerScene__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneManagerScene__Array__VTable vtable;
    };

    struct IEnumerator_1_SceneManagerScene___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_SceneManagerScene___StaticFields {
    };

    struct IEnumerator_1_SceneManagerScene___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_SceneManagerScene___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_SceneManagerScene___VTable vtable;
    };

    struct List_1_SceneManagerScene___VTable {
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

    struct List_1_SceneManagerScene___StaticFields {
        struct SceneManagerScene__Array* _emptyArray;
    };

    struct List_1_SceneManagerScene___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_SceneManagerScene___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_SceneManagerScene___VTable vtable;
    };

    struct Tuple_2_MoonGuid_Boolean___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
        VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
        VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
        VirtualInvokeData System_IComparable_CompareTo;
        VirtualInvokeData System_ITupleInternal_ToString;
    };

    struct Tuple_2_MoonGuid_Boolean___StaticFields {
    };

    struct Tuple_2_MoonGuid_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Tuple_2_MoonGuid_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Tuple_2_MoonGuid_Boolean___VTable vtable;
    };

    struct Tuple_2_MoonGuid_Boolean___Array__VTable {
    };

    struct Tuple_2_MoonGuid_Boolean___Array__StaticFields {
    };

    struct Tuple_2_MoonGuid_Boolean___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Tuple_2_MoonGuid_Boolean___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Tuple_2_MoonGuid_Boolean___Array__VTable vtable;
    };

    struct IEnumerator_1_System_Tuple_2__4__VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_Tuple_2__4__StaticFields {
    };

    struct IEnumerator_1_System_Tuple_2__4__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_Tuple_2__4__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_Tuple_2__4__VTable vtable;
    };

    struct List_1_System_Tuple_2__3__VTable {
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

    struct List_1_System_Tuple_2__3__StaticFields {
        struct Tuple_2_MoonGuid_Boolean___Array* _emptyArray;
    };

    struct List_1_System_Tuple_2__3__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_System_Tuple_2__3__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_System_Tuple_2__3__VTable vtable;
    };

    struct IEnumerator_1_RuntimeSceneMetaData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_RuntimeSceneMetaData___StaticFields {
    };

    struct IEnumerator_1_RuntimeSceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_RuntimeSceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_RuntimeSceneMetaData___VTable vtable;
    };

    struct List_1_RuntimeSceneMetaData___VTable {
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

    struct List_1_RuntimeSceneMetaData___StaticFields {
        struct RuntimeSceneMetaData__Array* _emptyArray;
    };

    struct List_1_RuntimeSceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_RuntimeSceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_RuntimeSceneMetaData___VTable vtable;
    };

    struct HashSet_1_T_Slot_RuntimeSceneMetaData___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HashSet_1_T_Slot_RuntimeSceneMetaData___StaticFields {
    };

    struct HashSet_1_T_Slot_RuntimeSceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashSet_1_T_Slot_RuntimeSceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HashSet_1_T_Slot_RuntimeSceneMetaData___VTable vtable;
    };

    struct HashSet_1_T_Slot_RuntimeSceneMetaData___Array__VTable {
    };

    struct HashSet_1_T_Slot_RuntimeSceneMetaData___Array__StaticFields {
    };

    struct HashSet_1_T_Slot_RuntimeSceneMetaData___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashSet_1_T_Slot_RuntimeSceneMetaData___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HashSet_1_T_Slot_RuntimeSceneMetaData___Array__VTable vtable;
    };

    struct IEqualityComparer_1_RuntimeSceneMetaData___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_RuntimeSceneMetaData___StaticFields {
    };

    struct IEqualityComparer_1_RuntimeSceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_RuntimeSceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_RuntimeSceneMetaData___VTable vtable;
    };

    struct IEnumerable_1_RuntimeSceneMetaData___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_RuntimeSceneMetaData___StaticFields {
    };

    struct IEnumerable_1_RuntimeSceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_RuntimeSceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_RuntimeSceneMetaData___VTable vtable;
    };

    struct HashSet_1_RuntimeSceneMetaData___VTable {
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

} // namespace app
