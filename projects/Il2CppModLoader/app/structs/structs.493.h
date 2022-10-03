namespace app {
    struct TitleStoreUpdatedEventData {
        struct TitleStoreUpdatedEventData__Class* klass;
        MonitorData* monitor;
        struct TitleStoreUpdatedEventData__Fields fields;
    };

    struct TitleStoreUpdatedEventData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TitleStoreUpdatedEventData__StaticFields {
    };

    struct TitleStoreUpdatedEventData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TitleStoreUpdatedEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TitleStoreUpdatedEventData__VTable vtable;
    };

    struct TitleUpdatedTaskEventData__Fields {
        struct PlayStreamEventBase__Fields _;
        struct String* DeveloperId;
        bool HasRenamed;
        struct NameIdentifier* ScheduledTask;
        struct String* UserId;
    };

    struct TitleUpdatedTaskEventData {
        struct TitleUpdatedTaskEventData__Class* klass;
        MonitorData* monitor;
        struct TitleUpdatedTaskEventData__Fields fields;
    };

    struct TitleUpdatedTaskEventData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TitleUpdatedTaskEventData__StaticFields {
    };

    struct TitleUpdatedTaskEventData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TitleUpdatedTaskEventData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TitleUpdatedTaskEventData__VTable vtable;
    };

    struct __declspec(align(8)) PlayStreamEventHistory__Fields {
        struct String* ParentEventId;
        struct String* ParentTriggerId;
        bool TriggeredEvents;
    };

    struct PlayStreamEventHistory {
        struct PlayStreamEventHistory__Class* klass;
        MonitorData* monitor;
        struct PlayStreamEventHistory__Fields fields;
    };

    struct PlayStreamEventHistory__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayStreamEventHistory__StaticFields {
    };

    struct PlayStreamEventHistory__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayStreamEventHistory__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayStreamEventHistory__VTable vtable;
    };

    struct __declspec(align(8)) PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Fields {
        struct CancellationTokenSource* cts;
        struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_* input;
        struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_* output;
    };

    struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch_ {
        struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Class* klass;
        MonitorData* monitor;
        struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Fields fields;
    };

    struct EventBatchingStage__Fields {
        struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Fields _;
        int32_t _BatchSize_k__BackingField;
        struct TimeSpan _BatchFillTimeout_k__BackingField;
        struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_* batches;
        struct Stopwatch* stopwatch;
        struct ILogger_1* logger;
    };

    struct EventBatchingStage {
        struct EventBatchingStage__Class* klass;
        MonitorData* monitor;
        struct EventBatchingStage__Fields fields;
    };

    struct __declspec(align(8)) BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___Fields {
        struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest_* _collection;
        int32_t _boundedCapacity;
        struct SemaphoreSlim* _freeNodes;
        struct SemaphoreSlim* _occupiedNodes;
        bool _isDisposed;
        struct CancellationTokenSource* _consumersCancellationTokenSource;
        struct CancellationTokenSource* _producersCancellationTokenSource;
        int32_t _currentAdders;
    };

    struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
        struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___Fields fields;
    };

    struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___Fields {
        struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch_* _collection;
        int32_t _boundedCapacity;
        struct SemaphoreSlim* _freeNodes;
        struct SemaphoreSlim* _occupiedNodes;
        bool _isDisposed;
        struct CancellationTokenSource* _consumersCancellationTokenSource;
        struct CancellationTokenSource* _producersCancellationTokenSource;
        int32_t _currentAdders;
    };

    struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_ {
        struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___Class* klass;
        MonitorData* monitor;
        struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___Fields fields;
    };

    struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch_ {
        struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch_ {
        struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) TitleEventBatch__Fields {
        struct String* _TitleId_k__BackingField;
        struct List_1_PlayFab_IPlayFabEmitEventRequest_* _Events_k__BackingField;
    };

    struct TitleEventBatch {
        struct TitleEventBatch__Class* klass;
        MonitorData* monitor;
        struct TitleEventBatch__Fields fields;
    };

    struct __declspec(align(8)) List_1_PlayFab_IPlayFabEmitEventRequest___Fields {
        struct IPlayFabEmitEventRequest__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct List_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
        struct List_1_PlayFab_IPlayFabEmitEventRequest___Fields fields;
    };

    struct IPlayFabEmitEventRequest__Array {
        struct IPlayFabEmitEventRequest__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IPlayFabEmitEventRequest* vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct List_1_PlayFab_IPlayFabEmitEventRequest_* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields {
        struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields {
        struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Fields fields;
    };

    struct List_1_PlayFab_IPlayFabEmitEventRequest___Array {
        struct List_1_PlayFab_IPlayFabEmitEventRequest___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct List_1_PlayFab_IPlayFabEmitEventRequest_* vector[32];
    };

    struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct String* key;
        struct List_1_PlayFab_IPlayFabEmitEventRequest_* value;
    };

    struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Boxed {
        struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ fields;
    };

    struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array {
        struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest_ {
        struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class* klass;
        MonitorData* monitor;
    };

    struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___VTable {
        VirtualInvokeData TryAdd;
        VirtualInvokeData TryTake;
        VirtualInvokeData ToArray;
    };

    struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IProducerConsumerCollection_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___VTable {
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
        VirtualInvokeData Dispose;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData Dispose_1;
    };

    struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BlockingCollection_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___VTable {
        VirtualInvokeData TryAdd;
        VirtualInvokeData TryTake;
        VirtualInvokeData ToArray;
    };

    struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___StaticFields {
    };

    struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IProducerConsumerCollection_1_PlayFab_Pipeline_TitleEventBatch___VTable vtable;
    };

    struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___StaticFields {
    };

    struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_PlayFab_Pipeline_TitleEventBatch___VTable vtable;
    };

    struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___VTable {
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
        VirtualInvokeData Dispose;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData Dispose_1;
    };

    struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___StaticFields {
    };

    struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch___VTable vtable;
    };

    struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct IPlayFabEmitEventRequest__Array__VTable {
    };

    struct IPlayFabEmitEventRequest__Array__StaticFields {
    };

    struct IPlayFabEmitEventRequest__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IPlayFabEmitEventRequest__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IPlayFabEmitEventRequest__Array__VTable vtable;
    };

    struct List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
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

    struct List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
        struct IPlayFabEmitEventRequest__Array* _emptyArray;
    };

    struct List_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct TitleEventBatch__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TitleEventBatch__StaticFields {
    };

    struct TitleEventBatch__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TitleEventBatch__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TitleEventBatch__VTable vtable;
    };

    struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData RunStage;
        VirtualInvokeData InitStage;
        VirtualInvokeData RunStage_1;
        VirtualInvokeData GetInputConsumingEnumerable;
        VirtualInvokeData StoreOutput;
        VirtualInvokeData __unknown;
    };

    struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___StaticFields {
    };

    struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PipelineStageBase_2_PlayFab_IPlayFabEmitEventRequest_TitleEventBatch___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct List_1_PlayFab_IPlayFabEmitEventRequest___Array__VTable {
    };

    struct List_1_PlayFab_IPlayFabEmitEventRequest___Array__StaticFields {
    };

    struct List_1_PlayFab_IPlayFabEmitEventRequest___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_IPlayFabEmitEventRequest___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_IPlayFabEmitEventRequest___Array__VTable vtable;
    };

    struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct List_1_PlayFab_IPlayFabEmitEventRequest__1__VTable {
    };

    struct List_1_PlayFab_IPlayFabEmitEventRequest__1__StaticFields {
    };

    struct List_1_PlayFab_IPlayFabEmitEventRequest__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PlayFab_IPlayFabEmitEventRequest__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PlayFab_IPlayFabEmitEventRequest__1__VTable vtable;
    };

    struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__VTable {
    };

    struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__StaticFields {
    };

    struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable {
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

    struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields {
    };

    struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_String_List_1_PlayFab_IPlayFabEmitEventRequest___VTable vtable;
    };

    struct EventBatchingStage__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData RunStage;
        VirtualInvokeData InitStage;
        VirtualInvokeData RunStage_1;
        VirtualInvokeData GetInputConsumingEnumerable;
        VirtualInvokeData StoreOutput;
        VirtualInvokeData OnNextInputItem;
    };

    struct EventBatchingStage__StaticFields {
        struct TimeSpan DefaultBatchFillTimeout;
        int32_t EventAvailabilityCheckTimeoutInMs;
    };

    struct EventBatchingStage__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventBatchingStage__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventBatchingStage__VTable vtable;
    };

    struct __declspec(align(8)) EventBatchingStage_GetInputConsumingEnumerable_d_19__Fields {
        int32_t __1__state;
        struct IPlayFabEmitEventRequest* __2__current;
        int32_t __l__initialThreadId;
        struct EventBatchingStage* __4__this;
    };

    struct EventBatchingStage_GetInputConsumingEnumerable_d_19 {
        struct EventBatchingStage_GetInputConsumingEnumerable_d_19__Class* klass;
        MonitorData* monitor;
        struct EventBatchingStage_GetInputConsumingEnumerable_d_19__Fields fields;
    };

    struct EventBatchingStage_GetInputConsumingEnumerable_d_19__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_PlayFab_IPlayFabEmitEventRequest__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_PlayFab_IPlayFabEmitEventRequest__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct EventBatchingStage_GetInputConsumingEnumerable_d_19__StaticFields {
    };

    struct EventBatchingStage_GetInputConsumingEnumerable_d_19__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventBatchingStage_GetInputConsumingEnumerable_d_19__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventBatchingStage_GetInputConsumingEnumerable_d_19__VTable vtable;
    };

    struct __declspec(align(8)) PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Fields {
        struct CancellationTokenSource* cts;
        struct BlockingCollection_1_PlayFab_Pipeline_TitleEventBatch_* input;
        struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1_* output;
    };

    struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1_ {
        struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Class* klass;
        MonitorData* monitor;
        struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Fields fields;
    };

    struct EventSendingStage__Fields {
        struct PipelineStageBase_2_TitleEventBatch_PlayFab_SharedModels_PlayFabResult_1___Fields _;
        struct OneDSEventsAPI* oneDSEventsApi;
        struct ILogger_1* logger;
    };

    struct EventSendingStage {
        struct EventSendingStage__Class* klass;
        MonitorData* monitor;
        struct EventSendingStage__Fields fields;
    };

    struct __declspec(align(8)) BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1___Fields {
        struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1_* _collection;
        int32_t _boundedCapacity;
        struct SemaphoreSlim* _freeNodes;
        struct SemaphoreSlim* _occupiedNodes;
        bool _isDisposed;
        struct CancellationTokenSource* _consumersCancellationTokenSource;
        struct CancellationTokenSource* _producersCancellationTokenSource;
        int32_t _currentAdders;
    };

    struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1_ {
        struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1___Class* klass;
        MonitorData* monitor;
        struct BlockingCollection_1_PlayFab_SharedModels_PlayFabResult_1___Fields fields;
    };

    struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1_ {
        struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_PlayFab_SharedModels_PlayFabResult_1_ {
        struct IEnumerator_1_PlayFab_SharedModels_PlayFabResult_1___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_PlayFab_Pipeline_TitleEventBatch_ {
        struct IEnumerable_1_PlayFab_Pipeline_TitleEventBatch___Class* klass;
        MonitorData* monitor;
    };

    struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___VTable {
        VirtualInvokeData TryAdd;
        VirtualInvokeData TryTake;
        VirtualInvokeData ToArray;
    };

    struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields {
    };

    struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IProducerConsumerCollection_1_PlayFab_SharedModels_PlayFabResult_1___VTable vtable;
    };

    struct IEnumerator_1_PlayFab_SharedModels_PlayFabResult_1___VTable {
        VirtualInvokeData get_Current;
    };

} // namespace app
