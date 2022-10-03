namespace app {
    struct LeaderboardTableUI_c {
        struct LeaderboardTableUI_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_LeaderboardData_Entry_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_LeaderboardData_Entry_Boolean_ {
        struct Func_2_LeaderboardData_Entry_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_LeaderboardData_Entry_Boolean___Fields fields;
    };

    struct Func_2_LeaderboardData_Entry_Boolean___VTable {
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

    struct Func_2_LeaderboardData_Entry_Boolean___StaticFields {
    };

    struct Func_2_LeaderboardData_Entry_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_LeaderboardData_Entry_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_LeaderboardData_Entry_Boolean___VTable vtable;
    };

    struct LeaderboardTableUI_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LeaderboardTableUI_c__StaticFields {
        struct LeaderboardTableUI_c* __9;
        struct Func_2_LeaderboardData_Entry_Boolean_* __9__18_0;
    };

    struct LeaderboardTableUI_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeaderboardTableUI_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LeaderboardTableUI_c__VTable vtable;
    };

    struct SteamTelemetry__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct SteamTelemetry {
        struct SteamTelemetry__Class* klass;
        MonitorData* monitor;
        struct SteamTelemetry__Fields fields;
    };

    struct SteamTelemetry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SteamTelemetry__StaticFields {
        struct SteamTelemetry* Instance;
        struct Guid SessionGUID;
        struct String* BaseUrL;
        struct String* URL;
        int32_t sequenceId;
        struct Dictionary_2_System_String_System_String_* m_headers;
        double m_epochTime;
    };

    struct SteamTelemetry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamTelemetry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteamTelemetry__VTable vtable;
    };

    enum class TelemetryEvent__Enum : int32_t {
        Test = 0x00002328,
        Death = 0x00002329,
        Achievement = 0x0000232a,
        AchievementData = 0x0000232b,
        User = 0x0000232c,
        ViewUnlockFullTitle = 0x0000232d,
        ReachedEndOfDemo = 0x0000232e,
    };

    struct TelemetryEvent__Enum__Boxed {
        struct TelemetryEvent__Enum__Class* klass;
        MonitorData* monitor;
        TelemetryEvent__Enum value;
    };

    struct TelemetryEvent__Enum__VTable {
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

    struct TelemetryEvent__Enum__StaticFields {
    };

    struct TelemetryEvent__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TelemetryEvent__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TelemetryEvent__Enum__VTable vtable;
    };

    struct __declspec(align(8)) SteamTelemetry_Data__Fields {
        int32_t Version;
        TelemetryEvent__Enum EventId;

        struct String* ExtraData;
    };

    struct SteamTelemetry_Data {
        struct SteamTelemetry_Data__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamTelemetry_Data__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteamTelemetry_Data__VTable vtable;
    };

    struct SteamTelemetry_IntData__Fields {
        struct SteamTelemetry_Data__Fields _;
        int32_t IntValue;
    };

    struct SteamTelemetry_IntData {
        struct SteamTelemetry_IntData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamTelemetry_IntData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteamTelemetry_IntData__VTable vtable;
    };

    struct SteamTelemetry_FloatData__Fields {
        struct SteamTelemetry_Data__Fields _;
        float FloatValue;
    };

    struct SteamTelemetry_FloatData {
        struct SteamTelemetry_FloatData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamTelemetry_FloatData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteamTelemetry_FloatData__VTable vtable;
    };

    struct SteamTelemetry_StringData__Fields {
        struct SteamTelemetry_Data__Fields _;
        struct String* StringValue;
    };

    struct SteamTelemetry_StringData {
        struct SteamTelemetry_StringData__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamTelemetry_StringData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteamTelemetry_StringData__VTable vtable;
    };

    struct __declspec(align(8)) SteamTelemetry_SendRoutine_d_10__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct Byte__Array* data;
        struct WWW* _www_5__2;
    };

    struct SteamTelemetry_SendRoutine_d_10 {
        struct SteamTelemetry_SendRoutine_d_10__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamTelemetry_SendRoutine_d_10__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteamTelemetry_SendRoutine_d_10__VTable vtable;
    };

    struct SteamManager__Fields {
        struct MonoBehaviour__Fields _;
        bool m_bInitialized;
        struct SteamAPIWarningMessageHook_t* m_SteamAPIWarningMessageHook;
    };

    struct SteamManager {
        struct SteamManager__Class* klass;
        MonitorData* monitor;
        struct SteamManager__Fields fields;
    };

    struct SteamAPIWarningMessageHook_t__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct SteamAPIWarningMessageHook_t {
        struct SteamAPIWarningMessageHook_t__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamAPIWarningMessageHook_t__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct SteamManager* s_instance;
        bool s_EverInitialized;
    };

    struct SteamManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SteamManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SteamManager__VTable vtable;
    };

    struct AudioSourceSuspendable__Fields {
        struct Suspendable__Fields _;
        struct AudioSource* m_audioSource;
        bool m_wasPlaying;
        bool m_isSuspended;
    };

    struct AudioSourceSuspendable {
        struct AudioSourceSuspendable__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioSourceSuspendable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioSourceSuspendable__VTable vtable;
    };

    struct ParticlesSuspendable__Fields {
        struct Suspendable__Fields _;
        struct ParticleSystem* m_particleSystem;
        bool m_isSuspended;
    };

    struct ParticlesSuspendable {
        struct ParticlesSuspendable__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticlesSuspendable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticlesSuspendable__VTable vtable;
    };

    struct ParticleSuspender__Fields {
        struct Suspendable__Fields _;
        struct ParticleSystem* m_shurikenParticleSystem;
        bool m_wereParticlesPlaying;
        bool m_isSuspended;
    };

    struct ParticleSuspender {
        struct ParticleSuspender__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSuspender__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSuspender__VTable vtable;
    };

    struct RigidbodySuspendable__Fields {
        struct Suspendable__Fields _;
        struct Rigidbody* m_rigidbody;
        struct Vector3 m_angularVelocity;
        struct Vector3 m_velocity;
        bool m_wasKinematic;
        bool m_isSuspended;
        CollisionDetectionMode__Enum m_collisionMode;
    };

    struct RigidbodySuspendable {
        struct RigidbodySuspendable__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodySuspendable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodySuspendable__VTable vtable;
    };

    struct GarbageCollectionDetector {
        struct GarbageCollectionDetector__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GarbageCollectionDetector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GarbageCollectionDetector__VTable vtable;
    };

    struct FramePerformanceMonitor__Fields {
        struct MonoBehaviour__Fields _;
        float m_lastGarbageCollectionTime;
        struct Stack_1_FramePerformanceMonitor_PerformanceEntry_* m_activeEntries;
        struct FramePerformanceMonitor_PerformanceEntry* m_root;
        struct List_1_FramePerformanceMonitor_PerformanceFrameData_* m_recordedFrames;
        struct StreamWriter* m_streamWriter;
    };

    struct FramePerformanceMonitor {
        struct FramePerformanceMonitor__Class* klass;
        MonitorData* monitor;
        struct FramePerformanceMonitor__Fields fields;
    };

    struct __declspec(align(8)) Stack_1_FramePerformanceMonitor_PerformanceEntry___Fields {
        struct FramePerformanceMonitor_PerformanceEntry__Array* _array;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Stack_1_FramePerformanceMonitor_PerformanceEntry_ {
        struct Stack_1_FramePerformanceMonitor_PerformanceEntry___Class* klass;
        MonitorData* monitor;
        struct Stack_1_FramePerformanceMonitor_PerformanceEntry___Fields fields;
    };

    struct __declspec(align(8)) FramePerformanceMonitor_PerformanceEntry__Fields {
        struct List_1_FramePerformanceMonitor_PerformanceEntry_* Children;
        float StartTime;
        struct String* m_label;
        float Duration;
    };

    struct FramePerformanceMonitor_PerformanceEntry {
        struct FramePerformanceMonitor_PerformanceEntry__Class* klass;
        MonitorData* monitor;
        struct FramePerformanceMonitor_PerformanceEntry__Fields fields;
    };

    struct __declspec(align(8)) List_1_FramePerformanceMonitor_PerformanceEntry___Fields {
        struct FramePerformanceMonitor_PerformanceEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_FramePerformanceMonitor_PerformanceEntry_ {
        struct List_1_FramePerformanceMonitor_PerformanceEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_FramePerformanceMonitor_PerformanceEntry___Fields fields;
    };

    struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry_ {
        struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry___Class* klass;
        MonitorData* monitor;
    };

    struct FramePerformanceMonitor_PerformanceEntry__Array {
        struct FramePerformanceMonitor_PerformanceEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FramePerformanceMonitor_PerformanceEntry* vector[32];
    };

    struct __declspec(align(8)) List_1_FramePerformanceMonitor_PerformanceFrameData___Fields {
        struct FramePerformanceMonitor_PerformanceFrameData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_FramePerformanceMonitor_PerformanceFrameData_ {
        struct List_1_FramePerformanceMonitor_PerformanceFrameData___Class* klass;
        MonitorData* monitor;
        struct List_1_FramePerformanceMonitor_PerformanceFrameData___Fields fields;
    };

    struct FramePerformanceMonitor_PerformanceFrameData {
        int32_t m_frame;
        float m_duration;
        struct List_1_FramePerformanceMonitor_PerformanceEntry_* m_entries;
        bool m_garbageCollection;
        float m_lastGarbageCollectionTime;
    };

    struct FramePerformanceMonitor_PerformanceFrameData__Boxed {
        struct FramePerformanceMonitor_PerformanceFrameData__Class* klass;
        MonitorData* monitor;
        struct FramePerformanceMonitor_PerformanceFrameData fields;
    };

    struct FramePerformanceMonitor_PerformanceFrameData__Array {
        struct FramePerformanceMonitor_PerformanceFrameData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FramePerformanceMonitor_PerformanceFrameData vector[32];
    };

    struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData_ {
        struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry___StaticFields {
    };

    struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_FramePerformanceMonitor_PerformanceEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct FramePerformanceMonitor_PerformanceEntry__Array* _emptyArray;
    };

    struct List_1_FramePerformanceMonitor_PerformanceEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_FramePerformanceMonitor_PerformanceEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FramePerformanceMonitor_PerformanceEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FramePerformanceMonitor_PerformanceEntry__VTable vtable;
    };

    struct FramePerformanceMonitor_PerformanceEntry__Array__VTable {
    };

    struct FramePerformanceMonitor_PerformanceEntry__Array__StaticFields {
    };

    struct FramePerformanceMonitor_PerformanceEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FramePerformanceMonitor_PerformanceEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FramePerformanceMonitor_PerformanceEntry__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Stack_1_FramePerformanceMonitor_PerformanceEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FramePerformanceMonitor_PerformanceFrameData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FramePerformanceMonitor_PerformanceFrameData__VTable vtable;
    };

    struct FramePerformanceMonitor_PerformanceFrameData__Array__VTable {
    };

    struct FramePerformanceMonitor_PerformanceFrameData__Array__StaticFields {
    };

    struct FramePerformanceMonitor_PerformanceFrameData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FramePerformanceMonitor_PerformanceFrameData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FramePerformanceMonitor_PerformanceFrameData__Array__VTable vtable;
    };

    struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData___StaticFields {
    };

    struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_FramePerformanceMonitor_PerformanceFrameData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct FramePerformanceMonitor_PerformanceFrameData__Array* _emptyArray;
    };

    struct List_1_FramePerformanceMonitor_PerformanceFrameData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_FramePerformanceMonitor_PerformanceFrameData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct FramePerformanceMonitor* m_instance;
    };

    struct FramePerformanceMonitor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FramePerformanceMonitor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FramePerformanceMonitor__VTable vtable;
    };

    struct FramePerformanceMonitor_PerformanceFrameData_c {
        struct FramePerformanceMonitor_PerformanceFrameData_c__Class* klass;
        MonitorData* monitor;
    };

    struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Comparison_1_FramePerformanceMonitor_PerformanceEntry_ {
        struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Comparison_1_FramePerformanceMonitor_PerformanceEntry___VTable vtable;
    };

    struct FramePerformanceMonitor_PerformanceFrameData_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FramePerformanceMonitor_PerformanceFrameData_c__StaticFields {
        struct FramePerformanceMonitor_PerformanceFrameData_c* __9;
        struct Comparison_1_FramePerformanceMonitor_PerformanceEntry_* __9__0_0;
    };

} // namespace app
