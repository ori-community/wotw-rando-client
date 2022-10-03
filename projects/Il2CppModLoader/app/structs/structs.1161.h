namespace app {
    struct Enumerable_SkipIterator_d_31_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TSource__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_TSource__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct Enumerable_SkipIterator_d_31_1_System_Object___StaticFields {
    };

    struct Enumerable_SkipIterator_d_31_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enumerable_SkipIterator_d_31_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enumerable_SkipIterator_d_31_1_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) Enumerable_ConcatIterator_d_59_1_System_Object___Fields {
        int32_t __1__state;
        struct Object* __2__current;
        int32_t __l__initialThreadId;
        struct IEnumerable_1_System_Object_* first;
        struct IEnumerable_1_System_Object_* __3__first;
        struct IEnumerable_1_System_Object_* second;
        struct IEnumerable_1_System_Object_* __3__second;
        struct IEnumerator_1_System_Object_* __7__wrap1;
    };

    struct Enumerable_ConcatIterator_d_59_1_System_Object_ {
        struct Enumerable_ConcatIterator_d_59_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct Enumerable_ConcatIterator_d_59_1_System_Object___Fields fields;
    };

    struct Enumerable_ConcatIterator_d_59_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TSource__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_TSource__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct Enumerable_ConcatIterator_d_59_1_System_Object___StaticFields {
    };

    struct Enumerable_ConcatIterator_d_59_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enumerable_ConcatIterator_d_59_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enumerable_ConcatIterator_d_59_1_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) Enumerable_DistinctIterator_d_68_1_System_Object___Fields {
        int32_t __1__state;
        struct Object* __2__current;
        int32_t __l__initialThreadId;
        struct IEqualityComparer_1_System_Object_* comparer;
        struct IEqualityComparer_1_System_Object_* __3__comparer;
        struct IEnumerable_1_System_Object_* source;
        struct IEnumerable_1_System_Object_* __3__source;
        struct Set_1_System_Object_* _set_5__1;
        struct IEnumerator_1_System_Object_* __7__wrap1;
    };

    struct Enumerable_DistinctIterator_d_68_1_System_Object_ {
        struct Enumerable_DistinctIterator_d_68_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct Enumerable_DistinctIterator_d_68_1_System_Object___Fields fields;
    };

    struct __declspec(align(8)) Set_1_System_Object___Fields {
        struct Int32__Array* buckets;
        struct Set_1_TElement_Slot_System_Object___Array* slots;
        int32_t count;
        int32_t freeList;
        struct IEqualityComparer_1_System_Object_* comparer;
    };

    struct Set_1_System_Object_ {
        struct Set_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct Set_1_System_Object___Fields fields;
    };

    struct Set_1_TElement_Slot_System_Object_ {
        int32_t hashCode;
        struct Object* value;
        int32_t next;
    };

    struct Set_1_TElement_Slot_System_Object___Boxed {
        struct Set_1_TElement_Slot_System_Object___Class* klass;
        MonitorData* monitor;
        struct Set_1_TElement_Slot_System_Object_ fields;
    };

    struct Set_1_TElement_Slot_System_Object___Array {
        struct Set_1_TElement_Slot_System_Object___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Set_1_TElement_Slot_System_Object_ vector[32];
    };

    struct Set_1_TElement_Slot_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Set_1_TElement_Slot_System_Object___StaticFields {
    };

    struct Set_1_TElement_Slot_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Set_1_TElement_Slot_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Set_1_TElement_Slot_System_Object___VTable vtable;
    };

    struct Set_1_TElement_Slot_System_Object___Array__VTable {
    };

    struct Set_1_TElement_Slot_System_Object___Array__StaticFields {
    };

    struct Set_1_TElement_Slot_System_Object___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Set_1_TElement_Slot_System_Object___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Set_1_TElement_Slot_System_Object___Array__VTable vtable;
    };

    struct Set_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Set_1_System_Object___StaticFields {
    };

    struct Set_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Set_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Set_1_System_Object___VTable vtable;
    };

    struct Enumerable_DistinctIterator_d_68_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TSource__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_TSource__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct Enumerable_DistinctIterator_d_68_1_System_Object___StaticFields {
    };

    struct Enumerable_DistinctIterator_d_68_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enumerable_DistinctIterator_d_68_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enumerable_DistinctIterator_d_68_1_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) Enumerable_UnionIterator_d_71_1_System_Object___Fields {
        int32_t __1__state;
        struct Object* __2__current;
        int32_t __l__initialThreadId;
        struct IEqualityComparer_1_System_Object_* comparer;
        struct IEqualityComparer_1_System_Object_* __3__comparer;
        struct IEnumerable_1_System_Object_* first;
        struct IEnumerable_1_System_Object_* __3__first;
        struct Set_1_System_Object_* _set_5__1;
        struct IEnumerable_1_System_Object_* second;
        struct IEnumerable_1_System_Object_* __3__second;
        struct IEnumerator_1_System_Object_* __7__wrap1;
    };

    struct Enumerable_UnionIterator_d_71_1_System_Object_ {
        struct Enumerable_UnionIterator_d_71_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct Enumerable_UnionIterator_d_71_1_System_Object___Fields fields;
    };

    struct Enumerable_UnionIterator_d_71_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TSource__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_TSource__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct Enumerable_UnionIterator_d_71_1_System_Object___StaticFields {
    };

    struct Enumerable_UnionIterator_d_71_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enumerable_UnionIterator_d_71_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enumerable_UnionIterator_d_71_1_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) Enumerable_ExceptIterator_d_77_1_System_Object___Fields {
        int32_t __1__state;
        struct Object* __2__current;
        int32_t __l__initialThreadId;
        struct IEqualityComparer_1_System_Object_* comparer;
        struct IEqualityComparer_1_System_Object_* __3__comparer;
        struct IEnumerable_1_System_Object_* second;
        struct IEnumerable_1_System_Object_* __3__second;
        struct IEnumerable_1_System_Object_* first;
        struct IEnumerable_1_System_Object_* __3__first;
        struct Set_1_System_Object_* _set_5__1;
        struct IEnumerator_1_System_Object_* __7__wrap1;
    };

    struct Enumerable_ExceptIterator_d_77_1_System_Object_ {
        struct Enumerable_ExceptIterator_d_77_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct Enumerable_ExceptIterator_d_77_1_System_Object___Fields fields;
    };

    struct Enumerable_ExceptIterator_d_77_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TSource__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_TSource__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct Enumerable_ExceptIterator_d_77_1_System_Object___StaticFields {
    };

    struct Enumerable_ExceptIterator_d_77_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enumerable_ExceptIterator_d_77_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enumerable_ExceptIterator_d_77_1_System_Object___VTable vtable;
    };

    struct Buffer_1_System_Object_ {
        struct Object__Array* items;
        int32_t count;
    };

    struct Buffer_1_System_Object___Boxed {
        struct Buffer_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct Buffer_1_System_Object_ fields;
    };

    struct __declspec(align(8)) Enumerable_ReverseIterator_d_79_1_System_Object___Fields {
        int32_t __1__state;
        struct Object* __2__current;
        int32_t __l__initialThreadId;
        struct IEnumerable_1_System_Object_* source;
        struct IEnumerable_1_System_Object_* __3__source;
        struct Buffer_1_System_Object_ _buffer_5__1;
        int32_t _i_5__2;
    };

    struct Enumerable_ReverseIterator_d_79_1_System_Object_ {
        struct Enumerable_ReverseIterator_d_79_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct Enumerable_ReverseIterator_d_79_1_System_Object___Fields fields;
    };

    struct Buffer_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Buffer_1_System_Object___StaticFields {
    };

    struct Buffer_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Buffer_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Buffer_1_System_Object___VTable vtable;
    };

    struct Enumerable_ReverseIterator_d_79_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TSource__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_TSource__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct Enumerable_ReverseIterator_d_79_1_System_Object___StaticFields {
    };

    struct Enumerable_ReverseIterator_d_79_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enumerable_ReverseIterator_d_79_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enumerable_ReverseIterator_d_79_1_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) Enumerable_CastIterator_d_99_1_System_Object___Fields {
        int32_t __1__state;
        struct Object* __2__current;
        int32_t __l__initialThreadId;
        struct IEnumerable* source;
        struct IEnumerable* __3__source;
        struct IEnumerator* __7__wrap1;
    };

    struct Enumerable_CastIterator_d_99_1_System_Object_ {
        struct Enumerable_CastIterator_d_99_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct Enumerable_CastIterator_d_99_1_System_Object___Fields fields;
    };

    struct Enumerable_CastIterator_d_99_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TResult__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_TResult__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct Enumerable_CastIterator_d_99_1_System_Object___StaticFields {
    };

    struct Enumerable_CastIterator_d_99_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enumerable_CastIterator_d_99_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enumerable_CastIterator_d_99_1_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) Enumerable_RepeatIterator_d_117_1_System_Object___Fields {
        int32_t __1__state;
        struct Object* __2__current;
        int32_t __l__initialThreadId;
        struct Object* element;
        struct Object* __3__element;
        int32_t _i_5__1;
        int32_t count;
        int32_t __3__count;
    };

    struct Enumerable_RepeatIterator_d_117_1_System_Object_ {
        struct Enumerable_RepeatIterator_d_117_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct Enumerable_RepeatIterator_d_117_1_System_Object___Fields fields;
    };

    struct Enumerable_RepeatIterator_d_117_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_TResult__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_TResult__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct Enumerable_RepeatIterator_d_117_1_System_Object___StaticFields {
    };

    struct Enumerable_RepeatIterator_d_117_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enumerable_RepeatIterator_d_117_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enumerable_RepeatIterator_d_117_1_System_Object___VTable vtable;
    };

    struct IdentityFunction_1_TElement_c_System_Object_ {
        struct IdentityFunction_1_TElement_c_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct IdentityFunction_1_TElement_c_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IdentityFunction_1_TElement_c_System_Object___StaticFields {
        struct IdentityFunction_1_TElement_c_System_Object_* __9;
        struct Func_2_Object_Object_* __9__1_0;
    };

    struct IdentityFunction_1_TElement_c_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IdentityFunction_1_TElement_c_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IdentityFunction_1_TElement_c_System_Object___VTable vtable;
    };

    struct IGrouping_2_System_Object_System_Object_ {
        struct IGrouping_2_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct IGrouping_2_System_Object_System_Object___VTable {
        VirtualInvokeData get_Key;
    };

    struct IGrouping_2_System_Object_System_Object___StaticFields {
    };

    struct IGrouping_2_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IGrouping_2_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IGrouping_2_System_Object_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) Lookup_2_System_Object_System_Object___Fields {
        struct IEqualityComparer_1_System_Object_* comparer;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array* groupings;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_* lastGrouping;
        int32_t count;
    };

    struct Lookup_2_System_Object_System_Object_ {
        struct Lookup_2_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
        struct Lookup_2_System_Object_System_Object___Fields fields;
    };

    struct __declspec(align(8)) Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Fields {
        struct Object* key;
        int32_t hashCode;
        struct Object__Array* elements;
        int32_t count;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_* hashNext;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_* next;
    };

    struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ {
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Fields fields;
    };

    struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array {
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_* vector[32];
    };

    struct IEnumerator_1_System_Linq_IGrouping_2_ {
        struct IEnumerator_1_System_Linq_IGrouping_2___Class* klass;
        MonitorData* monitor;
    };

    struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Key;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IList_TElement__get_Item;
        VirtualInvokeData System_Collections_Generic_IList_TElement__set_Item;
        VirtualInvokeData System_Collections_Generic_IList_TElement__IndexOf;
        VirtualInvokeData System_Collections_Generic_IList_TElement__Insert;
        VirtualInvokeData System_Collections_Generic_IList_TElement__RemoveAt;
        VirtualInvokeData System_Collections_Generic_ICollection_TElement__get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_TElement__get_IsReadOnly;
        VirtualInvokeData System_Collections_Generic_ICollection_TElement__Add;
        VirtualInvokeData System_Collections_Generic_ICollection_TElement__Clear;
        VirtualInvokeData System_Collections_Generic_ICollection_TElement__Contains;
        VirtualInvokeData System_Collections_Generic_ICollection_TElement__CopyTo;
        VirtualInvokeData System_Collections_Generic_ICollection_TElement__Remove;
    };

    struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___StaticFields {
    };

    struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___VTable vtable;
    };

    struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array__VTable {
    };

    struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array__StaticFields {
    };

    struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object___Array__VTable vtable;
    };

    struct IEnumerator_1_System_Linq_IGrouping_2___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_Linq_IGrouping_2___StaticFields {
    };

    struct IEnumerator_1_System_Linq_IGrouping_2___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_Linq_IGrouping_2___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_Linq_IGrouping_2___VTable vtable;
    };

    struct Lookup_2_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    };

    struct Lookup_2_System_Object_System_Object___StaticFields {
    };

    struct Lookup_2_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Lookup_2_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Lookup_2_System_Object_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) Lookup_2_TKey_TElement_Grouping_TKey_TElement_GetEnumerator_d_7_System_Object_System_Object___Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_* __4__this;
        int32_t _i_5__1;
    };

    struct Lookup_2_TKey_TElement_Grouping_TKey_TElement_GetEnumerator_d_7_System_Object_System_Object_ {
        struct Lookup_2_TKey_TElement_Grouping_TKey_TElement_GetEnumerator_d_7_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
        struct Lookup_2_TKey_TElement_Grouping_TKey_TElement_GetEnumerator_d_7_System_Object_System_Object___Fields fields;
    };

    struct Lookup_2_TKey_TElement_Grouping_TKey_TElement_GetEnumerator_d_7_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_TElement__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct Lookup_2_TKey_TElement_Grouping_TKey_TElement_GetEnumerator_d_7_System_Object_System_Object___StaticFields {
    };

    struct Lookup_2_TKey_TElement_Grouping_TKey_TElement_GetEnumerator_d_7_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Lookup_2_TKey_TElement_Grouping_TKey_TElement_GetEnumerator_d_7_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Lookup_2_TKey_TElement_Grouping_TKey_TElement_GetEnumerator_d_7_System_Object_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) Lookup_2_TKey_TElement_GetEnumerator_d_12_System_Object_System_Object___Fields {
        int32_t __1__state;
        struct IGrouping_2_System_Object_System_Object_* __2__current;
        struct Lookup_2_System_Object_System_Object_* __4__this;
        struct Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_* _g_5__1;
    };

    struct Lookup_2_TKey_TElement_GetEnumerator_d_12_System_Object_System_Object_ {
        struct Lookup_2_TKey_TElement_GetEnumerator_d_12_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
        struct Lookup_2_TKey_TElement_GetEnumerator_d_12_System_Object_System_Object___Fields fields;
    };

    struct Lookup_2_TKey_TElement_GetEnumerator_d_12_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TElement___get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct Lookup_2_TKey_TElement_GetEnumerator_d_12_System_Object_System_Object___StaticFields {
    };

    struct Lookup_2_TKey_TElement_GetEnumerator_d_12_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Lookup_2_TKey_TElement_GetEnumerator_d_12_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Lookup_2_TKey_TElement_GetEnumerator_d_12_System_Object_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) GroupedEnumerable_3_System_Object_System_Object_System_Object___Fields {
        struct IEnumerable_1_System_Object_* source;
        struct Func_2_Object_Object_* keySelector;
        struct Func_2_Object_Object_* elementSelector;
        struct IEqualityComparer_1_System_Object_* comparer;
    };

    struct GroupedEnumerable_3_System_Object_System_Object_System_Object_ {
        struct GroupedEnumerable_3_System_Object_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
        struct GroupedEnumerable_3_System_Object_System_Object_System_Object___Fields fields;
    };

    struct GroupedEnumerable_3_System_Object_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    };

    struct GroupedEnumerable_3_System_Object_System_Object_System_Object___StaticFields {
    };

    struct GroupedEnumerable_3_System_Object_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GroupedEnumerable_3_System_Object_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GroupedEnumerable_3_System_Object_System_Object_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) OrderedEnumerable_1_System_Object___Fields {
        struct IEnumerable_1_System_Object_* source;
    };

    struct OrderedEnumerable_1_System_Object_ {
        struct OrderedEnumerable_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct OrderedEnumerable_1_System_Object___Fields fields;
    };

    struct OrderedEnumerable_2_System_Object_System_Object___Fields {
        struct OrderedEnumerable_1_System_Object___Fields _;
        struct OrderedEnumerable_1_System_Object_* parent;
        struct Func_2_Object_Object_* keySelector;
        struct IComparer_1_System_Object_* comparer;
        bool descending;
    };

    struct OrderedEnumerable_2_System_Object_System_Object_ {
        struct OrderedEnumerable_2_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
        struct OrderedEnumerable_2_System_Object_System_Object___Fields fields;
    };

    struct EnumerableSorter_1_System_Object_ {
        struct EnumerableSorter_1_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) EnumerableSorter_2_System_Object_System_Object___Fields {
        struct Func_2_Object_Object_* keySelector;
        struct IComparer_1_System_Object_* comparer;
        bool descending;
        struct EnumerableSorter_1_System_Object_* next;
        struct Object__Array* keys;
    };

    struct EnumerableSorter_2_System_Object_System_Object_ {
        struct EnumerableSorter_2_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
        struct EnumerableSorter_2_System_Object_System_Object___Fields fields;
    };

    struct EnumerableSorter_2_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ComputeKeys;
        VirtualInvokeData CompareKeys;
    };

    struct EnumerableSorter_2_System_Object_System_Object___StaticFields {
    };

    struct EnumerableSorter_2_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnumerableSorter_2_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnumerableSorter_2_System_Object_System_Object___VTable vtable;
    };

    struct EnumerableSorter_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
    };

    struct EnumerableSorter_1_System_Object___StaticFields {
    };

    struct EnumerableSorter_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnumerableSorter_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnumerableSorter_1_System_Object___VTable vtable;
    };

    struct OrderedEnumerable_2_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData GetEnumerableSorter;
    };

    struct OrderedEnumerable_2_System_Object_System_Object___StaticFields {
    };

    struct OrderedEnumerable_2_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OrderedEnumerable_2_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OrderedEnumerable_2_System_Object_System_Object___VTable vtable;
    };

    struct OrderedEnumerable_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData __unknown;
    };

    struct OrderedEnumerable_1_System_Object___StaticFields {
    };

    struct OrderedEnumerable_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OrderedEnumerable_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OrderedEnumerable_1_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) OrderedEnumerable_1_TElement_GetEnumerator_d_1_System_Object___Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct OrderedEnumerable_1_System_Object_* __4__this;
        struct Buffer_1_System_Object_ _buffer_5__1;
        struct Int32__Array* _map_5__2;
        int32_t _i_5__3;
    };

    struct OrderedEnumerable_1_TElement_GetEnumerator_d_1_System_Object_ {
        struct OrderedEnumerable_1_TElement_GetEnumerator_d_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct OrderedEnumerable_1_TElement_GetEnumerator_d_1_System_Object___Fields fields;
    };

    struct OrderedEnumerable_1_TElement_GetEnumerator_d_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_TElement__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct OrderedEnumerable_1_TElement_GetEnumerator_d_1_System_Object___StaticFields {
    };

    struct OrderedEnumerable_1_TElement_GetEnumerator_d_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OrderedEnumerable_1_TElement_GetEnumerator_d_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OrderedEnumerable_1_TElement_GetEnumerator_d_1_System_Object___VTable vtable;
    };

    struct Expression_1_System_Object___Fields {
        struct LambdaExpression__Fields _;
    };

    struct Expression_1_System_Object_ {
        struct Expression_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct Expression_1_System_Object___Fields fields;
    };

    struct Expression_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_NodeType;
        VirtualInvokeData get_Type;
        VirtualInvokeData get_CanReduce;
        VirtualInvokeData Reduce;
        VirtualInvokeData VisitChildren;
        VirtualInvokeData Accept;
        VirtualInvokeData System_Linq_Expressions_IParameterProvider_GetParameter;
        VirtualInvokeData System_Linq_Expressions_IParameterProvider_get_ParameterCount;
        VirtualInvokeData get_TypeCore;
        VirtualInvokeData get_PublicType;
        VirtualInvokeData get_NameCore;
        VirtualInvokeData get_TailCallCore;
        VirtualInvokeData GetOrMakeParameters;
        VirtualInvokeData GetParameter;
        VirtualInvokeData get_ParameterCount;
        VirtualInvokeData Rewrite;
    };

    struct Expression_1_System_Object___StaticFields {
    };

    struct Expression_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Expression_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Expression_1_System_Object___VTable vtable;
    };

    struct ArrayBuilder_1_System_Object_ {
        struct Object__Array* _array;
        int32_t _count;
    };

    struct ArrayBuilder_1_System_Object___Boxed {
        struct ArrayBuilder_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct ArrayBuilder_1_System_Object_ fields;
    };

    struct ArrayBuilder_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ArrayBuilder_1_System_Object___StaticFields {
    };

    struct ArrayBuilder_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ArrayBuilder_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ArrayBuilder_1_System_Object___VTable vtable;
    };

    struct Dictionary_2_System_Object_System_Int32__1__VTable {
    };

    struct Dictionary_2_System_Object_System_Int32__1__StaticFields {
    };

    struct Dictionary_2_System_Object_System_Int32__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Object_System_Int32__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Object_System_Int32__1__VTable vtable;
    };

    struct Expression0_1_System_Object___Fields {
        struct Expression_1_System_Object___Fields _;
    };

    struct Expression0_1_System_Object_ {
        struct Expression0_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct Expression0_1_System_Object___Fields fields;
    };

    struct Expression0_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_NodeType;
        VirtualInvokeData get_Type;
        VirtualInvokeData get_CanReduce;
        VirtualInvokeData Reduce;
        VirtualInvokeData VisitChildren;
        VirtualInvokeData Accept;
        VirtualInvokeData System_Linq_Expressions_IParameterProvider_GetParameter;
        VirtualInvokeData System_Linq_Expressions_IParameterProvider_get_ParameterCount;
        VirtualInvokeData get_TypeCore;
        VirtualInvokeData get_PublicType;
        VirtualInvokeData get_NameCore;
        VirtualInvokeData get_TailCallCore;
        VirtualInvokeData GetOrMakeParameters;
        VirtualInvokeData GetParameter;
        VirtualInvokeData get_ParameterCount;
        VirtualInvokeData Rewrite;
    };

} // namespace app
