namespace app {
struct HashSet_1_System_UInt32___StaticFields {
};
struct HashSet_1_System_UInt32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HashSet_1_System_UInt32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HashSet_1_System_UInt32___VTable vtable;
};

struct UberStateToWwiseData__Fields {
  struct ScriptableObject__Fields _;
  struct UberStateToWwiseData_UberStateToWWiseEntry__Array * Map;
};
struct UberStateToWwiseData {
  struct UberStateToWwiseData__Class *klass;
  struct MonitorData *monitor;
  struct UberStateToWwiseData__Fields fields;
};
struct __declspec(align(8)) UberStateToWwiseData_UberStateToWWiseEntry__Fields {
  struct UberStateToWwiseData_UberStateConditions * UberStateConditions;
  struct State__Array * WwiseStatesToSet;
};
struct UberStateToWwiseData_UberStateToWWiseEntry {
  struct UberStateToWwiseData_UberStateToWWiseEntry__Class *klass;
  struct MonitorData *monitor;
  struct UberStateToWwiseData_UberStateToWWiseEntry__Fields fields;
};
struct UberStateToWwiseData_UberStateToWWiseEntry__Array {
  struct UberStateToWwiseData_UberStateToWWiseEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberStateToWwiseData_UberStateToWWiseEntry * vector[32];
};
struct __declspec(align(8)) UberStateToWwiseData_UberStateConditions__Fields {
  struct DesiredUberStateBool__Array * BoolRequirements;
  struct DesiredUberStateFloat__Array * FloatRequirements;
  struct DesiredUberStateInt__Array * IntRequirements;
  struct DesiredUberStateByte__Array * ByteRequirements;
  struct UberStateToWwiseData_DesiredConditionUberState__Array * ConditionRequirements;
};
struct UberStateToWwiseData_UberStateConditions {
  struct UberStateToWwiseData_UberStateConditions__Class *klass;
  struct MonitorData *monitor;
  struct UberStateToWwiseData_UberStateConditions__Fields fields;
};
struct __declspec(align(8)) UberStateToWwiseData_DesiredConditionUberState__Fields {
  struct ConditionUberState * State;
  bool DesiredStateValue;
};
struct UberStateToWwiseData_DesiredConditionUberState {
  struct UberStateToWwiseData_DesiredConditionUberState__Class *klass;
  struct MonitorData *monitor;
  struct UberStateToWwiseData_DesiredConditionUberState__Fields fields;
};
struct UberStateToWwiseData_DesiredConditionUberState__Array {
  struct UberStateToWwiseData_DesiredConditionUberState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberStateToWwiseData_DesiredConditionUberState * vector[32];
};
struct State__Array {
  struct State__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct State * vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateToWwiseData_DesiredConditionUberState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateToWwiseData_DesiredConditionUberState__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateToWwiseData_UberStateConditions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateToWwiseData_UberStateConditions__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateToWwiseData_UberStateToWWiseEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateToWwiseData_UberStateToWWiseEntry__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateToWwiseData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateToWwiseData__VTable vtable;
};

struct UberStateWwiseStateManager__Fields {
  struct MonoBehaviour__Fields _;
  struct UberStateToWwiseData * UberStateToWwiseData;
  struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_ * DefaultWwiseStatesToSet;
  struct IUberState__Array * _AffectingUberStates_k__BackingField;
};
struct UberStateWwiseStateManager {
  struct UberStateWwiseStateManager__Class *klass;
  struct MonitorData *monitor;
  struct UberStateWwiseStateManager__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Fields {
  struct UberStateWwiseStateManager_ResetStateData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_ {
  struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Fields fields;
};
struct UberStateWwiseStateManager_ResetStateData {
  struct State * State;
  uint32_t DefaultStateID;
};
struct UberStateWwiseStateManager_ResetStateData__Boxed {
  struct UberStateWwiseStateManager_ResetStateData__Class *klass;
  struct MonitorData *monitor;
  struct UberStateWwiseStateManager_ResetStateData fields;
};
struct UberStateWwiseStateManager_ResetStateData__Array {
  struct UberStateWwiseStateManager_ResetStateData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberStateWwiseStateManager_ResetStateData vector[32];
};
struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData_ {
  struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Class *klass;
  struct MonitorData *monitor;
};
struct WotwUberStateWwiseStateManager__Fields {
  struct UberStateWwiseStateManager__Fields _;
  struct WotwUberStateToWwiseData * WotwUberStateToWwiseData;
  struct PlayerUberStateDescriptor * PlayerUberStateDescriptor;
  struct Boolean__Array * m_alreadySetWotwStates;
};
struct WotwUberStateWwiseStateManager {
  struct WotwUberStateWwiseStateManager__Class *klass;
  struct MonitorData *monitor;
  struct WotwUberStateWwiseStateManager__Fields fields;
};
struct WotwUberStateToWwiseData__Fields {
  struct UberStateToWwiseData__Fields _;
  struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array * InheritedMap;
  struct UberStateToWwiseData * CopyData;
};
struct WotwUberStateToWwiseData {
  struct WotwUberStateToWwiseData__Class *klass;
  struct MonitorData *monitor;
  struct WotwUberStateToWwiseData__Fields fields;
};
struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Fields {
  struct UberStateToWwiseData_UberStateToWWiseEntry__Fields _;
  struct WotwUberStateToWwiseData_WotwUberStateConditions * WotwUberStateConditions;
};
struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry {
  struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Class *klass;
  struct MonitorData *monitor;
  struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Fields fields;
};
struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array {
  struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry * vector[32];
};
struct __declspec(align(8)) WotwUberStateToWwiseData_WotwUberStateConditions__Fields {
  struct WotwUberStateToWwiseData_AbilityRequirementCondition__Array * PlayerAbilityRequirements;
};
struct WotwUberStateToWwiseData_WotwUberStateConditions {
  struct WotwUberStateToWwiseData_WotwUberStateConditions__Class *klass;
  struct MonitorData *monitor;
  struct WotwUberStateToWwiseData_WotwUberStateConditions__Fields fields;
};
struct __declspec(align(8)) WotwUberStateToWwiseData_AbilityRequirementCondition__Fields {
  enum AbilityType__Enum AbilityType;
  bool HasAbility;
};
struct WotwUberStateToWwiseData_AbilityRequirementCondition {
  struct WotwUberStateToWwiseData_AbilityRequirementCondition__Class *klass;
  struct MonitorData *monitor;
  struct WotwUberStateToWwiseData_AbilityRequirementCondition__Fields fields;
};
struct WotwUberStateToWwiseData_AbilityRequirementCondition__Array {
  struct WotwUberStateToWwiseData_AbilityRequirementCondition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WotwUberStateToWwiseData_AbilityRequirementCondition * vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateWwiseStateManager_ResetStateData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateWwiseStateManager_ResetStateData__VTable vtable;
};
struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___StaticFields {
};
struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct UberStateWwiseStateManager_ResetStateData__Array * _emptyArray;
};
struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Wwise_UberStateWwiseStateManager_ResetStateData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WotwUberStateToWwiseData_AbilityRequirementCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WotwUberStateToWwiseData_AbilityRequirementCondition__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WotwUberStateToWwiseData_WotwUberStateConditions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WotwUberStateToWwiseData_WotwUberStateToWWiseEntry__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WotwUberStateToWwiseData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WotwUberStateWwiseStateManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct UberStateWwiseStateManager * Instance;
};
struct UberStateWwiseStateManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateWwiseStateManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateWwiseStateManager__VTable vtable;
};

struct __declspec(align(8)) WwiseIntegration__Fields {
  double m_startTime;
};
struct WwiseIntegration {
  struct WwiseIntegration__Class *klass;
  struct MonitorData *monitor;
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
struct WwiseIntegration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseIntegration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseIntegration__VTable vtable;
};

struct __declspec(align(8)) WwiseEventSystem__Fields {
  struct WwiseEventSystem_SoundHandleProtected__Array * m_handles;
  struct Action_3_UInt32_UnityEngine_Vector3_Boolean_ * WwiseEventFired;
};
struct WwiseEventSystem {
  struct WwiseEventSystem__Class *klass;
  struct MonitorData *monitor;
  struct WwiseEventSystem__Fields fields;
};
struct WwiseEventSystem_SoundHandleProtected__Array {
  struct WwiseEventSystem_SoundHandleProtected__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WwiseEventSystem_SoundHandleProtected * vector[32];
};
struct Action_3_UInt32_UnityEngine_Vector3_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_3_UInt32_UnityEngine_Vector3_Boolean_ {
  struct Action_3_UInt32_UnityEngine_Vector3_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_3_UInt32_UnityEngine_Vector3_Boolean___Fields fields;
};
struct Action_3_UInt32_UnityEngine_Vector3_Boolean___VTable {
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
struct Action_3_UInt32_UnityEngine_Vector3_Boolean___StaticFields {
};
struct Action_3_UInt32_UnityEngine_Vector3_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_3_UInt32_UnityEngine_Vector3_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_3_UInt32_UnityEngine_Vector3_Boolean___VTable vtable;
};
struct WwiseEventSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseEventSystem__StaticFields {
};
struct WwiseEventSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseEventSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseEventSystem__VTable vtable;
};

struct __declspec(align(8)) WwiseGameObjectSystem__Fields {
  struct ArtificialSoundHost__Array * m_soundHosts;
};
struct WwiseGameObjectSystem {
  struct WwiseGameObjectSystem__Class *klass;
  struct MonitorData *monitor;
  struct WwiseGameObjectSystem__Fields fields;
};
struct ArtificialSoundHost__Array {
  struct ArtificialSoundHost__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ArtificialSoundHost * vector[32];
};
struct WwiseGameObjectSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseGameObjectSystem__StaticFields {
};
struct WwiseGameObjectSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseGameObjectSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseGameObjectSystem__VTable vtable;
};

struct __declspec(align(8)) WwiseSoundBankSystem__Fields {
  struct SoundBankCollection * m_globalSoundBankCollection;
};
struct WwiseSoundBankSystem {
  struct WwiseSoundBankSystem__Class *klass;
  struct MonitorData *monitor;
  struct WwiseSoundBankSystem__Fields fields;
};
struct WwiseSoundBankSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseSoundBankSystem__StaticFields {
  bool SoundBankRefCountLoadingEnabled;
};
struct WwiseSoundBankSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseSoundBankSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseSoundBankSystem__VTable vtable;
};

struct WwiseBootstrap__Fields {
  struct MonoBehaviour__Fields _;
  struct WwiseBootstrap * m_instance;
  struct RTPC * MasterVolumeRTPC;
  struct RTPC * SfxVolumeRTPC;
};
struct WwiseBootstrap {
  struct WwiseBootstrap__Class *klass;
  struct MonitorData *monitor;
  struct WwiseBootstrap__Fields fields;
};
struct WwiseBootstrap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseBootstrap__StaticFields {
  bool _IsProfilerRecording_k__BackingField;
  bool m_muteRequestedThisFrame;
  bool m_masterVolumeMuted;
  bool CallbackManagerStarted;
  bool _WwiseDisabled_k__BackingField;
  struct Action * WwiseRestartedCallback;
};
struct WwiseBootstrap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseBootstrap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseBootstrap__VTable vtable;
};

struct WwiseBootstrap_c {
  struct WwiseBootstrap_c__Class *klass;
  struct MonitorData *monitor;
};
struct WwiseBootstrap_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseBootstrap_c__StaticFields {
  struct WwiseBootstrap_c * __9;
  struct Action * __9__22_0;
};
struct WwiseBootstrap_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseBootstrap_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseBootstrap_c__VTable vtable;
};

struct __declspec(align(8)) WwiseBootstrap_c_DisplayClass35_0__Fields {
  struct String * flag;
};
struct WwiseBootstrap_c_DisplayClass35_0 {
  struct WwiseBootstrap_c_DisplayClass35_0__Class *klass;
  struct MonitorData *monitor;
  struct WwiseBootstrap_c_DisplayClass35_0__Fields fields;
};
struct WwiseBootstrap_c_DisplayClass35_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseBootstrap_c_DisplayClass35_0__StaticFields {
};
struct WwiseBootstrap_c_DisplayClass35_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseBootstrap_c_DisplayClass35_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseBootstrap_c_DisplayClass35_0__VTable vtable;
};

struct __declspec(align(8)) WwiseEventSystem_c_DisplayClass3_0__Fields {
  struct SoundHost * soundHost;
};
struct WwiseEventSystem_c_DisplayClass3_0 {
  struct WwiseEventSystem_c_DisplayClass3_0__Class *klass;
  struct MonitorData *monitor;
  struct WwiseEventSystem_c_DisplayClass3_0__Fields fields;
};
struct WwiseEventSystem_c_DisplayClass3_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseEventSystem_c_DisplayClass3_0__StaticFields {
};
struct WwiseEventSystem_c_DisplayClass3_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseEventSystem_c_DisplayClass3_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseEventSystem_c_DisplayClass3_0__VTable vtable;
};

struct WwiseEventSystem_c {
  struct WwiseEventSystem_c__Class *klass;
  struct MonitorData *monitor;
};
struct WwiseEventSystem_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseEventSystem_c__StaticFields {
  struct WwiseEventSystem_c * __9;
  struct Action_3_UInt32_UnityEngine_Vector3_Boolean_ * __9__14_0;
};
struct WwiseEventSystem_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseEventSystem_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseEventSystem_c__VTable vtable;
};

struct WwiseGameObjectSystem_c {
  struct WwiseGameObjectSystem_c__Class *klass;
  struct MonitorData *monitor;
};
struct Func_2_Moon_Wwise_ArtificialSoundHost_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Moon_Wwise_ArtificialSoundHost_Boolean_ {
  struct Func_2_Moon_Wwise_ArtificialSoundHost_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Moon_Wwise_ArtificialSoundHost_Boolean___Fields fields;
};
struct Func_2_Moon_Wwise_ArtificialSoundHost_Boolean___VTable {
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
struct Func_2_Moon_Wwise_ArtificialSoundHost_Boolean___StaticFields {
};
struct Func_2_Moon_Wwise_ArtificialSoundHost_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_Moon_Wwise_ArtificialSoundHost_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_Moon_Wwise_ArtificialSoundHost_Boolean___VTable vtable;
};
struct WwiseGameObjectSystem_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WwiseGameObjectSystem_c__StaticFields {
  struct WwiseGameObjectSystem_c * __9;
  struct Func_2_Moon_Wwise_ArtificialSoundHost_Boolean_ * __9__7_0;
};
struct WwiseGameObjectSystem_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WwiseGameObjectSystem_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WwiseGameObjectSystem_c__VTable vtable;
};

struct __declspec(align(8)) CallbackFlags__Fields {
  uint32_t value;
};
struct CallbackFlags {
  struct CallbackFlags__Class *klass;
  struct MonitorData *monitor;
  struct CallbackFlags__Fields fields;
};
struct CallbackFlags__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CallbackFlags__StaticFields {
};
struct CallbackFlags__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CallbackFlags__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CallbackFlags__VTable vtable;
};

enum Tonemapping__Enum : int32_t {
  Tonemapping__Enum_Disabled = 0,
  Tonemapping__Enum_Photographic = 1,
  Tonemapping__Enum_FilmicHable = 2,
  Tonemapping__Enum_FilmicACES = 3,
};
struct Tonemapping__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Tonemapping__Enum value;
};
enum Quality__Enum : int32_t {
  Quality__Enum_Mobile = 0,
  Quality__Enum_Standard = 1,
};
struct Quality__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Quality__Enum value;
};
struct AmplifyColorBase__Fields {
  struct MonoBehaviour__Fields _;
  enum Tonemapping__Enum Tonemapper;
  float Exposure;
  float LinearWhitePoint;
  bool ApplyDithering;
  enum Quality__Enum QualityLevel;
  float BlendAmount;
  struct Texture * LutTexture;
  struct Texture * LutBlendTexture;
  struct Texture * MaskTexture;
  bool UseDepthMask;
  struct AnimationCurve * DepthMaskCurve;
  bool UseVolumes;
  float ExitVolumeBlendTime;
  struct Transform * TriggerVolumeProxy;
  struct LayerMask VolumeCollisionMask;
  struct Camera * ownerCamera;
  struct Shader * shaderBase;
  struct Shader * shaderBlend;
  struct Shader * shaderBlendCache;
  struct Shader * shaderMask;
  struct Shader * shaderMaskBlend;
  struct Shader * shaderDepthMask;
  struct Shader * shaderDepthMaskBlend;
  struct Shader * shaderProcessOnly;
  struct RenderTexture * blendCacheLut;
  struct Texture2D * defaultLut;
  struct Texture2D * depthCurveLut;
  struct Color32__Array * depthCurveColors;
  enum ColorSpace__Enum colorSpace;
  enum Quality__Enum qualityLevel;
  struct Material * materialBase;
  struct Material * materialBlend;
  struct Material * materialBlendCache;
  struct Material * materialMask;
  struct Material * materialMaskBlend;
  struct Material * materialDepthMask;
  struct Material * materialDepthMaskBlend;
  struct Material * materialProcessOnly;
  bool blending;
  float blendingTime;
  float blendingTimeCountdown;
  struct Action * onFinishBlend;
  struct AnimationCurve * prevDepthMaskCurve;
  bool volumesBlending;
  float volumesBlendingTime;
  float volumesBlendingTimeCountdown;
  struct Texture * volumesLutBlendTexture;
  float volumesBlendAmount;
  struct Texture * worldLUT;
  struct AmplifyColorVolumeBase * currentVolumeLut;
  struct RenderTexture * midBlendLUT;
  bool blendingFromMidBlend;
  struct VolumeEffect * worldVolumeEffects;
  struct VolumeEffect * currentVolumeEffects;
  struct VolumeEffect * blendVolumeEffects;
  float worldExposure;
  float currentExposure;
  float blendExposure;
  float effectVolumesBlendAdjust;
  struct List_1_AmplifyColorVolumeBase_ * enteredVolumes;
  struct AmplifyColorTriggerProxyBase * actualTriggerProxy;
  struct VolumeEffectFlags * EffectFlags;
  struct String * sharedInstanceID;
  bool silentError;
};
struct AmplifyColorBase {
  struct AmplifyColorBase__Class *klass;
  struct MonitorData *monitor;
  struct AmplifyColorBase__Fields fields;
};
struct AmplifyColorVolumeBase__Fields {
  struct MonoBehaviour__Fields _;
  struct Texture2D * LutTexture;
  float Exposure;
  float EnterBlendTime;
  int32_t Priority;
  bool ShowInSceneView;
  struct VolumeEffectContainer * EffectContainer;
};
struct AmplifyColorVolumeBase {
  struct AmplifyColorVolumeBase__Class *klass;
  struct MonitorData *monitor;
  struct AmplifyColorVolumeBase__Fields fields;
};
struct __declspec(align(8)) VolumeEffectContainer__Fields {
  struct List_1_AmplifyColor_VolumeEffect_ * volumes;
};
struct VolumeEffectContainer {
  struct VolumeEffectContainer__Class *klass;
  struct MonitorData *monitor;
  struct VolumeEffectContainer__Fields fields;
};
struct __declspec(align(8)) List_1_AmplifyColor_VolumeEffect___Fields {
  struct VolumeEffect__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AmplifyColor_VolumeEffect_ {
  struct List_1_AmplifyColor_VolumeEffect___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AmplifyColor_VolumeEffect___Fields fields;
};
struct __declspec(align(8)) VolumeEffect__Fields {
  struct AmplifyColorBase * gameObject;
  struct List_1_AmplifyColor_VolumeEffectComponent_ * components;
};
struct VolumeEffect {
  struct VolumeEffect__Class *klass;
  struct MonitorData *monitor;
  struct VolumeEffect__Fields fields;
};
struct VolumeEffect__Array {
  struct VolumeEffect__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VolumeEffect * vector[32];
};
struct __declspec(align(8)) List_1_AmplifyColor_VolumeEffectComponent___Fields {
  struct VolumeEffectComponent__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AmplifyColor_VolumeEffectComponent_ {
  struct List_1_AmplifyColor_VolumeEffectComponent___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AmplifyColor_VolumeEffectComponent___Fields fields;
};
struct __declspec(align(8)) VolumeEffectComponent__Fields {
  struct String * componentName;
  struct List_1_AmplifyColor_VolumeEffectField_ * fields;
};
struct VolumeEffectComponent {
  struct VolumeEffectComponent__Class *klass;
  struct MonitorData *monitor;
  struct VolumeEffectComponent__Fields fields;
};
struct VolumeEffectComponent__Array {
  struct VolumeEffectComponent__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VolumeEffectComponent * vector[32];
};
struct __declspec(align(8)) List_1_AmplifyColor_VolumeEffectField___Fields {
  struct VolumeEffectField__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AmplifyColor_VolumeEffectField_ {
  struct List_1_AmplifyColor_VolumeEffectField___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AmplifyColor_VolumeEffectField___Fields fields;
};
struct __declspec(align(8)) VolumeEffectField__Fields {
  struct String * fieldName;
  struct String * fieldType;
  float valueSingle;
  struct Color valueColor;
  bool valueBoolean;
  struct Vector2 valueVector2;
  struct Vector3 valueVector3;
  struct Vector4 valueVector4;
};
struct VolumeEffectField {
  struct VolumeEffectField__Class *klass;
  struct MonitorData *monitor;
  struct VolumeEffectField__Fields fields;
};
struct VolumeEffectField__Array {
  struct VolumeEffectField__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct VolumeEffectField * vector[32];
};
struct IEnumerator_1_AmplifyColor_VolumeEffectField_ {
  struct IEnumerator_1_AmplifyColor_VolumeEffectField___Class *klass;
  struct MonitorData *monitor;
};}