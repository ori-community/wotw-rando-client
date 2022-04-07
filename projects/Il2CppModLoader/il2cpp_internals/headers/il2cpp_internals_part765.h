namespace app {
struct List_1_ServerObject___StaticFields {
  struct ServerObject__Array * _emptyArray;
};
struct List_1_ServerObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ServerObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ServerObject___VTable vtable;
};
struct IEnumerator_1_List_1_ServerObject___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_List_1_ServerObject___StaticFields {
};
struct IEnumerator_1_List_1_ServerObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_List_1_ServerObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_List_1_ServerObject___VTable vtable;
};
struct Queue_1_List_1_ServerObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_1;
};
struct Queue_1_List_1_ServerObject___StaticFields {
};
struct Queue_1_List_1_ServerObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue_1_List_1_ServerObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue_1_List_1_ServerObject___VTable vtable;
};
struct ReplayServer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReplayServer__StaticFields {
  bool IsOnServerBuild;
  int32_t Port;
  int32_t s_logMaxSize;
  struct Queue_1_System_String_ * m_serverLog;
};
struct ReplayServer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplayServer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplayServer__VTable vtable;
};

struct ServerAnimatorHelper_BaseAnimatorData {
  int32_t ExternalDriverGameObjectID;
  bool SampleOnStart;
  float TimeOffset;
  float Speed;
  bool PlayAtStart;
};
struct ServerAnimatorHelper_BaseAnimatorData__Boxed {
  struct ServerAnimatorHelper_BaseAnimatorData__Class *klass;
  struct MonitorData *monitor;
  struct ServerAnimatorHelper_BaseAnimatorData fields;
};
struct ServerAnimatorHelper_BaseAnimatorData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerAnimatorHelper_BaseAnimatorData__StaticFields {
};
struct ServerAnimatorHelper_BaseAnimatorData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerAnimatorHelper_BaseAnimatorData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerAnimatorHelper_BaseAnimatorData__VTable vtable;
};

struct ServerAnimatorHelper_ConstraintData {
  int32_t AnimatorID;
  float Offset;
  enum LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum Anchor;
};
struct ServerAnimatorHelper_ConstraintData__Boxed {
  struct ServerAnimatorHelper_ConstraintData__Class *klass;
  struct MonitorData *monitor;
  struct ServerAnimatorHelper_ConstraintData fields;
};
struct ServerAnimatorHelper_SequenceEntryData {
  int32_t AnimatorID;
  bool External;
  struct ServerAnimatorHelper_ConstraintData StartConstraint;
  struct ServerAnimatorHelper_ConstraintData EndConstraint;
};
struct ServerAnimatorHelper_SequenceEntryData__Boxed {
  struct ServerAnimatorHelper_SequenceEntryData__Class *klass;
  struct MonitorData *monitor;
  struct ServerAnimatorHelper_SequenceEntryData fields;
};
struct ServerAnimatorHelper_ConstraintData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerAnimatorHelper_ConstraintData__StaticFields {
};
struct ServerAnimatorHelper_ConstraintData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerAnimatorHelper_ConstraintData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerAnimatorHelper_ConstraintData__VTable vtable;
};
struct ServerAnimatorHelper_SequenceEntryData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerAnimatorHelper_SequenceEntryData__StaticFields {
};
struct ServerAnimatorHelper_SequenceEntryData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerAnimatorHelper_SequenceEntryData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerAnimatorHelper_SequenceEntryData__VTable vtable;
};

struct ServerAnimatorHelper {
  struct ServerAnimatorHelper__Class *klass;
  struct MonitorData *monitor;
};
struct ServerAnimatorHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerAnimatorHelper__StaticFields {
};
struct ServerAnimatorHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerAnimatorHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerAnimatorHelper__VTable vtable;
};

struct ServerBoxCollider__Fields {
  struct ServerObjectComponent__Fields _;
};
struct ServerBoxCollider {
  struct ServerBoxCollider__Class *klass;
  struct MonitorData *monitor;
  struct ServerBoxCollider__Fields fields;
};
struct ServerBoxCollider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyData;
  VirtualInvokeData CreateData;
};
struct ServerBoxCollider__StaticFields {
};
struct ServerBoxCollider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerBoxCollider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerBoxCollider__VTable vtable;
};

struct ServerBreakablePhysicalSetup__Fields {
  struct ServerObjectComponent__Fields _;
};
struct ServerBreakablePhysicalSetup {
  struct ServerBreakablePhysicalSetup__Class *klass;
  struct MonitorData *monitor;
  struct ServerBreakablePhysicalSetup__Fields fields;
};
struct ServerBreakablePhysicalSetup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyData;
  VirtualInvokeData CreateData;
  VirtualInvokeData RebuildReferences;
};
struct ServerBreakablePhysicalSetup__StaticFields {
};
struct ServerBreakablePhysicalSetup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerBreakablePhysicalSetup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerBreakablePhysicalSetup__VTable vtable;
};

struct ServerConfigurableJoint__Fields {
  struct ServerObjectComponent__Fields _;
};
struct ServerConfigurableJoint {
  struct ServerConfigurableJoint__Class *klass;
  struct MonitorData *monitor;
  struct ServerConfigurableJoint__Fields fields;
};
struct ServerConfigurableJoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyData;
  VirtualInvokeData CreateData;
  VirtualInvokeData RebuildReferences;
};
struct ServerConfigurableJoint__StaticFields {
};
struct ServerConfigurableJoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerConfigurableJoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerConfigurableJoint__VTable vtable;
};

struct ServerConfiguration__Fields {
  struct ServerObject__Fields _;
  struct ServerConfigurationProperties m_configuration;
};
struct ServerConfiguration {
  struct ServerConfiguration__Class *klass;
  struct MonitorData *monitor;
  struct ServerConfiguration__Fields fields;
};
struct ServerConfiguration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerConfiguration__StaticFields {
};
struct ServerConfiguration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerConfiguration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerConfiguration__VTable vtable;
};

struct ServerConfigureConfigurableJointAction__Fields {
  struct ServerObjectComponent__Fields _;
};
struct ServerConfigureConfigurableJointAction {
  struct ServerConfigureConfigurableJointAction__Class *klass;
  struct MonitorData *monitor;
  struct ServerConfigureConfigurableJointAction__Fields fields;
};
struct ServerConfigureConfigurableJointAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyData;
  VirtualInvokeData CreateData;
  VirtualInvokeData RebuildReferences;
};
struct ServerConfigureConfigurableJointAction__StaticFields {
};
struct ServerConfigureConfigurableJointAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerConfigureConfigurableJointAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerConfigureConfigurableJointAction__VTable vtable;
};

struct ServerExplodingRigidbody__Fields {
  struct ServerObjectComponent__Fields _;
};
struct ServerExplodingRigidbody {
  struct ServerExplodingRigidbody__Class *klass;
  struct MonitorData *monitor;
  struct ServerExplodingRigidbody__Fields fields;
};
struct ServerExplodingRigidbody__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyData;
  VirtualInvokeData CreateData;
};
struct ServerExplodingRigidbody__StaticFields {
};
struct ServerExplodingRigidbody__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerExplodingRigidbody__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerExplodingRigidbody__VTable vtable;
};

struct ServerGenericAttackable__Fields {
  struct ServerObjectComponent__Fields _;
};
struct ServerGenericAttackable {
  struct ServerGenericAttackable__Class *klass;
  struct MonitorData *monitor;
  struct ServerGenericAttackable__Fields fields;
};
struct ServerGenericAttackable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyData;
  VirtualInvokeData CreateData;
};
struct ServerGenericAttackable__StaticFields {
};
struct ServerGenericAttackable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerGenericAttackable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerGenericAttackable__VTable vtable;
};

struct ServerGenericComponent__Fields {
  struct ServerObjectComponent__Fields _;
};
struct ServerGenericComponent {
  struct ServerGenericComponent__Class *klass;
  struct MonitorData *monitor;
  struct ServerGenericComponent__Fields fields;
};
struct ServerGenericComponent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyData;
  VirtualInvokeData CreateData;
};
struct ServerGenericComponent__StaticFields {
};
struct ServerGenericComponent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerGenericComponent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerGenericComponent__VTable vtable;
};

struct ServerGoThroughPlatform__Fields {
  struct ServerObjectComponent__Fields _;
};
struct ServerGoThroughPlatform {
  struct ServerGoThroughPlatform__Class *klass;
  struct MonitorData *monitor;
  struct ServerGoThroughPlatform__Fields fields;
};
struct ServerGoThroughPlatform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyData;
  VirtualInvokeData CreateData;
};
struct ServerGoThroughPlatform__StaticFields {
};
struct ServerGoThroughPlatform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerGoThroughPlatform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerGoThroughPlatform__VTable vtable;
};

struct ServerInstantiateAction__Fields {
  struct ServerObjectComponent__Fields _;
};
struct ServerInstantiateAction {
  struct ServerInstantiateAction__Class *klass;
  struct MonitorData *monitor;
  struct ServerInstantiateAction__Fields fields;
};
struct ServerInstantiateAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyData;
  VirtualInvokeData CreateData;
  VirtualInvokeData RebuildReferences;
};
struct ServerInstantiateAction__StaticFields {
};
struct ServerInstantiateAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerInstantiateAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerInstantiateAction__VTable vtable;
};

struct ServerLimitedLifetime__Fields {
  struct ServerObjectComponent__Fields _;
};
struct ServerLimitedLifetime {
  struct ServerLimitedLifetime__Class *klass;
  struct MonitorData *monitor;
  struct ServerLimitedLifetime__Fields fields;
};
struct ServerLimitedLifetime__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyData;
  VirtualInvokeData CreateData;
};
struct ServerLimitedLifetime__StaticFields {
};
struct ServerLimitedLifetime__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerLimitedLifetime__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerLimitedLifetime__VTable vtable;
};

struct ServerMeshCollider__Fields {
  struct ServerObjectComponent__Fields _;
};
struct ServerMeshCollider {
  struct ServerMeshCollider__Class *klass;
  struct MonitorData *monitor;
  struct ServerMeshCollider__Fields fields;
};
struct ServerMeshCollider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyData;
  VirtualInvokeData CreateData;
};
struct ServerMeshCollider__StaticFields {
};
struct ServerMeshCollider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerMeshCollider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerMeshCollider__VTable vtable;
};

struct ServerObjectReferences {
  struct ServerObjectReferences__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_ServerObject___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_GameObject_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_ServerObject_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_ServerObject_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_GameObject_ServerObject_ {
  struct Dictionary_2_UnityEngine_GameObject_ServerObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_GameObject_ServerObject___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject_ {
  int32_t hashCode;
  int32_t next;
  struct GameObject * key;
  struct ServerObject * value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_ServerObject___Fields {
  struct Dictionary_2_UnityEngine_GameObject_ServerObject_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_ServerObject_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_ServerObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_ServerObject___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_ServerObject___Fields {
  struct Dictionary_2_UnityEngine_GameObject_ServerObject_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_ServerObject_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_ServerObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_ServerObject___Fields fields;
};
struct ICollection_1_ServerObject_ {
  struct ICollection_1_ServerObject___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_GameObject_ServerObject_ {
  struct GameObject * key;
  struct ServerObject * value;
};
struct KeyValuePair_2_UnityEngine_GameObject_ServerObject___Boxed {
  struct KeyValuePair_2_UnityEngine_GameObject_ServerObject___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_GameObject_ServerObject_ fields;
};
struct KeyValuePair_2_UnityEngine_GameObject_ServerObject___Array {
  struct KeyValuePair_2_UnityEngine_GameObject_ServerObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_GameObject_ServerObject_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_ServerObject_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_ServerObject___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_ServerObject_ {
  struct IEnumerable_1_ServerObject___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_UnityEngine_Object___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Object_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Object_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_UnityEngine_Object_ {
  struct Dictionary_2_System_Int32_UnityEngine_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_UnityEngine_Object___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct Object_1 * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Object___Fields {
  struct Dictionary_2_System_Int32_UnityEngine_Object_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Object_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Object___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Object___Fields {
  struct Dictionary_2_System_Int32_UnityEngine_Object_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Object_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Object___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Object___Fields fields;
};
struct KeyValuePair_2_System_Int32_UnityEngine_Object_ {
  int32_t key;
  struct Object_1 * value;
};
struct KeyValuePair_2_System_Int32_UnityEngine_Object___Boxed {
  struct KeyValuePair_2_System_Int32_UnityEngine_Object___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_UnityEngine_Object_ fields;
};
struct KeyValuePair_2_System_Int32_UnityEngine_Object___Array {
  struct KeyValuePair_2_System_Int32_UnityEngine_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_UnityEngine_Object_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Object_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Object___Class *klass;
  struct MonitorData *monitor;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_ServerObject___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_ServerObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_ServerObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_ServerObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_ServerObject___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_ServerObject___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_ServerObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_ServerObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_ServerObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_ServerObject___VTable vtable;
};
struct ICollection_1_ServerObject___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_ServerObject___StaticFields {
};
struct ICollection_1_ServerObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_ServerObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_ServerObject___VTable vtable;
};
struct KeyValuePair_2_UnityEngine_GameObject_ServerObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UnityEngine_GameObject_ServerObject___StaticFields {
};
struct KeyValuePair_2_UnityEngine_GameObject_ServerObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UnityEngine_GameObject_ServerObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UnityEngine_GameObject_ServerObject___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_ServerObject___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_ServerObject___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_ServerObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_ServerObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_ServerObject___VTable vtable;
};
struct IEnumerable_1_ServerObject___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_ServerObject___StaticFields {
};
struct IEnumerable_1_ServerObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_ServerObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_ServerObject___VTable vtable;
};
struct Dictionary_2_UnityEngine_GameObject_ServerObject___VTable {
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
struct Dictionary_2_UnityEngine_GameObject_ServerObject___StaticFields {
};
struct Dictionary_2_UnityEngine_GameObject_ServerObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UnityEngine_GameObject_ServerObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UnityEngine_GameObject_ServerObject___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Object___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Object___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Object___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_Object___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Object___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Object___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_Object___VTable vtable;
};
struct KeyValuePair_2_System_Int32_UnityEngine_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_UnityEngine_Object___StaticFields {
};
struct KeyValuePair_2_System_Int32_UnityEngine_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_UnityEngine_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_UnityEngine_Object___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Object___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Object___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_Object___VTable vtable;
};
struct Dictionary_2_System_Int32_UnityEngine_Object___VTable {
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
};}