namespace app {
    struct CultureAwareComparer {
        struct CultureAwareComparer__Class* klass;
        MonitorData* monitor;
        struct CultureAwareComparer__Fields fields;
    };

    struct CultureAwareComparer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Compare;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetHashCode_1;
        VirtualInvokeData Compare_1;
        VirtualInvokeData Equals_2;
        VirtualInvokeData GetHashCode_2;
        VirtualInvokeData Compare_2;
        VirtualInvokeData Equals_3;
        VirtualInvokeData GetHashCode_3;
    };

    struct CultureAwareComparer__StaticFields {
    };

    struct CultureAwareComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CultureAwareComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CultureAwareComparer__VTable vtable;
    };

    struct StringComparer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Compare;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetHashCode_1;
        VirtualInvokeData Compare_1;
        VirtualInvokeData Equals_2;
        VirtualInvokeData GetHashCode_2;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct StringComparer__StaticFields {
        struct StringComparer* _invariantCulture;
        struct StringComparer* _invariantCultureIgnoreCase;
        struct StringComparer* _ordinal;
        struct StringComparer* _ordinalIgnoreCase;
    };

    struct StringComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct StringComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct StringComparer__VTable vtable;
    };

    struct __declspec(align(8)) OrdinalComparer__Fields {
        bool _ignoreCase;
    };

    struct OrdinalComparer {
        struct OrdinalComparer__Class* klass;
        MonitorData* monitor;
        struct OrdinalComparer__Fields fields;
    };

    struct OrdinalComparer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Compare;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetHashCode_1;
        VirtualInvokeData Compare_1;
        VirtualInvokeData Equals_2;
        VirtualInvokeData GetHashCode_2;
        VirtualInvokeData Compare_2;
        VirtualInvokeData Equals_3;
        VirtualInvokeData GetHashCode_3;
    };

    struct OrdinalComparer__StaticFields {
    };

    struct OrdinalComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OrdinalComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OrdinalComparer__VTable vtable;
    };

    struct STAThreadAttribute {
        struct STAThreadAttribute__Class* klass;
        MonitorData* monitor;
    };

    struct STAThreadAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct STAThreadAttribute__StaticFields {
    };

    struct STAThreadAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct STAThreadAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct STAThreadAttribute__VTable vtable;
    };

    struct ThreadStaticAttribute {
        struct ThreadStaticAttribute__Class* klass;
        MonitorData* monitor;
    };

    struct ThreadStaticAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct ThreadStaticAttribute__StaticFields {
    };

    struct ThreadStaticAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ThreadStaticAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ThreadStaticAttribute__VTable vtable;
    };

    struct TimeoutException__Fields {
        struct SystemException__Fields _;
    };

    struct TimeoutException {
        struct TimeoutException__Class* klass;
        MonitorData* monitor;
        struct TimeoutException__Fields fields;
    };

    struct TimeoutException__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_Message;
        VirtualInvokeData get_Data;
        VirtualInvokeData get_InnerException;
        VirtualInvokeData get_StackTrace;
        VirtualInvokeData get_Source;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData GetType;
    };

    struct TimeoutException__StaticFields {
    };

    struct TimeoutException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeoutException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeoutException__VTable vtable;
    };

    struct __declspec(align(8)) List_1_System_TimeZoneInfo_AdjustmentRule___Fields {
        struct TimeZoneInfo_AdjustmentRule__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_TimeZoneInfo_AdjustmentRule_ {
        struct List_1_System_TimeZoneInfo_AdjustmentRule___Class* klass;
        MonitorData* monitor;
        struct List_1_System_TimeZoneInfo_AdjustmentRule___Fields fields;
    };

    struct TimeZoneInfo_TransitionTime {
        struct DateTime m_timeOfDay;
        uint8_t m_month;
        uint8_t m_week;
        uint8_t m_day;
        DayOfWeek__Enum m_dayOfWeek;

        bool m_isFixedDateRule;
    };

    struct TimeZoneInfo_TransitionTime__Boxed {
        struct TimeZoneInfo_TransitionTime__Class* klass;
        MonitorData* monitor;
        struct TimeZoneInfo_TransitionTime fields;
    };

    struct __declspec(align(8)) TimeZoneInfo_AdjustmentRule__Fields {
        struct DateTime m_dateStart;
        struct DateTime m_dateEnd;
        struct TimeSpan m_daylightDelta;
        struct TimeZoneInfo_TransitionTime m_daylightTransitionStart;
        struct TimeZoneInfo_TransitionTime m_daylightTransitionEnd;
        struct TimeSpan m_baseUtcOffsetDelta;
    };

    struct TimeZoneInfo_AdjustmentRule {
        struct TimeZoneInfo_AdjustmentRule__Class* klass;
        MonitorData* monitor;
        struct TimeZoneInfo_AdjustmentRule__Fields fields;
    };

    struct TimeZoneInfo_AdjustmentRule__Array {
        struct TimeZoneInfo_AdjustmentRule__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TimeZoneInfo_AdjustmentRule* vector[32];
    };

    struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule_ {
        struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___Class* klass;
        MonitorData* monitor;
    };

    struct TimeZoneInfo_TransitionTime__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
        VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
        VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
    };

    struct TimeZoneInfo_TransitionTime__StaticFields {
    };

    struct TimeZoneInfo_TransitionTime__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfo_TransitionTime__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfo_TransitionTime__VTable vtable;
    };

    struct TimeZoneInfo_AdjustmentRule__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
        VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
        VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
    };

    struct TimeZoneInfo_AdjustmentRule__StaticFields {
    };

    struct TimeZoneInfo_AdjustmentRule__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfo_AdjustmentRule__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfo_AdjustmentRule__VTable vtable;
    };

    struct TimeZoneInfo_AdjustmentRule__Array__VTable {
    };

    struct TimeZoneInfo_AdjustmentRule__Array__StaticFields {
    };

    struct TimeZoneInfo_AdjustmentRule__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfo_AdjustmentRule__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfo_AdjustmentRule__Array__VTable vtable;
    };

    struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___StaticFields {
    };

    struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_TimeZoneInfo_AdjustmentRule___VTable vtable;
    };

    struct List_1_System_TimeZoneInfo_AdjustmentRule___VTable {
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

    struct List_1_System_TimeZoneInfo_AdjustmentRule___StaticFields {
        struct TimeZoneInfo_AdjustmentRule__Array* _emptyArray;
    };

    struct List_1_System_TimeZoneInfo_AdjustmentRule___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_System_TimeZoneInfo_AdjustmentRule___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_System_TimeZoneInfo_AdjustmentRule___VTable vtable;
    };

    struct Int64__1__VTable {
    };

    struct Int64__1__StaticFields {
    };

    struct Int64__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Int64__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Int64__1__VTable vtable;
    };

    struct __declspec(align(8)) TimeZoneInfo__Fields {
        struct TimeSpan baseUtcOffset;
        struct String* daylightDisplayName;
        struct String* displayName;
        struct String* id;
        struct List_1_KeyValuePair_2_System_DateTime_System_TimeType_* transitions;
        struct String* standardDisplayName;
        bool supportsDaylightSavingTime;
        struct TimeZoneInfo_AdjustmentRule__Array* adjustmentRules;
    };

    struct TimeZoneInfo {
        struct TimeZoneInfo__Class* klass;
        MonitorData* monitor;
        struct TimeZoneInfo__Fields fields;
    };

    struct __declspec(align(8)) List_1_KeyValuePair_2_System_DateTime_System_TimeType___Fields {
        struct KeyValuePair_2_System_DateTime_System_TimeType___Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_KeyValuePair_2_System_DateTime_System_TimeType_ {
        struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___Class* klass;
        MonitorData* monitor;
        struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___Fields fields;
    };

    struct KeyValuePair_2_System_DateTime_System_TimeType_ {
        struct DateTime key;
        struct TimeType* value;
    };

    struct KeyValuePair_2_System_DateTime_System_TimeType___Boxed {
        struct KeyValuePair_2_System_DateTime_System_TimeType___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_DateTime_System_TimeType_ fields;
    };

    struct __declspec(align(8)) TimeType__Fields {
        int32_t Offset;
        bool IsDst;
        struct String* Name;
    };

    struct TimeType {
        struct TimeType__Class* klass;
        MonitorData* monitor;
        struct TimeType__Fields fields;
    };

    struct KeyValuePair_2_System_DateTime_System_TimeType___Array {
        struct KeyValuePair_2_System_DateTime_System_TimeType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_DateTime_System_TimeType_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType_ {
        struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) ReadOnlyCollection_1_System_TimeZoneInfo___Fields {
        struct IList_1_System_TimeZoneInfo_* list;
        struct Object* _syncRoot;
    };

    struct ReadOnlyCollection_1_System_TimeZoneInfo_ {
        struct ReadOnlyCollection_1_System_TimeZoneInfo___Class* klass;
        MonitorData* monitor;
        struct ReadOnlyCollection_1_System_TimeZoneInfo___Fields fields;
    };

    struct IList_1_System_TimeZoneInfo_ {
        struct IList_1_System_TimeZoneInfo___Class* klass;
        MonitorData* monitor;
    };

    struct TimeZoneInfo__Array {
        struct TimeZoneInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TimeZoneInfo* vector[32];
    };

    struct IEnumerator_1_System_TimeZoneInfo_ {
        struct IEnumerator_1_System_TimeZoneInfo___Class* klass;
        MonitorData* monitor;
    };

    struct TimeType__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TimeType__StaticFields {
    };

    struct TimeType__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeType__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeType__VTable vtable;
    };

    struct KeyValuePair_2_System_DateTime_System_TimeType___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_DateTime_System_TimeType___StaticFields {
    };

    struct KeyValuePair_2_System_DateTime_System_TimeType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_DateTime_System_TimeType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_DateTime_System_TimeType___VTable vtable;
    };

    struct KeyValuePair_2_System_DateTime_System_TimeType___Array__VTable {
    };

    struct KeyValuePair_2_System_DateTime_System_TimeType___Array__StaticFields {
    };

    struct KeyValuePair_2_System_DateTime_System_TimeType___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_DateTime_System_TimeType___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_DateTime_System_TimeType___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_DateTime_System_TimeType___VTable vtable;
    };

    struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___VTable {
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

    struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___StaticFields {
        struct KeyValuePair_2_System_DateTime_System_TimeType___Array* _emptyArray;
    };

    struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_KeyValuePair_2_System_DateTime_System_TimeType___VTable vtable;
    };

    struct IList_1_System_TimeZoneInfo___VTable {
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
    };

    struct IList_1_System_TimeZoneInfo___StaticFields {
    };

    struct IList_1_System_TimeZoneInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IList_1_System_TimeZoneInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IList_1_System_TimeZoneInfo___VTable vtable;
    };

    struct TimeZoneInfo__Array__VTable {
    };

    struct TimeZoneInfo__Array__StaticFields {
    };

    struct TimeZoneInfo__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfo__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfo__Array__VTable vtable;
    };

    struct IEnumerator_1_System_TimeZoneInfo___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_System_TimeZoneInfo___StaticFields {
    };

    struct IEnumerator_1_System_TimeZoneInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_System_TimeZoneInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_System_TimeZoneInfo___VTable vtable;
    };

    struct ReadOnlyCollection_1_System_TimeZoneInfo___VTable {
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

    struct ReadOnlyCollection_1_System_TimeZoneInfo___StaticFields {
    };

    struct ReadOnlyCollection_1_System_TimeZoneInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReadOnlyCollection_1_System_TimeZoneInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReadOnlyCollection_1_System_TimeZoneInfo___VTable vtable;
    };

    struct TimeZoneInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
        VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
        VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
    };

    struct TimeZoneInfo__StaticFields {
        struct TimeZoneInfo* local;
        bool readlinkNotFound;
        struct TimeZoneInfo* utc;
        struct String* timeZoneDirectory;
        struct RegistryKey* timeZoneKey;
        struct RegistryKey* localZoneKey;
        struct ReadOnlyCollection_1_System_TimeZoneInfo_* systemTimeZones;
    };

    struct TimeZoneInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfo__VTable vtable;
    };

    struct TimeZoneInfo_SYSTEMTIME {
        uint16_t wYear;
        uint16_t wMonth;
        uint16_t wDayOfWeek;
        uint16_t wDay;
        uint16_t wHour;
        uint16_t wMinute;
        uint16_t wSecond;
        uint16_t wMilliseconds;
    };

    struct TimeZoneInfo_SYSTEMTIME__Boxed {
        struct TimeZoneInfo_SYSTEMTIME__Class* klass;
        MonitorData* monitor;
        struct TimeZoneInfo_SYSTEMTIME fields;
    };

    struct TimeZoneInfo_TIME_ZONE_INFORMATION {
        int32_t Bias;
        struct String* StandardName;
        struct TimeZoneInfo_SYSTEMTIME StandardDate;
        int32_t StandardBias;
        struct String* DaylightName;
        struct TimeZoneInfo_SYSTEMTIME DaylightDate;
        int32_t DaylightBias;
    };

    struct TimeZoneInfo_TIME_ZONE_INFORMATION__Boxed {
        struct TimeZoneInfo_TIME_ZONE_INFORMATION__Class* klass;
        MonitorData* monitor;
        struct TimeZoneInfo_TIME_ZONE_INFORMATION fields;
    };

    struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION {
        struct TimeZoneInfo_TIME_ZONE_INFORMATION TZI;
        struct String* TimeZoneKeyName;
        uint8_t DynamicDaylightTimeDisabled;
    };

    struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Boxed {
        struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Class* klass;
        MonitorData* monitor;
        struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION fields;
    };

    struct TimeZoneInfo_SYSTEMTIME__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TimeZoneInfo_SYSTEMTIME__StaticFields {
    };

    struct TimeZoneInfo_SYSTEMTIME__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfo_SYSTEMTIME__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfo_SYSTEMTIME__VTable vtable;
    };

    struct TimeZoneInfo_TIME_ZONE_INFORMATION__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TimeZoneInfo_TIME_ZONE_INFORMATION__StaticFields {
    };

    struct TimeZoneInfo_TIME_ZONE_INFORMATION__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfo_TIME_ZONE_INFORMATION__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfo_TIME_ZONE_INFORMATION__VTable vtable;
    };

    struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__StaticFields {
    };

    struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION__VTable vtable;
    };

    struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION___VTable {
    };

    struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION___StaticFields {
    };

    struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION___VTable vtable;
    };

    struct TimeZoneInfo_TIME_ZONE_INFORMATION___VTable {
    };

    struct TimeZoneInfo_TIME_ZONE_INFORMATION___StaticFields {
    };

    struct TimeZoneInfo_TIME_ZONE_INFORMATION___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfo_TIME_ZONE_INFORMATION___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfo_TIME_ZONE_INFORMATION___VTable vtable;
    };

    struct TimeZoneInfo_TransitionTime___VTable {
    };

    struct TimeZoneInfo_TransitionTime___StaticFields {
    };

    struct TimeZoneInfo_TransitionTime___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfo_TransitionTime___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfo_TransitionTime___VTable vtable;
    };

    struct __declspec(align(8)) List_1_System_TimeZoneInfo___Fields {
        struct TimeZoneInfo__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_TimeZoneInfo_ {
        struct List_1_System_TimeZoneInfo___Class* klass;
        MonitorData* monitor;
        struct List_1_System_TimeZoneInfo___Fields fields;
    };

    struct List_1_System_TimeZoneInfo___VTable {
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

    struct List_1_System_TimeZoneInfo___StaticFields {
        struct TimeZoneInfo__Array* _emptyArray;
    };

    struct List_1_System_TimeZoneInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_System_TimeZoneInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_System_TimeZoneInfo___VTable vtable;
    };

    enum class TimeZoneInfoOptions__Enum : int32_t {
        None = 0x00000001,
        NoThrowOnInvalidTime = 0x00000002,
    };

    struct TimeZoneInfoOptions__Enum__Boxed {
        struct TimeZoneInfoOptions__Enum__Class* klass;
        MonitorData* monitor;
        TimeZoneInfoOptions__Enum value;
    };

    struct TimeZoneInfoOptions__Enum__VTable {
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

    struct TimeZoneInfoOptions__Enum__StaticFields {
    };

    struct TimeZoneInfoOptions__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimeZoneInfoOptions__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimeZoneInfoOptions__Enum__VTable vtable;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_System_String___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_String___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_String_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_String_* values;
        struct Object* _syncRoot;
    };

} // namespace app
