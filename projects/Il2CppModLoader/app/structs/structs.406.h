namespace app {
    struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Boxed {
        struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class* klass;
        MonitorData* monitor;
        MoonTelemetryDamageTransactionEvent_DamageEntity__Enum value;
    };

    struct MoonTelemetryDamageTransactionEvent__Fields {
        struct MoonTelemetryCharacterBaseEvent__Fields _;
        int32_t ID;
        int32_t AbilityType;
        int32_t DamageType;
        float DamageValue;
        MoonTelemetryDamageTransactionEvent_DamageEntity__Enum DamageSource;

        struct String* DamageSourceID;
        MoonTelemetryDamageTransactionEvent_DamageEntity__Enum DamageTarget;

        struct String* DamageTargetID;
        float OtherXLocation;
        float OtherYLocation;
        float ForceX;
        float ForceY;
        int32_t Weight;
        float StunDuration;
        bool TargetDestroyed;
        struct String* _Name_k__BackingField;
    };

    struct MoonTelemetryDamageTransactionEvent {
        struct MoonTelemetryDamageTransactionEvent__Class* klass;
        MonitorData* monitor;
        struct MoonTelemetryDamageTransactionEvent__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Type_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
        struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
        int32_t hashCode;
        int32_t next;
        struct Type* key;
        MoonTelemetryDamageTransactionEvent_DamageEntity__Enum value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields {
        struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields {
        struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Fields fields;
    };

    struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array {
        struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        MoonTelemetryDamageTransactionEvent_DamageEntity__Enum vector[32];
    };

    struct IEnumerator_1_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
        struct IEnumerator_1_MoonTelemetryDamageTransactionEvent_DamageEntity___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
        struct ICollection_1_MoonTelemetryDamageTransactionEvent_DamageEntity___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
        struct Type* key;
        MoonTelemetryDamageTransactionEvent_DamageEntity__Enum value;
    };

    struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Boxed {
        struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ fields;
    };

    struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array {
        struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
        struct IEnumerator_1_KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_MoonTelemetryDamageTransactionEvent_DamageEntity_ {
        struct IEnumerable_1_MoonTelemetryDamageTransactionEvent_DamageEntity___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Type_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
        struct Dictionary_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
        int32_t hashCode;
        int32_t next;
        struct Type* key;
        struct Dictionary_2_System_String_System_Reflection_FieldInfo_* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_Reflection_FieldInfo___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Reflection_FieldInfo_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Reflection_FieldInfo_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_Reflection_FieldInfo_ {
        struct Dictionary_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_Reflection_FieldInfo___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct FieldInfo_1* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Reflection_FieldInfo___Fields {
        struct Dictionary_2_System_String_System_Reflection_FieldInfo_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Reflection_FieldInfo_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Reflection_FieldInfo___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Reflection_FieldInfo___Fields {
        struct Dictionary_2_System_String_System_Reflection_FieldInfo_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Reflection_FieldInfo_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Reflection_FieldInfo___Fields fields;
    };

    struct KeyValuePair_2_System_String_System_Reflection_FieldInfo_ {
        struct String* key;
        struct FieldInfo_1* value;
    };

    struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___Boxed {
        struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_Reflection_FieldInfo_ fields;
    };

    struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___Array {
        struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_Reflection_FieldInfo_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Reflection_FieldInfo_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields {
        struct Dictionary_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields {
        struct Dictionary_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Fields fields;
    };

    struct Dictionary_2_System_String_System_Reflection_FieldInfo___Array {
        struct Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_System_String_System_Reflection_FieldInfo_* vector[32];
    };

    struct IEnumerator_1_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
        struct IEnumerator_1_Dictionary_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
        struct ICollection_1_Dictionary_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
        struct Type* key;
        struct Dictionary_2_System_String_System_Reflection_FieldInfo_* value;
    };

    struct KeyValuePair_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Boxed {
        struct KeyValuePair_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ fields;
    };

    struct KeyValuePair_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array {
        struct KeyValuePair_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
        struct IEnumerator_1_KeyValuePair_2_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Dictionary_2_System_String_System_Reflection_FieldInfo_ {
        struct IEnumerable_1_Dictionary_2_System_String_System_Reflection_FieldInfo___Class* klass;
        MonitorData* monitor;
    };

    struct MoonTelemetryCharacterBaseEvent_AbilityData {
        int32_t ID;
        int32_t Level;
    };

    struct MoonTelemetryCharacterBaseEvent_AbilityData__Boxed {
        struct MoonTelemetryCharacterBaseEvent_AbilityData__Class* klass;
        MonitorData* monitor;
        struct MoonTelemetryCharacterBaseEvent_AbilityData fields;
    };

    struct MoonTelemetryCharacterBaseEvent_AbilityData__Array {
        struct MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonTelemetryCharacterBaseEvent_AbilityData vector[32];
    };

    struct MoonTelemetryCharacterBaseEvent_SpiritShardData {
        int32_t ID;
        int32_t Level;
        bool Equipped;
    };

    struct MoonTelemetryCharacterBaseEvent_SpiritShardData__Boxed {
        struct MoonTelemetryCharacterBaseEvent_SpiritShardData__Class* klass;
        MonitorData* monitor;
        struct MoonTelemetryCharacterBaseEvent_SpiritShardData fields;
    };

    struct MoonTelemetryCharacterBaseEvent_SpiritShardData__Array {
        struct MoonTelemetryCharacterBaseEvent_SpiritShardData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MoonTelemetryCharacterBaseEvent_SpiritShardData vector[32];
    };

    struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__VTable {
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

    struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__StaticFields {
    };

    struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable vtable;
    };

    struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__VTable {
    };

    struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__StaticFields {
    };

    struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__VTable vtable;
    };

    struct IEnumerator_1_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields {
    };

    struct IEnumerator_1_MoonTelemetryDamageTransactionEvent_DamageEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable vtable;
    };

    struct ICollection_1_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields {
    };

    struct ICollection_1_MoonTelemetryDamageTransactionEvent_DamageEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable vtable;
    };

    struct MoonTelemetryDamageTransactionEvent_DamageEntity___VTable {
    };

    struct MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields {
    };

    struct MoonTelemetryDamageTransactionEvent_DamageEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTelemetryDamageTransactionEvent_DamageEntity___VTable vtable;
    };

    struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields {
    };

    struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable vtable;
    };

    struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__VTable {
    };

    struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__StaticFields {
    };

    struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable vtable;
    };

    struct IEnumerable_1_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields {
    };

    struct IEnumerable_1_MoonTelemetryDamageTransactionEvent_DamageEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable vtable;
    };

    struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable {
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

    struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields {
    };

    struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity___VTable vtable;
    };

    struct MoonTelemetryDamageTransactionEvent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData SynchronousInitialize;
        VirtualInvokeData AsynchronousInitialize;
        VirtualInvokeData get_Name;
        VirtualInvokeData SerializeToObject;
    };

    struct MoonTelemetryDamageTransactionEvent__StaticFields {
        struct Dictionary_2_System_Type_MoonTelemetryDamageTransactionEvent_DamageEntity_* m_damageEntityDictionary;
    };

    struct MoonTelemetryDamageTransactionEvent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTelemetryDamageTransactionEvent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTelemetryDamageTransactionEvent__VTable vtable;
    };

    struct MoonTelemetryClientBaseEvent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData SynchronousInitialize;
        VirtualInvokeData AsynchronousInitialize;
        VirtualInvokeData __unknown;
        VirtualInvokeData SerializeToObject;
    };

    struct MoonTelemetryClientBaseEvent__StaticFields {
        struct Guid SESSION_ID;
        struct String* CachedUserID;
        struct String* CachedClientHardwareID;
    };

    struct MoonTelemetryClientBaseEvent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoonTelemetryClientBaseEvent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoonTelemetryClientBaseEvent__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Reflection_FieldInfo___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Reflection_FieldInfo___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Reflection_FieldInfo___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Reflection_FieldInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Reflection_FieldInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Reflection_FieldInfo___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Reflection_FieldInfo___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Reflection_FieldInfo___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Reflection_FieldInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Reflection_FieldInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Reflection_FieldInfo___VTable vtable;
    };

    struct FieldInfo___VTable {
    };

    struct FieldInfo___StaticFields {
    };

    struct FieldInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FieldInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FieldInfo___VTable vtable;
    };

    struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___StaticFields {
    };

    struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___VTable vtable;
    };

    struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___Array__VTable {
    };

    struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___Array__StaticFields {
    };

    struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_System_Reflection_FieldInfo___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Reflection_FieldInfo___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Reflection_FieldInfo___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Reflection_FieldInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Reflection_FieldInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Reflection_FieldInfo___VTable vtable;
    };

    struct Dictionary_2_System_String_System_Reflection_FieldInfo___VTable {
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

    struct Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields {
    };

    struct Dictionary_2_System_String_System_Reflection_FieldInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_String_System_Reflection_FieldInfo___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Dictionary_2_System_String_System_Reflection_FieldInfo___VTable vtable;
    };

} // namespace app
