namespace app {
struct RecordingUnmanagedParticlesTracker__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TrackTranformChangesForRecording;
    VirtualInvokeData get_TrackingExclusions;
    VirtualInvokeData get_ParsingGroup;
    VirtualInvokeData DoStrip;
};

struct RecordingUnmanagedParticlesTracker__StaticFields {
};

struct RecordingUnmanagedParticlesTracker__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RecordingUnmanagedParticlesTracker__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RecordingUnmanagedParticlesTracker__VTable vtable;
};

struct ReplayServer__Fields {
    struct MonoBehaviour__Fields _;
    struct StreamReader *m_reader;
    struct StreamWriter *m_writer;
    struct TcpListener *m_listener;
    struct TcpClient *m_client;
    struct Queue_1_List_1_ServerObject_ *m_requestQueue;
    struct Rigidbody__Array *m_dynamicObjects;
    struct GameObject *m_simulationRoot;
    struct Thread *m_listenThread;
    bool m_isReceiving;
    bool m_isReceivingThreadAlive;
    struct GhostServerRecorder *m_recorder;
    struct BinaryFormatter *m_serializer;
    struct ServerConfigurationProperties m_defaultConfiguration;
};

struct ReplayServer {
    struct ReplayServer__Class *klass;
    MonitorData *monitor;
    struct ReplayServer__Fields fields;
};

struct __declspec(align(8)) Queue_1_List_1_ServerObject___Fields {
    struct List_1_ServerObject___Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_List_1_ServerObject_ {
    struct Queue_1_List_1_ServerObject___Class *klass;
    MonitorData *monitor;
    struct Queue_1_List_1_ServerObject___Fields fields;
};

struct __declspec(align(8)) List_1_ServerObject___Fields {
    struct ServerObject__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ServerObject_ {
    struct List_1_ServerObject___Class *klass;
    MonitorData *monitor;
    struct List_1_ServerObject___Fields fields;
};

struct __declspec(align(8)) ServerObject__Fields {
    struct String *ServerObjName;
    int32_t ServerObjID;
    struct List_1_ServerObjectComponent_ *Components;
    struct String *Tag;
    int32_t Layer;
    bool IsPrefab;
    struct String *AssetGuid;
    struct List_1_ServerObject_ *Children;
};

struct ServerObject {
    struct ServerObject__Class *klass;
    MonitorData *monitor;
    struct ServerObject__Fields fields;
};

struct __declspec(align(8)) List_1_ServerObjectComponent___Fields {
    struct ServerObjectComponent__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ServerObjectComponent_ {
    struct List_1_ServerObjectComponent___Class *klass;
    MonitorData *monitor;
    struct List_1_ServerObjectComponent___Fields fields;
};

struct __declspec(align(8)) ServerObjectComponent__Fields {
    int32_t m_componentID;
    struct Object *m_data;
};

struct ServerObjectComponent {
    struct ServerObjectComponent__Class *klass;
    MonitorData *monitor;
    struct ServerObjectComponent__Fields fields;
};

struct ServerActionSequence__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerActionSequence {
    struct ServerActionSequence__Class *klass;
    MonitorData *monitor;
    struct ServerActionSequence__Fields fields;
};

struct ServerObjectComponent__Array {
    struct ServerObjectComponent__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ServerObjectComponent *vector[32];
};

struct IEnumerator_1_ServerObjectComponent_ {
    struct IEnumerator_1_ServerObjectComponent___Class *klass;
    MonitorData *monitor;
};

struct ServerObject__Array {
    struct ServerObject__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ServerObject *vector[32];
};

struct IEnumerator_1_ServerObject_ {
    struct IEnumerator_1_ServerObject___Class *klass;
    MonitorData *monitor;
};

struct List_1_ServerObject___Array {
    struct List_1_ServerObject___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct List_1_ServerObject_ *vector[32];
};

struct IEnumerator_1_List_1_ServerObject_ {
    struct IEnumerator_1_List_1_ServerObject___Class *klass;
    MonitorData *monitor;
};

struct ServerActionSequence__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ApplyData;
    VirtualInvokeData CreateData;
};

struct ServerActionSequence__StaticFields {
};

struct ServerActionSequence__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerActionSequence__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerActionSequence__VTable vtable;
};

struct ServerObjectComponent__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
};

struct ServerObjectComponent__StaticFields {
};

struct ServerObjectComponent__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerObjectComponent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerObjectComponent__VTable vtable;
};

struct ServerObjectComponent__Array__VTable {
};

struct ServerObjectComponent__Array__StaticFields {
};

struct ServerObjectComponent__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerObjectComponent__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerObjectComponent__Array__VTable vtable;
};

struct IEnumerator_1_ServerObjectComponent___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ServerObjectComponent___StaticFields {
};

struct IEnumerator_1_ServerObjectComponent___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ServerObjectComponent___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_ServerObjectComponent___VTable vtable;
};

struct List_1_ServerObjectComponent___VTable {
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

struct List_1_ServerObjectComponent___StaticFields {
    struct ServerObjectComponent__Array *_emptyArray;
};

struct List_1_ServerObjectComponent___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ServerObjectComponent___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ServerObjectComponent___VTable vtable;
};

struct ServerObject__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ServerObject__StaticFields {
};

struct ServerObject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerObject__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerObject__VTable vtable;
};

struct ServerObject__Array__VTable {
};

struct ServerObject__Array__StaticFields {
};

struct ServerObject__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerObject__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerObject__Array__VTable vtable;
};

struct IEnumerator_1_ServerObject___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ServerObject___StaticFields {
};

struct IEnumerator_1_ServerObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ServerObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_ServerObject___VTable vtable;
};

struct List_1_ServerObject___VTable {
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

struct List_1_ServerObject___StaticFields {
    struct ServerObject__Array *_emptyArray;
};

struct List_1_ServerObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ServerObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ServerObject___VTable vtable;
};

struct List_1_ServerObject___Array__VTable {
};

struct List_1_ServerObject___Array__StaticFields {
};

struct List_1_ServerObject___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ServerObject___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ServerObject___Array__VTable vtable;
};

struct IEnumerator_1_List_1_ServerObject___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_List_1_ServerObject___StaticFields {
};

struct IEnumerator_1_List_1_ServerObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_List_1_ServerObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_List_1_ServerObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct Queue_1_System_String_ *m_serverLog;
};

struct ReplayServer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReplayServer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerAnimatorHelper_BaseAnimatorData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerAnimatorHelper_BaseAnimatorData__VTable vtable;
};

struct BaseAnimator___VTable {
};

struct BaseAnimator___StaticFields {
};

struct BaseAnimator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BaseAnimator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BaseAnimator___VTable vtable;
};

struct ServerAnimatorHelper_ConstraintData {
    int32_t AnimatorID;
    float Offset;
    LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum Anchor;
    
};

struct ServerAnimatorHelper_ConstraintData__Boxed {
    struct ServerAnimatorHelper_ConstraintData__Class *klass;
    MonitorData *monitor;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerAnimatorHelper_ConstraintData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerAnimatorHelper_SequenceEntryData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerAnimatorHelper_SequenceEntryData__VTable vtable;
};

struct LegacyTimelineSequence_SequenceEntry_Constraint___VTable {
};

struct LegacyTimelineSequence_SequenceEntry_Constraint___StaticFields {
};

struct LegacyTimelineSequence_SequenceEntry_Constraint___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyTimelineSequence_SequenceEntry_Constraint___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyTimelineSequence_SequenceEntry_Constraint___VTable vtable;
};

struct ServerAnimatorHelper {
    struct ServerAnimatorHelper__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerAnimatorHelper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerAnimatorHelper__VTable vtable;
};

struct ServerBoxCollider__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerBoxCollider {
    struct ServerBoxCollider__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerBoxCollider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerBoxCollider__VTable vtable;
};

struct ServerBreakablePhysicalSetup__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerBreakablePhysicalSetup {
    struct ServerBreakablePhysicalSetup__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerBreakablePhysicalSetup__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerBreakablePhysicalSetup__VTable vtable;
};

struct ServerConfigurableJoint__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerConfigurableJoint {
    struct ServerConfigurableJoint__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerConfigurableJoint__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerConfigurableJoint__VTable vtable;
};

struct ServerConfiguration__Fields {
    struct ServerObject__Fields _;
    struct ServerConfigurationProperties m_configuration;
};

struct ServerConfiguration {
    struct ServerConfiguration__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerConfiguration__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerConfiguration__VTable vtable;
};

struct ServerConfigureConfigurableJointAction__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerConfigureConfigurableJointAction {
    struct ServerConfigureConfigurableJointAction__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerConfigureConfigurableJointAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerConfigureConfigurableJointAction__VTable vtable;
};

struct ServerExplodingRigidbody__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerExplodingRigidbody {
    struct ServerExplodingRigidbody__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerExplodingRigidbody__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerExplodingRigidbody__VTable vtable;
};

struct ServerGenericAttackable__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerGenericAttackable {
    struct ServerGenericAttackable__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerGenericAttackable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerGenericAttackable__VTable vtable;
};

struct ServerGenericComponent__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerGenericComponent {
    struct ServerGenericComponent__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerGenericComponent__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerGenericComponent__VTable vtable;
};

struct ServerGoThroughPlatform__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerGoThroughPlatform {
    struct ServerGoThroughPlatform__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerGoThroughPlatform__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerGoThroughPlatform__VTable vtable;
};

struct ServerInstantiateAction__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerInstantiateAction {
    struct ServerInstantiateAction__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerInstantiateAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerInstantiateAction__VTable vtable;
};

struct ServerLimitedLifetime__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerLimitedLifetime {
    struct ServerLimitedLifetime__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerLimitedLifetime__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerLimitedLifetime__VTable vtable;
};

struct ServerMeshCollider__Fields {
    struct ServerObjectComponent__Fields _;
};

struct ServerMeshCollider {
    struct ServerMeshCollider__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerMeshCollider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerMeshCollider__VTable vtable;
};

struct ServerObjectReferences {
    struct ServerObjectReferences__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_ServerObject___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_ServerObject___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_UnityEngine_GameObject_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_ServerObject_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_ServerObject_ *values;
    struct Object *_syncRoot;
};

}
