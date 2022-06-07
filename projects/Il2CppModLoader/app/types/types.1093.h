namespace app {
struct DashableSwitch__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DashableSwitch__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DashableSwitch__VTable vtable;
};

struct Events_1 {
    struct Events_1__Class *klass;
    MonitorData *monitor;
};

struct Events_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Events_1__StaticFields {
};

struct Events_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Events_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Events_1__VTable vtable;
};

struct PhysicsDebugRecorder__Fields {
    struct MonoBehaviour__Fields _;
    bool ShowMinRadius;
    bool ShowAll;
    int32_t ShowIndex;
    bool ShowSpecificRecord;
    int32_t ShowRecordIndex;
    bool RecordExternalForcesSummary;
    struct List_1_PhysicsDebugTools_ExtraEvent_ *m_events;
    struct List_1_PhysicsDebugTools_Record_ *m_records;
};

struct PhysicsDebugRecorder {
    struct PhysicsDebugRecorder__Class *klass;
    MonitorData *monitor;
    struct PhysicsDebugRecorder__Fields fields;
};

struct __declspec(align(8)) List_1_PhysicsDebugTools_ExtraEvent___Fields {
    struct ExtraEvent__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PhysicsDebugTools_ExtraEvent_ {
    struct List_1_PhysicsDebugTools_ExtraEvent___Class *klass;
    MonitorData *monitor;
    struct List_1_PhysicsDebugTools_ExtraEvent___Fields fields;
};

struct __declspec(align(8)) ExtraEvent__Fields {
    int32_t FrameNo;
    struct Entity *Target;
    struct Vector3 Position;
    struct Vector3 RBVelocity;
    struct Vector3 TargetVelocity;
    struct String *EventDescription;
};

struct ExtraEvent {
    struct ExtraEvent__Class *klass;
    MonitorData *monitor;
    struct ExtraEvent__Fields fields;
};

struct ExtraEvent__Array {
    struct ExtraEvent__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ExtraEvent *vector[32];
};

struct IEnumerator_1_PhysicsDebugTools_ExtraEvent_ {
    struct IEnumerator_1_PhysicsDebugTools_ExtraEvent___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_PhysicsDebugTools_Record___Fields {
    struct Record__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PhysicsDebugTools_Record_ {
    struct List_1_PhysicsDebugTools_Record___Class *klass;
    MonitorData *monitor;
    struct List_1_PhysicsDebugTools_Record___Fields fields;
};

struct __declspec(align(8)) Record__Fields {
    struct Entity *Target;
    struct CapsuleCollider *MainCollider;
    struct Rigidbody *RB;
    struct CharacterPlatformMovement *PlatformMovement;
    struct List_1_PhysicsDebugTools_RecordEntry_ *Entries;
};

struct Record {
    struct Record__Class *klass;
    MonitorData *monitor;
    struct Record__Fields fields;
};

struct __declspec(align(8)) List_1_PhysicsDebugTools_RecordEntry___Fields {
    struct RecordEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PhysicsDebugTools_RecordEntry_ {
    struct List_1_PhysicsDebugTools_RecordEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_PhysicsDebugTools_RecordEntry___Fields fields;
};

struct __declspec(align(8)) RecordEntry__Fields {
    int32_t FrameNo;
    struct Vector3 Position;
    struct Quaternion Rotation;
    float CapsuleHeight;
    float CapsuleRadius;
    struct Vector3 RBVelocity;
    struct Vector3 PlatformingVelocity;
    Entity_EntityVitalState__Enum VitalState;
    
    struct Vector3 ExternalForces;
    struct String *ExternalForcesSummary;
    struct List_1_PhysicsDebugTools_VelocityChangeEntry_ *ChangeEntries;
};

struct RecordEntry {
    struct RecordEntry__Class *klass;
    MonitorData *monitor;
    struct RecordEntry__Fields fields;
};

struct __declspec(align(8)) List_1_PhysicsDebugTools_VelocityChangeEntry___Fields {
    struct VelocityChangeEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PhysicsDebugTools_VelocityChangeEntry_ {
    struct List_1_PhysicsDebugTools_VelocityChangeEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_PhysicsDebugTools_VelocityChangeEntry___Fields fields;
};

struct __declspec(align(8)) VelocityChangeEntry__Fields {
    struct Vector3 PrevVelocity;
    struct Vector3 TargetVelocity;
    struct String *StackTrace;
};

struct VelocityChangeEntry {
    struct VelocityChangeEntry__Class *klass;
    MonitorData *monitor;
    struct VelocityChangeEntry__Fields fields;
};

struct VelocityChangeEntry__Array {
    struct VelocityChangeEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct VelocityChangeEntry *vector[32];
};

struct IEnumerator_1_PhysicsDebugTools_VelocityChangeEntry_ {
    struct IEnumerator_1_PhysicsDebugTools_VelocityChangeEntry___Class *klass;
    MonitorData *monitor;
};

struct RecordEntry__Array {
    struct RecordEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct RecordEntry *vector[32];
};

struct IEnumerator_1_PhysicsDebugTools_RecordEntry_ {
    struct IEnumerator_1_PhysicsDebugTools_RecordEntry___Class *klass;
    MonitorData *monitor;
};

struct Record__Array {
    struct Record__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Record *vector[32];
};

struct IEnumerator_1_PhysicsDebugTools_Record_ {
    struct IEnumerator_1_PhysicsDebugTools_Record___Class *klass;
    MonitorData *monitor;
};

struct ExtraEvent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ExtraEvent__StaticFields {
};

struct ExtraEvent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExtraEvent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExtraEvent__VTable vtable;
};

struct ExtraEvent__Array__VTable {
};

struct ExtraEvent__Array__StaticFields {
};

struct ExtraEvent__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExtraEvent__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExtraEvent__Array__VTable vtable;
};

struct IEnumerator_1_PhysicsDebugTools_ExtraEvent___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PhysicsDebugTools_ExtraEvent___StaticFields {
};

struct IEnumerator_1_PhysicsDebugTools_ExtraEvent___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PhysicsDebugTools_ExtraEvent___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PhysicsDebugTools_ExtraEvent___VTable vtable;
};

struct List_1_PhysicsDebugTools_ExtraEvent___VTable {
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

struct List_1_PhysicsDebugTools_ExtraEvent___StaticFields {
    struct ExtraEvent__Array *_emptyArray;
};

struct List_1_PhysicsDebugTools_ExtraEvent___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PhysicsDebugTools_ExtraEvent___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PhysicsDebugTools_ExtraEvent___VTable vtable;
};

struct VelocityChangeEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct VelocityChangeEntry__StaticFields {
};

struct VelocityChangeEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VelocityChangeEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VelocityChangeEntry__VTable vtable;
};

struct VelocityChangeEntry__Array__VTable {
};

struct VelocityChangeEntry__Array__StaticFields {
};

struct VelocityChangeEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct VelocityChangeEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct VelocityChangeEntry__Array__VTable vtable;
};

struct IEnumerator_1_PhysicsDebugTools_VelocityChangeEntry___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PhysicsDebugTools_VelocityChangeEntry___StaticFields {
};

struct IEnumerator_1_PhysicsDebugTools_VelocityChangeEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PhysicsDebugTools_VelocityChangeEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PhysicsDebugTools_VelocityChangeEntry___VTable vtable;
};

struct List_1_PhysicsDebugTools_VelocityChangeEntry___VTable {
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

struct List_1_PhysicsDebugTools_VelocityChangeEntry___StaticFields {
    struct VelocityChangeEntry__Array *_emptyArray;
};

struct List_1_PhysicsDebugTools_VelocityChangeEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PhysicsDebugTools_VelocityChangeEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PhysicsDebugTools_VelocityChangeEntry___VTable vtable;
};

struct RecordEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RecordEntry__StaticFields {
};

struct RecordEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RecordEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RecordEntry__VTable vtable;
};

struct RecordEntry__Array__VTable {
};

struct RecordEntry__Array__StaticFields {
};

struct RecordEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RecordEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RecordEntry__Array__VTable vtable;
};

struct IEnumerator_1_PhysicsDebugTools_RecordEntry___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PhysicsDebugTools_RecordEntry___StaticFields {
};

struct IEnumerator_1_PhysicsDebugTools_RecordEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PhysicsDebugTools_RecordEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PhysicsDebugTools_RecordEntry___VTable vtable;
};

struct List_1_PhysicsDebugTools_RecordEntry___VTable {
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

struct List_1_PhysicsDebugTools_RecordEntry___StaticFields {
    struct RecordEntry__Array *_emptyArray;
};

struct List_1_PhysicsDebugTools_RecordEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PhysicsDebugTools_RecordEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PhysicsDebugTools_RecordEntry___VTable vtable;
};

struct Record__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Record__StaticFields {
};

struct Record__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Record__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Record__VTable vtable;
};

struct Record__Array__VTable {
};

struct Record__Array__StaticFields {
};

struct Record__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Record__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Record__Array__VTable vtable;
};

struct IEnumerator_1_PhysicsDebugTools_Record___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PhysicsDebugTools_Record___StaticFields {
};

struct IEnumerator_1_PhysicsDebugTools_Record___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PhysicsDebugTools_Record___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PhysicsDebugTools_Record___VTable vtable;
};

struct List_1_PhysicsDebugTools_Record___VTable {
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

struct List_1_PhysicsDebugTools_Record___StaticFields {
    struct Record__Array *_emptyArray;
};

struct List_1_PhysicsDebugTools_Record___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PhysicsDebugTools_Record___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PhysicsDebugTools_Record___VTable vtable;
};

struct PhysicsDebugRecorder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PhysicsDebugRecorder__StaticFields {
    bool s_isInstantiated;
    struct PhysicsDebugRecorder *_Instance_k__BackingField;
};

struct PhysicsDebugRecorder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsDebugRecorder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsDebugRecorder__VTable vtable;
};

struct __declspec(align(8)) PhysicsDebugRecorder_c_DisplayClass18_0__Fields {
    struct Entity *entity;
};

struct PhysicsDebugRecorder_c_DisplayClass18_0 {
    struct PhysicsDebugRecorder_c_DisplayClass18_0__Class *klass;
    MonitorData *monitor;
    struct PhysicsDebugRecorder_c_DisplayClass18_0__Fields fields;
};

struct PhysicsDebugRecorder_c_DisplayClass18_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PhysicsDebugRecorder_c_DisplayClass18_0__StaticFields {
};

struct PhysicsDebugRecorder_c_DisplayClass18_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsDebugRecorder_c_DisplayClass18_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsDebugRecorder_c_DisplayClass18_0__VTable vtable;
};

struct __declspec(align(8)) AOTDummy__Fields {
    struct Object *o;
};

struct AOTDummy {
    struct AOTDummy__Class *klass;
    MonitorData *monitor;
    struct AOTDummy__Fields fields;
};

struct AOTDummy__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AOTDummy__StaticFields {
    struct Dictionary_2_System_Type_System_Type_ *AOTBBParameterTypesDic;
    struct Dictionary_2_System_Type_System_Type_ *AOTVariableTypesDic;
};

struct AOTDummy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AOTDummy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AOTDummy__VTable vtable;
};

struct HasPurchasedSkillUpgradeCondition__Fields {
    struct Condition_1__Fields _;
    bool Inverse;
};

struct HasPurchasedSkillUpgradeCondition {
    struct HasPurchasedSkillUpgradeCondition__Class *klass;
    MonitorData *monitor;
    struct HasPurchasedSkillUpgradeCondition__Fields fields;
};

struct HasPurchasedSkillUpgradeCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct HasPurchasedSkillUpgradeCondition__StaticFields {
};

struct HasPurchasedSkillUpgradeCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HasPurchasedSkillUpgradeCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HasPurchasedSkillUpgradeCondition__VTable vtable;
};

struct SkillUpgradeShopPurchaseResultCondition__Fields {
    struct Condition_1__Fields _;
    PurchaseResult__Enum PurchaseInterruptResult;
    
    bool Inverse;
};

struct SkillUpgradeShopPurchaseResultCondition {
    struct SkillUpgradeShopPurchaseResultCondition__Class *klass;
    MonitorData *monitor;
    struct SkillUpgradeShopPurchaseResultCondition__Fields fields;
};

struct SkillUpgradeShopPurchaseResultCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct SkillUpgradeShopPurchaseResultCondition__StaticFields {
};

struct SkillUpgradeShopPurchaseResultCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkillUpgradeShopPurchaseResultCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkillUpgradeShopPurchaseResultCondition__VTable vtable;
};

struct WeaponAnimationPlayer__Fields {
    struct AnimationPlayer__Fields _;
    struct MoonReference_1_IWeapon_ *Weapon;
};

struct WeaponAnimationPlayer {
    struct WeaponAnimationPlayer__Class *klass;
    MonitorData *monitor;
    struct WeaponAnimationPlayer__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_IWeapon___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_IWeapon_ *m_cachedProxyType;
    struct IWeapon *m_volatileValue;
};

struct MoonReference_1_IWeapon_ {
    struct MoonReference_1_IWeapon___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_IWeapon___Fields fields;
};

struct IMoonType_1_IWeapon_ {
    struct IMoonType_1_IWeapon___Class *klass;
    MonitorData *monitor;
};

struct IWeapon {
    struct IWeapon__Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_IWeapon___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_IWeapon___StaticFields {
};

struct IMoonType_1_IWeapon___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_IWeapon___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_IWeapon___VTable vtable;
};

struct IWeapon__VTable {
    VirtualInvokeData get_WeaponAnimator;
    VirtualInvokeData get_WeaponJoint;
    VirtualInvokeData SetAnimatorPosition;
    VirtualInvokeData GetAnimatorTransforms;
};

struct IWeapon__StaticFields {
};

struct IWeapon__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IWeapon__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IWeapon__VTable vtable;
};

struct IWeapon___VTable {
};

struct IWeapon___StaticFields {
};

struct IWeapon___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IWeapon___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IWeapon___VTable vtable;
};

struct MoonReference_1_IWeapon___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
    VirtualInvokeData get_IsStaticValue;
    VirtualInvokeData GetTypeData;
    VirtualInvokeData CanResolve;
    VirtualInvokeData get_IsCrossSceneReference;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
};

struct MoonReference_1_IWeapon___StaticFields {
};

struct MoonReference_1_IWeapon___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_IWeapon___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_IWeapon___VTable vtable;
};

struct WeaponAnimationPlayer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnEntityCreated;
    VirtualInvokeData get_ExternalTarget;
    VirtualInvokeData Play;
    VirtualInvokeData OnActiveAnimationStopEvent;
};

struct WeaponAnimationPlayer__StaticFields {
};

struct WeaponAnimationPlayer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WeaponAnimationPlayer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WeaponAnimationPlayer__VTable vtable;
};

struct MeleeComboMoveChainsword__Fields {
    struct MeleeComboMove__Fields _;
    struct MoonTimeline *AttackTimeline;
    DamageWeight__Enum DamageWeight;
    
    float Damage;
    bool m_inMove;
    bool m_attackSegmentEnded;
    struct MeleeWeaponChainsword *m_swordWeapon;
};

struct MeleeComboMoveChainsword {
    struct MeleeComboMoveChainsword__Class *klass;
    MonitorData *monitor;
    struct MeleeComboMoveChainsword__Fields fields;
};

struct MeleeComboMoveChainsword__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_MoveHasFinished;
    VirtualInvokeData get_ComboMoveType;
    VirtualInvokeData get_ButtonInputType;
    VirtualInvokeData get_IsAttackButtonDown;
    VirtualInvokeData get_OnAttackButtonPressed;
    VirtualInvokeData get_OnAttackButtonReleased;
    VirtualInvokeData CanExecute;
    VirtualInvokeData CanBeInterruptedBy;
    VirtualInvokeData CanInputBeQueued;
    VirtualInvokeData EnterMove;
    VirtualInvokeData UpdateMove;
    VirtualInvokeData ExitMove;
    VirtualInvokeData InterruptMove;
    VirtualInvokeData ModifyGravityPlatformMovementSettings;
    VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
    VirtualInvokeData get_MoveCooldown;
    VirtualInvokeData get_MoveCooldownTimer;
    VirtualInvokeData set_MoveCooldownTimer;
    VirtualInvokeData get_WasGroundedSinceLastExecution;
    VirtualInvokeData set_WasGroundedSinceLastExecution;
    VirtualInvokeData OnAnimationEvent;
    VirtualInvokeData GetComboMove;
    VirtualInvokeData get_ComboMoves;
    VirtualInvokeData get_ComboAbilityType;
    VirtualInvokeData get_ProviderCooldown;
    VirtualInvokeData get_ProviderCooldownTimer;
    VirtualInvokeData set_ProviderCooldownTimer;
    VirtualInvokeData get_EffectiveDamage;
    VirtualInvokeData get_EffectiveRootMotionMultiplier;
    VirtualInvokeData get_DealtDamage;
    VirtualInvokeData get_AnimationSpeedMultiplierParameterName;
    VirtualInvokeData OnCollision;
    VirtualInvokeData OnGroundCollision;
    VirtualInvokeData get_MoveHasFinished_1;
    VirtualInvokeData get_ButtonInputType_1;
    VirtualInvokeData get_ComboAbilityType_1;
    VirtualInvokeData EnterMove_1;
    VirtualInvokeData OnMoveWindowOpen;
    VirtualInvokeData OnMoveWindowClosed;
    VirtualInvokeData UpdateMove_1;
    VirtualInvokeData ExitMove_1;
    VirtualInvokeData get_IsAttackButtonUsed;
    VirtualInvokeData get_IsAttackButtonDown_1;
    VirtualInvokeData get_OnAttackButtonPressed_1;
    VirtualInvokeData get_OnAttackButtonReleased_1;
    VirtualInvokeData get_IsUninterruptable;
    VirtualInvokeData CanExecute_1;
    VirtualInvokeData CanBeInterruptedBy_1;
    VirtualInvokeData InterruptMove_1;
    VirtualInvokeData Initialize;
    VirtualInvokeData Deinitialize;
    VirtualInvokeData ModifyGravityPlatformMovementSettings_1;
    VirtualInvokeData ModifyHorizontalPlatformMovementSettings_1;
    VirtualInvokeData OnAnimationEvent_1;
    VirtualInvokeData OnDestroyMove;
};

}
