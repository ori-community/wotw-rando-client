namespace app {
    struct TypeAttributes__Enum__Boxed {
        struct TypeAttributes__Enum__Class* klass;
        MonitorData* monitor;
        TypeAttributes__Enum value;
    };

    enum class GenericParameterAttributes__Enum : int32_t {
        None = 0x00000000,
        VarianceMask = 0x00000003,
        Covariant = 0x00000001,
        Contravariant = 0x00000002,
        SpecialConstraintMask = 0x0000001c,
        ReferenceTypeConstraint = 0x00000004,
        NotNullableValueTypeConstraint = 0x00000008,
        DefaultConstructorConstraint = 0x00000010,
    };

    struct GenericParameterAttributes__Enum__Boxed {
        struct GenericParameterAttributes__Enum__Class* klass;
        MonitorData* monitor;
        GenericParameterAttributes__Enum value;
    };

    struct IEnumerable_1_System_Reflection_FieldInfo_ {
        struct IEnumerable_1_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Type_ {
        struct IEnumerable_1_System_Type___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) MonoTypeInfo__Fields {
        struct String* full_name;
        struct MonoCMethod* default_ctor;
    };

    struct MonoTypeInfo {
        struct MonoTypeInfo__Class* klass;
        MonitorData* monitor;
        struct MonoTypeInfo__Fields fields;
    };

    struct MemberFilter__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct MemberFilter {
        struct MemberFilter__Class* klass;
        MonitorData* monitor;
        struct MemberFilter__Fields fields;
    };

    struct Byte__Array {
        struct Byte__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        uint8_t vector[32];
    };

    struct Char__Array {
        struct Char__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        uint16_t vector[32];
    };

    struct IEnumerator_1_System_Char_ {
        struct IEnumerator_1_System_Char___Class* klass;
        MonitorData* monitor;
    };

    struct IFormatProvider__VTable {
        VirtualInvokeData GetFormat;
    };

    struct IFormatProvider__StaticFields {
    };

    struct IFormatProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IFormatProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IFormatProvider__VTable vtable;
    };

    struct IEnumerator__VTable {
        VirtualInvokeData MoveNext;
        VirtualInvokeData get_Current;
        VirtualInvokeData Reset;
    };

    struct IEnumerator__StaticFields {
    };

    struct IEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator__VTable vtable;
    };

    struct IComparer__VTable {
        VirtualInvokeData Compare;
    };

    struct IComparer__StaticFields {
    };

    struct IComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IComparer__VTable vtable;
    };

    struct IEqualityComparer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer__StaticFields {
    };

    struct IEqualityComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer__VTable vtable;
    };

    struct Array__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CopyTo;
        VirtualInvokeData System_Collections_ICollection_get_Count;
        VirtualInvokeData get_SyncRoot;
        VirtualInvokeData get_IsSynchronized;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData System_Collections_IList_Clear;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData System_Collections_IList_RemoveAt;
        VirtualInvokeData System_Collections_IStructuralComparable_CompareTo;
        VirtualInvokeData System_Collections_IStructuralEquatable_Equals;
        VirtualInvokeData System_Collections_IStructuralEquatable_GetHashCode;
        VirtualInvokeData Clone;
        VirtualInvokeData get_IsReadOnly;
    };

    struct Array__StaticFields {
    };

    struct Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Array__VTable vtable;
    };

    struct UInt32__Array__VTable {
    };

    struct UInt32__Array__StaticFields {
    };

    struct UInt32__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UInt32__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UInt32__Array__VTable vtable;
    };

    struct Int32__Array__VTable {
    };

    struct Int32__Array__StaticFields {
    };

    struct Int32__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Int32__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Int32__Array__VTable vtable;
    };

    struct Object__Array__VTable {
    };

    struct Object__Array__StaticFields {
    };

    struct Object__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Object__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Object__Array__VTable vtable;
    };

    struct MemberTypes__Enum__VTable {
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

    struct MemberTypes__Enum__StaticFields {
    };

    struct MemberTypes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MemberTypes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MemberTypes__Enum__VTable vtable;
    };

    struct IList_1_System_Reflection_CustomAttributeData___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_System_Reflection_CustomAttributeData___StaticFields {
    };

    struct IList_1_System_Reflection_CustomAttributeData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_System_Reflection_CustomAttributeData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_System_Reflection_CustomAttributeData___VTable vtable;
    };

    struct VoidPtr__VTable {
    };

    struct VoidPtr__StaticFields {
    };

    struct VoidPtr__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VoidPtr__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VoidPtr__VTable vtable;
    };

    struct String__Array__VTable {
    };

    struct String__Array__StaticFields {
    };

    struct String__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct String__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct String__Array__VTable vtable;
    };

    struct Type__Array__VTable {
    };

    struct Type__Array__StaticFields {
    };

    struct Type__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Type__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Type__Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__VTable vtable;
    };

    struct IEqualityComparer_1_System_String___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_System_String___StaticFields {
    };

    struct IEqualityComparer_1_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_System_String___VTable vtable;
    };

    struct IEnumerator_1_System_String___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_String___StaticFields {
    };

    struct IEnumerator_1_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_String___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___VTable vtable;
    };

    struct IEnumerator_1_System_Int32___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_Int32___StaticFields {
    };

    struct IEnumerator_1_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_Int32___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___VTable vtable;
    };

    struct ICollection_1_System_String___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_System_String___StaticFields {
    };

    struct ICollection_1_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_System_String___VTable vtable;
    };

    struct ICollection_1_System_Int32___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_System_Int32___StaticFields {
    };

    struct ICollection_1_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_System_Int32___VTable vtable;
    };

    struct Int32___VTable {
    };

    struct Int32___StaticFields {
    };

    struct Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Int32___VTable vtable;
    };

    struct KeyValuePair_2_System_String_System_Int32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_String_System_Int32___StaticFields {
    };

    struct KeyValuePair_2_System_String_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_System_Int32___VTable vtable;
    };

    struct KeyValuePair_2_System_String_System_Int32___Array__VTable {
    };

    struct KeyValuePair_2_System_String_System_Int32___Array__StaticFields {
    };

    struct KeyValuePair_2_System_String_System_Int32___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_System_Int32___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_System_Int32___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___VTable vtable;
    };

    struct ICollection__VTable {
        VirtualInvokeData CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData get_SyncRoot;
        VirtualInvokeData get_IsSynchronized;
    };

    struct ICollection__StaticFields {
    };

    struct ICollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection__VTable vtable;
    };

    struct IDictionaryEnumerator__VTable {
        VirtualInvokeData get_Key;
        VirtualInvokeData get_Value;
        VirtualInvokeData get_Entry;
    };

    struct IDictionaryEnumerator__StaticFields {
    };

    struct IDictionaryEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IDictionaryEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IDictionaryEnumerator__VTable vtable;
    };

    struct IEnumerable_1_System_String___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_System_String___StaticFields {
    };

    struct IEnumerable_1_System_String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_System_String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_System_String___VTable vtable;
    };

    struct IEnumerable_1_System_Int32___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_System_Int32___StaticFields {
    };

    struct IEnumerable_1_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_System_Int32___VTable vtable;
    };

    struct StreamingContextStates__Enum__VTable {
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

    struct StreamingContextStates__Enum__StaticFields {
    };

    struct StreamingContextStates__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StreamingContextStates__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StreamingContextStates__Enum__VTable vtable;
    };

    struct StreamingContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct StreamingContext__StaticFields {
    };

    struct StreamingContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StreamingContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StreamingContext__VTable vtable;
    };

    struct Dictionary_2_System_String_System_Int32___VTable {
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

    struct Dictionary_2_System_String_System_Int32___StaticFields {
    };

    struct Dictionary_2_System_String_System_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_String_System_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_String_System_Int32___VTable vtable;
    };

    struct IFormatterConverter__VTable {
        VirtualInvokeData Convert;
        VirtualInvokeData ToBoolean;
        VirtualInvokeData ToInt32;
        VirtualInvokeData ToInt64;
        VirtualInvokeData ToSingle;
        VirtualInvokeData ToString;
    };

    struct IFormatterConverter__StaticFields {
    };

    struct IFormatterConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IFormatterConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IFormatterConverter__VTable vtable;
    };

    struct SerializationInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SerializationInfo__StaticFields {
    };

    struct SerializationInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationInfo__VTable vtable;
    };

    struct IntPtr__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
    };

    struct IntPtr__StaticFields {
        void* Zero;
    };

    struct IntPtr__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IntPtr__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IntPtr__VTable vtable;
    };

    struct ParameterAttributes__Enum__VTable {
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

    struct ParameterAttributes__Enum__StaticFields {
    };

    struct ParameterAttributes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParameterAttributes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParameterAttributes__Enum__VTable vtable;
    };

    struct Attribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct Attribute__StaticFields {
    };

    struct Attribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Attribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Attribute__VTable vtable;
    };

    struct UnmanagedType__Enum__VTable {
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

    struct UnmanagedType__Enum__StaticFields {
    };

    struct UnmanagedType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UnmanagedType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UnmanagedType__Enum__VTable vtable;
    };

    struct VarEnum__Enum__VTable {
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

    struct VarEnum__Enum__StaticFields {
    };

    struct VarEnum__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VarEnum__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VarEnum__Enum__VTable vtable;
    };

    struct MarshalAsAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct MarshalAsAttribute__StaticFields {
    };

    struct MarshalAsAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MarshalAsAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MarshalAsAttribute__VTable vtable;
    };

    struct ParameterInfo_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetCustomAttributes;
        VirtualInvokeData GetCustomAttributes_1;
        VirtualInvokeData IsDefined;
        VirtualInvokeData GetRealObject;
        VirtualInvokeData get_ParameterType;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_Member;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_Position;
        VirtualInvokeData get_DefaultValue;
        VirtualInvokeData GetCustomAttributes_2;
        VirtualInvokeData GetCustomAttributes_3;
        VirtualInvokeData IsDefined_1;
    };

} // namespace app
