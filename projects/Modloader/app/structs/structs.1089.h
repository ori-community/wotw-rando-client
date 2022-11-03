namespace app {
    struct AudioPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
    };

    struct AudioPrewarmOperation {
        struct AudioPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct AudioPrewarmOperation__Fields fields;
    };

    struct AudioPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct AudioPrewarmOperation__StaticFields {
    };

    struct AudioPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioPrewarmOperation__VTable vtable;
    };

    struct ClearPoolingRefsPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        struct List_1_UberPoolGroupWarmer_* m_warmers;
        int32_t m_clearIndex;
    };

    struct ClearPoolingRefsPrewarmOperation {
        struct ClearPoolingRefsPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct ClearPoolingRefsPrewarmOperation__Fields fields;
    };

    struct __declspec(align(8)) List_1_UberPoolGroupWarmer___Fields {
        struct UberPoolGroupWarmer__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UberPoolGroupWarmer_ {
        struct List_1_UberPoolGroupWarmer___Class* klass;
        MonitorData* monitor;
        struct List_1_UberPoolGroupWarmer___Fields fields;
    };

    struct IEnumerator_1_UberPoolGroupWarmer_ {
        struct IEnumerator_1_UberPoolGroupWarmer___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_UberPoolGroupWarmer___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_UberPoolGroupWarmer___StaticFields {
    };

    struct IEnumerator_1_UberPoolGroupWarmer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_UberPoolGroupWarmer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_UberPoolGroupWarmer___VTable vtable;
    };

    struct List_1_UberPoolGroupWarmer___VTable {
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

    struct List_1_UberPoolGroupWarmer___StaticFields {
        struct UberPoolGroupWarmer__Array* _emptyArray;
    };

    struct List_1_UberPoolGroupWarmer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_UberPoolGroupWarmer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_UberPoolGroupWarmer___VTable vtable;
    };

    struct ClearPoolingRefsPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct ClearPoolingRefsPrewarmOperation__StaticFields {
    };

    struct ClearPoolingRefsPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ClearPoolingRefsPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ClearPoolingRefsPrewarmOperation__VTable vtable;
    };

    struct GameplaySystemsScenePreloadPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        struct AsyncOperation_1* m_gameplaySystemsLoadOperation;
        struct AsyncOperation_1* m_inGameUILoadOperation;
        struct AsyncOperation_1* m_worldMapLoadOperation;
        bool m_activated;
    };

    struct GameplaySystemsScenePreloadPrewarmOperation {
        struct GameplaySystemsScenePreloadPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct GameplaySystemsScenePreloadPrewarmOperation__Fields fields;
    };

    struct GameplaySystemsScenePreloadPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct GameplaySystemsScenePreloadPrewarmOperation__StaticFields {
        bool PreloadedGameplaySystems;
        struct GameplaySystemsScenePreloadPrewarmOperation* Instance;
    };

    struct GameplaySystemsScenePreloadPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameplaySystemsScenePreloadPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameplaySystemsScenePreloadPrewarmOperation__VTable vtable;
    };

    struct GCFinalizerTablePrewarm__Fields {
        struct BasePrewarmOperation__Fields _;
        bool m_startImmediately;
        int32_t m_itemCount;
        float m_lastGCAt;
        int32_t m_completedGCCount;
        int32_t m_completed;
        struct GCFinalizerTablePrewarm_ObjWithFinalizer__Array* m_objects;
    };

    struct GCFinalizerTablePrewarm {
        struct GCFinalizerTablePrewarm__Class* klass;
        MonitorData* monitor;
        struct GCFinalizerTablePrewarm__Fields fields;
    };

    struct __declspec(align(8)) GCFinalizerTablePrewarm_ObjWithFinalizer__Fields {
        struct GCFinalizerTablePrewarm* m_owner;
    };

    struct GCFinalizerTablePrewarm_ObjWithFinalizer {
        struct GCFinalizerTablePrewarm_ObjWithFinalizer__Class* klass;
        MonitorData* monitor;
        struct GCFinalizerTablePrewarm_ObjWithFinalizer__Fields fields;
    };

    struct GCFinalizerTablePrewarm_ObjWithFinalizer__Array {
        struct GCFinalizerTablePrewarm_ObjWithFinalizer__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GCFinalizerTablePrewarm_ObjWithFinalizer* vector[32];
    };

    struct GCFinalizerTablePrewarm_ObjWithFinalizer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GCFinalizerTablePrewarm_ObjWithFinalizer__StaticFields {
    };

    struct GCFinalizerTablePrewarm_ObjWithFinalizer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GCFinalizerTablePrewarm_ObjWithFinalizer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GCFinalizerTablePrewarm_ObjWithFinalizer__VTable vtable;
    };

    struct GCFinalizerTablePrewarm_ObjWithFinalizer__Array__VTable {
    };

    struct GCFinalizerTablePrewarm_ObjWithFinalizer__Array__StaticFields {
    };

    struct GCFinalizerTablePrewarm_ObjWithFinalizer__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GCFinalizerTablePrewarm_ObjWithFinalizer__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GCFinalizerTablePrewarm_ObjWithFinalizer__Array__VTable vtable;
    };

    struct GCFinalizerTablePrewarm__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct GCFinalizerTablePrewarm__StaticFields {
    };

    struct GCFinalizerTablePrewarm__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GCFinalizerTablePrewarm__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GCFinalizerTablePrewarm__VTable vtable;
    };

    struct GuessHFRPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        int32_t m_oldVsync;
        int32_t m_frameCount;
        int32_t m_counter;
        bool m_hfrSupported;
        float m_startTime;
    };

    struct GuessHFRPrewarmOperation {
        struct GuessHFRPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct GuessHFRPrewarmOperation__Fields fields;
    };

    struct GuessHFRPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct GuessHFRPrewarmOperation__StaticFields {
    };

    struct GuessHFRPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GuessHFRPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GuessHFRPrewarmOperation__VTable vtable;
    };

    struct IL2CPPPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        bool m_startImmediately;
        bool m_prewarmAllTypes;
        bool m_shouldGc;
    };

    struct IL2CPPPrewarmOperation {
        struct IL2CPPPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct IL2CPPPrewarmOperation__Fields fields;
    };

    struct IL2CPPPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct IL2CPPPrewarmOperation__StaticFields {
    };

    struct IL2CPPPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IL2CPPPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IL2CPPPrewarmOperation__VTable vtable;
    };

    struct __declspec(align(8)) BasePrewarmOperation_c_DisplayClass41_0__Fields {
        struct String* flag;
    };

    struct BasePrewarmOperation_c_DisplayClass41_0 {
        struct BasePrewarmOperation_c_DisplayClass41_0__Class* klass;
        MonitorData* monitor;
        struct BasePrewarmOperation_c_DisplayClass41_0__Fields fields;
    };

    struct BasePrewarmOperation_c_DisplayClass41_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BasePrewarmOperation_c_DisplayClass41_0__StaticFields {
    };

    struct BasePrewarmOperation_c_DisplayClass41_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BasePrewarmOperation_c_DisplayClass41_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BasePrewarmOperation_c_DisplayClass41_0__VTable vtable;
    };

    struct LoadIntroLogosPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        struct AsyncOperation_1* m_loadIntroOp;
    };

    struct LoadIntroLogosPrewarmOperation {
        struct LoadIntroLogosPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct LoadIntroLogosPrewarmOperation__Fields fields;
    };

    struct LoadIntroLogosPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct LoadIntroLogosPrewarmOperation__StaticFields {
    };

    struct LoadIntroLogosPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoadIntroLogosPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoadIntroLogosPrewarmOperation__VTable vtable;
    };

    struct ActivateIntroLogosPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        struct LoadIntroLogosPrewarmOperation* m_loadIntroOp;
    };

    struct ActivateIntroLogosPrewarmOperation {
        struct ActivateIntroLogosPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct ActivateIntroLogosPrewarmOperation__Fields fields;
    };

    struct ActivateIntroLogosPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct ActivateIntroLogosPrewarmOperation__StaticFields {
    };

    struct ActivateIntroLogosPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ActivateIntroLogosPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ActivateIntroLogosPrewarmOperation__VTable vtable;
    };

    struct LoadPoolingPrewarmInstancesOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        struct AsyncOperation_1* m_operation;
    };

    struct LoadPoolingPrewarmInstancesOperation {
        struct LoadPoolingPrewarmInstancesOperation__Class* klass;
        MonitorData* monitor;
        struct LoadPoolingPrewarmInstancesOperation__Fields fields;
    };

    struct LoadPoolingPrewarmInstancesOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct LoadPoolingPrewarmInstancesOperation__StaticFields {
    };

    struct LoadPoolingPrewarmInstancesOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoadPoolingPrewarmInstancesOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoadPoolingPrewarmInstancesOperation__VTable vtable;
    };

    struct LoadPoolingPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        struct AsyncOperation_1* m_operation;
        bool m_shouldUnload;
    };

    struct LoadPoolingPrewarmOperation {
        struct LoadPoolingPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct LoadPoolingPrewarmOperation__Fields fields;
    };

    struct LoadPoolingPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct LoadPoolingPrewarmOperation__StaticFields {
    };

    struct LoadPoolingPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LoadPoolingPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LoadPoolingPrewarmOperation__VTable vtable;
    };

    struct PoolingPrewarmInstancesOperation__Fields {
        struct BasePrewarmOperation__Fields _;
    };

    struct PoolingPrewarmInstancesOperation {
        struct PoolingPrewarmInstancesOperation__Class* klass;
        MonitorData* monitor;
        struct PoolingPrewarmInstancesOperation__Fields fields;
    };

    struct PoolingPrewarmInstancesOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct PoolingPrewarmInstancesOperation__StaticFields {
    };

    struct PoolingPrewarmInstancesOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PoolingPrewarmInstancesOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PoolingPrewarmInstancesOperation__VTable vtable;
    };

    struct PoolingPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
    };

    struct PoolingPrewarmOperation {
        struct PoolingPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct PoolingPrewarmOperation__Fields fields;
    };

    struct PoolingPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct PoolingPrewarmOperation__StaticFields {
    };

    struct PoolingPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PoolingPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PoolingPrewarmOperation__VTable vtable;
    };

    struct ResourcesLoadPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        int32_t m_step;
        int32_t m_numSteps;
    };

    struct ResourcesLoadPrewarmOperation {
        struct ResourcesLoadPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct ResourcesLoadPrewarmOperation__Fields fields;
    };

    struct ResourcesLoadPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct ResourcesLoadPrewarmOperation__StaticFields {
    };

    struct ResourcesLoadPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ResourcesLoadPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ResourcesLoadPrewarmOperation__VTable vtable;
    };

    struct ShaderPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        bool ShouldUnloadSceneWhenDone;
    };

    struct ShaderPrewarmOperation {
        struct ShaderPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct ShaderPrewarmOperation__Fields fields;
    };

    struct ShaderPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct ShaderPrewarmOperation__StaticFields {
    };

    struct ShaderPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShaderPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShaderPrewarmOperation__VTable vtable;
    };

    struct UnloadIntroLogosAndCleanUpPrewarmOperation__Fields {
        struct BasePrewarmOperation__Fields _;
    };

    struct UnloadIntroLogosAndCleanUpPrewarmOperation {
        struct UnloadIntroLogosAndCleanUpPrewarmOperation__Class* klass;
        MonitorData* monitor;
        struct UnloadIntroLogosAndCleanUpPrewarmOperation__Fields fields;
    };

    struct UnloadIntroLogosAndCleanUpPrewarmOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct UnloadIntroLogosAndCleanUpPrewarmOperation__StaticFields {
    };

    struct UnloadIntroLogosAndCleanUpPrewarmOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnloadIntroLogosAndCleanUpPrewarmOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnloadIntroLogosAndCleanUpPrewarmOperation__VTable vtable;
    };

    struct WaitForAttachOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        float m_timeAccum;
        float m_totalWait;
    };

    struct WaitForAttachOperation {
        struct WaitForAttachOperation__Class* klass;
        MonitorData* monitor;
        struct WaitForAttachOperation__Fields fields;
    };

    struct WaitForAttachOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct WaitForAttachOperation__StaticFields {
    };

    struct WaitForAttachOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaitForAttachOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaitForAttachOperation__VTable vtable;
    };

    struct WaitBeforeIntroLogosOperation__Fields {
        struct BasePrewarmOperation__Fields _;
        float m_timeAccum;
        float m_totalWait;
    };

    struct WaitBeforeIntroLogosOperation {
        struct WaitBeforeIntroLogosOperation__Class* klass;
        MonitorData* monitor;
        struct WaitBeforeIntroLogosOperation__Fields fields;
    };

    struct WaitBeforeIntroLogosOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_OperationType;
        VirtualInvokeData get_OperationSlot;
        VirtualInvokeData get_PrewarmOperationOrder;
        VirtualInvokeData get_ShouldExecute;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_IsDone;
        VirtualInvokeData get_HasBegun;
        VirtualInvokeData get_PercentDone;
        VirtualInvokeData get_TimeElapsed;
        VirtualInvokeData Begin;
        VirtualInvokeData Update;
        VirtualInvokeData FinishImmediately;
        VirtualInvokeData DebugDrawStatus;
        VirtualInvokeData get_TimeElapsed_1;
        VirtualInvokeData Begin_1;
        VirtualInvokeData Update_1;
        VirtualInvokeData FinishImmediately_1;
        VirtualInvokeData DebugDrawStatus_1;
    };

    struct WaitBeforeIntroLogosOperation__StaticFields {
    };

    struct WaitBeforeIntroLogosOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaitBeforeIntroLogosOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaitBeforeIntroLogosOperation__VTable vtable;
    };

    struct SimpleNPCEntity__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonAnimator* Animator;
        struct String* ActorName;
        float InteractionRadius;
        struct Vector2 InteractionOffset;
        struct MessageProvider* InteractionHintMessage;
        NPCAnchorConfiguration__Enum AnchorSetup;

        struct Vector2 PlayerAnchorLeft;
        struct Vector2 PlayerAnchorRight;
        bool CanInteract;
        struct InteractionGraph* InteractionGraph;
        struct MoonTimeline* ExitInteractionTimeline;
        struct CameraOffsetZone* InteractionCameraOffsetZone;
        int32_t m_finishInteractionTime;
        struct Sensor* m_sensor;
        bool m_shouldFinishInteraction;
        bool _IsInteracting_k__BackingField;
    };

} // namespace app
