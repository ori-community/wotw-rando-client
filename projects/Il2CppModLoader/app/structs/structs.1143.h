namespace app {
    struct ShowQuestEntity__StaticFields {
    };

    struct ShowQuestEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShowQuestEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShowQuestEntity__VTable vtable;
    };

    struct __declspec(align(8)) ShowQuestEntity_c_DisplayClass17_0__Fields {
        QuestIconMode__Enum mode;
    };

    struct ShowQuestEntity_c_DisplayClass17_0 {
        struct ShowQuestEntity_c_DisplayClass17_0__Class* klass;
        MonitorData* monitor;
        struct ShowQuestEntity_c_DisplayClass17_0__Fields fields;
    };

    struct ShowQuestEntity_c_DisplayClass17_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShowQuestEntity_c_DisplayClass17_0__StaticFields {
    };

    struct ShowQuestEntity_c_DisplayClass17_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShowQuestEntity_c_DisplayClass17_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShowQuestEntity_c_DisplayClass17_0__VTable vtable;
    };

    struct ShowQuestEntity_c {
        struct ShowQuestEntity_c__Class* klass;
        MonitorData* monitor;
    };

    struct ShowQuestEntity_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShowQuestEntity_c__StaticFields {
        struct ShowQuestEntity_c* __9;
        struct Func_1_Boolean_* __9__17_1;
    };

    struct ShowQuestEntity_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShowQuestEntity_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShowQuestEntity_c__VTable vtable;
    };

    struct MessageRange {
        int32_t StartMessageId;
        int32_t EndMessageId;
    };

    struct MessageRange__Boxed {
        struct MessageRange__Class* klass;
        MonitorData* monitor;
        struct MessageRange fields;
    };

    struct MessageRange__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MessageRange__StaticFields {
    };

    struct MessageRange__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MessageRange__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MessageRange__VTable vtable;
    };

    enum class SoundAnimatorEntity_PlaybackModeType__Enum : int32_t {
        TimelineBound = 0x00000000,
        TimelineIndependent = 0x00000001,
    };

    struct SoundAnimatorEntity_PlaybackModeType__Enum__Boxed {
        struct SoundAnimatorEntity_PlaybackModeType__Enum__Class* klass;
        MonitorData* monitor;
        SoundAnimatorEntity_PlaybackModeType__Enum value;
    };

    struct SoundAnimatorEntity__Fields {
        struct TimelineEntity__Fields _;
        SoundAnimatorEntity_PlaybackModeType__Enum PlaybackMode;

        struct SoundProvider* SoundProvider;
        struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
        struct SoundHost* SoundHost;
        float ClipLength;
        bool Loop;
        bool FireAndForget;
        float m_time;
        struct SoundPlayer* m_soundPlayer;
        struct SoundDescriptor* m_soundDescriptor;
        bool m_started;
    };

    struct SoundAnimatorEntity {
        struct SoundAnimatorEntity__Class* klass;
        MonitorData* monitor;
        struct SoundAnimatorEntity__Fields fields;
    };

    struct SoundAnimatorEntity_PlaybackModeType__Enum__VTable {
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

    struct SoundAnimatorEntity_PlaybackModeType__Enum__StaticFields {
    };

    struct SoundAnimatorEntity_PlaybackModeType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoundAnimatorEntity_PlaybackModeType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoundAnimatorEntity_PlaybackModeType__Enum__VTable vtable;
    };

    struct SoundAnimatorEntity__VTable {
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
        VirtualInvokeData HasFinished;
        VirtualInvokeData get_ExternalTarget;
        VirtualInvokeData OnEntityCreated;
    };

    struct SoundAnimatorEntity__StaticFields {
    };

    struct SoundAnimatorEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoundAnimatorEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoundAnimatorEntity__VTable vtable;
    };

    struct FransTech {
        struct FransTech__Class* klass;
        MonitorData* monitor;
    };

    struct FransTech__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FransTech__StaticFields {
    };

    struct FransTech__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FransTech__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FransTech__VTable vtable;
    };

    struct TransparencyAnimatorSystem__Fields {
        struct MonoBehaviour__Fields _;
        int32_t QuantizationAnchor;
        struct Stopwatch* m_timesliceWatch;
        struct TransparencyAnimatorSystemStrategy* m_strategy;
    };

    struct TransparencyAnimatorSystem {
        struct TransparencyAnimatorSystem__Class* klass;
        MonitorData* monitor;
        struct TransparencyAnimatorSystem__Fields fields;
    };

    struct __declspec(align(8)) TransparencyAnimatorSystemStrategy__Fields {
        struct Queue_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* m_statePool;
        struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array* m_colorTrackingDatas;
        struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* m_rendererStates;
        struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_* m_hideSceneActions;
    };

    struct TransparencyAnimatorSystemStrategy {
        struct TransparencyAnimatorSystemStrategy__Class* klass;
        MonitorData* monitor;
        struct TransparencyAnimatorSystemStrategy__Fields fields;
    };

    struct __declspec(align(8)) Queue_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Fields {
        struct TransparencyAnimatorSystemStrategy_RendererState__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
        struct Queue_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class* klass;
        MonitorData* monitor;
        struct Queue_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Fields fields;
    };

    struct __declspec(align(8)) TransparencyAnimatorSystemStrategy_RendererState__Fields {
        UberShaderProperty_Color__Enum ColorProperty;

        int32_t InstanceID;
        struct Renderer* Renderer;
        float OriginalAlpha;
        struct List_1_System_Single_* Requests;
        struct List_1_System_Boolean_* RequestPersistance;
        HandoverMode__Enum LastHandoverMode;

        TransparencyMode__Enum LastTransparencyMode;

        float m_handoverAlpha;
        bool m_hasValidAlphaHandover;
        float _LastAlphaApplied_k__BackingField;
        int32_t _ProcessedFrame_k__BackingField;
        bool HasImportantRequest;
    };

    struct TransparencyAnimatorSystemStrategy_RendererState {
        struct TransparencyAnimatorSystemStrategy_RendererState__Class* klass;
        MonitorData* monitor;
        struct TransparencyAnimatorSystemStrategy_RendererState__Fields fields;
    };

    struct TransparencyAnimatorSystemStrategy_RendererState__Array {
        struct TransparencyAnimatorSystemStrategy_RendererState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TransparencyAnimatorSystemStrategy_RendererState* vector[32];
    };

    struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
        struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
        struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct TransparencyAnimatorSystemStrategy_RendererState* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Fields {
        struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Fields {
        struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Fields fields;
    };

    struct ICollection_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
        struct ICollection_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
        int32_t key;
        struct TransparencyAnimatorSystemStrategy_RendererState* value;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Boxed {
        struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ fields;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array {
        struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
        struct IEnumerable_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array {
        struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* vector[32];
    };

    struct __declspec(align(8)) List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Fields {
        struct TransparencyAnimatorSystemStrategy_RendererState__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
        struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Fields {
        struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ {
        struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Fields fields;
    };

    struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction {
        struct MoonGuid* SceneGuid;
        bool Hidden;
    };

    struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Boxed {
        struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class* klass;
        MonitorData* monitor;
        struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction fields;
    };

    struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array {
        struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction vector[32];
    };

    struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction_ {
        struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class* klass;
        MonitorData* monitor;
    };

    struct TransparencyAnimatorSystemStrategy_RendererState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TransparencyAnimatorSystemStrategy_RendererState__StaticFields {
    };

    struct TransparencyAnimatorSystemStrategy_RendererState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyAnimatorSystemStrategy_RendererState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyAnimatorSystemStrategy_RendererState__VTable vtable;
    };

    struct TransparencyAnimatorSystemStrategy_RendererState__Array__VTable {
    };

    struct TransparencyAnimatorSystemStrategy_RendererState__Array__StaticFields {
    };

    struct TransparencyAnimatorSystemStrategy_RendererState__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyAnimatorSystemStrategy_RendererState__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyAnimatorSystemStrategy_RendererState__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
    };

    struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct Queue_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable {
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

    struct Queue_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
    };

    struct Queue_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Queue_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Queue_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct ICollection_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
    };

    struct ICollection_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct TransparencyAnimatorSystemStrategy_RendererState___VTable {
    };

    struct TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
    };

    struct TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__VTable {
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__StaticFields {
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct IEnumerable_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
    };

    struct IEnumerable_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable {
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

    struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__VTable {
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__StaticFields {
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Array__VTable vtable;
    };

    struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable {
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

    struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields {
        struct TransparencyAnimatorSystemStrategy_RendererState__Array* _emptyArray;
    };

    struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState___VTable vtable;
    };

    struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__StaticFields {
    };

    struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__VTable vtable;
    };

    struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__VTable {
    };

    struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__StaticFields {
    };

    struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields {
    };

    struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable vtable;
    };

    struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable {
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

    struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields {
        struct TransparencyAnimatorSystemStrategy_SetSceneHiddenAction__Array* _emptyArray;
    };

    struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Timeline_TransparencyAnimatorSystemStrategy_SetSceneHiddenAction___VTable vtable;
    };

    struct TransparencyAnimatorSystemStrategy__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

} // namespace app
