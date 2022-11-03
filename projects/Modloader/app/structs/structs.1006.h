namespace app {
    struct IntStateTransition {
        struct IntStateTransition__Class* klass;
        MonitorData* monitor;
        struct IntStateTransition__Fields fields;
    };

    struct IntStateTransition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IntStateTransition__StaticFields {
    };

    struct IntStateTransition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IntStateTransition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IntStateTransition__VTable vtable;
    };

    struct SerializationSetupGroup__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_SerializationSetupGroup_TargetSetupEntry_* Entries;
        struct NewSetupStateController* m_stateController;
        struct SerializationSetupGroup_StateChange* m_stateChange;
        struct MoonTimeline* m_transition;
        struct UberIDOwnerSO* m_uberState;
        struct Color m_setupColor;
        bool DebugMode;
        struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_* m_gameObjectToEntry;
    };

    struct SerializationSetupGroup {
        struct SerializationSetupGroup__Class* klass;
        MonitorData* monitor;
        struct SerializationSetupGroup__Fields fields;
    };

    struct __declspec(align(8)) List_1_SerializationSetupGroup_TargetSetupEntry___Fields {
        struct SerializationSetupGroup_TargetSetupEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SerializationSetupGroup_TargetSetupEntry_ {
        struct List_1_SerializationSetupGroup_TargetSetupEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_SerializationSetupGroup_TargetSetupEntry___Fields fields;
    };

    enum class SerializationSetupGroup_ClipType__Enum : int32_t {
        None = 0x00000000,
        Tween = 0x00000001,
        Curve = 0x00000002,
    };

    struct SerializationSetupGroup_ClipType__Enum__Boxed {
        struct SerializationSetupGroup_ClipType__Enum__Class* klass;
        MonitorData* monitor;
        SerializationSetupGroup_ClipType__Enum value;
    };

    struct __declspec(align(8)) SerializationSetupGroup_TargetSetupEntry__Fields {
        struct GameObject* Target;
        struct List_1_UnityEngine_Component_* DependentComponents;
        struct List_1_System_Int32_* ModifiersGuids;
        bool AutoAddToTimeline;
        SerializationSetupGroup_ClipType__Enum PositionClipType;

        SerializationSetupGroup_ClipType__Enum RotationClipType;
    };

    struct SerializationSetupGroup_TargetSetupEntry {
        struct SerializationSetupGroup_TargetSetupEntry__Class* klass;
        MonitorData* monitor;
        struct SerializationSetupGroup_TargetSetupEntry__Fields fields;
    };

    struct SerializationSetupGroup_TargetSetupEntry__Array {
        struct SerializationSetupGroup_TargetSetupEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SerializationSetupGroup_TargetSetupEntry* vector[32];
    };

    struct IEnumerator_1_SerializationSetupGroup_TargetSetupEntry_ {
        struct IEnumerator_1_SerializationSetupGroup_TargetSetupEntry___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SerializationSetupGroup_StateChange__Fields {
        struct ChangeStateOnCondition* ChangeStateOnCondition;
        struct CompoundCondition* CompoundCondition;
        struct PlayerInsideZoneChecker* Trigger;
    };

    struct SerializationSetupGroup_StateChange {
        struct SerializationSetupGroup_StateChange__Class* klass;
        MonitorData* monitor;
        struct SerializationSetupGroup_StateChange__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_UnityEngine_GameObject_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_ {
        struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_ {
        int32_t hashCode;
        int32_t next;
        struct GameObject* key;
        struct SerializationSetupGroup_TargetSetupEntry* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array {
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Fields {
        struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Fields {
        struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Fields fields;
    };

    struct ICollection_1_SerializationSetupGroup_TargetSetupEntry_ {
        struct ICollection_1_SerializationSetupGroup_TargetSetupEntry___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_ {
        struct GameObject* key;
        struct SerializationSetupGroup_TargetSetupEntry* value;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Boxed {
        struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_ fields;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array {
        struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry_ {
        struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_SerializationSetupGroup_TargetSetupEntry_ {
        struct IEnumerable_1_SerializationSetupGroup_TargetSetupEntry___Class* klass;
        MonitorData* monitor;
    };

    struct SerializationSetupGroup_ClipType__Enum__VTable {
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

    struct SerializationSetupGroup_ClipType__Enum__StaticFields {
    };

    struct SerializationSetupGroup_ClipType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationSetupGroup_ClipType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationSetupGroup_ClipType__Enum__VTable vtable;
    };

    struct SerializationSetupGroup_TargetSetupEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SerializationSetupGroup_TargetSetupEntry__StaticFields {
    };

    struct SerializationSetupGroup_TargetSetupEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationSetupGroup_TargetSetupEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationSetupGroup_TargetSetupEntry__VTable vtable;
    };

    struct SerializationSetupGroup_TargetSetupEntry__Array__VTable {
    };

    struct SerializationSetupGroup_TargetSetupEntry__Array__StaticFields {
    };

    struct SerializationSetupGroup_TargetSetupEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationSetupGroup_TargetSetupEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationSetupGroup_TargetSetupEntry__Array__VTable vtable;
    };

    struct IEnumerator_1_SerializationSetupGroup_TargetSetupEntry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_SerializationSetupGroup_TargetSetupEntry___StaticFields {
    };

    struct IEnumerator_1_SerializationSetupGroup_TargetSetupEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_SerializationSetupGroup_TargetSetupEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_SerializationSetupGroup_TargetSetupEntry___VTable vtable;
    };

    struct List_1_SerializationSetupGroup_TargetSetupEntry___VTable {
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

    struct List_1_SerializationSetupGroup_TargetSetupEntry___StaticFields {
        struct SerializationSetupGroup_TargetSetupEntry__Array* _emptyArray;
    };

    struct List_1_SerializationSetupGroup_TargetSetupEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_SerializationSetupGroup_TargetSetupEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_SerializationSetupGroup_TargetSetupEntry___VTable vtable;
    };

    struct SerializationSetupGroup_StateChange__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SerializationSetupGroup_StateChange__StaticFields {
    };

    struct SerializationSetupGroup_StateChange__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationSetupGroup_StateChange__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationSetupGroup_StateChange__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable vtable;
    };

    struct ICollection_1_SerializationSetupGroup_TargetSetupEntry___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_SerializationSetupGroup_TargetSetupEntry___StaticFields {
    };

    struct ICollection_1_SerializationSetupGroup_TargetSetupEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_SerializationSetupGroup_TargetSetupEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_SerializationSetupGroup_TargetSetupEntry___VTable vtable;
    };

    struct SerializationSetupGroup_TargetSetupEntry___VTable {
    };

    struct SerializationSetupGroup_TargetSetupEntry___StaticFields {
    };

    struct SerializationSetupGroup_TargetSetupEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationSetupGroup_TargetSetupEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationSetupGroup_TargetSetupEntry___VTable vtable;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields {
    };

    struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable vtable;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__VTable {
    };

    struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__StaticFields {
    };

    struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable vtable;
    };

    struct IEnumerable_1_SerializationSetupGroup_TargetSetupEntry___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_SerializationSetupGroup_TargetSetupEntry___StaticFields {
    };

    struct IEnumerable_1_SerializationSetupGroup_TargetSetupEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_SerializationSetupGroup_TargetSetupEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_SerializationSetupGroup_TargetSetupEntry___VTable vtable;
    };

    struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable {
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

    struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields {
    };

    struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_UnityEngine_GameObject_SerializationSetupGroup_TargetSetupEntry___VTable vtable;
    };

    struct SerializationSetupGroup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnBeforeSerialize;
        VirtualInvokeData OnAfterDeserialize;
    };

    struct SerializationSetupGroup__StaticFields {
        struct HashSet_1_System_Type_* s_uberStateTypeWhiteList;
    };

    struct SerializationSetupGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationSetupGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationSetupGroup__VTable vtable;
    };

    struct TimelinePreviewRequirement__Fields {
        struct MonoBehaviour__Fields _;
        struct ChangeStateSetupHolder* Requirement;
    };

    struct TimelinePreviewRequirement {
        struct TimelinePreviewRequirement__Class* klass;
        MonitorData* monitor;
        struct TimelinePreviewRequirement__Fields fields;
    };

    struct TimelinePreviewRequirement__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetRequirementsForTimeline;
        VirtualInvokeData DoStrip;
    };

    struct TimelinePreviewRequirement__StaticFields {
    };

    struct TimelinePreviewRequirement__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimelinePreviewRequirement__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimelinePreviewRequirement__VTable vtable;
    };

    struct CropUtility {
        struct CropUtility__Class* klass;
        MonitorData* monitor;
    };

    struct CropUtility__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CropUtility__StaticFields {
    };

    struct CropUtility__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CropUtility__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CropUtility__VTable vtable;
    };

    struct Utility {
        struct Utility__Class* klass;
        MonitorData* monitor;
    };

    struct Utility__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Utility__StaticFields {
        struct Bounds s_tempBounds;
        bool m_isQuitting;
    };

    struct Utility__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Utility__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Utility__VTable vtable;
    };

    struct __declspec(align(8)) Utility_DisableLater_d_8__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct MonoBehaviour* target;
    };

    struct Utility_DisableLater_d_8 {
        struct Utility_DisableLater_d_8__Class* klass;
        MonitorData* monitor;
        struct Utility_DisableLater_d_8__Fields fields;
    };

    struct Utility_DisableLater_d_8__VTable {
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

    struct Utility_DisableLater_d_8__StaticFields {
    };

    struct Utility_DisableLater_d_8__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Utility_DisableLater_d_8__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Utility_DisableLater_d_8__VTable vtable;
    };

    struct AttachToVerletStructure__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* attachToSystem;
        bool use2Points;
        bool attachToWorld;
        float movementAmount;
        float rotationAmount;
        float stretchAmount;
        struct Vector3 anchor1;
        struct Vector3 anchor2;
        struct Vector3 m_initialPosition;
        struct Quaternion m_InitialRotation;
        struct Quaternion m_rotationDelta;
        struct Vector3 m_initialScale;
        float m_initiaStretchDistance;
        bool m_stretchHorizontally;
        struct VerletStructure* m_verletStructure;
        int32_t connectedJoint1;
        int32_t connectedJoint2;
        struct Vector3 m_worldAnchor;
        bool m_isSuspended;
        SuspendableMask__Enum _Moon_ISuspendable_Mask_k__BackingField;

        struct Transform* m_transform;
        bool m_initialized;
    };

    struct AttachToVerletStructure {
        struct AttachToVerletStructure__Class* klass;
        MonitorData* monitor;
        struct AttachToVerletStructure__Fields fields;
    };

    struct AttachToVerletStructure__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Moon_ISuspendable_get_Mask;
        VirtualInvokeData Moon_ISuspendable_set_Mask;
        VirtualInvokeData Moon_ISuspendable_get_IsSuspended;
        VirtualInvokeData Moon_ISuspendable_set_IsSuspended;
        VirtualInvokeData Moon_IPhysicsUpdateHandler_OnUpdatePhysics;
    };

    struct AttachToVerletStructure__StaticFields {
    };

    struct AttachToVerletStructure__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AttachToVerletStructure__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AttachToVerletStructure__VTable vtable;
    };

    struct TextureOffsetModifier__Fields {
        struct MonoBehaviour__Fields _;
        struct Renderer* TargetRenderer;
        struct Vector2 speed;
        struct Vector2 autoScrollSpeed;
        struct Transform* OffsetByDistanceTarget;
        struct Transform* BlockingCreep;
        struct Transform* OffsetByRotationZ;
        struct Vector3 m_intialPosition;
        struct Material* m_material;
        int32_t m_textureID;
        struct Vector2 m_shift;
        float m_targetRotationZ;
    };

    struct TextureOffsetModifier {
        struct TextureOffsetModifier__Class* klass;
        MonitorData* monitor;
        struct TextureOffsetModifier__Fields fields;
    };

    struct TextureOffsetModifier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TextureOffsetModifier__StaticFields {
    };

    struct TextureOffsetModifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TextureOffsetModifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TextureOffsetModifier__VTable vtable;
    };

    struct Verlet__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct Verlet {
        struct Verlet__Class* klass;
        MonitorData* monitor;
        struct Verlet__Fields fields;
    };

    struct Verlet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Verlet__StaticFields {
    };

    struct Verlet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Verlet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Verlet__VTable vtable;
    };

    struct VerletBreakTrigger__Fields {
        struct MonoBehaviour__Fields _;
        struct EventTriggerAnimator* BreakJointsTrigger;
    };

    struct VerletBreakTrigger {
        struct VerletBreakTrigger__Class* klass;
        MonitorData* monitor;
        struct VerletBreakTrigger__Fields fields;
    };

    struct VerletBreakTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VerletBreakTrigger__StaticFields {
    };

    struct VerletBreakTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletBreakTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletBreakTrigger__VTable vtable;
    };

    struct VerletSoftInteraction__Fields {
        struct MonoBehaviour__Fields _;
        struct VerletStructure* structure;
        float radius;
        float velocityInteractionForce;
        int32_t jointNumber;
        int32_t _Index_k__BackingField;
        bool _IsRegistered_k__BackingField;
        bool _WantsToRegister_k__BackingField;
    };

    struct VerletSoftInteraction {
        struct VerletSoftInteraction__Class* klass;
        MonitorData* monitor;
        struct VerletSoftInteraction__Fields fields;
    };

    struct VerletSoftInteraction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData SetInteraction;
        VirtualInvokeData RemoveInteraction;
        VirtualInvokeData DoesOverlap;
        VirtualInvokeData GetPosition;
        VirtualInvokeData GetExplodePoint;
        VirtualInvokeData MaxRadius;
        VirtualInvokeData OnRegistered;
        VirtualInvokeData IsWater;
        VirtualInvokeData get_Index;
        VirtualInvokeData set_Index;
        VirtualInvokeData get_IsRegistered;
        VirtualInvokeData set_IsRegistered;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_IsStatic;
    };

    struct VerletSoftInteraction__StaticFields {
    };

    struct VerletSoftInteraction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletSoftInteraction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletSoftInteraction__VTable vtable;
    };

    struct VerletSphereCollider__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct VerletSphereCollider {
        struct VerletSphereCollider__Class* klass;
        MonitorData* monitor;
        struct VerletSphereCollider__Fields fields;
    };

    struct VerletSphereCollider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct VerletSphereCollider__StaticFields {
    };

    struct VerletSphereCollider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VerletSphereCollider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VerletSphereCollider__VTable vtable;
    };

} // namespace app
