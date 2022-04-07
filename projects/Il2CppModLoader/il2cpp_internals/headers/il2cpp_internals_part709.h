namespace app {
struct SteamTelemetry_Data {
  struct SteamTelemetry_Data__Class *klass;
  struct MonitorData *monitor;
  struct SteamTelemetry_Data__Fields fields;
};
struct SteamTelemetry_Data__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ToDictionary;
};
struct SteamTelemetry_Data__StaticFields {
};
struct SteamTelemetry_Data__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamTelemetry_Data__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamTelemetry_Data__VTable vtable;
};

struct SteamTelemetry_IntData__Fields {
  struct SteamTelemetry_Data__Fields _;
  int32_t IntValue;
};
struct SteamTelemetry_IntData {
  struct SteamTelemetry_IntData__Class *klass;
  struct MonitorData *monitor;
  struct SteamTelemetry_IntData__Fields fields;
};
struct SteamTelemetry_IntData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ToDictionary;
};
struct SteamTelemetry_IntData__StaticFields {
};
struct SteamTelemetry_IntData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamTelemetry_IntData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamTelemetry_IntData__VTable vtable;
};

struct SteamTelemetry_FloatData__Fields {
  struct SteamTelemetry_Data__Fields _;
  float FloatValue;
};
struct SteamTelemetry_FloatData {
  struct SteamTelemetry_FloatData__Class *klass;
  struct MonitorData *monitor;
  struct SteamTelemetry_FloatData__Fields fields;
};
struct SteamTelemetry_FloatData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ToDictionary;
};
struct SteamTelemetry_FloatData__StaticFields {
};
struct SteamTelemetry_FloatData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamTelemetry_FloatData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamTelemetry_FloatData__VTable vtable;
};

struct SteamTelemetry_StringData__Fields {
  struct SteamTelemetry_Data__Fields _;
  struct String * StringValue;
};
struct SteamTelemetry_StringData {
  struct SteamTelemetry_StringData__Class *klass;
  struct MonitorData *monitor;
  struct SteamTelemetry_StringData__Fields fields;
};
struct SteamTelemetry_StringData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ToDictionary;
};
struct SteamTelemetry_StringData__StaticFields {
};
struct SteamTelemetry_StringData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamTelemetry_StringData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamTelemetry_StringData__VTable vtable;
};

struct __declspec(align(8)) SteamTelemetry_SendRoutine_d_10__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct Byte__Array * data;
  struct WWW * _www_5__2;
};
struct SteamTelemetry_SendRoutine_d_10 {
  struct SteamTelemetry_SendRoutine_d_10__Class *klass;
  struct MonitorData *monitor;
  struct SteamTelemetry_SendRoutine_d_10__Fields fields;
};
struct SteamTelemetry_SendRoutine_d_10__VTable {
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
struct SteamTelemetry_SendRoutine_d_10__StaticFields {
};
struct SteamTelemetry_SendRoutine_d_10__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamTelemetry_SendRoutine_d_10__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamTelemetry_SendRoutine_d_10__VTable vtable;
};

struct SteamManager__Fields {
  struct MonoBehaviour__Fields _;
  bool m_bInitialized;
  struct SteamAPIWarningMessageHook_t * m_SteamAPIWarningMessageHook;
};
struct SteamManager {
  struct SteamManager__Class *klass;
  struct MonitorData *monitor;
  struct SteamManager__Fields fields;
};
struct SteamAPIWarningMessageHook_t__Fields {
  struct MulticastDelegate__Fields _;
};
struct SteamAPIWarningMessageHook_t {
  struct SteamAPIWarningMessageHook_t__Class *klass;
  struct MonitorData *monitor;
  struct SteamAPIWarningMessageHook_t__Fields fields;
};
struct SteamAPIWarningMessageHook_t__VTable {
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
struct SteamAPIWarningMessageHook_t__StaticFields {
};
struct SteamAPIWarningMessageHook_t__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamAPIWarningMessageHook_t__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamAPIWarningMessageHook_t__VTable vtable;
};
struct SteamManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData Update;
};
struct SteamManager__StaticFields {
  struct SteamManager * s_instance;
  bool s_EverInitialized;
};
struct SteamManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SteamManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SteamManager__VTable vtable;
};

struct AudioSourceSuspendable__Fields {
  struct Suspendable__Fields _;
  struct AudioSource * m_audioSource;
  bool m_wasPlaying;
  bool m_isSuspended;
};
struct AudioSourceSuspendable {
  struct AudioSourceSuspendable__Class *klass;
  struct MonitorData *monitor;
  struct AudioSourceSuspendable__Fields fields;
};
struct AudioSourceSuspendable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
};
struct AudioSourceSuspendable__StaticFields {
};
struct AudioSourceSuspendable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioSourceSuspendable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioSourceSuspendable__VTable vtable;
};

struct ParticlesSuspendable__Fields {
  struct Suspendable__Fields _;
  struct ParticleSystem * m_particleSystem;
  bool m_isSuspended;
};
struct ParticlesSuspendable {
  struct ParticlesSuspendable__Class *klass;
  struct MonitorData *monitor;
  struct ParticlesSuspendable__Fields fields;
};
struct ParticlesSuspendable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
};
struct ParticlesSuspendable__StaticFields {
};
struct ParticlesSuspendable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticlesSuspendable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticlesSuspendable__VTable vtable;
};

struct ParticleSuspender__Fields {
  struct Suspendable__Fields _;
  struct ParticleSystem * m_shurikenParticleSystem;
  bool m_wereParticlesPlaying;
  bool m_isSuspended;
};
struct ParticleSuspender {
  struct ParticleSuspender__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSuspender__Fields fields;
};
struct ParticleSuspender__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
};
struct ParticleSuspender__StaticFields {
};
struct ParticleSuspender__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSuspender__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSuspender__VTable vtable;
};

struct RigidbodySuspendable__Fields {
  struct Suspendable__Fields _;
  struct Rigidbody * m_rigidbody;
  struct Vector3 m_angularVelocity;
  struct Vector3 m_velocity;
  bool m_wasKinematic;
  bool m_isSuspended;
  enum CollisionDetectionMode__Enum m_collisionMode;
};
struct RigidbodySuspendable {
  struct RigidbodySuspendable__Class *klass;
  struct MonitorData *monitor;
  struct RigidbodySuspendable__Fields fields;
};
struct RigidbodySuspendable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
};
struct RigidbodySuspendable__StaticFields {
};
struct RigidbodySuspendable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RigidbodySuspendable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RigidbodySuspendable__VTable vtable;
};

struct GarbageCollectionDetector {
  struct GarbageCollectionDetector__Class *klass;
  struct MonitorData *monitor;
};
struct GarbageCollectionDetector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GarbageCollectionDetector__StaticFields {
};
struct GarbageCollectionDetector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GarbageCollectionDetector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GarbageCollectionDetector__VTable vtable;
};

struct FramePerformanceMonitor__Fields {
  struct MonoBehaviour__Fields _;
  float m_lastGarbageCollectionTime;
  struct Stack_1_FramePerformanceMonitor_PerformanceEntry_ * m_activeEntries;
  struct FramePerformanceMonitor_PerformanceEntry * m_root;
  struct List_1_FramePerformanceMonitor_PerformanceFrameData_ * m_recordedFrames;
  struct StreamWriter * m_streamWriter;
};
struct FramePerformanceMonitor {
  struct FramePerformanceMonitor__Class *klass;
  struct MonitorData *monitor;
  struct FramePerformanceMonitor__Fields fields;
};
struct __declspec(align(8)) Stack_1_FramePerformanceMonitor_PerformanceEntry___Fields {
  struct FramePerformanceMonitor_PerformanceEntry__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_FramePerformanceMonitor_PerformanceEntry_ {
  struct Stack_1_FramePerformanceMonitor_PerformanceEntry___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_FramePerformanceMonitor_PerformanceEntry___Fields fields;
};
struct __declspec(align(8)) FramePerformanceMonitor_PerformanceEntry__Fields {
  struct List_1_FramePerformanceMonitor_PerformanceEntry_ * Children;
  float StartTime;
  struct String * m_label;
  float Duration;
};
struct FramePerformanceMonitor_PerformanceEntry {
  struct FramePerformanceMonitor_PerformanceEntry__Class *klass;
  struct MonitorData *monitor;
  struct FramePerformanceMonitor_PerformanceEntry__Fields fields;
};
struct FramePerformanceMonitor_PerformanceEntry__Array {
  struct FramePerformanceMonitor_PerformanceEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FramePerformanceMonitor_PerformanceEntry * vector[32];
};
struct __declspec(align(8)) List_1_FramePerformanceMonitor_PerformanceEntry___Fields {
  struct FramePerformanceMonitor_PerformanceEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_FramePerformanceMonitor_PerformanceEntry_ {
  struct List_1_FramePerformanceMonitor_PerformanceEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_FramePerformanceMonitor_PerformanceEntry___Fields fields;
};
struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry_ {
  struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_FramePerformanceMonitor_PerformanceFrameData___Fields {
  struct FramePerformanceMonitor_PerformanceFrameData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_FramePerformanceMonitor_PerformanceFrameData_ {
  struct List_1_FramePerformanceMonitor_PerformanceFrameData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_FramePerformanceMonitor_PerformanceFrameData___Fields fields;
};
struct FramePerformanceMonitor_PerformanceFrameData {
  int32_t m_frame;
  float m_duration;
  struct List_1_FramePerformanceMonitor_PerformanceEntry_ * m_entries;
  bool m_garbageCollection;
  float m_lastGarbageCollectionTime;
};
struct FramePerformanceMonitor_PerformanceFrameData__Boxed {
  struct FramePerformanceMonitor_PerformanceFrameData__Class *klass;
  struct MonitorData *monitor;
  struct FramePerformanceMonitor_PerformanceFrameData fields;
};
struct FramePerformanceMonitor_PerformanceFrameData__Array {
  struct FramePerformanceMonitor_PerformanceFrameData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FramePerformanceMonitor_PerformanceFrameData vector[32];
};
struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData_ {
  struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry___StaticFields {
};
struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry___VTable vtable;
};
struct List_1_FramePerformanceMonitor_PerformanceEntry___VTable {
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
struct List_1_FramePerformanceMonitor_PerformanceEntry___StaticFields {
  struct FramePerformanceMonitor_PerformanceEntry__Array * _emptyArray;
};
struct List_1_FramePerformanceMonitor_PerformanceEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_FramePerformanceMonitor_PerformanceEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_FramePerformanceMonitor_PerformanceEntry___VTable vtable;
};
struct FramePerformanceMonitor_PerformanceEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FramePerformanceMonitor_PerformanceEntry__StaticFields {
};
struct FramePerformanceMonitor_PerformanceEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FramePerformanceMonitor_PerformanceEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FramePerformanceMonitor_PerformanceEntry__VTable vtable;
};
struct Stack_1_FramePerformanceMonitor_PerformanceEntry___VTable {
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
struct Stack_1_FramePerformanceMonitor_PerformanceEntry___StaticFields {
};
struct Stack_1_FramePerformanceMonitor_PerformanceEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stack_1_FramePerformanceMonitor_PerformanceEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stack_1_FramePerformanceMonitor_PerformanceEntry___VTable vtable;
};
struct FramePerformanceMonitor_PerformanceFrameData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FramePerformanceMonitor_PerformanceFrameData__StaticFields {
};
struct FramePerformanceMonitor_PerformanceFrameData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FramePerformanceMonitor_PerformanceFrameData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FramePerformanceMonitor_PerformanceFrameData__VTable vtable;
};
struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData___StaticFields {
};
struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData___VTable vtable;
};
struct List_1_FramePerformanceMonitor_PerformanceFrameData___VTable {
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
struct List_1_FramePerformanceMonitor_PerformanceFrameData___StaticFields {
  struct FramePerformanceMonitor_PerformanceFrameData__Array * _emptyArray;
};
struct List_1_FramePerformanceMonitor_PerformanceFrameData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_FramePerformanceMonitor_PerformanceFrameData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_FramePerformanceMonitor_PerformanceFrameData___VTable vtable;
};
struct FramePerformanceMonitor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FramePerformanceMonitor__StaticFields {
  bool GarbageCollectionFlag;
  struct FramePerformanceMonitor * m_instance;
};
struct FramePerformanceMonitor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FramePerformanceMonitor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FramePerformanceMonitor__VTable vtable;
};

struct FramePerformanceMonitor_PerformanceFrameData_c {
  struct FramePerformanceMonitor_PerformanceFrameData_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_FramePerformanceMonitor_PerformanceEntry_ {
  struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___Fields fields;
};
struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___VTable {
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
struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___StaticFields {
};
struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___VTable vtable;
};
struct FramePerformanceMonitor_PerformanceFrameData_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FramePerformanceMonitor_PerformanceFrameData_c__StaticFields {
  struct FramePerformanceMonitor_PerformanceFrameData_c * __9;
  struct Comparison_1_FramePerformanceMonitor_PerformanceEntry_ * __9__0_0;
};
struct FramePerformanceMonitor_PerformanceFrameData_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FramePerformanceMonitor_PerformanceFrameData_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FramePerformanceMonitor_PerformanceFrameData_c__VTable vtable;
};

struct FramePerformanceMonitor_PerformanceEntry_c {
  struct FramePerformanceMonitor_PerformanceEntry_c__Class *klass;
  struct MonitorData *monitor;
};
struct FramePerformanceMonitor_PerformanceEntry_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FramePerformanceMonitor_PerformanceEntry_c__StaticFields {
  struct FramePerformanceMonitor_PerformanceEntry_c * __9;
  struct Comparison_1_FramePerformanceMonitor_PerformanceEntry_ * __9__5_0;
};
struct FramePerformanceMonitor_PerformanceEntry_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FramePerformanceMonitor_PerformanceEntry_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FramePerformanceMonitor_PerformanceEntry_c__VTable vtable;
};

struct GameDVRPerformanceMonitor__Fields {
  struct MonoBehaviour__Fields _;
  int32_t m_frameCount;
  float m_lastTime;
  float m_lastRecordedTime;
  float m_previousFrameTime;
};
struct GameDVRPerformanceMonitor {
  struct GameDVRPerformanceMonitor__Class *klass;
  struct MonitorData *monitor;
  struct GameDVRPerformanceMonitor__Fields fields;
};
struct GameDVRPerformanceMonitor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameDVRPerformanceMonitor__StaticFields {
  struct GameDVRPerformanceMonitor * m_instance;
};
struct GameDVRPerformanceMonitor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameDVRPerformanceMonitor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameDVRPerformanceMonitor__VTable vtable;
};

struct __declspec(align(8)) OutputWriter__Fields {
  struct StreamWriter * m_streamWriter;
  struct String * m_outputFolder;
  struct String * m_fullPath;
};
struct OutputWriter {
  struct OutputWriter__Class *klass;
  struct MonitorData *monitor;
  struct OutputWriter__Fields fields;
};
struct OutputWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct OutputWriter__StaticFields {
};
struct OutputWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OutputWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OutputWriter__VTable vtable;
};

struct PerformanceMonitor__Fields {
  struct MonoBehaviour__Fields _;
  struct FPSMonitor * FPSMonitor;
  struct FPSTestResult * m_fpsTestResult;
  struct FPSSampleData * m_fpsSampleData;
  struct DateTime m_testTime;
  float m_performanceDipTimeout;
  struct List_1_FPSTestResult_ * TestResults;
};
struct PerformanceMonitor {
  struct PerformanceMonitor__Class *klass;
  struct MonitorData *monitor;
  struct PerformanceMonitor__Fields fields;
};
struct FPSMonitor__Fields {
  struct MonoBehaviour__Fields _;
  struct DroppedFrameMonitor * m_DroppedFrameMonitor;
  float m_renderedFrames;
  float m_lastTime;
  float m_currentSampleTime;
  float m_currentMaxFrameTime;
  float m_currentMinFrameTime;
  float m_frameTime;
  int32_t AverageFPS;
  int32_t MinimumFPS;
  int32_t MaximumFPS;
  float AverageFrameTime;
  float MinFrameTime;
  float MaxFrameTime;
  int32_t m_frameIndex;
  struct FPSMonitor_FrameTimingData__Array * m_frameHistory;
  float m_deltaTimeAverage;
  float m_hitchDeltaTimeAverage;
  float m_slowDownDeltaTimeAverage;
  int32_t m_hitchCount;
  int32_t m_slowdownCount;
  int32_t m_frameCount;
  int32_t m_badFrameCount;
};
struct FPSMonitor {
  struct FPSMonitor__Class *klass;
  struct MonitorData *monitor;
  struct FPSMonitor__Fields fields;
};
struct __declspec(align(8)) DroppedFrameMonitor__Fields {
  int32_t DangerFrames;
  int32_t DroppedFrames_Single;
  int32_t DroppedFrames_Double;
  int32_t DroppedFrames_Triple;
  int32_t DroppedFrames_Multiple;
  int32_t m_dangerFrames;
  int32_t m_droppedFramesSingle;
  int32_t m_droppedFramesDouble;
  int32_t m_droppedFramesTriple;
  int32_t m_droppedFramesMultiple;
  float m_lastUpdateTime;
  struct List_1_DroppedFrameMonitor_TempData_ * TempFrameData;
  int32_t m_index;
};
struct DroppedFrameMonitor {
  struct DroppedFrameMonitor__Class *klass;
  struct MonitorData *monitor;
  struct DroppedFrameMonitor__Fields fields;
};
struct __declspec(align(8)) List_1_DroppedFrameMonitor_TempData___Fields {
  struct DroppedFrameMonitor_TempData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DroppedFrameMonitor_TempData_ {
  struct List_1_DroppedFrameMonitor_TempData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DroppedFrameMonitor_TempData___Fields fields;
};
enum DroppedFrameMonitor_FrameState__Enum : int32_t {
  DroppedFrameMonitor_FrameState__Enum_Good = 0,
  DroppedFrameMonitor_FrameState__Enum_Danger = 1,
  DroppedFrameMonitor_FrameState__Enum_Single = 2,
  DroppedFrameMonitor_FrameState__Enum_Double = 3,
  DroppedFrameMonitor_FrameState__Enum_Triple = 4,
  DroppedFrameMonitor_FrameState__Enum_Multiple = 5,
};
struct DroppedFrameMonitor_FrameState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DroppedFrameMonitor_FrameState__Enum value;
};
struct __declspec(align(8)) DroppedFrameMonitor_TempData__Fields {
  float Time;
  enum DroppedFrameMonitor_FrameState__Enum State;
};
struct DroppedFrameMonitor_TempData {
  struct DroppedFrameMonitor_TempData__Class *klass;
  struct MonitorData *monitor;
  struct DroppedFrameMonitor_TempData__Fields fields;
};
struct DroppedFrameMonitor_TempData__Array {
  struct DroppedFrameMonitor_TempData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DroppedFrameMonitor_TempData * vector[32];
};
struct IEnumerator_1_DroppedFrameMonitor_TempData_ {
  struct IEnumerator_1_DroppedFrameMonitor_TempData___Class *klass;
  struct MonitorData *monitor;
};
enum FPSMonitor_FrameType__Enum : int32_t {
  FPSMonitor_FrameType__Enum_Ok = 0,
  FPSMonitor_FrameType__Enum_Danger = 1,
  FPSMonitor_FrameType__Enum_Bad = 2,
  FPSMonitor_FrameType__Enum_Terrible = 3,
};
struct FPSMonitor_FrameType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FPSMonitor_FrameType__Enum value;
};
struct __declspec(align(8)) FPSMonitor_FrameTimingData__Fields {
  float DeltaTime;
  enum FPSMonitor_FrameType__Enum Hitch;
  enum FPSMonitor_FrameType__Enum Slowdown;
};
struct FPSMonitor_FrameTimingData {
  struct FPSMonitor_FrameTimingData__Class *klass;
  struct MonitorData *monitor;
  struct FPSMonitor_FrameTimingData__Fields fields;
};
struct FPSMonitor_FrameTimingData__Array {
  struct FPSMonitor_FrameTimingData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FPSMonitor_FrameTimingData * vector[32];
};
struct __declspec(align(8)) FPSTestResult__Fields {
  struct String * SceneName;
  float SceneLoadTime;
  float SceneUnloadTime;
  struct DateTime DateTime;
  int32_t ActiveScenes;
  int32_t LoadedScenes;
  int32_t DisabledScenes;
  int32_t DisablingScenes;
  int32_t LoadingScenes;
  int32_t LoadingCancelledScenes;
  struct List_1_FPSSampleData_ * SampleList;
  float ActivationTime;
  float DeactivationTime;
};
struct FPSTestResult {
  struct FPSTestResult__Class *klass;
  struct MonitorData *monitor;
  struct FPSTestResult__Fields fields;
};
struct __declspec(align(8)) List_1_FPSSampleData___Fields {
  struct FPSSampleData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_FPSSampleData_ {
  struct List_1_FPSSampleData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_FPSSampleData___Fields fields;
};
struct MoonProfilerSample {
  float count;
  float time;
};
struct MoonProfilerSample__Boxed {
  struct MoonProfilerSample__Class *klass;
  struct MonitorData *monitor;
  struct MoonProfilerSample fields;
};
struct MoonRenderPipelineView_SrpProfilerSample {
  float userTime;
  float engineTime;
};
struct MoonRenderPipelineView_SrpProfilerSample__Boxed {
  struct MoonRenderPipelineView_SrpProfilerSample__Class *klass;
  struct MonitorData *monitor;
  struct MoonRenderPipelineView_SrpProfilerSample fields;
};
struct MoonRenderPipelineView_SrpProfilerFrame {
  struct MoonRenderPipelineView_SrpProfilerSample totalTime;
  float prepareTime;
  struct MoonRenderPipelineView_SrpProfilerSample drawSlicesTime;
  float postsAndUiTime;
  struct MoonRenderPipelineView_SrpProfilerFrame_Slice__Array * slices;
  struct MoonProfilerSample cull;
  struct MoonRenderPipelineView_SrpProfilerSample rtManagement;
  struct MoonProfilerSample rtAcquire;
  struct MoonProfilerSample rtAcquireInternal;
  struct MoonProfilerSample rtAcquireInternalGPU;
  struct MoonProfilerSample rtRelease;
  struct MoonProfilerSample rtReleaseInternal;
  struct MoonProfilerSample rtReleaseInternalGPU;
};}