namespace app {
    struct __declspec(align(8)) FastHashSet_1_System_Object___Fields {
        int32_t currentIndexIntoBucketsSizeArray;
        int32_t bucketsModSize;
        int32_t resizeBucketsCountThreshold;
        int32_t count;
        int32_t nextBlankIndex;
        int32_t firstBlankAtEndIndex;
        struct IEqualityComparer_1_System_Object_* comparer;
        struct Int32__Array* buckets;
        struct FastHashSet_1_T_TNode_System_Object___Array* slots;
        struct Object__Array* noHashArray;
    };

    struct FastHashSet_1_System_Object_ {
        struct FastHashSet_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct FastHashSet_1_System_Object___Fields fields;
    };

    struct FastHashSet_1_T_TNode_System_Object_ {
        int32_t hashOrNextIndexForBlanks;
        int32_t nextIndex;
        struct Object* item;
    };

    struct FastHashSet_1_T_TNode_System_Object___Boxed {
        struct FastHashSet_1_T_TNode_System_Object___Class* klass;
        MonitorData* monitor;
        struct FastHashSet_1_T_TNode_System_Object_ fields;
    };

    struct FastHashSet_1_T_TNode_System_Object___Array {
        struct FastHashSet_1_T_TNode_System_Object___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FastHashSet_1_T_TNode_System_Object_ vector[32];
    };

    struct FastHashSet_1_T_TNode_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FastHashSet_1_T_TNode_System_Object___StaticFields {
    };

    struct FastHashSet_1_T_TNode_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FastHashSet_1_T_TNode_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FastHashSet_1_T_TNode_System_Object___VTable vtable;
    };

    struct FastHashSet_1_T_TNode_System_Object___Array__VTable {
    };

    struct FastHashSet_1_T_TNode_System_Object___Array__StaticFields {
    };

    struct FastHashSet_1_T_TNode_System_Object___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FastHashSet_1_T_TNode_System_Object___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FastHashSet_1_T_TNode_System_Object___Array__VTable vtable;
    };

    struct FastHashSet_1_System_Object___VTable {
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
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData Add;
        VirtualInvokeData UnionWith;
        VirtualInvokeData ExceptWith;
        VirtualInvokeData IntersectWith;
        VirtualInvokeData IsProperSubsetOf;
        VirtualInvokeData IsSubsetOf;
        VirtualInvokeData IsProperSupersetOf;
        VirtualInvokeData IsSupersetOf;
        VirtualInvokeData Overlaps;
        VirtualInvokeData SetEquals;
        VirtualInvokeData SymmetricExceptWith;
    };

    struct FastHashSet_1_System_Object___StaticFields {
        struct Int32__Array* bucketsSizeArray;
        struct Int32__Array* bucketsSizeArrayForCacheOptimization;
    };

    struct FastHashSet_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FastHashSet_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FastHashSet_1_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) FastHashSet_1_T_FoundType_System_Object___Fields {
        int32_t value__;
    };

    struct FastHashSet_1_T_FoundType_System_Object_ {
        struct FastHashSet_1_T_FoundType_System_Object___Class* klass;
        MonitorData* monitor;
        struct FastHashSet_1_T_FoundType_System_Object___Fields fields;
    };

    struct FastHashSet_1_T_FoundType_System_Object___VTable {
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

    struct FastHashSet_1_T_FoundType_System_Object___StaticFields {
    };

    struct FastHashSet_1_T_FoundType_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FastHashSet_1_T_FoundType_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FastHashSet_1_T_FoundType_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) List_1_Motvin_Collections_ChainLevelAndCount___Fields {
        struct ChainLevelAndCount__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Motvin_Collections_ChainLevelAndCount_ {
        struct List_1_Motvin_Collections_ChainLevelAndCount___Class* klass;
        MonitorData* monitor;
        struct List_1_Motvin_Collections_ChainLevelAndCount___Fields fields;
    };

    struct ChainLevelAndCount__Array {
        struct ChainLevelAndCount__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ChainLevelAndCount vector[32];
    };

    struct IEnumerator_1_Motvin_Collections_ChainLevelAndCount_ {
        struct IEnumerator_1_Motvin_Collections_ChainLevelAndCount___Class* klass;
        MonitorData* monitor;
    };

    struct ChainLevelAndCount__Array__VTable {
    };

    struct ChainLevelAndCount__Array__StaticFields {
    };

    struct ChainLevelAndCount__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChainLevelAndCount__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChainLevelAndCount__Array__VTable vtable;
    };

    struct IEnumerator_1_Motvin_Collections_ChainLevelAndCount___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Motvin_Collections_ChainLevelAndCount___StaticFields {
    };

    struct IEnumerator_1_Motvin_Collections_ChainLevelAndCount___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Motvin_Collections_ChainLevelAndCount___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Motvin_Collections_ChainLevelAndCount___VTable vtable;
    };

    struct List_1_Motvin_Collections_ChainLevelAndCount___VTable {
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

    struct List_1_Motvin_Collections_ChainLevelAndCount___StaticFields {
        struct ChainLevelAndCount__Array* _emptyArray;
    };

    struct List_1_Motvin_Collections_ChainLevelAndCount___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Motvin_Collections_ChainLevelAndCount___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Motvin_Collections_ChainLevelAndCount___VTable vtable;
    };

    struct IEqualityComparer_1_Motvin_Collections_FastHashSet_1_ {
        struct IEqualityComparer_1_Motvin_Collections_FastHashSet_1___Class* klass;
        MonitorData* monitor;
    };

    struct IEqualityComparer_1_Motvin_Collections_FastHashSet_1___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_Motvin_Collections_FastHashSet_1___StaticFields {
    };

    struct IEqualityComparer_1_Motvin_Collections_FastHashSet_1___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_Motvin_Collections_FastHashSet_1___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_Motvin_Collections_FastHashSet_1___VTable vtable;
    };

    struct FastHashSet_1_T_FastHashSetEqualityComparer_System_Object_ {
        struct FastHashSet_1_T_FastHashSetEqualityComparer_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct FastHashSet_1_T_FastHashSetEqualityComparer_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetHashCode_1;
    };

    struct FastHashSet_1_T_FastHashSetEqualityComparer_System_Object___StaticFields {
    };

    struct FastHashSet_1_T_FastHashSetEqualityComparer_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FastHashSet_1_T_FastHashSetEqualityComparer_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FastHashSet_1_T_FastHashSetEqualityComparer_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object___Fields {
        struct FastHashSet_1_System_Object_* set;
        int32_t currentIndex;
    };

    struct FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object_ {
        struct FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
        struct FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object___Fields fields;
    };

    struct FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData Reset;
    };

    struct FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object___StaticFields {
    };

    struct FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FastHashSet_1_T_FastHashSetEnumerator_1_System_Object_System_Object___VTable vtable;
    };

    struct IMoonTweenableBySpeed_1_System_Object_ {
        struct IMoonTweenableBySpeed_1_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct IMoonTweenableBySpeed_1_System_Object___VTable {
        VirtualInvokeData Update;
        VirtualInvokeData HasFinished;
    };

    struct IMoonTweenableBySpeed_1_System_Object___StaticFields {
    };

    struct IMoonTweenableBySpeed_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonTweenableBySpeed_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonTweenableBySpeed_1_System_Object___VTable vtable;
    };

    struct IMoonTweenableLerp_1_System_Object_ {
        struct IMoonTweenableLerp_1_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct IMoonTweenableLerp_1_System_Object___VTable {
        VirtualInvokeData Update;
        VirtualInvokeData HasFinished;
    };

    struct IMoonTweenableLerp_1_System_Object___StaticFields {
    };

    struct IMoonTweenableLerp_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IMoonTweenableLerp_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IMoonTweenableLerp_1_System_Object___VTable vtable;
    };

    struct HashSet_1_System_Object__1__VTable {
    };

    struct HashSet_1_System_Object__1__StaticFields {
    };

    struct HashSet_1_System_Object__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashSet_1_System_Object__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HashSet_1_System_Object__1__VTable vtable;
    };

    struct IArrayPool_1_System_Object_ {
        struct IArrayPool_1_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct IArrayPool_1_System_Object___VTable {
        VirtualInvokeData Rent;
        VirtualInvokeData Return;
    };

    struct IArrayPool_1_System_Object___StaticFields {
    };

    struct IArrayPool_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IArrayPool_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IArrayPool_1_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) BidirectionalDictionary_2_System_Object_System_Object__1__Fields {
        struct IDictionary_2_System_Object_System_Object_* _firstToSecond;
        struct IDictionary_2_System_Object_System_Object_* _secondToFirst;
        struct String* _duplicateFirstErrorMessage;
        struct String* _duplicateSecondErrorMessage;
    };

    struct BidirectionalDictionary_2_System_Object_System_Object__1 {
        struct BidirectionalDictionary_2_System_Object_System_Object__1__Class* klass;
        MonitorData* monitor;
        struct BidirectionalDictionary_2_System_Object_System_Object__1__Fields fields;
    };

    struct BidirectionalDictionary_2_System_Object_System_Object__1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BidirectionalDictionary_2_System_Object_System_Object__1__StaticFields {
    };

    struct BidirectionalDictionary_2_System_Object_System_Object__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BidirectionalDictionary_2_System_Object_System_Object__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BidirectionalDictionary_2_System_Object_System_Object__1__VTable vtable;
    };

    struct __declspec(align(8)) CollectionWrapper_1_System_Object___Fields {
        struct IList* _list;
        struct ICollection_1_System_Object_* _genericCollection;
        struct Object* _syncRoot;
    };

    struct CollectionWrapper_1_System_Object_ {
        struct CollectionWrapper_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct CollectionWrapper_1_System_Object___Fields fields;
    };

    struct CollectionWrapper_1_System_Object___VTable {
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
        VirtualInvokeData get_UnderlyingCollection;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear_1;
        VirtualInvokeData get_IsReadOnly_1;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData System_Collections_IList_RemoveAt;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData Add_1;
        VirtualInvokeData Clear_2;
        VirtualInvokeData Contains_1;
        VirtualInvokeData CopyTo_1;
        VirtualInvokeData get_Count_2;
        VirtualInvokeData get_IsReadOnly_2;
        VirtualInvokeData Remove_1;
        VirtualInvokeData GetEnumerator_1;
    };

    struct CollectionWrapper_1_System_Object___StaticFields {
    };

    struct CollectionWrapper_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollectionWrapper_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollectionWrapper_1_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) DictionaryWrapper_2_System_Object_System_Object___Fields {
        struct IDictionary* _dictionary;
        struct IDictionary_2_System_Object_System_Object_* _genericDictionary;
        struct IReadOnlyDictionary_2_System_Object_System_Object_* _readOnlyDictionary;
        struct Object* _syncRoot;
    };

    struct DictionaryWrapper_2_System_Object_System_Object_ {
        struct DictionaryWrapper_2_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
        struct DictionaryWrapper_2_System_Object_System_Object___Fields fields;
    };

    struct DictionaryWrapper_2_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData get_Keys;
        VirtualInvokeData get_Values;
        VirtualInvokeData ContainsKey;
        VirtualInvokeData Add;
        VirtualInvokeData Remove;
        VirtualInvokeData TryGetValue;
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add_1;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove_1;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData get_UnderlyingDictionary;
        VirtualInvokeData System_Collections_IDictionary_get_Item;
        VirtualInvokeData System_Collections_IDictionary_set_Item;
        VirtualInvokeData System_Collections_IDictionary_get_Keys;
        VirtualInvokeData System_Collections_IDictionary_get_Values;
        VirtualInvokeData System_Collections_IDictionary_Contains;
        VirtualInvokeData System_Collections_IDictionary_Add;
        VirtualInvokeData Clear_1;
        VirtualInvokeData get_IsReadOnly_1;
        VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
        VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
        VirtualInvokeData Remove_2;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    };

    struct DictionaryWrapper_2_System_Object_System_Object___StaticFields {
    };

    struct DictionaryWrapper_2_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DictionaryWrapper_2_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DictionaryWrapper_2_System_Object_System_Object___VTable vtable;
    };

    struct DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_ {
        struct IEnumerator_1_KeyValuePair_2_System_Object_System_Object_* _e;
    };

    struct DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___Boxed {
        struct DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
        struct DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object_ fields;
    };

    struct DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Key;
        VirtualInvokeData get_Value;
        VirtualInvokeData get_Entry;
        VirtualInvokeData MoveNext;
        VirtualInvokeData get_Current;
        VirtualInvokeData Reset;
    };

    struct DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___StaticFields {
    };

    struct DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DictionaryWrapper_2_TKey_TValue_DictionaryEnumerator_2_System_Object_System_Object_System_Object_System_Object___VTable vtable;
    };

    struct DictionaryWrapper_2_TKey_TValue_c_System_Object_System_Object_ {
        struct DictionaryWrapper_2_TKey_TValue_c_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_ {
        struct Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2___Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2___Fields fields;
    };

    struct Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2___VTable {
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

    struct Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2___StaticFields {
    };

    struct Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2___VTable vtable;
    };

    struct DictionaryWrapper_2_TKey_TValue_c_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DictionaryWrapper_2_TKey_TValue_c_System_Object_System_Object___StaticFields {
        struct DictionaryWrapper_2_TKey_TValue_c_System_Object_System_Object_* __9;
        struct Func_2_System_Collections_DictionaryEntry_System_Collections_Generic_KeyValuePair_2_* __9__27_0;
    };

    struct DictionaryWrapper_2_TKey_TValue_c_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DictionaryWrapper_2_TKey_TValue_c_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DictionaryWrapper_2_TKey_TValue_c_System_Object_System_Object___VTable vtable;
    };

    struct DynamicProxy_1_System_Object_ {
        struct DynamicProxy_1_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct DynamicProxy_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetDynamicMemberNames;
    };

    struct DynamicProxy_1_System_Object___StaticFields {
    };

    struct DynamicProxy_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicProxy_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicProxy_1_System_Object___VTable vtable;
    };

    struct DynamicProxyMetaObject_1_System_Object___Fields {
        struct DynamicMetaObject__Fields _;
        struct DynamicProxy_1_System_Object_* _proxy;
    };

    struct DynamicProxyMetaObject_1_System_Object_ {
        struct DynamicProxyMetaObject_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct DynamicProxyMetaObject_1_System_Object___Fields fields;
    };

    struct DynamicProxyMetaObject_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData BindGetMember;
        VirtualInvokeData BindSetMember;
        VirtualInvokeData GetDynamicMemberNames;
    };

    struct DynamicProxyMetaObject_1_System_Object___StaticFields {
    };

    struct DynamicProxyMetaObject_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicProxyMetaObject_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicProxyMetaObject_1_System_Object___VTable vtable;
    };

    struct DynamicProxyMetaObject_1_T_Fallback_System_Object___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DynamicProxyMetaObject_1_T_Fallback_System_Object_ {
        struct DynamicProxyMetaObject_1_T_Fallback_System_Object___Class* klass;
        MonitorData* monitor;
        struct DynamicProxyMetaObject_1_T_Fallback_System_Object___Fields fields;
    };

    struct DynamicProxyMetaObject_1_T_Fallback_System_Object___VTable {
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

    struct DynamicProxyMetaObject_1_T_Fallback_System_Object___StaticFields {
    };

    struct DynamicProxyMetaObject_1_T_Fallback_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicProxyMetaObject_1_T_Fallback_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicProxyMetaObject_1_T_Fallback_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) DynamicProxyMetaObject_1_T_c_DisplayClass3_0_System_Object___Fields {
        struct GetMemberBinder* binder;
        struct DynamicProxyMetaObject_1_System_Object_* __4__this;
    };

    struct DynamicProxyMetaObject_1_T_c_DisplayClass3_0_System_Object_ {
        struct DynamicProxyMetaObject_1_T_c_DisplayClass3_0_System_Object___Class* klass;
        MonitorData* monitor;
        struct DynamicProxyMetaObject_1_T_c_DisplayClass3_0_System_Object___Fields fields;
    };

    struct DynamicProxyMetaObject_1_T_c_DisplayClass3_0_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DynamicProxyMetaObject_1_T_c_DisplayClass3_0_System_Object___StaticFields {
    };

    struct DynamicProxyMetaObject_1_T_c_DisplayClass3_0_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicProxyMetaObject_1_T_c_DisplayClass3_0_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicProxyMetaObject_1_T_c_DisplayClass3_0_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) DynamicProxyMetaObject_1_T_c_DisplayClass4_0_System_Object___Fields {
        struct SetMemberBinder* binder;
        struct DynamicProxyMetaObject_1_System_Object_* __4__this;
        struct DynamicMetaObject* value;
    };

    struct DynamicProxyMetaObject_1_T_c_DisplayClass4_0_System_Object_ {
        struct DynamicProxyMetaObject_1_T_c_DisplayClass4_0_System_Object___Class* klass;
        MonitorData* monitor;
        struct DynamicProxyMetaObject_1_T_c_DisplayClass4_0_System_Object___Fields fields;
    };

    struct DynamicProxyMetaObject_1_T_c_DisplayClass4_0_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DynamicProxyMetaObject_1_T_c_DisplayClass4_0_System_Object___StaticFields {
    };

    struct DynamicProxyMetaObject_1_T_c_DisplayClass4_0_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicProxyMetaObject_1_T_c_DisplayClass4_0_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicProxyMetaObject_1_T_c_DisplayClass4_0_System_Object___VTable vtable;
    };

    struct DynamicProxyMetaObject_1_T_c_System_Object_ {
        struct DynamicProxyMetaObject_1_T_c_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression_ {
        struct Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression___Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression___Fields fields;
    };

    struct Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression___VTable {
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

    struct Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression___StaticFields {
    };

    struct Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression___VTable vtable;
    };

    struct DynamicProxyMetaObject_1_T_c_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DynamicProxyMetaObject_1_T_c_System_Object___StaticFields {
        struct DynamicProxyMetaObject_1_T_c_System_Object_* __9;
        struct Func_2_System_Dynamic_DynamicMetaObject_System_Linq_Expressions_Expression_* __9__18_0;
    };

    struct DynamicProxyMetaObject_1_T_c_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicProxyMetaObject_1_T_c_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicProxyMetaObject_1_T_c_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) DynamicReflectionDelegateFactory_c_DisplayClass11_0_1_System_Object___Fields {
        struct Object* constantValue;
    };

    struct DynamicReflectionDelegateFactory_c_DisplayClass11_0_1_System_Object_ {
        struct DynamicReflectionDelegateFactory_c_DisplayClass11_0_1_System_Object___Class* klass;
        MonitorData* monitor;
        struct DynamicReflectionDelegateFactory_c_DisplayClass11_0_1_System_Object___Fields fields;
    };

    struct DynamicReflectionDelegateFactory_c_DisplayClass11_0_1_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DynamicReflectionDelegateFactory_c_DisplayClass11_0_1_System_Object___StaticFields {
    };

    struct DynamicReflectionDelegateFactory_c_DisplayClass11_0_1_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicReflectionDelegateFactory_c_DisplayClass11_0_1_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicReflectionDelegateFactory_c_DisplayClass11_0_1_System_Object___VTable vtable;
    };

    struct __declspec(align(8)) FSharpUtils_c_DisplayClass52_0_2_System_Object_System_Object___Fields {
        struct ObjectConstructor_1_System_Object_* ctorDelegate;
    };

    struct FSharpUtils_c_DisplayClass52_0_2_System_Object_System_Object_ {
        struct FSharpUtils_c_DisplayClass52_0_2_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
        struct FSharpUtils_c_DisplayClass52_0_2_System_Object_System_Object___Fields fields;
    };

    struct FSharpUtils_c_DisplayClass52_0_2_System_Object_System_Object___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FSharpUtils_c_DisplayClass52_0_2_System_Object_System_Object___StaticFields {
    };

    struct FSharpUtils_c_DisplayClass52_0_2_System_Object_System_Object___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FSharpUtils_c_DisplayClass52_0_2_System_Object_System_Object___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FSharpUtils_c_DisplayClass52_0_2_System_Object_System_Object___VTable vtable;
    };

    struct FSharpUtils_c_52_2_System_Object_System_Object_ {
        struct FSharpUtils_c_52_2_System_Object_System_Object___Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_Tuple_2_Object_Object___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_Tuple_2_Object_Object_ {
        struct Func_2_System_Collections_Generic_KeyValuePair_2_Tuple_2_Object_Object___Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_Tuple_2_Object_Object___Fields fields;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_Tuple_2_Object_Object___VTable {
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

} // namespace app
