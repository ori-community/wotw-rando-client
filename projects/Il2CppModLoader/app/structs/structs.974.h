namespace app {
    struct ConcurrentQueue_1_System_String_ {
        struct ConcurrentQueue_1_System_String___Class* klass;
        MonitorData* monitor;
        struct ConcurrentQueue_1_System_String___Fields fields;
    };

    struct PaddedHeadAndTail {
        int32_t Head;
        int32_t Tail;
    };

    struct PaddedHeadAndTail__Boxed {
        struct PaddedHeadAndTail__Class* klass;
        MonitorData* monitor;
        struct PaddedHeadAndTail fields;
    };

    struct __declspec(align(8)) ConcurrentQueue_1_T_Segment_System_String___Fields {
        struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array* _slots;
        int32_t _slotsMask;
        struct PaddedHeadAndTail _headAndTail;
        bool _preservedForObservation;
        bool _frozenForEnqueues;
        struct ConcurrentQueue_1_T_Segment_System_String_* _nextSegment;
    };

    struct ConcurrentQueue_1_T_Segment_System_String_ {
        struct ConcurrentQueue_1_T_Segment_System_String___Class* klass;
        MonitorData* monitor;
        struct ConcurrentQueue_1_T_Segment_System_String___Fields fields;
    };

    struct ConcurrentQueue_1_T_Segment_T_Slot_System_String_ {
        struct String* Item;
        int32_t SequenceNumber;
    };

    struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Boxed {
        struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Class* klass;
        MonitorData* monitor;
        struct ConcurrentQueue_1_T_Segment_T_Slot_System_String_ fields;
    };

    struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array {
        struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ConcurrentQueue_1_T_Segment_T_Slot_System_String_ vector[32];
    };

    enum class ConsoleConnection_State__Enum : int32_t {
        Disconnected = 0x00000000,
        Connecting = 0x00000001,
        Ready = 0x00000002,
        Receiving = 0x00000003,
        Pinging = 0x00000004,
    };

    struct ConsoleConnection_State__Enum__Boxed {
        struct ConsoleConnection_State__Enum__Class* klass;
        MonitorData* monitor;
        ConsoleConnection_State__Enum value;
    };

    struct __declspec(align(8)) ConsoleConnection__Fields {
        bool Received;
        struct TcpListener* m_server;
        struct TcpClient* m_client;
        struct NetworkStream* m_stream;
        float m_currentStateTime;
        bool m_connected;
        struct Thread* m_connectThread;
        struct Thread* m_fileThread;
        float m_replayDuration;
        struct String* m_replayPath;
        bool m_takeScreenshot;
        struct String* m_screenshotPath;
        struct String* m_ip;
        bool m_receiveFiles;
        ConsoleConnection_State__Enum m_state;
    };

    struct ConsoleConnection {
        struct ConsoleConnection__Class* klass;
        MonitorData* monitor;
        struct ConsoleConnection__Fields fields;
    };

    struct Button__Array__VTable {
    };

    struct Button__Array__StaticFields {
    };

    struct Button__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Button__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Button__Array__VTable vtable;
    };

    struct IEnumerator_1_UnityEngine_UI_Button___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_UnityEngine_UI_Button___StaticFields {
    };

    struct IEnumerator_1_UnityEngine_UI_Button___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_UnityEngine_UI_Button___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_UnityEngine_UI_Button___VTable vtable;
    };

    struct List_1_UnityEngine_UI_Button___VTable {
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

    struct List_1_UnityEngine_UI_Button___StaticFields {
        struct Button__Array* _emptyArray;
    };

    struct List_1_UnityEngine_UI_Button___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_UnityEngine_UI_Button___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_UnityEngine_UI_Button___VTable vtable;
    };

    struct VideoProgressBar__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnDrag;
        VirtualInvokeData OnPointerDown;
    };

    struct VideoProgressBar__StaticFields {
    };

    struct VideoProgressBar__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VideoProgressBar__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VideoProgressBar__VTable vtable;
    };

    struct VideoTrimMarker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnDrag;
        VirtualInvokeData OnPointerUp;
        VirtualInvokeData OnPointerDown;
    };

    struct VideoTrimMarker__StaticFields {
    };

    struct VideoTrimMarker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VideoTrimMarker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VideoTrimMarker__VTable vtable;
    };

    struct VideoEditor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VideoEditor__StaticFields {
    };

    struct VideoEditor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VideoEditor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VideoEditor__VTable vtable;
    };

    struct List_1_System_Byte__1__Array__VTable {
    };

    struct List_1_System_Byte__1__Array__StaticFields {
    };

    struct List_1_System_Byte__1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_System_Byte__1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_System_Byte__1__Array__VTable vtable;
    };

    struct IEnumerator_1_List_1_System_Byte__1__VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_List_1_System_Byte__1__StaticFields {
    };

    struct IEnumerator_1_List_1_System_Byte__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_List_1_System_Byte__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_List_1_System_Byte__1__VTable vtable;
    };

    struct Queue_1_List_1_System_Byte___VTable {
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

    struct Queue_1_List_1_System_Byte___StaticFields {
    };

    struct Queue_1_List_1_System_Byte___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Queue_1_List_1_System_Byte___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Queue_1_List_1_System_Byte___VTable vtable;
    };

    struct BugReporter_BugReport__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BugReporter_BugReport__StaticFields {
    };

    struct BugReporter_BugReport__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BugReporter_BugReport__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BugReporter_BugReport__VTable vtable;
    };

    struct BugReporter_Attachment__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BugReporter_Attachment__StaticFields {
    };

    struct BugReporter_Attachment__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BugReporter_Attachment__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BugReporter_Attachment__VTable vtable;
    };

    struct BugReporter_Attachment__Array__VTable {
    };

    struct BugReporter_Attachment__Array__StaticFields {
    };

    struct BugReporter_Attachment__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BugReporter_Attachment__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BugReporter_Attachment__Array__VTable vtable;
    };

    struct IEnumerator_1_BugReporter_Attachment___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_BugReporter_Attachment___StaticFields {
    };

    struct IEnumerator_1_BugReporter_Attachment___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_BugReporter_Attachment___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_BugReporter_Attachment___VTable vtable;
    };

    struct List_1_BugReporter_Attachment___VTable {
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

    struct List_1_BugReporter_Attachment___StaticFields {
        struct BugReporter_Attachment__Array* _emptyArray;
    };

    struct List_1_BugReporter_Attachment___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_BugReporter_Attachment___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_BugReporter_Attachment___VTable vtable;
    };

    struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___StaticFields {
    };

    struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___VTable vtable;
    };

    struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__VTable {
    };

    struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__StaticFields {
    };

    struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentQueue_1_T_Segment_T_Slot_System_String___Array__VTable vtable;
    };

    struct PaddedHeadAndTail__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PaddedHeadAndTail__StaticFields {
    };

    struct PaddedHeadAndTail__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PaddedHeadAndTail__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PaddedHeadAndTail__VTable vtable;
    };

    struct ConcurrentQueue_1_T_Segment_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConcurrentQueue_1_T_Segment_System_String___StaticFields {
    };

    struct ConcurrentQueue_1_T_Segment_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentQueue_1_T_Segment_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentQueue_1_T_Segment_System_String___VTable vtable;
    };

    struct ConcurrentQueue_1_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd;
        VirtualInvokeData System_Collections_Concurrent_IProducerConsumerCollection_T__TryTake;
        VirtualInvokeData ToArray;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData CopyTo;
    };

    struct ConcurrentQueue_1_System_String___StaticFields {
    };

    struct ConcurrentQueue_1_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConcurrentQueue_1_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConcurrentQueue_1_System_String___VTable vtable;
    };

    struct ConsoleConnection_State__Enum__VTable {
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

    struct ConsoleConnection_State__Enum__StaticFields {
    };

    struct ConsoleConnection_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConsoleConnection_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConsoleConnection_State__Enum__VTable vtable;
    };

    struct ConsoleConnection__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConsoleConnection__StaticFields {
    };

    struct ConsoleConnection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConsoleConnection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConsoleConnection__VTable vtable;
    };

    struct BugReporter_State__Enum__VTable {
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

    struct BugReporter_State__Enum__StaticFields {
    };

    struct BugReporter_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BugReporter_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BugReporter_State__Enum__VTable vtable;
    };

    struct BugReporter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BugReporter__StaticFields {
        struct BugReporter* Instance;
        struct HashSet_1_Moon_ISuspendable_* SuspendablesToIgnoreForGameplay;
        struct ConcurrentQueue_1_System_String_* s_screenshotQueue;
    };

    struct BugReporter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BugReporter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BugReporter__VTable vtable;
    };

    struct BugReporter_c {
        struct BugReporter_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_System_IO_FileInfo_DateTime___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_IO_FileInfo_DateTime_ {
        struct Func_2_System_IO_FileInfo_DateTime___Class* klass;
        MonitorData* monitor;
        struct Func_2_System_IO_FileInfo_DateTime___Fields fields;
    };

    struct Func_2_System_IO_FileInfo_DateTime___VTable {
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

    struct Func_2_System_IO_FileInfo_DateTime___StaticFields {
    };

    struct Func_2_System_IO_FileInfo_DateTime___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_IO_FileInfo_DateTime___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_IO_FileInfo_DateTime___VTable vtable;
    };

    struct BugReporter_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BugReporter_c__StaticFields {
        struct BugReporter_c* __9;
        struct Func_2_System_IO_FileInfo_DateTime_* __9__124_0;
    };

    struct BugReporter_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BugReporter_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BugReporter_c__VTable vtable;
    };

    struct __declspec(align(8)) BugReporter_RecordScreenshot_d_129__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct String* path;
    };

    struct BugReporter_RecordScreenshot_d_129 {
        struct BugReporter_RecordScreenshot_d_129__Class* klass;
        MonitorData* monitor;
        struct BugReporter_RecordScreenshot_d_129__Fields fields;
    };

    struct BugReporter_RecordScreenshot_d_129__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct BugReporter_RecordScreenshot_d_129__StaticFields {
    };

    struct BugReporter_RecordScreenshot_d_129__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BugReporter_RecordScreenshot_d_129__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BugReporter_RecordScreenshot_d_129__VTable vtable;
    };

    enum class AutomationRunType__Enum : int32_t {
        Performance = 0x00000000,
        Stress = 0x00000001,
        Exception = 0x00000002,
        PoolPerformance = 0x00000003,
        SceneLoad = 0x00000004,
    };

    struct AutomationRunType__Enum__Boxed {
        struct AutomationRunType__Enum__Class* klass;
        MonitorData* monitor;
        AutomationRunType__Enum value;
    };

    struct __declspec(align(8)) AutomationRunWrapper__Fields {
        AutomationRunType__Enum m_type;

        double m_previousRealTimeSinceStartup;
        double m_runtime;
        bool m_hasStarted;
    };

    struct AutomationRunWrapper {
        struct AutomationRunWrapper__Class* klass;
        MonitorData* monitor;
        struct AutomationRunWrapper__Fields fields;
    };

    struct AutomationRunType__Enum__VTable {
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

    struct AutomationRunType__Enum__StaticFields {
    };

    struct AutomationRunType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AutomationRunType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AutomationRunType__Enum__VTable vtable;
    };

    struct AutomationRunWrapper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AutomationRunWrapper__StaticFields {
    };

    struct AutomationRunWrapper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AutomationRunWrapper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AutomationRunWrapper__VTable vtable;
    };

    struct __declspec(align(8)) JUnitReporter_TestSuites__Fields {
        struct String* m_id;
        struct String* m_name;
        struct TimeSpan m_duration;
        struct List_1_JUnitReporter_TestSuite_* m_testSuites;
        int32_t m_numberOfTestSuitesWritten;
        int32_t m_numberOfTestCasesWrittenToOutput;
    };

    struct JUnitReporter_TestSuites {
        struct JUnitReporter_TestSuites__Class* klass;
        MonitorData* monitor;
        struct JUnitReporter_TestSuites__Fields fields;
    };

    struct __declspec(align(8)) List_1_JUnitReporter_TestSuite___Fields {
        struct JUnitReporter_TestSuite__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_JUnitReporter_TestSuite_ {
        struct List_1_JUnitReporter_TestSuite___Class* klass;
        MonitorData* monitor;
        struct List_1_JUnitReporter_TestSuite___Fields fields;
    };

    struct JUnitReporter_TestSuite__Array {
        struct JUnitReporter_TestSuite__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct JUnitReporter_TestSuite* vector[32];
    };

    struct IEnumerator_1_JUnitReporter_TestSuite_ {
        struct IEnumerator_1_JUnitReporter_TestSuite___Class* klass;
        MonitorData* monitor;
    };

    struct JUnitReporter_TestSuite__Array__VTable {
    };

    struct JUnitReporter_TestSuite__Array__StaticFields {
    };

    struct JUnitReporter_TestSuite__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JUnitReporter_TestSuite__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JUnitReporter_TestSuite__Array__VTable vtable;
    };

    struct IEnumerator_1_JUnitReporter_TestSuite___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_JUnitReporter_TestSuite___StaticFields {
    };

    struct IEnumerator_1_JUnitReporter_TestSuite___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_JUnitReporter_TestSuite___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_JUnitReporter_TestSuite___VTable vtable;
    };

    struct List_1_JUnitReporter_TestSuite___VTable {
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

    struct List_1_JUnitReporter_TestSuite___StaticFields {
        struct JUnitReporter_TestSuite__Array* _emptyArray;
    };

    struct List_1_JUnitReporter_TestSuite___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_JUnitReporter_TestSuite___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_JUnitReporter_TestSuite___VTable vtable;
    };

    struct JUnitReporter_TestSuites__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JUnitReporter_TestSuites__StaticFields {
    };

    struct JUnitReporter_TestSuites__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JUnitReporter_TestSuites__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JUnitReporter_TestSuites__VTable vtable;
    };

    struct JUnitReporter_TestSuites_c {
        struct JUnitReporter_TestSuites_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_JUnitReporter_TestSuite_Int32___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_JUnitReporter_TestSuite_Int32_ {
        struct Func_2_JUnitReporter_TestSuite_Int32___Class* klass;
        MonitorData* monitor;
        struct Func_2_JUnitReporter_TestSuite_Int32___Fields fields;
    };

    struct Func_2_JUnitReporter_TestSuite_Int32___VTable {
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

    struct Func_2_JUnitReporter_TestSuite_Int32___StaticFields {
    };

    struct Func_2_JUnitReporter_TestSuite_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_JUnitReporter_TestSuite_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_JUnitReporter_TestSuite_Int32___VTable vtable;
    };

} // namespace app
