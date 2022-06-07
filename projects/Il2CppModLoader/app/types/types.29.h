namespace app {
struct UnhandledExceptionEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct UnhandledExceptionEventHandler {
    struct UnhandledExceptionEventHandler__Class *klass;
    MonitorData *monitor;
    struct UnhandledExceptionEventHandler__Fields fields;
};

struct UnhandledExceptionEventHandler__VTable {
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

struct UnhandledExceptionEventHandler__StaticFields {
};

struct UnhandledExceptionEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnhandledExceptionEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnhandledExceptionEventHandler__VTable vtable;
};

struct Missing {
    struct Missing__Class *klass;
    MonitorData *monitor;
};

struct Missing__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
};

struct Missing__StaticFields {
    struct Missing *Value;
};

struct Missing__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Missing__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Missing__VTable vtable;
};

struct __declspec(align(8)) UnitySerializationHolder__Fields {
    struct Type__Array *m_instantiation;
    struct Int32__Array *m_elementTypes;
    int32_t m_genericParameterPosition;
    struct Type *m_declaringType;
    struct MethodBase *m_declaringMethod;
    struct String *m_data;
    struct String *m_assemblyName;
    int32_t m_unityType;
};

struct UnitySerializationHolder {
    struct UnitySerializationHolder__Class *klass;
    MonitorData *monitor;
    struct UnitySerializationHolder__Fields fields;
};

struct UnitySerializationHolder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData GetRealObject;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetRealObject_1;
};

struct UnitySerializationHolder__StaticFields {
};

struct UnitySerializationHolder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnitySerializationHolder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnitySerializationHolder__VTable vtable;
};

struct UnSafeCharBuffer {
    uint16_t *m_buffer;
    int32_t m_totalSize;
    int32_t m_length;
};

struct UnSafeCharBuffer__Boxed {
    struct UnSafeCharBuffer__Class *klass;
    MonitorData *monitor;
    struct UnSafeCharBuffer fields;
};

struct UnSafeCharBuffer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UnSafeCharBuffer__StaticFields {
};

struct UnSafeCharBuffer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnSafeCharBuffer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnSafeCharBuffer__VTable vtable;
};

struct Version___VTable {
};

struct Version___StaticFields {
};

struct Version___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Version___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Version___VTable vtable;
};

enum class Version_ParseFailureKind__Enum : int32_t {
    ArgumentNullException = 0x00000000,
    ArgumentException = 0x00000001,
    ArgumentOutOfRangeException = 0x00000002,
    FormatException = 0x00000003,
};

struct Version_ParseFailureKind__Enum__Boxed {
    struct Version_ParseFailureKind__Enum__Class *klass;
    MonitorData *monitor;
    Version_ParseFailureKind__Enum value;
    
};

struct Version_VersionResult {
    struct Version *m_parsedVersion;
    Version_ParseFailureKind__Enum m_failure;
    
    struct String *m_exceptionArgument;
    struct String *m_argumentName;
    bool m_canThrow;
};

struct Version_VersionResult__Boxed {
    struct Version_VersionResult__Class *klass;
    MonitorData *monitor;
    struct Version_VersionResult fields;
};

struct Version_ParseFailureKind__Enum__VTable {
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

struct Version_ParseFailureKind__Enum__StaticFields {
};

struct Version_ParseFailureKind__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Version_ParseFailureKind__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Version_ParseFailureKind__Enum__VTable vtable;
};

struct Version_VersionResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Version_VersionResult__StaticFields {
};

struct Version_VersionResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Version_VersionResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Version_VersionResult__VTable vtable;
};

struct Version_VersionResult___VTable {
};

struct Version_VersionResult___StaticFields {
};

struct Version_VersionResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Version_VersionResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Version_VersionResult___VTable vtable;
};

struct AppDomain__Fields {
    struct MarshalByRefObject__Fields _;
    void *_mono_app_domain;
    struct Object *_evidence;
    struct Object *_granted;
    int32_t _principalPolicy;
    struct AssemblyLoadEventHandler *AssemblyLoad;
    struct ResolveEventHandler *AssemblyResolve;
    struct EventHandler *DomainUnload;
    struct EventHandler *ProcessExit;
    struct ResolveEventHandler *ResourceResolve;
    struct ResolveEventHandler *TypeResolve;
    struct UnhandledExceptionEventHandler *UnhandledException;
    struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs_ *FirstChanceException;
    struct Object *_domain_manager;
    struct ResolveEventHandler *ReflectionOnlyAssemblyResolve;
    struct Object *_activation;
    struct Object *_applicationIdentity;
    struct List_1_System_String_ *compatibility_switch;
};

struct AppDomain {
    struct AppDomain__Class *klass;
    MonitorData *monitor;
    struct AppDomain__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_String_System_Object___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Object_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Object_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_System_Object_ {
    struct Dictionary_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_System_Object___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct Object *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Object___Fields {
    struct Dictionary_2_System_String_System_Object_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Object_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Object___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Object___Fields {
    struct Dictionary_2_System_String_System_Object_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Object_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Object___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Object___Fields fields;
};

struct KeyValuePair_2_System_String_System_Object_ {
    struct String *key;
    struct Object *value;
};

struct KeyValuePair_2_System_String_System_Object___Boxed {
    struct KeyValuePair_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_System_Object_ fields;
};

struct KeyValuePair_2_System_String_System_Object___Array {
    struct KeyValuePair_2_System_String_System_Object___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_System_Object_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Object_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Object___Class *klass;
    MonitorData *monitor;
};

struct AssemblyLoadEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct AssemblyLoadEventHandler {
    struct AssemblyLoadEventHandler__Class *klass;
    MonitorData *monitor;
    struct AssemblyLoadEventHandler__Fields fields;
};

struct __declspec(align(8)) AssemblyLoadEventArgs__Fields {
    struct Assembly *m_loadedAssembly;
};

struct AssemblyLoadEventArgs {
    struct AssemblyLoadEventArgs__Class *klass;
    MonitorData *monitor;
    struct AssemblyLoadEventArgs__Fields fields;
};

struct ResolveEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct ResolveEventHandler {
    struct ResolveEventHandler__Class *klass;
    MonitorData *monitor;
    struct ResolveEventHandler__Fields fields;
};

struct __declspec(align(8)) ResolveEventArgs__Fields {
    struct String *m_Name;
    struct Assembly *m_Requesting;
};

struct ResolveEventArgs {
    struct ResolveEventArgs__Class *klass;
    MonitorData *monitor;
    struct ResolveEventArgs__Fields fields;
};

struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs___Fields {
    struct MulticastDelegate__Fields _;
};

struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs_ {
    struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs___Class *klass;
    MonitorData *monitor;
    struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs___Fields fields;
};

struct FirstChanceExceptionEventArgs {
    struct FirstChanceExceptionEventArgs__Class *klass;
    MonitorData *monitor;
};

struct Assembly__Array {
    struct Assembly__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Assembly *vector[32];
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Object___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Object___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Object___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Object___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Object___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Object___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Object___VTable vtable;
};

struct KeyValuePair_2_System_String_System_Object___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_String_System_Object___StaticFields {
};

struct KeyValuePair_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_System_Object___VTable vtable;
};

struct KeyValuePair_2_System_String_System_Object___Array__VTable {
};

struct KeyValuePair_2_System_String_System_Object___Array__StaticFields {
};

struct KeyValuePair_2_System_String_System_Object___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_System_Object___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_System_Object___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Object___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Object___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Object___VTable vtable;
};

struct Dictionary_2_System_String_System_Object___VTable {
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

struct Dictionary_2_System_String_System_Object___StaticFields {
};

struct Dictionary_2_System_String_System_Object___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_String_System_Object___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_String_System_Object___VTable vtable;
};

struct AssemblyLoadEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AssemblyLoadEventArgs__StaticFields {
};

struct AssemblyLoadEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AssemblyLoadEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AssemblyLoadEventArgs__VTable vtable;
};

struct AssemblyLoadEventHandler__VTable {
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

struct AssemblyLoadEventHandler__StaticFields {
};

struct AssemblyLoadEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AssemblyLoadEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AssemblyLoadEventHandler__VTable vtable;
};

struct ResolveEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ResolveEventArgs__StaticFields {
};

struct ResolveEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ResolveEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ResolveEventArgs__VTable vtable;
};

struct ResolveEventHandler__VTable {
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

struct ResolveEventHandler__StaticFields {
};

struct ResolveEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ResolveEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ResolveEventHandler__VTable vtable;
};

struct FirstChanceExceptionEventArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FirstChanceExceptionEventArgs__StaticFields {
};

struct FirstChanceExceptionEventArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FirstChanceExceptionEventArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FirstChanceExceptionEventArgs__VTable vtable;
};

struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs___VTable {
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

struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs___StaticFields {
};

struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventHandler_1_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs___VTable vtable;
};

struct Assembly__Array__VTable {
};

struct Assembly__Array__StaticFields {
};

struct Assembly__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Assembly__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Assembly__Array__VTable vtable;
};

struct AppDomain__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData GetAssemblies;
    VirtualInvokeData GetData;
    VirtualInvokeData Load;
    VirtualInvokeData add_AssemblyLoad;
    VirtualInvokeData remove_AssemblyLoad;
    VirtualInvokeData add_DomainUnload;
    VirtualInvokeData remove_DomainUnload;
    VirtualInvokeData add_ProcessExit;
    VirtualInvokeData remove_ProcessExit;
    VirtualInvokeData add_UnhandledException;
    VirtualInvokeData remove_UnhandledException;
};

struct AppDomain__StaticFields {
    struct String *_process_guid;
    struct Dictionary_2_System_String_System_Object_ *type_resolve_in_progress;
    struct Dictionary_2_System_String_System_Object_ *assembly_resolve_in_progress;
    struct Dictionary_2_System_String_System_Object_ *assembly_resolve_in_progress_refonly;
    struct Object *_principal;
    struct AppDomain *default_domain;
};

struct AppDomain__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AppDomain__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AppDomain__VTable vtable;
};

struct __declspec(align(8)) AppDomainSetup__Fields {
    struct String *application_base;
    struct String *application_name;
    struct String *cache_path;
    struct String *configuration_file;
    struct String *dynamic_base;
    struct String *license_file;
    struct String *private_bin_path;
    struct String *private_bin_path_probe;
    struct String *shadow_copy_directories;
    struct String *shadow_copy_files;
    bool publisher_policy;
    bool path_changed;
    int32_t loader_optimization;
    bool disallow_binding_redirects;
    bool disallow_code_downloads;
    struct Object *_activationArguments;
    struct Object *domain_initializer;
    struct Object *application_trust;
    struct String__Array *domain_initializer_args;
    bool disallow_appbase_probe;
    struct Byte__Array *configuration_bytes;
    struct Byte__Array *serialized_non_primitives;
    struct String *_TargetFrameworkName_k__BackingField;
};

struct AppDomainSetup {
    struct AppDomainSetup__Class *klass;
    MonitorData *monitor;
    struct AppDomainSetup__Fields fields;
};

struct AppDomainSetup__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ApplicationBase;
    VirtualInvokeData get_LicenseFile;
};

struct AppDomainSetup__StaticFields {
};

struct AppDomainSetup__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AppDomainSetup__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AppDomainSetup__VTable vtable;
};

struct __declspec(align(8)) Evidence__Fields {
    bool _locked;
    struct ArrayList *hostEvidenceList;
    struct ArrayList *assemblyEvidenceList;
};

struct Evidence {
    struct Evidence__Class *klass;
    MonitorData *monitor;
    struct Evidence__Fields fields;
};

struct Evidence__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData get_SyncRoot;
    VirtualInvokeData get_IsSynchronized;
    VirtualInvokeData GetEnumerator;
};

struct Evidence__StaticFields {
};

struct Evidence__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Evidence__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Evidence__VTable vtable;
};

struct UIntPtr {
    struct Void *_pointer;
};

struct UIntPtr__Boxed {
    struct UIntPtr__Class *klass;
    MonitorData *monitor;
    void *fields;
};

struct __declspec(align(8)) Context__Fields {
    int32_t domain_id;
    int32_t context_id;
    void *static_data;
    void *data;
    struct IMessageSink *server_context_sink_chain;
    struct IMessageSink *client_context_sink_chain;
    struct List_1_System_Runtime_Remoting_Contexts_IContextProperty_ *context_properties;
    struct LocalDataStoreHolder *_localDataStore;
    struct DynamicPropertyCollection *context_dynamic_properties;
    struct ContextCallbackObject *callback_object;
};

struct Context {
    struct Context__Class *klass;
    MonitorData *monitor;
    struct Context__Fields fields;
};

struct IMessageSink {
    struct IMessageSink__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_System_Runtime_Remoting_Contexts_IContextProperty___Fields {
    struct IContextProperty__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Runtime_Remoting_Contexts_IContextProperty_ {
    struct List_1_System_Runtime_Remoting_Contexts_IContextProperty___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Runtime_Remoting_Contexts_IContextProperty___Fields fields;
};

struct IContextProperty {
    struct IContextProperty__Class *klass;
    MonitorData *monitor;
};

struct IContextProperty__Array {
    struct IContextProperty__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IContextProperty *vector[32];
};

struct IEnumerator_1_System_Runtime_Remoting_Contexts_IContextProperty_ {
    struct IEnumerator_1_System_Runtime_Remoting_Contexts_IContextProperty___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) DynamicPropertyCollection__Fields {
    struct ArrayList *_properties;
};

struct DynamicPropertyCollection {
    struct DynamicPropertyCollection__Class *klass;
    MonitorData *monitor;
    struct DynamicPropertyCollection__Fields fields;
};

}
