namespace app {
    struct TransparencyAnimatorSystemStrategy__StaticFields {
        struct Boolean__Array* s_disableRendererByMode;
    };

    struct TransparencyAnimatorSystemStrategy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyAnimatorSystemStrategy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyAnimatorSystemStrategy__VTable vtable;
    };

    struct TransparencyAnimatorSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
    };

    struct TransparencyAnimatorSystem__StaticFields {
        bool UseCachedRenderer;
        bool UseFastPaths;
        struct TransparencyAnimatorSystem* m_instance;
        bool UseExperimental;
        struct Int32__Array* m_filthyCache;
    };

    struct TransparencyAnimatorSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyAnimatorSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyAnimatorSystem__VTable vtable;
    };

    enum class TransparencyTweenAnimator_AnimateMode__Enum : int32_t {
        Color = 0x00000000,
        Dissolve = 0x0000000c,
        Additive = 0x00000002,
    };

    struct TransparencyTweenAnimator_AnimateMode__Enum__Boxed {
        struct TransparencyTweenAnimator_AnimateMode__Enum__Class* klass;
        MonitorData* monitor;
        TransparencyTweenAnimator_AnimateMode__Enum value;
    };

    struct TransparencyTweenAnimator__Fields {
        struct TimelineEntity__Fields _;
        struct MoonReference_1_UnityEngine_GameObject_* Target;
        bool AnimateChildren;
        TransparencyTweenAnimator_AnimateMode__Enum Mode;

        struct MoonFloat* StartValue;
        struct MoonFloat* EndValue;
        struct MoonFloat* Speed;
        bool AutoEnableDisable;
        TransparencyMode__Enum TransparencyMode;

        HandoverMode__Enum HandoverWrite;

        HandoverMode__Enum HandoverReadStart;

        HandoverMode__Enum HandoverReadEnd;

        float m_time;
        float m_delay;
        struct GameObject* m_target;
        struct List_1_UnityEngine_Renderer_* m_renderers;
        struct Single__Array* m_initialAlphas;
        bool m_isFinished;
    };

    struct TransparencyTweenAnimator {
        struct TransparencyTweenAnimator__Class* klass;
        MonitorData* monitor;
        struct TransparencyTweenAnimator__Fields fields;
    };

    struct TransparencyTweenAnimator_AnimateMode__Enum__VTable {
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

    struct TransparencyTweenAnimator_AnimateMode__Enum__StaticFields {
    };

    struct TransparencyTweenAnimator_AnimateMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyTweenAnimator_AnimateMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyTweenAnimator_AnimateMode__Enum__VTable vtable;
    };

    struct TransparencyTweenAnimator__VTable {
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
        VirtualInvokeData get_ShouldUpdateWhileDisabled;
        VirtualInvokeData HasFinished;
        VirtualInvokeData OnEntityCreated;
        VirtualInvokeData GetGameObjectTarget;
        VirtualInvokeData GetTweenNormalizedValue;
        VirtualInvokeData ApproximateEvent;
        VirtualInvokeData get_ExternalTarget;
    };

    struct TransparencyTweenAnimator__StaticFields {
    };

    struct TransparencyTweenAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TransparencyTweenAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TransparencyTweenAnimator__VTable vtable;
    };

    struct UberShaderAnimatorStrategyBase {
        struct UberShaderAnimatorStrategyBase__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) UberShaderAnimatorStrategyExperimental__Fields {
        struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_* m_trackingDatas;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_* m_rendererStates;
        struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_* m_statePool;
    };

    struct UberShaderAnimatorStrategyExperimental {
        struct UberShaderAnimatorStrategyExperimental__Class* klass;
        MonitorData* monitor;
        struct UberShaderAnimatorStrategyExperimental__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
        struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct UberShaderAnimatorStrategyExperimental_RendererState* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ fields;
    };

    struct __declspec(align(8)) UberShaderAnimatorStrategyExperimental_RendererState__Fields {
        int32_t InstanceID;
        struct Renderer* Renderer;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_* VectorRequests;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest_* FloatRequests;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_* ColorRequests;
        struct UberShaderAnimatorStrategyExperimental_VectorValue__Array* VectorOriginals;
        struct UberShaderAnimatorStrategyExperimental_FloatValue__Array* FloatOriginals;
        struct UberShaderAnimatorStrategyExperimental_ColorValue__Array* ColorOriginals;
        int32_t OriginalCounter;
    };

    struct UberShaderAnimatorStrategyExperimental_RendererState {
        struct UberShaderAnimatorStrategyExperimental_RendererState__Class* klass;
        MonitorData* monitor;
        struct UberShaderAnimatorStrategyExperimental_RendererState__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Fields {
        struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_ {
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Fields fields;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorRequest {
        struct Vector4 DesiredValue;
        float Weight;
        UberShaderProperty_Vector__Enum Property;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorRequest__Boxed {
        struct UberShaderAnimatorStrategyExperimental_VectorRequest__Class* klass;
        MonitorData* monitor;
        struct UberShaderAnimatorStrategyExperimental_VectorRequest fields;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array {
        struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberShaderAnimatorStrategyExperimental_VectorRequest vector[32];
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest_ {
        struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Fields {
        struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest_ {
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Fields fields;
    };

    struct UberShaderAnimatorStrategyExperimental_FloatRequest {
        float DesiredValue;
        float Weight;
        UberShaderProperty_Float__Enum Property;
    };

    struct UberShaderAnimatorStrategyExperimental_FloatRequest__Boxed {
        struct UberShaderAnimatorStrategyExperimental_FloatRequest__Class* klass;
        MonitorData* monitor;
        struct UberShaderAnimatorStrategyExperimental_FloatRequest fields;
    };

    struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array {
        struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberShaderAnimatorStrategyExperimental_FloatRequest vector[32];
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest_ {
        struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Fields {
        struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_ {
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Fields fields;
    };

    struct UberShaderAnimatorStrategyExperimental_ColorRequest {
        struct Color DesiredValue;
        float Weight;
        UberShaderProperty_Color__Enum Property;
    };

    struct UberShaderAnimatorStrategyExperimental_ColorRequest__Boxed {
        struct UberShaderAnimatorStrategyExperimental_ColorRequest__Class* klass;
        MonitorData* monitor;
        struct UberShaderAnimatorStrategyExperimental_ColorRequest fields;
    };

    struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array {
        struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberShaderAnimatorStrategyExperimental_ColorRequest vector[32];
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_ {
        struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Class* klass;
        MonitorData* monitor;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorValue {
        struct Vector4 Value;
        bool Set;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorValue__Boxed {
        struct UberShaderAnimatorStrategyExperimental_VectorValue__Class* klass;
        MonitorData* monitor;
        struct UberShaderAnimatorStrategyExperimental_VectorValue fields;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorValue__Array {
        struct UberShaderAnimatorStrategyExperimental_VectorValue__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberShaderAnimatorStrategyExperimental_VectorValue vector[32];
    };

    struct UberShaderAnimatorStrategyExperimental_FloatValue {
        float Value;
        bool Set;
    };

    struct UberShaderAnimatorStrategyExperimental_FloatValue__Boxed {
        struct UberShaderAnimatorStrategyExperimental_FloatValue__Class* klass;
        MonitorData* monitor;
        struct UberShaderAnimatorStrategyExperimental_FloatValue fields;
    };

    struct UberShaderAnimatorStrategyExperimental_FloatValue__Array {
        struct UberShaderAnimatorStrategyExperimental_FloatValue__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberShaderAnimatorStrategyExperimental_FloatValue vector[32];
    };

    struct UberShaderAnimatorStrategyExperimental_ColorValue {
        struct Color Value;
        bool Set;
    };

    struct UberShaderAnimatorStrategyExperimental_ColorValue__Boxed {
        struct UberShaderAnimatorStrategyExperimental_ColorValue__Class* klass;
        MonitorData* monitor;
        struct UberShaderAnimatorStrategyExperimental_ColorValue fields;
    };

    struct UberShaderAnimatorStrategyExperimental_ColorValue__Array {
        struct UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberShaderAnimatorStrategyExperimental_ColorValue vector[32];
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields {
        struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields {
        struct Dictionary_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields fields;
    };

    struct UberShaderAnimatorStrategyExperimental_RendererState__Array {
        struct UberShaderAnimatorStrategyExperimental_RendererState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberShaderAnimatorStrategyExperimental_RendererState* vector[32];
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
        struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
        struct ICollection_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
        int32_t key;
        struct UberShaderAnimatorStrategyExperimental_RendererState* value;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Boxed {
        struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ fields;
    };

    struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Array {
        struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
        struct IEnumerable_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields {
        struct UberShaderAnimatorStrategyExperimental_RendererState__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields fields;
    };

    struct __declspec(align(8)) Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields {
        struct UberShaderAnimatorStrategyExperimental_RendererState__Array* _array;
        int32_t _head;
        int32_t _tail;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState_ {
        struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class* klass;
        MonitorData* monitor;
        struct Queue_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Fields fields;
    };

    struct UberShaderAnimatorStrategyBase__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData __unknown_5;
        VirtualInvokeData __unknown_6;
        VirtualInvokeData __unknown_7;
        VirtualInvokeData __unknown_8;
    };

    struct UberShaderAnimatorStrategyBase__StaticFields {
    };

    struct UberShaderAnimatorStrategyBase__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyBase__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyBase__VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorRequest__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_VectorRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_VectorRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_VectorRequest__VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array__VTable {
    };

    struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___StaticFields {
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___VTable vtable;
    };

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___VTable {
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

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___StaticFields {
        struct UberShaderAnimatorStrategyExperimental_VectorRequest__Array* _emptyArray;
    };

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_VectorRequest___VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_FloatRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberShaderAnimatorStrategyExperimental_FloatRequest__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_FloatRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_FloatRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_FloatRequest__VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array__VTable {
    };

    struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___StaticFields {
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___VTable vtable;
    };

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___VTable {
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

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___StaticFields {
        struct UberShaderAnimatorStrategyExperimental_FloatRequest__Array* _emptyArray;
    };

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_FloatRequest___VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_ColorRequest__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberShaderAnimatorStrategyExperimental_ColorRequest__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_ColorRequest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_ColorRequest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_ColorRequest__VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array__VTable {
    };

    struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___StaticFields {
    };

    struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___VTable vtable;
    };

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___VTable {
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

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___StaticFields {
        struct UberShaderAnimatorStrategyExperimental_ColorRequest__Array* _emptyArray;
    };

    struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest___VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorValue__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorValue__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_VectorValue__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_VectorValue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_VectorValue__VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_VectorValue__Array__VTable {
    };

    struct UberShaderAnimatorStrategyExperimental_VectorValue__Array__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_VectorValue__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_VectorValue__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_VectorValue__Array__VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_FloatValue__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberShaderAnimatorStrategyExperimental_FloatValue__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_FloatValue__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_FloatValue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_FloatValue__VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_FloatValue__Array__VTable {
    };

    struct UberShaderAnimatorStrategyExperimental_FloatValue__Array__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_FloatValue__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_FloatValue__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_FloatValue__Array__VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_ColorValue__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberShaderAnimatorStrategyExperimental_ColorValue__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_ColorValue__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_ColorValue__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_ColorValue__VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_ColorValue__Array__VTable {
    };

    struct UberShaderAnimatorStrategyExperimental_ColorValue__Array__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_ColorValue__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_ColorValue__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_ColorValue__Array__VTable vtable;
    };

    struct UberShaderAnimatorStrategyExperimental_RendererState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberShaderAnimatorStrategyExperimental_RendererState__StaticFields {
    };

    struct UberShaderAnimatorStrategyExperimental_RendererState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderAnimatorStrategyExperimental_RendererState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderAnimatorStrategyExperimental_RendererState__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_Timeline_UberShaderAnimatorStrategyExperimental_RendererState___VTable vtable;
    };

} // namespace app
