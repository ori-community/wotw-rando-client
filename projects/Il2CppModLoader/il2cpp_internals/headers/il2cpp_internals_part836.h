namespace app {
struct SwitchUndockingController__StaticFields {
  int32_t s_frameDelay;
  int32_t s_frameCounter;
  bool m_initialized;
  bool m_enabled;
};
struct SwitchUndockingController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SwitchUndockingController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SwitchUndockingController__VTable vtable;
};

enum UberGCLogic_MemoryProbeType__Enum : int32_t {
  UberGCLogic_MemoryProbeType__Enum_GcHeapAllocated = 0,
  UberGCLogic_MemoryProbeType__Enum_MemoryManagerAllocated = 1,
  UberGCLogic_MemoryProbeType__Enum_NvnAllocated = 2,
  UberGCLogic_MemoryProbeType__Enum_GcHeapReserved = 3,
  UberGCLogic_MemoryProbeType__Enum_MemoryManagerReserved = 4,
  UberGCLogic_MemoryProbeType__Enum_NvnReserved = 5,
  UberGCLogic_MemoryProbeType__Enum_PhysicalFree = 6,
  UberGCLogic_MemoryProbeType__Enum_PhysicalAllocatable = 7,
  UberGCLogic_MemoryProbeType__Enum_DesiredMaxHeapSize = 8,
  UberGCLogic_MemoryProbeType__Enum_SystemMemorySize = 9,
  UberGCLogic_MemoryProbeType__Enum_ActualUsage = 10,
  UberGCLogic_MemoryProbeType__Enum_Count = 11,
};
struct UberGCLogic_MemoryProbeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberGCLogic_MemoryProbeType__Enum value;
};

enum UberGCLogic_CleanupType__Enum : int32_t {
  UberGCLogic_CleanupType__Enum_Gc = 0,
  UberGCLogic_CleanupType__Enum_Proactive = 1,
  UberGCLogic_CleanupType__Enum_Panic = 2,
  UberGCLogic_CleanupType__Enum_Count = 3,
};
struct UberGCLogic_CleanupType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberGCLogic_CleanupType__Enum value;
};

struct UberGCLogic {
  struct UberGCLogic__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) UberGCLogic_GCLogicSettings__Fields {
  bool DisableAllCleanups;
  float RecheckTimegate;
  bool SimpleFaderGating;
  int32_t DefaultFaderSceneUnloadGate;
  float DefaultFaderCleanupTimegate;
  int32_t PanicSceneUnloadGate;
  float PanicTimeGate;
  bool UsePanicMemoryGate;
  float PanicMemoryGateMegabytes;
  float PanicGcUsageRatioGate;
  float PanicGcTimeGate;
  float DefaultFaderGcUsageRatioGate;
  float GcOnBlackTimegate;
  int32_t ForceCleansAfterTeleporter;
  bool AllowFaderSources;
  struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ * FaderOverrideActions;
};
struct UberGCLogic_GCLogicSettings {
  struct UberGCLogic_GCLogicSettings__Class *klass;
  struct MonitorData *monitor;
  struct UberGCLogic_GCLogicSettings__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ {
  struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Fields fields;
};
enum UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum : int32_t {
  UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum_Default = 0,
  UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum_NoCleanup = 1,
  UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum_ForceCleanup = 2,
};
struct UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum value;
};
struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ {
  int32_t hashCode;
  int32_t next;
  enum UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum key;
  enum UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum value;
};
struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Array {
  struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ vector[32];
};
struct IEqualityComparer_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_ {
  struct IEqualityComparer_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Fields {
  struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Fields fields;
};
struct UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array {
  struct UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum vector[32];
};
struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_ {
  struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Fields {
  struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Fields fields;
};
struct UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum__Array {
  struct UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum vector[32];
};
struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ {
  struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_ {
  struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ {
  struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ {
  enum UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum key;
  enum UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum value;
};
struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Boxed {
  struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ fields;
};
struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Array {
  struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ {
  struct IEnumerator_1_KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_ {
  struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction_ {
  struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class *klass;
  struct MonitorData *monitor;
};
struct Single__Array__Array {
  struct Single__Array__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Single__Array * vector[32];
};
struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable vtable;
};
struct IEqualityComparer_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___StaticFields {
};
struct IEqualityComparer_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___VTable vtable;
};
struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___StaticFields {
};
struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable vtable;
};
struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields {
};
struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable vtable;
};
struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___StaticFields {
};
struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___VTable vtable;
};
struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields {
};
struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable vtable;
};
struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields {
};
struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable vtable;
};
struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___StaticFields {
};
struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger___VTable vtable;
};
struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields {
};
struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable vtable;
};
struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable {
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
struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields {
};
struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UberShader_optimizations_gc_UberGCLogic_CleanupOutsideOfGameplayTrigger_UberShader_optimizations_gc_UberGCLogic_GCLogicSettings_FaderOverrideAction___VTable vtable;
};
struct UberGCLogic_GCLogicSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberGCLogic_GCLogicSettings__StaticFields {
};
struct UberGCLogic_GCLogicSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberGCLogic_GCLogicSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberGCLogic_GCLogicSettings__VTable vtable;
};
struct UberGCLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberGCLogic__StaticFields {
  struct UberGCLogic_GCLogicSettings * Settings;
  enum UberGCLogic_ResourceCollectPriorityMode__Enum CollectPriorityMode;
  struct Single__Array * s_memoryProbes;
  struct Single__Array * s_lastCleanupTimes;
  struct Single__Array__Array * s_lastCleanupCheckTimes;
  struct Int32__Array * s_sceneUnloadsSinceLastCleanup;
  struct Int32__Array * s_fadersDoneSinceLastCleanup;
  struct Int32__Array * s_forcedCleanupsAfterFaderType;
};
struct UberGCLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberGCLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberGCLogic__VTable vtable;
};

struct UberAtlasPrewarmContainer__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_UnityEngine_Texture2D_ * Textures;
  bool m_deactivatedAfterBoot;
};
struct UberAtlasPrewarmContainer {
  struct UberAtlasPrewarmContainer__Class *klass;
  struct MonitorData *monitor;
  struct UberAtlasPrewarmContainer__Fields fields;
};
struct UberAtlasPrewarmContainer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberAtlasPrewarmContainer__StaticFields {
  bool TrilinearFiltering;
  struct UberAtlasPrewarmContainer * s_instance;
};
struct UberAtlasPrewarmContainer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberAtlasPrewarmContainer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberAtlasPrewarmContainer__VTable vtable;
};

struct UberShaderAtlasBuildValidator {
  struct UberShaderAtlasBuildValidator__Class *klass;
  struct MonitorData *monitor;
};
struct UberShaderAtlasBuildValidator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberShaderAtlasBuildValidator__StaticFields {
  struct List_1_System_String_ * s_validationFailures;
};
struct UberShaderAtlasBuildValidator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberShaderAtlasBuildValidator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberShaderAtlasBuildValidator__VTable vtable;
};

struct AutomaticParentSelector__Fields {
  struct MonoBehaviour__Fields _;
};
struct AutomaticParentSelector {
  struct AutomaticParentSelector__Class *klass;
  struct MonitorData *monitor;
  struct AutomaticParentSelector__Fields fields;
};
struct AutomaticParentSelector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AutomaticParentSelector__StaticFields {
};
struct AutomaticParentSelector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AutomaticParentSelector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AutomaticParentSelector__VTable vtable;
};

struct MoonIconRenderer__Fields {
  struct TextRenderer__Fields _;
  struct TextBoxIconsFontGenerator * Icons;
  struct Vector2 IconOffset;
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * m_data;
  struct List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_ * IconObjects;
  struct List_1_System_Single_ * Positions;
};
struct MoonIconRenderer {
  struct MoonIconRenderer__Class *klass;
  struct MonitorData *monitor;
  struct MoonIconRenderer__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_GameObject_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ {
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ {
  int32_t hashCode;
  int32_t next;
  struct GameObject * key;
  struct List_1_UnityEngine_GameObject_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Fields {
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Fields {
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Fields fields;
};
struct List_1_UnityEngine_GameObject___Array {
  struct List_1_UnityEngine_GameObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_UnityEngine_GameObject_ * vector[32];
};
struct IEnumerator_1_List_1_UnityEngine_GameObject_ {
  struct IEnumerator_1_List_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_List_1_UnityEngine_GameObject_ {
  struct ICollection_1_List_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ {
  struct GameObject * key;
  struct List_1_UnityEngine_GameObject_ * value;
};
struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Boxed {
  struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ fields;
};
struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Array {
  struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_List_1_UnityEngine_GameObject_ {
  struct IEnumerable_1_List_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___Fields {
  struct MoonIconRenderer_IconObject__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_ {
  struct List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___Fields fields;
};
struct MoonIconRenderer_IconObject {
  struct Vector2 Position;
  int32_t Index;
  struct GameObject * Instance;
};
struct MoonIconRenderer_IconObject__Boxed {
  struct MoonIconRenderer_IconObject__Class *klass;
  struct MonitorData *monitor;
  struct MoonIconRenderer_IconObject fields;
};
struct MoonIconRenderer_IconObject__Array {
  struct MoonIconRenderer_IconObject__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonIconRenderer_IconObject vector[32];
};
struct IEnumerator_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_ {
  struct IEnumerator_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable vtable;
};
struct IEnumerator_1_List_1_UnityEngine_GameObject___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_List_1_UnityEngine_GameObject___StaticFields {
};
struct IEnumerator_1_List_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_List_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_List_1_UnityEngine_GameObject___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable vtable;
};
struct ICollection_1_List_1_UnityEngine_GameObject___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_List_1_UnityEngine_GameObject___StaticFields {
};
struct ICollection_1_List_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_List_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_List_1_UnityEngine_GameObject___VTable vtable;
};
struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields {
};
struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable vtable;
};
struct IEnumerable_1_List_1_UnityEngine_GameObject___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_List_1_UnityEngine_GameObject___StaticFields {
};
struct IEnumerable_1_List_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_List_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_List_1_UnityEngine_GameObject___VTable vtable;
};
struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable {
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
struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields {
};
struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___VTable vtable;
};
struct MoonIconRenderer_IconObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonIconRenderer_IconObject__StaticFields {
};
struct MoonIconRenderer_IconObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonIconRenderer_IconObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonIconRenderer_IconObject__VTable vtable;
};
struct IEnumerator_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___StaticFields {
};
struct IEnumerator_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___VTable vtable;
};
struct List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___VTable {
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
struct List_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject___StaticFields {
  struct MoonIconRenderer_IconObject__Array * _emptyArray;
};}