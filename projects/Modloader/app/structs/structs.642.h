namespace app {
    struct ZoneProcessor_2_LZData_EZData___StaticFields {
    };

    struct ZoneProcessor_2_LZData_EZData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ZoneProcessor_2_LZData_EZData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ZoneProcessor_2_LZData_EZData___VTable vtable;
    };

    struct ExampleZoneProcessor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData RegisterListenerZoneTask;
        VirtualInvokeData RegisterEmitterZoneTask;
        VirtualInvokeData Initialize;
        VirtualInvokeData Update;
        VirtualInvokeData ResetListener;
        VirtualInvokeData DefragmentStructures;
        VirtualInvokeData get_ActiveListenerZones;
        VirtualInvokeData get_MaxListenerZones;
        VirtualInvokeData get_ActiveEmitterZones;
        VirtualInvokeData get_MaxEmitterZones;
        VirtualInvokeData ProcessZoneTasks;
        VirtualInvokeData ResetListenerTracking;
        VirtualInvokeData InitializeEmitterZoneTask;
        VirtualInvokeData InitializeListenerZoneTask;
        VirtualInvokeData TearDownListenerZoneTask;
        VirtualInvokeData TearDownEmitterZoneTask;
    };

    struct ExampleZoneProcessor__StaticFields {
    };

    struct ExampleZoneProcessor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExampleZoneProcessor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExampleZoneProcessor__VTable vtable;
    };

    struct __declspec(align(8)) ListenerSyncProcessor__Fields {
        struct ListenerSyncProcessor_ListenerSyncTask__Array* m_listenerSyncTasks;
        struct UInt64__Array* m_defaultListeners;
        bool m_defaultListenersRequireUpdate;
    };

    struct ListenerSyncProcessor {
        struct ListenerSyncProcessor__Class* klass;
        MonitorData* monitor;
        struct ListenerSyncProcessor__Fields fields;
    };

    struct __declspec(align(8)) ListenerSyncProcessor_ListenerSyncTask__Fields {
        int32_t Id;
        int32_t _FrameQuantinization_k__BackingField;
        struct SoundListenerReference _Listener_k__BackingField;
        bool _IsInitialized_k__BackingField;
    };

    struct ListenerSyncProcessor_ListenerSyncTask {
        struct ListenerSyncProcessor_ListenerSyncTask__Class* klass;
        MonitorData* monitor;
        struct ListenerSyncProcessor_ListenerSyncTask__Fields fields;
    };

    struct ListenerSyncProcessor_ListenerSyncTask__Array {
        struct ListenerSyncProcessor_ListenerSyncTask__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ListenerSyncProcessor_ListenerSyncTask* vector[32];
    };

    struct ListenerSyncProcessor_ListenerSyncTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListenerSyncProcessor_ListenerSyncTask__StaticFields {
    };

    struct ListenerSyncProcessor_ListenerSyncTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListenerSyncProcessor_ListenerSyncTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListenerSyncProcessor_ListenerSyncTask__VTable vtable;
    };

    struct ListenerSyncProcessor_ListenerSyncTask__Array__VTable {
    };

    struct ListenerSyncProcessor_ListenerSyncTask__Array__StaticFields {
    };

    struct ListenerSyncProcessor_ListenerSyncTask__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListenerSyncProcessor_ListenerSyncTask__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListenerSyncProcessor_ListenerSyncTask__Array__VTable vtable;
    };

    struct ListenerSyncProcessor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData RegisterListenerSync;
        VirtualInvokeData Update;
        VirtualInvokeData Initialize;
        VirtualInvokeData ReregisterAudioListeners;
    };

    struct ListenerSyncProcessor__StaticFields {
    };

    struct ListenerSyncProcessor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListenerSyncProcessor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListenerSyncProcessor__VTable vtable;
    };

    struct __declspec(align(8)) WwiseSyncProcessor__Fields {
        struct WwiseSyncProcessor_RtpcSyncTask__Array* m_rtpcSyncTasks;
        struct PositionSyncTask__Array* m_positionSyncTasks;
        struct ZoneProcessor* m_zoneProcessor;
        struct IListenerSyncProcessor* m_listenerSyncProcessor;
        int32_t m_validPositionSyncsSize;
        int32_t m_validRTPCSyncTaskSize;
    };

    struct WwiseSyncProcessor {
        struct WwiseSyncProcessor__Class* klass;
        MonitorData* monitor;
        struct WwiseSyncProcessor__Fields fields;
    };

    struct __declspec(align(8)) WwiseSyncProcessor_RtpcSyncTask__Fields {
        int32_t Id;
        struct Func_1_Single_* _Getter_k__BackingField;
        struct SoundHostReference _Host_k__BackingField;
        struct RTPC* _Target_k__BackingField;
        float _CachedValue_k__BackingField;
        int32_t _FrameQuantinization_k__BackingField;
    };

    struct WwiseSyncProcessor_RtpcSyncTask {
        struct WwiseSyncProcessor_RtpcSyncTask__Class* klass;
        MonitorData* monitor;
        struct WwiseSyncProcessor_RtpcSyncTask__Fields fields;
    };

    struct Func_1_Single___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_1_Single_ {
        struct Func_1_Single___Class* klass;
        MonitorData* monitor;
        struct Func_1_Single___Fields fields;
    };

    struct WwiseSyncProcessor_RtpcSyncTask__Array {
        struct WwiseSyncProcessor_RtpcSyncTask__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WwiseSyncProcessor_RtpcSyncTask* vector[32];
    };

    struct IListenerSyncProcessor {
        struct IListenerSyncProcessor__Class* klass;
        MonitorData* monitor;
    };

    struct Func_1_Single___VTable {
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

    struct Func_1_Single___StaticFields {
    };

    struct Func_1_Single___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_1_Single___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_1_Single___VTable vtable;
    };

    struct WwiseSyncProcessor_RtpcSyncTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WwiseSyncProcessor_RtpcSyncTask__StaticFields {
    };

    struct WwiseSyncProcessor_RtpcSyncTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WwiseSyncProcessor_RtpcSyncTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WwiseSyncProcessor_RtpcSyncTask__VTable vtable;
    };

    struct WwiseSyncProcessor_RtpcSyncTask__Array__VTable {
    };

    struct WwiseSyncProcessor_RtpcSyncTask__Array__StaticFields {
    };

    struct WwiseSyncProcessor_RtpcSyncTask__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WwiseSyncProcessor_RtpcSyncTask__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WwiseSyncProcessor_RtpcSyncTask__Array__VTable vtable;
    };

    struct IListenerSyncProcessor__VTable {
        VirtualInvokeData RegisterListenerSync;
        VirtualInvokeData Update;
        VirtualInvokeData Initialize;
        VirtualInvokeData ReregisterAudioListeners;
    };

    struct IListenerSyncProcessor__StaticFields {
    };

    struct IListenerSyncProcessor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IListenerSyncProcessor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IListenerSyncProcessor__VTable vtable;
    };

    struct WwiseSyncProcessor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WwiseSyncProcessor__StaticFields {
        bool DisableZoneSync;
    };

    struct WwiseSyncProcessor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WwiseSyncProcessor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WwiseSyncProcessor__VTable vtable;
    };

    struct __declspec(align(8)) HashSet_1_System_UInt32___Fields {
        struct Int32__Array* _buckets;
        struct HashSet_1_T_Slot_System_UInt32___Array* _slots;
        int32_t _count;
        int32_t _lastIndex;
        int32_t _freeList;
        struct IEqualityComparer_1_System_UInt32_* _comparer;
        int32_t _version;
        struct SerializationInfo* _siInfo;
    };

    struct HashSet_1_System_UInt32_ {
        struct HashSet_1_System_UInt32___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_System_UInt32___Fields fields;
    };

    struct HashSet_1_T_Slot_System_UInt32_ {
        int32_t hashCode;
        int32_t next;
        uint32_t value;
    };

    struct HashSet_1_T_Slot_System_UInt32___Boxed {
        struct HashSet_1_T_Slot_System_UInt32___Class* klass;
        MonitorData* monitor;
        struct HashSet_1_T_Slot_System_UInt32_ fields;
    };

    struct HashSet_1_T_Slot_System_UInt32___Array {
        struct HashSet_1_T_Slot_System_UInt32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HashSet_1_T_Slot_System_UInt32_ vector[32];
    };

    struct HashSet_1_T_Slot_System_UInt32___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HashSet_1_T_Slot_System_UInt32___StaticFields {
    };

    struct HashSet_1_T_Slot_System_UInt32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashSet_1_T_Slot_System_UInt32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HashSet_1_T_Slot_System_UInt32___VTable vtable;
    };

    struct HashSet_1_T_Slot_System_UInt32___Array__VTable {
    };

    struct HashSet_1_T_Slot_System_UInt32___Array__StaticFields {
    };

    struct HashSet_1_T_Slot_System_UInt32___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashSet_1_T_Slot_System_UInt32___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HashSet_1_T_Slot_System_UInt32___Array__VTable vtable;
    };

    struct HashSet_1_System_UInt32___VTable {
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
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData OnDeserialization;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData OnDeserialization_1;
        VirtualInvokeData Add;
        VirtualInvokeData UnionWith;
    };

    struct HashSet_1_System_UInt32___StaticFields {
    };

    struct HashSet_1_System_UInt32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HashSet_1_System_UInt32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HashSet_1_System_UInt32___VTable vtable;
    };

    struct UberStateToWwiseData__Fields {
        struct ScriptableObject__Fields _;
        struct UberStateToWwiseData_UberStateToWWiseEntry__Array* Map;
    };

    struct UberStateToWwiseData {
        struct UberStateToWwiseData__Class* klass;
        MonitorData* monitor;
        struct UberStateToWwiseData__Fields fields;
    };

    struct __declspec(align(8)) UberStateToWwiseData_UberStateToWWiseEntry__Fields {
        struct UberStateToWwiseData_UberStateConditions* UberStateConditions;
        struct State__Array* WwiseStatesToSet;
    };

    struct UberStateToWwiseData_UberStateToWWiseEntry {
        struct UberStateToWwiseData_UberStateToWWiseEntry__Class* klass;
        MonitorData* monitor;
        struct UberStateToWwiseData_UberStateToWWiseEntry__Fields fields;
    };

    struct __declspec(align(8)) UberStateToWwiseData_UberStateConditions__Fields {
        struct DesiredUberStateBool__Array* BoolRequirements;
        struct DesiredUberStateFloat__Array* FloatRequirements;
        struct DesiredUberStateInt__Array* IntRequirements;
        struct DesiredUberStateByte__Array* ByteRequirements;
        struct UberStateToWwiseData_DesiredConditionUberState__Array* ConditionRequirements;
    };

    struct UberStateToWwiseData_UberStateConditions {
        struct UberStateToWwiseData_UberStateConditions__Class* klass;
        MonitorData* monitor;
        struct UberStateToWwiseData_UberStateConditions__Fields fields;
    };

    struct __declspec(align(8)) UberStateToWwiseData_DesiredConditionUberState__Fields {
        struct ConditionUberState* State;
        bool DesiredStateValue;
    };

    struct UberStateToWwiseData_DesiredConditionUberState {
        struct UberStateToWwiseData_DesiredConditionUberState__Class* klass;
        MonitorData* monitor;
        struct UberStateToWwiseData_DesiredConditionUberState__Fields fields;
    };

    struct UberStateToWwiseData_DesiredConditionUberState__Array {
        struct UberStateToWwiseData_DesiredConditionUberState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberStateToWwiseData_DesiredConditionUberState* vector[32];
    };

    struct State__Array {
        struct State__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct State* vector[32];
    };

    struct UberStateToWwiseData_UberStateToWWiseEntry__Array {
        struct UberStateToWwiseData_UberStateToWWiseEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberStateToWwiseData_UberStateToWWiseEntry* vector[32];
    };

    struct UberStateToWwiseData_DesiredConditionUberState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberStateToWwiseData_DesiredConditionUberState__StaticFields {
    };

    struct UberStateToWwiseData_DesiredConditionUberState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberStateToWwiseData_DesiredConditionUberState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberStateToWwiseData_DesiredConditionUberState__VTable vtable;
    };

    struct UberStateToWwiseData_DesiredConditionUberState__Array__VTable {
    };

    struct UberStateToWwiseData_DesiredConditionUberState__Array__StaticFields {
    };

    struct UberStateToWwiseData_DesiredConditionUberState__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberStateToWwiseData_DesiredConditionUberState__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberStateToWwiseData_DesiredConditionUberState__Array__VTable vtable;
    };

    struct UberStateToWwiseData_UberStateConditions__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberStateToWwiseData_UberStateConditions__StaticFields {
    };

    struct UberStateToWwiseData_UberStateConditions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberStateToWwiseData_UberStateConditions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberStateToWwiseData_UberStateConditions__VTable vtable;
    };

    struct State__Array__VTable {
    };

    struct State__Array__StaticFields {
    };

    struct State__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct State__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct State__Array__VTable vtable;
    };

    struct UberStateToWwiseData_UberStateToWWiseEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsFulfilled;
    };

    struct UberStateToWwiseData_UberStateToWWiseEntry__StaticFields {
    };

    struct UberStateToWwiseData_UberStateToWWiseEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberStateToWwiseData_UberStateToWWiseEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberStateToWwiseData_UberStateToWWiseEntry__VTable vtable;
    };

    struct UberStateToWwiseData_UberStateToWWiseEntry__Array__VTable {
    };

    struct UberStateToWwiseData_UberStateToWWiseEntry__Array__StaticFields {
    };

    struct UberStateToWwiseData_UberStateToWWiseEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberStateToWwiseData_UberStateToWWiseEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberStateToWwiseData_UberStateToWWiseEntry__Array__VTable vtable;
    };

    struct UberStateToWwiseData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberStateToWwiseData__StaticFields {
    };

    struct UberStateToWwiseData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberStateToWwiseData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberStateToWwiseData__VTable vtable;
    };

    struct UberStateWwiseStateManager__Fields {
        struct MonoBehaviour__Fields _;
        struct UberStateToWwiseData* UberStateToWwiseData;
        struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_* DefaultWwiseStatesToSet;
        struct IUberState__Array* _AffectingUberStates_k__BackingField;
    };

    struct UberStateWwiseStateManager {
        struct UberStateWwiseStateManager__Class* klass;
        MonitorData* monitor;
        struct UberStateWwiseStateManager__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Fields {
        struct UberStateWwiseStateManager_ResetStateData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_ {
        struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Fields fields;
    };

    struct UberStateWwiseStateManager_ResetStateData {
        struct State* State;
        uint32_t DefaultStateID;
    };

    struct UberStateWwiseStateManager_ResetStateData__Boxed {
        struct UberStateWwiseStateManager_ResetStateData__Class* klass;
        MonitorData* monitor;
        struct UberStateWwiseStateManager_ResetStateData fields;
    };

    struct UberStateWwiseStateManager_ResetStateData__Array {
        struct UberStateWwiseStateManager_ResetStateData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberStateWwiseStateManager_ResetStateData vector[32];
    };

    struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_ {
        struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Class* klass;
        MonitorData* monitor;
    };

    struct WotwUberStateWwiseStateManager__Fields {
        struct UberStateWwiseStateManager__Fields _;
        struct WotwUberStateToWwiseData* WotwUberStateToWwiseData;
        struct PlayerUberStateDescriptor* PlayerUberStateDescriptor;
        struct Boolean__Array* m_alreadySetWotwStates;
    };

    struct WotwUberStateWwiseStateManager {
        struct WotwUberStateWwiseStateManager__Class* klass;
        MonitorData* monitor;
        struct WotwUberStateWwiseStateManager__Fields fields;
    };

    struct WotwUberStateToWwiseData__Fields {
        struct UberStateToWwiseData__Fields _;
        struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array* InheritedMap;
        struct UberStateToWwiseData* CopyData;
    };

    struct WotwUberStateToWwiseData {
        struct WotwUberStateToWwiseData__Class* klass;
        MonitorData* monitor;
        struct WotwUberStateToWwiseData__Fields fields;
    };

    struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Fields {
        struct UberStateToWwiseData_UberStateToWWiseEntry__Fields _;
        struct WotwUberStateToWwiseData_WotwUberStateConditions* WotwUberStateConditions;
    };

    struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry {
        struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class* klass;
        MonitorData* monitor;
        struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Fields fields;
    };

    struct __declspec(align(8)) WotwUberStateToWwiseData_WotwUberStateConditions__Fields {
        struct WotwUberStateToWwiseData_AbilityRequirementCondition__Array* PlayerAbilityRequirements;
    };

    struct WotwUberStateToWwiseData_WotwUberStateConditions {
        struct WotwUberStateToWwiseData_WotwUberStateConditions__Class* klass;
        MonitorData* monitor;
        struct WotwUberStateToWwiseData_WotwUberStateConditions__Fields fields;
    };

    struct __declspec(align(8)) WotwUberStateToWwiseData_AbilityRequirementCondition__Fields {
        AbilityType__Enum AbilityType;

        bool HasAbility;
    };

    struct WotwUberStateToWwiseData_AbilityRequirementCondition {
        struct WotwUberStateToWwiseData_AbilityRequirementCondition__Class* klass;
        MonitorData* monitor;
        struct WotwUberStateToWwiseData_AbilityRequirementCondition__Fields fields;
    };

    struct WotwUberStateToWwiseData_AbilityRequirementCondition__Array {
        struct WotwUberStateToWwiseData_AbilityRequirementCondition__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WotwUberStateToWwiseData_AbilityRequirementCondition* vector[32];
    };

    struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array {
        struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry* vector[32];
    };

    struct UberStateWwiseStateManager_ResetStateData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberStateWwiseStateManager_ResetStateData__StaticFields {
    };

    struct UberStateWwiseStateManager_ResetStateData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberStateWwiseStateManager_ResetStateData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberStateWwiseStateManager_ResetStateData__VTable vtable;
    };

    struct UberStateWwiseStateManager_ResetStateData__Array__VTable {
    };

    struct UberStateWwiseStateManager_ResetStateData__Array__StaticFields {
    };

    struct UberStateWwiseStateManager_ResetStateData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberStateWwiseStateManager_ResetStateData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberStateWwiseStateManager_ResetStateData__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___StaticFields {
    };

    struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___VTable vtable;
    };

    struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___VTable {
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

    struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___StaticFields {
        struct UberStateWwiseStateManager_ResetStateData__Array* _emptyArray;
    };

    struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___VTable vtable;
    };

    struct WotwUberStateToWwiseData_AbilityRequirementCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WotwUberStateToWwiseData_AbilityRequirementCondition__StaticFields {
    };

    struct WotwUberStateToWwiseData_AbilityRequirementCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WotwUberStateToWwiseData_AbilityRequirementCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WotwUberStateToWwiseData_AbilityRequirementCondition__VTable vtable;
    };

    struct WotwUberStateToWwiseData_AbilityRequirementCondition__Array__VTable {
    };

    struct WotwUberStateToWwiseData_AbilityRequirementCondition__Array__StaticFields {
    };

    struct WotwUberStateToWwiseData_AbilityRequirementCondition__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WotwUberStateToWwiseData_AbilityRequirementCondition__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WotwUberStateToWwiseData_AbilityRequirementCondition__Array__VTable vtable;
    };

    struct WotwUberStateToWwiseData_WotwUberStateConditions__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WotwUberStateToWwiseData_WotwUberStateConditions__StaticFields {
    };

    struct WotwUberStateToWwiseData_WotwUberStateConditions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WotwUberStateToWwiseData_WotwUberStateConditions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WotwUberStateToWwiseData_WotwUberStateConditions__VTable vtable;
    };

    struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsFulfilled;
    };

    struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__StaticFields {
    };

    struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__VTable vtable;
    };

    struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__VTable {
    };

    struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__StaticFields {
    };

    struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__VTable vtable;
    };

    struct WotwUberStateToWwiseData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WotwUberStateToWwiseData__StaticFields {
    };

    struct WotwUberStateToWwiseData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WotwUberStateToWwiseData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WotwUberStateToWwiseData__VTable vtable;
    };

    struct WotwUberStateWwiseStateManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData GenerateResetState;
        VirtualInvokeData PopulateAffectedStates;
        VirtualInvokeData ResetWwiseStates;
        VirtualInvokeData UpdateWwiseStates;
    };

    struct WotwUberStateWwiseStateManager__StaticFields {
    };

    struct WotwUberStateWwiseStateManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WotwUberStateWwiseStateManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WotwUberStateWwiseStateManager__VTable vtable;
    };

    struct UberStateWwiseStateManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData OnDestroy;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
    };

    struct UberStateWwiseStateManager__StaticFields {
        struct UberStateWwiseStateManager* Instance;
    };

    struct UberStateWwiseStateManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberStateWwiseStateManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberStateWwiseStateManager__VTable vtable;
    };

    struct __declspec(align(8)) WwiseIntegration__Fields {
        double m_startTime;
    };

    struct WwiseIntegration {
        struct WwiseIntegration__Class* klass;
        MonitorData* monitor;
        struct WwiseIntegration__Fields fields;
    };

    struct WwiseIntegration__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WwiseIntegration__StaticFields {
    };

} // namespace app
