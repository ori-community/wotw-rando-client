namespace app {
    struct Stack_1_TriangleNet_Topology_Triangle___StaticFields {
    };

    struct Stack_1_TriangleNet_Topology_Triangle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Stack_1_TriangleNet_Topology_Triangle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Stack_1_TriangleNet_Topology_Triangle___VTable vtable;
    };

    struct TrianglePool__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    };

    struct TrianglePool__StaticFields {
    };

    struct TrianglePool__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TrianglePool__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TrianglePool__VTable vtable;
    };

    struct Func_1_TriangleNet_TrianglePool___VTable {
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

    struct Func_1_TriangleNet_TrianglePool___StaticFields {
    };

    struct Func_1_TriangleNet_TrianglePool___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_1_TriangleNet_TrianglePool___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_1_TriangleNet_TrianglePool___VTable vtable;
    };

    struct Configuration_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Configuration_1__StaticFields {
    };

    struct Configuration_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Configuration_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Configuration_1__VTable vtable;
    };

    struct Configuration_c {
        struct Configuration_c__Class* klass;
        MonitorData* monitor;
    };

    struct Configuration_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Configuration_c__StaticFields {
        struct Configuration_c* __9;
        struct Func_1_TriangleNet_IPredicates_* __9__0_0;
        struct Func_1_TriangleNet_TrianglePool_* __9__0_1;
        struct Func_1_TriangleNet_TrianglePool_* __9__1_0;
    };

    struct Configuration_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Configuration_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Configuration_c__VTable vtable;
    };

    enum class LogLevel__Enum : int32_t {
        Info = 0x00000000,
        Warning = 0x00000001,
        Error = 0x00000002,
    };

    struct LogLevel__Enum__Boxed {
        struct LogLevel__Enum__Class* klass;
        MonitorData* monitor;
        LogLevel__Enum value;
    };

    struct __declspec(align(8)) Log__Fields {
        struct List_1_TriangleNet_Logging_LogItem_* log;
        LogLevel__Enum level;
    };

    struct Log {
        struct Log__Class* klass;
        MonitorData* monitor;
        struct Log__Fields fields;
    };

    struct __declspec(align(8)) List_1_TriangleNet_Logging_LogItem___Fields {
        struct LogItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_TriangleNet_Logging_LogItem_ {
        struct List_1_TriangleNet_Logging_LogItem___Class* klass;
        MonitorData* monitor;
        struct List_1_TriangleNet_Logging_LogItem___Fields fields;
    };

    struct __declspec(align(8)) LogItem__Fields {
        struct DateTime time;
        LogLevel__Enum level;

        struct String* message;
        struct String* info;
    };

    struct LogItem {
        struct LogItem__Class* klass;
        MonitorData* monitor;
        struct LogItem__Fields fields;
    };

    struct LogItem__Array {
        struct LogItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LogItem* vector[32];
    };

    struct IEnumerator_1_TriangleNet_Logging_LogItem_ {
        struct IEnumerator_1_TriangleNet_Logging_LogItem___Class* klass;
        MonitorData* monitor;
    };

    struct IList_1_TriangleNet_Logging_LogItem_ {
        struct IList_1_TriangleNet_Logging_LogItem___Class* klass;
        MonitorData* monitor;
    };

    struct LogLevel__Enum__VTable {
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

    struct LogLevel__Enum__StaticFields {
    };

    struct LogLevel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LogLevel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LogLevel__Enum__VTable vtable;
    };

    struct LogItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Time;
        VirtualInvokeData get_Level;
        VirtualInvokeData get_Message;
        VirtualInvokeData get_Info;
    };

    struct LogItem__StaticFields {
    };

    struct LogItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LogItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LogItem__VTable vtable;
    };

    struct LogItem__Array__VTable {
    };

    struct LogItem__Array__StaticFields {
    };

    struct LogItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LogItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LogItem__Array__VTable vtable;
    };

    struct IEnumerator_1_TriangleNet_Logging_LogItem___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_TriangleNet_Logging_LogItem___StaticFields {
    };

    struct IEnumerator_1_TriangleNet_Logging_LogItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_TriangleNet_Logging_LogItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_TriangleNet_Logging_LogItem___VTable vtable;
    };

    struct List_1_TriangleNet_Logging_LogItem___VTable {
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

    struct List_1_TriangleNet_Logging_LogItem___StaticFields {
        struct LogItem__Array* _emptyArray;
    };

    struct List_1_TriangleNet_Logging_LogItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_TriangleNet_Logging_LogItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_TriangleNet_Logging_LogItem___VTable vtable;
    };

    struct IList_1_TriangleNet_Logging_LogItem___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_TriangleNet_Logging_LogItem___StaticFields {
    };

    struct IList_1_TriangleNet_Logging_LogItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_TriangleNet_Logging_LogItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_TriangleNet_Logging_LogItem___VTable vtable;
    };

    struct Log__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Info;
        VirtualInvokeData Error;
        VirtualInvokeData Warning;
        VirtualInvokeData get_Data;
        VirtualInvokeData get_Level;
    };

    struct Log__StaticFields {
        bool _Verbose_k__BackingField;
        struct Log* instance;
    };

    struct Log__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Log__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Log__VTable vtable;
    };

    struct ILog_1_LogItem_ {
        struct ILog_1_LogItem___Class* klass;
        MonitorData* monitor;
    };

    struct ILog_1_LogItem___VTable {
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Info;
        VirtualInvokeData Error;
        VirtualInvokeData Warning;
        VirtualInvokeData get_Data;
        VirtualInvokeData get_Level;
    };

    struct ILog_1_LogItem___StaticFields {
    };

    struct ILog_1_LogItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ILog_1_LogItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ILog_1_LogItem___VTable vtable;
    };

    enum class NodeNumbering__Enum : int32_t {
        None = 0x00000000,
        Linear = 0x00000001,
        CuthillMcKee = 0x00000002,
    };

    struct NodeNumbering__Enum__Boxed {
        struct NodeNumbering__Enum__Class* klass;
        MonitorData* monitor;
        NodeNumbering__Enum value;
    };

    struct __declspec(align(8)) Mesh_1__Fields {
        struct IPredicates* predicates;
        struct ILog_1_LogItem_* logger;
        struct QualityMesher* qualityMesher;
        struct Stack_1_TriangleNet_Topology_Otri_* flipstack;
        struct TrianglePool* triangles;
        struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_* subsegs;
        struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex_* vertices;
        int32_t hash_vtx;
        int32_t hash_seg;
        int32_t hash_tri;
        struct List_1_TriangleNet_Geometry_Point_* holes;
        struct List_1_TriangleNet_Geometry_RegionPointer_* regions;
        struct Rectangle* bounds;
        int32_t invertices;
        int32_t insegments;
        int32_t undeads;
        int32_t mesh_dim;
        int32_t nextras;
        int32_t hullsize;
        int32_t steinerleft;
        bool checksegments;
        bool checkquality;
        struct Vertex* infvertex1;
        struct Vertex* infvertex2;
        struct Vertex* infvertex3;
        struct TriangleLocator* locator;
        struct Behavior* behavior;
        NodeNumbering__Enum numbering;

        struct Triangle* dummytri;
        struct SubSegment* dummysub;
    };

    struct Mesh_1 {
        struct Mesh_1__Class* klass;
        MonitorData* monitor;
        struct Mesh_1__Fields fields;
    };

    struct __declspec(align(8)) QualityMesher__Fields {
        struct IPredicates* predicates;
        struct Queue_1_TriangleNet_Meshing_Data_BadSubseg_* badsubsegs;
        struct BadTriQueue* queue;
        struct Mesh_1* mesh;
        struct Behavior* behavior;
        struct NewLocation* newLocation;
        struct ILog_1_LogItem_* logger;
        struct Triangle* newvertex_tri;
    };

    struct QualityMesher {
        struct QualityMesher__Class* klass;
        MonitorData* monitor;
        struct QualityMesher__Fields fields;
    };

    struct __declspec(align(8)) Queue_1_TriangleNet_Meshing_Data_BadSubseg___Fields {
        struct BadSubseg__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_TriangleNet_Meshing_Data_BadSubseg_ {
        struct Queue_1_TriangleNet_Meshing_Data_BadSubseg___Class* klass;
        MonitorData* monitor;
        struct Queue_1_TriangleNet_Meshing_Data_BadSubseg___Fields fields;
    };

    struct __declspec(align(8)) BadSubseg__Fields {
        struct Osub subseg;
        struct Vertex* org;
        struct Vertex* dest;
    };

    struct BadSubseg {
        struct BadSubseg__Class* klass;
        MonitorData* monitor;
        struct BadSubseg__Fields fields;
    };

    struct BadSubseg__Array {
        struct BadSubseg__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BadSubseg* vector[32];
    };

    struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg_ {
        struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) BadTriQueue__Fields {
        struct BadTriangle__Array* queuefront;
        struct BadTriangle__Array* queuetail;
        struct Int32__Array* nextnonemptyq;
        int32_t firstnonemptyq;
        int32_t count;
    };

    struct BadTriQueue {
        struct BadTriQueue__Class* klass;
        MonitorData* monitor;
        struct BadTriQueue__Fields fields;
    };

    struct __declspec(align(8)) BadTriangle__Fields {
        struct Otri poortri;
        double key;
        struct Vertex* org;
        struct Vertex* dest;
        struct Vertex* apex;
        struct BadTriangle* next;
    };

    struct BadTriangle {
        struct BadTriangle__Class* klass;
        MonitorData* monitor;
        struct BadTriangle__Fields fields;
    };

    struct BadTriangle__Array {
        struct BadTriangle__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BadTriangle* vector[32];
    };

    struct __declspec(align(8)) NewLocation__Fields {
        struct IPredicates* predicates;
        struct Mesh_1* mesh;
        struct Behavior* behavior;
        struct Double__Array* petalx;
        struct Double__Array* petaly;
        struct Double__Array* petalr;
        struct Double__Array* wedges;
        struct Double__Array* initialConvexPoly;
        struct Double__Array* points_p;
        struct Double__Array* points_q;
        struct Double__Array* points_r;
        struct Double__Array* poly1;
        struct Double__Array* poly2;
        struct Double__Array__Array* polys;
    };

    struct NewLocation {
        struct NewLocation__Class* klass;
        MonitorData* monitor;
        struct NewLocation__Fields fields;
    };

    struct Double__Array__Array {
        struct Double__Array__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Double__Array* vector[32];
    };

    struct __declspec(align(8)) Stack_1_TriangleNet_Topology_Otri___Fields {
        struct Otri__Array* _array;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Stack_1_TriangleNet_Topology_Otri_ {
        struct Stack_1_TriangleNet_Topology_Otri___Class* klass;
        MonitorData* monitor;
        struct Stack_1_TriangleNet_Topology_Otri___Fields fields;
    };

    struct IEnumerator_1_TriangleNet_Topology_Otri_ {
        struct IEnumerator_1_TriangleNet_Topology_Otri___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_ {
        struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct SubSegment* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Topology_SubSegment_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment___Fields {
        struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Topology_SubSegment___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment___Fields {
        struct Dictionary_2_System_Int32_TriangleNet_Topology_SubSegment_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Topology_SubSegment___Fields fields;
    };

    struct SubSegment__Array {
        struct SubSegment__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SubSegment* vector[32];
    };

    struct IEnumerator_1_TriangleNet_Topology_SubSegment_ {
        struct IEnumerator_1_TriangleNet_Topology_SubSegment___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_TriangleNet_Topology_SubSegment_ {
        struct ICollection_1_TriangleNet_Topology_SubSegment___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment_ {
        int32_t key;
        struct SubSegment* value;
    };

    struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Boxed {
        struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment_ fields;
    };

    struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Array {
        struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Topology_SubSegment___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_TriangleNet_Topology_SubSegment_ {
        struct IEnumerable_1_TriangleNet_Topology_SubSegment___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex_ {
        struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct Vertex* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_TriangleNet_Geometry_Vertex_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex___Fields {
        struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriangleNet_Geometry_Vertex___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex___Fields {
        struct Dictionary_2_System_Int32_TriangleNet_Geometry_Vertex_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_TriangleNet_Geometry_Vertex___Fields fields;
    };

    struct IEnumerator_1_TriangleNet_Geometry_Vertex_ {
        struct IEnumerator_1_TriangleNet_Geometry_Vertex___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_TriangleNet_Geometry_Vertex_ {
        struct ICollection_1_TriangleNet_Geometry_Vertex___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex_ {
        int32_t key;
        struct Vertex* value;
    };

    struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Boxed {
        struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex_ fields;
    };

    struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Array {
        struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_TriangleNet_Geometry_Vertex___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_TriangleNet_Geometry_Vertex_ {
        struct IEnumerable_1_TriangleNet_Geometry_Vertex___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_TriangleNet_Geometry_Point___Fields {
        struct Point__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_TriangleNet_Geometry_Point_ {
        struct List_1_TriangleNet_Geometry_Point___Class* klass;
        MonitorData* monitor;
        struct List_1_TriangleNet_Geometry_Point___Fields fields;
    };

    struct Point__Array {
        struct Point__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Point* vector[32];
    };

    struct IEnumerator_1_TriangleNet_Geometry_Point_ {
        struct IEnumerator_1_TriangleNet_Geometry_Point___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_TriangleNet_Geometry_RegionPointer___Fields {
        struct RegionPointer__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_TriangleNet_Geometry_RegionPointer_ {
        struct List_1_TriangleNet_Geometry_RegionPointer___Class* klass;
        MonitorData* monitor;
        struct List_1_TriangleNet_Geometry_RegionPointer___Fields fields;
    };

    struct __declspec(align(8)) RegionPointer__Fields {
        struct Point* point;
        int32_t id;
        double area;
    };

    struct RegionPointer {
        struct RegionPointer__Class* klass;
        MonitorData* monitor;
        struct RegionPointer__Fields fields;
    };

    struct RegionPointer__Array {
        struct RegionPointer__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RegionPointer* vector[32];
    };

    struct IEnumerator_1_TriangleNet_Geometry_RegionPointer_ {
        struct IEnumerator_1_TriangleNet_Geometry_RegionPointer___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Rectangle__Fields {
        double xmin;
        double ymin;
        double xmax;
        double ymax;
    };

    struct Rectangle {
        struct Rectangle__Class* klass;
        MonitorData* monitor;
        struct Rectangle__Fields fields;
    };

    struct __declspec(align(8)) TriangleLocator__Fields {
        struct TriangleSampler* sampler;
        struct Mesh_1* mesh;
        struct IPredicates* predicates;
        struct Otri recenttri;
    };

    struct TriangleLocator {
        struct TriangleLocator__Class* klass;
        MonitorData* monitor;
        struct TriangleLocator__Fields fields;
    };

    struct __declspec(align(8)) TriangleSampler__Fields {
        struct Random* random;
        struct Mesh_1* mesh;
        int32_t samples;
        int32_t triangleCount;
    };

    struct TriangleSampler {
        struct TriangleSampler__Class* klass;
        MonitorData* monitor;
        struct TriangleSampler__Fields fields;
    };

    struct IEnumerable_1_TriangleNet_Geometry_Edge_ {
        struct IEnumerable_1_TriangleNet_Geometry_Edge___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_TriangleNet_Topology_Triangle_ {
        struct ICollection_1_TriangleNet_Topology_Triangle___Class* klass;
        MonitorData* monitor;
    };

    struct IList_1_TriangleNet_Geometry_Point_ {
        struct IList_1_TriangleNet_Geometry_Point___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) QualityOptions__Fields {
        double _MaximumAngle_k__BackingField;
        double _MinimumAngle_k__BackingField;
        double _MaximumArea_k__BackingField;
        struct Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_* _UserTest_k__BackingField;
        bool _VariableArea_k__BackingField;
        int32_t _SteinerPoints_k__BackingField;
    };

    struct QualityOptions {
        struct QualityOptions__Class* klass;
        MonitorData* monitor;
        struct QualityOptions__Fields fields;
    };

    struct BadSubseg__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BadSubseg__StaticFields {
    };

    struct BadSubseg__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BadSubseg__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BadSubseg__VTable vtable;
    };

    struct BadSubseg__Array__VTable {
    };

    struct BadSubseg__Array__StaticFields {
    };

    struct BadSubseg__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BadSubseg__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BadSubseg__Array__VTable vtable;
    };

    struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___StaticFields {
    };

    struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_TriangleNet_Meshing_Data_BadSubseg___VTable vtable;
    };

    struct Queue_1_TriangleNet_Meshing_Data_BadSubseg___VTable {
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

} // namespace app
