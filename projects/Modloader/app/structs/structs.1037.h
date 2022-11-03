namespace app {
    enum class CursorType__Enum : int32_t {
        Invalid = -1,
        Cursor = 0x00000000,
        Pen = 0x00000001,
        TailSwitch = 0x00000002,
    };

    struct CursorType__Enum__Boxed {
        struct CursorType__Enum__Class* klass;
        MonitorData* monitor;
        CursorType__Enum value;
    };

    struct CursorType__Enum__VTable {
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

    struct CursorType__Enum__StaticFields {
    };

    struct CursorType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CursorType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CursorType__Enum__VTable vtable;
    };

    struct fsAotVersionInfo {
        bool IsConstructorPublic;
        struct fsAotVersionInfo_Member__Array* Members;
    };

    struct fsAotVersionInfo__Boxed {
        struct fsAotVersionInfo__Class* klass;
        MonitorData* monitor;
        struct fsAotVersionInfo fields;
    };

    struct fsAotVersionInfo_Member {
        struct String* MemberName;
        struct String* JsonName;
        struct String* StorageType;
        struct String* OverrideConverterType;
    };

    struct fsAotVersionInfo_Member__Boxed {
        struct fsAotVersionInfo_Member__Class* klass;
        MonitorData* monitor;
        struct fsAotVersionInfo_Member fields;
    };

    struct fsAotVersionInfo_Member__Array {
        struct fsAotVersionInfo_Member__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct fsAotVersionInfo_Member vector[32];
    };

    struct fsAotVersionInfo_Member__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct fsAotVersionInfo_Member__StaticFields {
    };

    struct fsAotVersionInfo_Member__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct fsAotVersionInfo_Member__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct fsAotVersionInfo_Member__VTable vtable;
    };

    struct fsAotVersionInfo_Member__Array__VTable {
    };

    struct fsAotVersionInfo_Member__Array__StaticFields {
    };

    struct fsAotVersionInfo_Member__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct fsAotVersionInfo_Member__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct fsAotVersionInfo_Member__Array__VTable vtable;
    };

    struct fsAotVersionInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct fsAotVersionInfo__StaticFields {
    };

    struct fsAotVersionInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct fsAotVersionInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct fsAotVersionInfo__VTable vtable;
    };

    struct __declspec(align(8)) fsMetaType__Fields {
        struct Type* ReflectedType;
        struct fsMetaProperty__Array* _Properties_k__BackingField;
        struct Nullable_1_Boolean_ _hasDefaultConstructorCache;
        struct Nullable_1_Boolean_ _isDefaultConstructorPublicCache;
    };

    struct fsMetaType {
        struct fsMetaType__Class* klass;
        MonitorData* monitor;
        struct fsMetaType__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_FullSerializer_fsConfig_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_ {
        struct Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_ {
        int32_t hashCode;
        int32_t next;
        struct fsConfig* key;
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType_* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_ fields;
    };

    enum class fsMemberSerialization__Enum : int32_t {
        OptIn = 0x00000000,
        OptOut = 0x00000001,
        Default = 0x00000002,
    };

    struct fsMemberSerialization__Enum__Boxed {
        struct fsMemberSerialization__Enum__Class* klass;
        MonitorData* monitor;
        fsMemberSerialization__Enum value;
    };

    struct __declspec(align(8)) fsConfig__Fields {
        struct Type__Array* SerializeAttributes;
        struct Type__Array* IgnoreSerializeAttributes;
        struct Type__Array* IgnoreSerializeTypeAttributes;
        fsMemberSerialization__Enum DefaultMemberSerialization;

        struct Func_3_String_System_Reflection_MemberInfo_String_* GetJsonNameFromMemberName;
        bool EnablePropertySerialization;
        bool SerializeNonAutoProperties;
        bool SerializeNonPublicSetProperties;
        struct String* CustomDateTimeFormatString;
        bool Serialize64BitIntegerAsString;
        bool SerializeEnumsAsInteger;
    };

    struct fsConfig {
        struct fsConfig__Class* klass;
        MonitorData* monitor;
        struct fsConfig__Fields fields;
    };

    struct Func_3_String_System_Reflection_MemberInfo_String___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_3_String_System_Reflection_MemberInfo_String_ {
        struct Func_3_String_System_Reflection_MemberInfo_String___Class* klass;
        MonitorData* monitor;
        struct Func_3_String_System_Reflection_MemberInfo_String___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Type_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Type_FullSerializer_fsMetaType_ {
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType_ {
        int32_t hashCode;
        int32_t next;
        struct Type* key;
        struct fsMetaType* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType___Fields {
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType___Fields {
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType___Fields fields;
    };

    struct fsMetaType__Array {
        struct fsMetaType__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct fsMetaType* vector[32];
    };

    struct IEnumerator_1_FullSerializer_fsMetaType_ {
        struct IEnumerator_1_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_FullSerializer_fsMetaType_ {
        struct ICollection_1_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType_ {
        struct Type* key;
        struct fsMetaType* value;
    };

    struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Boxed {
        struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType_ fields;
    };

    struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Array {
        struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_FullSerializer_fsMetaType_ {
        struct IEnumerator_1_KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_FullSerializer_fsMetaType_ {
        struct IEnumerable_1_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array {
        struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_ vector[32];
    };

    struct IEqualityComparer_1_FullSerializer_fsConfig_ {
        struct IEqualityComparer_1_FullSerializer_fsConfig___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields {
        struct Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields fields;
    };

    struct fsConfig__Array {
        struct fsConfig__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct fsConfig* vector[32];
    };

    struct IEnumerator_1_FullSerializer_fsConfig_ {
        struct IEnumerator_1_FullSerializer_fsConfig___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields {
        struct Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Fields fields;
    };

    struct Dictionary_2_System_Type_FullSerializer_fsMetaType___Array {
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType_* vector[32];
    };

    struct IEnumerator_1_Dictionary_2_System_Type_FullSerializer_fsMetaType_ {
        struct IEnumerator_1_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_FullSerializer_fsConfig_ {
        struct ICollection_1_FullSerializer_fsConfig___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_Dictionary_2_System_Type_FullSerializer_fsMetaType_ {
        struct ICollection_1_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_ {
        struct fsConfig* key;
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType_* value;
    };

    struct KeyValuePair_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Boxed {
        struct KeyValuePair_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_ fields;
    };

    struct KeyValuePair_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array {
        struct KeyValuePair_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_ {
        struct IEnumerator_1_KeyValuePair_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_FullSerializer_fsConfig_ {
        struct IEnumerable_1_FullSerializer_fsConfig___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Dictionary_2_System_Type_FullSerializer_fsMetaType_ {
        struct IEnumerable_1_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) fsMetaProperty__Fields {
        struct MemberInfo_1* _memberInfo;
        struct Type* _StorageType_k__BackingField;
        struct Type* _OverrideConverterType_k__BackingField;
        bool _CanRead_k__BackingField;
        bool _CanWrite_k__BackingField;
        struct String* _JsonName_k__BackingField;
        struct String* _MemberName_k__BackingField;
        bool _IsPublic_k__BackingField;
        bool _IsReadOnly_k__BackingField;
    };

    struct fsMetaProperty {
        struct fsMetaProperty__Class* klass;
        MonitorData* monitor;
        struct fsMetaProperty__Fields fields;
    };

    struct fsMetaProperty__Array {
        struct fsMetaProperty__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct fsMetaProperty* vector[32];
    };

    struct fsIAotConverter {
        struct fsIAotConverter__Class* klass;
        MonitorData* monitor;
    };

    struct fsMemberSerialization__Enum__VTable {
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

    struct fsMemberSerialization__Enum__StaticFields {
    };

    struct fsMemberSerialization__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct fsMemberSerialization__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct fsMemberSerialization__Enum__VTable vtable;
    };

    struct Func_3_String_System_Reflection_MemberInfo_String___VTable {
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

    struct Func_3_String_System_Reflection_MemberInfo_String___StaticFields {
    };

    struct Func_3_String_System_Reflection_MemberInfo_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_3_String_System_Reflection_MemberInfo_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_3_String_System_Reflection_MemberInfo_String___VTable vtable;
    };

    struct fsConfig__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct fsConfig__StaticFields {
    };

    struct fsConfig__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct fsConfig__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct fsConfig__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_FullSerializer_fsMetaType___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_FullSerializer_fsMetaType___VTable vtable;
    };

    struct fsMetaType__Array__VTable {
    };

    struct fsMetaType__Array__StaticFields {
    };

    struct fsMetaType__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct fsMetaType__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct fsMetaType__Array__VTable vtable;
    };

    struct IEnumerator_1_FullSerializer_fsMetaType___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_FullSerializer_fsMetaType___StaticFields {
    };

    struct IEnumerator_1_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_FullSerializer_fsMetaType___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_FullSerializer_fsMetaType___VTable vtable;
    };

    struct ICollection_1_FullSerializer_fsMetaType___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_FullSerializer_fsMetaType___StaticFields {
    };

    struct ICollection_1_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_FullSerializer_fsMetaType___VTable vtable;
    };

    struct fsMetaType___VTable {
    };

    struct fsMetaType___StaticFields {
    };

    struct fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct fsMetaType___VTable vtable;
    };

    struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___StaticFields {
    };

    struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___VTable vtable;
    };

    struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Array__VTable {
    };

    struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Array__StaticFields {
    };

    struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_FullSerializer_fsMetaType___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_FullSerializer_fsMetaType___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_Type_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_Type_FullSerializer_fsMetaType___VTable vtable;
    };

    struct IEnumerable_1_FullSerializer_fsMetaType___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_FullSerializer_fsMetaType___StaticFields {
    };

    struct IEnumerable_1_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_FullSerializer_fsMetaType___VTable vtable;
    };

    struct Dictionary_2_System_Type_FullSerializer_fsMetaType___VTable {
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

    struct Dictionary_2_System_Type_FullSerializer_fsMetaType___StaticFields {
    };

    struct Dictionary_2_System_Type_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__VTable vtable;
    };

    struct IEqualityComparer_1_FullSerializer_fsConfig___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_FullSerializer_fsConfig___StaticFields {
    };

    struct IEqualityComparer_1_FullSerializer_fsConfig___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_FullSerializer_fsConfig___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_FullSerializer_fsConfig___VTable vtable;
    };

    struct fsConfig__Array__VTable {
    };

    struct fsConfig__Array__StaticFields {
    };

    struct fsConfig__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct fsConfig__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct fsConfig__Array__VTable vtable;
    };

    struct IEnumerator_1_FullSerializer_fsConfig___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_FullSerializer_fsConfig___StaticFields {
    };

    struct IEnumerator_1_FullSerializer_fsConfig___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_FullSerializer_fsConfig___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_FullSerializer_fsConfig___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___VTable vtable;
    };

    struct Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__VTable {
    };

    struct Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__StaticFields {
    };

    struct Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Type_FullSerializer_fsMetaType___Array__VTable vtable;
    };

    struct IEnumerator_1_Dictionary_2_System_Type_FullSerializer_fsMetaType___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Dictionary_2_System_Type_FullSerializer_fsMetaType___StaticFields {
    };

    struct IEnumerator_1_Dictionary_2_System_Type_FullSerializer_fsMetaType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Dictionary_2_System_Type_FullSerializer_fsMetaType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Dictionary_2_System_Type_FullSerializer_fsMetaType___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType___VTable {
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

} // namespace app
