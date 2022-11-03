namespace app {
    struct IEnumerator_1_System_WeakReference_1_ {
        struct IEnumerator_1_System_WeakReference_1___Class* klass;
        MonitorData* monitor;
    };

    struct EtwSession__Array {
        struct EtwSession__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EtwSession* vector[32];
    };

    struct __declspec(align(8)) List_1_System_Diagnostics_Tracing_EtwSession___Fields {
        struct EtwSession__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Diagnostics_Tracing_EtwSession_ {
        struct List_1_System_Diagnostics_Tracing_EtwSession___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Diagnostics_Tracing_EtwSession___Fields fields;
    };

    struct IEnumerator_1_System_Diagnostics_Tracing_EtwSession_ {
        struct IEnumerator_1_System_Diagnostics_Tracing_EtwSession___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) ActivityTracker__Fields {
        struct AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_* m_current;
        bool m_checkedForEnable;
    };

    struct ActivityTracker {
        struct ActivityTracker__Class* klass;
        MonitorData* monitor;
        struct ActivityTracker__Fields fields;
    };

    struct __declspec(align(8)) AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Fields {
        struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1* m_valueChangedHandler;
    };

    struct AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ {
        struct AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Class* klass;
        MonitorData* monitor;
        struct AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Fields fields;
    };

    struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1 {
        struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1__Class* klass;
        MonitorData* monitor;
        struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1__Fields fields;
    };

    struct AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ {
        struct ActivityTracker_ActivityInfo* _PreviousValue_k__BackingField;
        struct ActivityTracker_ActivityInfo* _CurrentValue_k__BackingField;
        bool _ThreadContextChanged_k__BackingField;
    };

    struct AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Boxed {
        struct AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Class* klass;
        MonitorData* monitor;
        struct AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ fields;
    };

    struct __declspec(align(8)) ActivityTracker_ActivityInfo__Fields {
        struct String* m_name;
        int64_t m_uniqueId;
        struct Guid m_guid;
        int32_t m_activityPathGuidOffset;
        int32_t m_level;
        EventActivityOptions__Enum m_eventOptions;

        int64_t m_lastChildID;
        int32_t m_stopped;
        struct ActivityTracker_ActivityInfo* m_creator;
        struct Guid m_activityIdToRestore;
    };

    struct ActivityTracker_ActivityInfo {
        struct ActivityTracker_ActivityInfo__Class* klass;
        MonitorData* monitor;
        struct ActivityTracker_ActivityInfo__Fields fields;
    };

    struct EventTags__Enum__VTable {
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

    struct EventTags__Enum__StaticFields {
    };

    struct EventTags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventTags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventTags__Enum__VTable vtable;
    };

    struct EventKeywords__Enum__VTable {
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

    struct EventKeywords__Enum__StaticFields {
    };

    struct EventKeywords__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventKeywords__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventKeywords__Enum__VTable vtable;
    };

    struct EventLevel__Enum__VTable {
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

    struct EventLevel__Enum__StaticFields {
    };

    struct EventLevel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventLevel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventLevel__Enum__VTable vtable;
    };

    struct EventOpcode__Enum__VTable {
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

    struct EventOpcode__Enum__StaticFields {
    };

    struct EventOpcode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventOpcode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventOpcode__Enum__VTable vtable;
    };

    struct TraceLoggingTypeInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData GetData;
    };

    struct TraceLoggingTypeInfo__StaticFields {
    };

    struct TraceLoggingTypeInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TraceLoggingTypeInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TraceLoggingTypeInfo__VTable vtable;
    };

    struct TraceLoggingTypeInfo__Array__VTable {
    };

    struct TraceLoggingTypeInfo__Array__StaticFields {
    };

    struct TraceLoggingTypeInfo__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TraceLoggingTypeInfo__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TraceLoggingTypeInfo__Array__VTable vtable;
    };

    struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___StaticFields {
    };

    struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_System_Diagnostics_Tracing_EventTags___VTable vtable;
    };

    struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
    };

    struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo___StaticFields {
    };

    struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentSetItem_2_System_Collections_Generic_KeyValuePair_2_NameInfo___VTable vtable;
    };

    struct NameInfo_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Compare;
        VirtualInvokeData Compare_1;
    };

    struct NameInfo_1__StaticFields {
        int32_t lastIdentity;
    };

    struct NameInfo_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NameInfo_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NameInfo_1__VTable vtable;
    };

    struct NameInfo_1__Array__VTable {
    };

    struct NameInfo_1__Array__StaticFields {
    };

    struct NameInfo_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NameInfo_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NameInfo_1__Array__VTable vtable;
    };

    struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___StaticFields {
    };

    struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentSet_2_System_Collections_Generic_KeyValuePair_2_NameInfo___VTable vtable;
    };

    struct TraceLoggingEventTypes__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TraceLoggingEventTypes__StaticFields {
    };

    struct TraceLoggingEventTypes__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TraceLoggingEventTypes__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TraceLoggingEventTypes__VTable vtable;
    };

    struct EventActivityOptions__Enum__VTable {
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

    struct EventActivityOptions__Enum__StaticFields {
    };

    struct EventActivityOptions__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventActivityOptions__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventActivityOptions__Enum__VTable vtable;
    };

    struct EventSource_EventMetadata__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EventSource_EventMetadata__StaticFields {
    };

    struct EventSource_EventMetadata__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventSource_EventMetadata__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventSource_EventMetadata__VTable vtable;
    };

    struct EventSource_EventMetadata__Array__VTable {
    };

    struct EventSource_EventMetadata__Array__StaticFields {
    };

    struct EventSource_EventMetadata__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventSource_EventMetadata__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventSource_EventMetadata__Array__VTable vtable;
    };

    struct EventCommand__Enum__VTable {
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

    struct EventCommand__Enum__StaticFields {
    };

    struct EventCommand__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventCommand__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventCommand__Enum__VTable vtable;
    };

    struct EventSourceCreatedEventArgs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EventSourceCreatedEventArgs__StaticFields {
    };

    struct EventSourceCreatedEventArgs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventSourceCreatedEventArgs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventSourceCreatedEventArgs__VTable vtable;
    };

    struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___VTable {
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

    struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___StaticFields {
    };

    struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventHandler_1_System_Diagnostics_Tracing_EventSourceCreatedEventArgs___VTable vtable;
    };

    struct ReadOnlyCollection_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
        VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData System_Collections_Generic_IList_T__Insert;
        VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData System_Collections_IList_Clear;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData System_Collections_IList_RemoveAt;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item;
        VirtualInvokeData get_Count_2;
    };

    struct ReadOnlyCollection_1_System_Object___StaticFields {
    };

    struct ReadOnlyCollection_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReadOnlyCollection_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReadOnlyCollection_1_System_Object___VTable vtable;
    };

    struct IList_1_System_String___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_System_String___StaticFields {
    };

    struct IList_1_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_System_String___VTable vtable;
    };

    struct ReadOnlyCollection_1_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
        VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData System_Collections_Generic_IList_T__Insert;
        VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData System_Collections_IList_Clear;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData System_Collections_IList_RemoveAt;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item;
        VirtualInvokeData get_Count_2;
    };

    struct ReadOnlyCollection_1_System_String___StaticFields {
    };

    struct ReadOnlyCollection_1_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReadOnlyCollection_1_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReadOnlyCollection_1_System_String___VTable vtable;
    };

    struct EventWrittenEventArgs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EventWrittenEventArgs__StaticFields {
    };

    struct EventWrittenEventArgs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventWrittenEventArgs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventWrittenEventArgs__VTable vtable;
    };

    struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs___VTable {
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

    struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs___StaticFields {
    };

    struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventHandler_1_System_Diagnostics_Tracing_EventWrittenEventArgs___VTable vtable;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___StaticFields {
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___VTable vtable;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Array__VTable {
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Array__StaticFields {
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Int32___Array__VTable vtable;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Int32___StaticFields {
    };

    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Int32___VTable vtable;
    };

    struct IEqualityComparer_1_System_Guid___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_System_Guid___StaticFields {
    };

    struct IEqualityComparer_1_System_Guid___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_System_Guid___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_System_Guid___VTable vtable;
    };

    struct ICollection_1_System_Guid___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_System_Guid___StaticFields {
    };

    struct ICollection_1_System_Guid___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_System_Guid___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_System_Guid___VTable vtable;
    };

    struct KeyValuePair_2_System_Guid_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_Guid_System_Int32___StaticFields {
    };

    struct KeyValuePair_2_System_Guid_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Guid_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Guid_System_Int32___VTable vtable;
    };

    struct KeyValuePair_2_System_Guid_System_Int32___Array__VTable {
    };

    struct KeyValuePair_2_System_Guid_System_Int32___Array__StaticFields {
    };

    struct KeyValuePair_2_System_Guid_System_Int32___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Guid_System_Int32___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Guid_System_Int32___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Guid_System_Int32___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Guid_System_Int32___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_Guid_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_Guid_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_Guid_System_Int32___VTable vtable;
    };

    struct IEnumerable_1_System_Guid___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_System_Guid___StaticFields {
    };

    struct IEnumerable_1_System_Guid___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_System_Guid___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_System_Guid___VTable vtable;
    };

    struct ConcurrentDictionary_2_System_Guid_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData get_Keys;
        VirtualInvokeData get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__Add;
        VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__Remove;
        VirtualInvokeData TryGetValue;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
        VirtualInvokeData Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
        VirtualInvokeData GetEnumerator;
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
    };

    struct ConcurrentDictionary_2_System_Guid_System_Int32___StaticFields {
        bool s_isValueWriteAtomic;
    };

    struct ConcurrentDictionary_2_System_Guid_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentDictionary_2_System_Guid_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentDictionary_2_System_Guid_System_Int32___VTable vtable;
    };

    struct Tuple_2_Guid_Int32___VTable {
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

    struct Tuple_2_Guid_Int32___StaticFields {
    };

    struct Tuple_2_Guid_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Tuple_2_Guid_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Tuple_2_Guid_Int32___VTable vtable;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___StaticFields {
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___VTable vtable;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Array__VTable {
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Array__StaticFields {
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Guid_System_Tuple_2___Array__VTable vtable;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Guid_System_Tuple_2___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

} // namespace app
