namespace app {
    struct AudioSettings_AudioConfigurationChangeHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct AudioSettings_AudioConfigurationChangeHandler {
        struct AudioSettings_AudioConfigurationChangeHandler__Class* klass;
        MonitorData* monitor;
        struct AudioSettings_AudioConfigurationChangeHandler__Fields fields;
    };

    struct AudioSettings_AudioConfigurationChangeHandler__VTable {
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

    struct AudioSettings_AudioConfigurationChangeHandler__StaticFields {
    };

    struct AudioSettings_AudioConfigurationChangeHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioSettings_AudioConfigurationChangeHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioSettings_AudioConfigurationChangeHandler__VTable vtable;
    };

    struct AudioClip__Fields {
        struct Object_1__Fields _;
        struct AudioClip_PCMReaderCallback* m_PCMReaderCallback;
        struct AudioClip_PCMSetPositionCallback* m_PCMSetPositionCallback;
    };

    struct AudioClip {
        struct AudioClip__Class* klass;
        MonitorData* monitor;
        struct AudioClip__Fields fields;
    };

    struct AudioClip_PCMReaderCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct AudioClip_PCMReaderCallback {
        struct AudioClip_PCMReaderCallback__Class* klass;
        MonitorData* monitor;
        struct AudioClip_PCMReaderCallback__Fields fields;
    };

    struct AudioClip_PCMSetPositionCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct AudioClip_PCMSetPositionCallback {
        struct AudioClip_PCMSetPositionCallback__Class* klass;
        MonitorData* monitor;
        struct AudioClip_PCMSetPositionCallback__Fields fields;
    };

    struct AudioClip_PCMReaderCallback__VTable {
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

    struct AudioClip_PCMReaderCallback__StaticFields {
    };

    struct AudioClip_PCMReaderCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioClip_PCMReaderCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioClip_PCMReaderCallback__VTable vtable;
    };

    struct AudioClip_PCMSetPositionCallback__VTable {
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

    struct AudioClip_PCMSetPositionCallback__StaticFields {
    };

    struct AudioClip_PCMSetPositionCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioClip_PCMSetPositionCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioClip_PCMSetPositionCallback__VTable vtable;
    };

    struct AudioClip__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AudioClip__StaticFields {
    };

    struct AudioClip__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioClip__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioClip__VTable vtable;
    };

    enum class AudioClipLoadType__Enum : int32_t {
        DecompressOnLoad = 0x00000000,
        CompressedInMemory = 0x00000001,
        Streaming = 0x00000002,
    };

    struct AudioClipLoadType__Enum__Boxed {
        struct AudioClipLoadType__Enum__Class* klass;
        MonitorData* monitor;
        AudioClipLoadType__Enum value;
    };

    struct AudioClipLoadType__Enum__VTable {
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

    struct AudioClipLoadType__Enum__StaticFields {
    };

    struct AudioClipLoadType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioClipLoadType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioClipLoadType__Enum__VTable vtable;
    };

    enum class AudioDataLoadState__Enum : int32_t {
        Unloaded = 0x00000000,
        Loading = 0x00000001,
        Loaded = 0x00000002,
        Failed = 0x00000003,
    };

    struct AudioDataLoadState__Enum__Boxed {
        struct AudioDataLoadState__Enum__Class* klass;
        MonitorData* monitor;
        AudioDataLoadState__Enum value;
    };

    struct AudioDataLoadState__Enum__VTable {
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

    struct AudioDataLoadState__Enum__StaticFields {
    };

    struct AudioDataLoadState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioDataLoadState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioDataLoadState__Enum__VTable vtable;
    };

    struct AudioMixerGroup__Fields {
        struct Object_1__Fields _;
    };

    struct AudioMixerGroup {
        struct AudioMixerGroup__Class* klass;
        MonitorData* monitor;
        struct AudioMixerGroup__Fields fields;
    };

    struct AudioMixerGroup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AudioMixerGroup__StaticFields {
    };

    struct AudioMixerGroup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioMixerGroup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioMixerGroup__VTable vtable;
    };

    enum class AudioVelocityUpdateMode__Enum : int32_t {
        Auto = 0x00000000,
        Fixed = 0x00000001,
        Dynamic = 0x00000002,
    };

    struct AudioVelocityUpdateMode__Enum__Boxed {
        struct AudioVelocityUpdateMode__Enum__Class* klass;
        MonitorData* monitor;
        AudioVelocityUpdateMode__Enum value;
    };

    struct AudioVelocityUpdateMode__Enum__VTable {
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

    struct AudioVelocityUpdateMode__Enum__StaticFields {
    };

    struct AudioVelocityUpdateMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioVelocityUpdateMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioVelocityUpdateMode__Enum__VTable vtable;
    };

    enum class AudioSourceCurveType__Enum : int32_t {
        CustomRolloff = 0x00000000,
        SpatialBlend = 0x00000001,
        ReverbZoneMix = 0x00000002,
        Spread = 0x00000003,
    };

    struct AudioSourceCurveType__Enum__Boxed {
        struct AudioSourceCurveType__Enum__Class* klass;
        MonitorData* monitor;
        AudioSourceCurveType__Enum value;
    };

    struct AudioSourceCurveType__Enum__VTable {
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

    struct AudioSourceCurveType__Enum__StaticFields {
    };

    struct AudioSourceCurveType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioSourceCurveType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioSourceCurveType__Enum__VTable vtable;
    };

    enum class AudioRolloffMode__Enum : int32_t {
        Logarithmic = 0x00000000,
        Linear = 0x00000001,
        Custom = 0x00000002,
    };

    struct AudioRolloffMode__Enum__Boxed {
        struct AudioRolloffMode__Enum__Class* klass;
        MonitorData* monitor;
        AudioRolloffMode__Enum value;
    };

    struct AudioRolloffMode__Enum__VTable {
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

    struct AudioRolloffMode__Enum__StaticFields {
    };

    struct AudioRolloffMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioRolloffMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioRolloffMode__Enum__VTable vtable;
    };

    enum class FFTWindow__Enum : int32_t {
        Rectangular = 0x00000000,
        Triangle = 0x00000001,
        Hamming = 0x00000002,
        Hanning = 0x00000003,
        Blackman = 0x00000004,
        BlackmanHarris = 0x00000005,
    };

    struct FFTWindow__Enum__Boxed {
        struct FFTWindow__Enum__Class* klass;
        MonitorData* monitor;
        FFTWindow__Enum value;
    };

    struct FFTWindow__Enum__VTable {
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

    struct FFTWindow__Enum__StaticFields {
    };

    struct FFTWindow__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FFTWindow__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FFTWindow__Enum__VTable vtable;
    };

    struct AudioMixer__Fields {
        struct Object_1__Fields _;
    };

    struct AudioMixer {
        struct AudioMixer__Class* klass;
        MonitorData* monitor;
        struct AudioMixer__Fields fields;
    };

    struct AudioMixerGroup__Array {
        struct AudioMixerGroup__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AudioMixerGroup* vector[32];
    };

    struct AudioMixer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AudioMixer__StaticFields {
    };

    struct AudioMixer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioMixer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioMixer__VTable vtable;
    };

    struct AudioMixerGroup__Array__VTable {
    };

    struct AudioMixerGroup__Array__StaticFields {
    };

    struct AudioMixerGroup__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AudioMixerGroup__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AudioMixerGroup__Array__VTable vtable;
    };

    struct MovieTexture__Fields {
        struct Texture__Fields _;
    };

    struct MovieTexture {
        struct MovieTexture__Class* klass;
        MonitorData* monitor;
        struct MovieTexture__Fields fields;
    };

    struct MovieTexture__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_width;
        VirtualInvokeData set_width;
        VirtualInvokeData get_height;
        VirtualInvokeData set_height;
        VirtualInvokeData set_dimension;
        VirtualInvokeData get_isReadable;
    };

    struct MovieTexture__StaticFields {
    };

    struct MovieTexture__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MovieTexture__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MovieTexture__VTable vtable;
    };

    struct GridLayout__Fields {
        struct Behaviour__Fields _;
    };

    struct GridLayout {
        struct GridLayout__Class* klass;
        MonitorData* monitor;
        struct GridLayout__Fields fields;
    };

    struct GridLayout__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GridLayout__StaticFields {
    };

    struct GridLayout__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GridLayout__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GridLayout__VTable vtable;
    };

    struct PhysicsScene2D {
        int32_t m_Handle;
    };

    struct PhysicsScene2D__Boxed {
        struct PhysicsScene2D__Class* klass;
        MonitorData* monitor;
        struct PhysicsScene2D fields;
    };

    struct PhysicsScene2D__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
    };

    struct PhysicsScene2D__StaticFields {
    };

    struct PhysicsScene2D__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhysicsScene2D__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhysicsScene2D__VTable vtable;
    };

    struct RaycastHit2D {
        struct Vector2 m_Centroid;
        struct Vector2 m_Point;
        struct Vector2 m_Normal;
        float m_Distance;
        float m_Fraction;
        int32_t m_Collider;
    };

    struct RaycastHit2D__Boxed {
        struct RaycastHit2D__Class* klass;
        MonitorData* monitor;
        struct RaycastHit2D fields;
    };

    struct RaycastHit2D__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaycastHit2D__StaticFields {
    };

    struct RaycastHit2D__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaycastHit2D__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaycastHit2D__VTable vtable;
    };

    struct ContactFilter2D {
        bool useTriggers;
        bool useLayerMask;
        bool useDepth;
        bool useOutsideDepth;
        bool useNormalAngle;
        bool useOutsideNormalAngle;
        struct LayerMask layerMask;
        float minDepth;
        float maxDepth;
        float minNormalAngle;
        float maxNormalAngle;
    };

    struct ContactFilter2D__Boxed {
        struct ContactFilter2D__Class* klass;
        MonitorData* monitor;
        struct ContactFilter2D fields;
    };

    struct ContactFilter2D__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ContactFilter2D__StaticFields {
    };

    struct ContactFilter2D__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactFilter2D__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactFilter2D__VTable vtable;
    };

    struct RaycastHit2D__Array {
        struct RaycastHit2D__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RaycastHit2D vector[32];
    };

    struct RaycastHit2D__Array__VTable {
    };

    struct RaycastHit2D__Array__StaticFields {
    };

    struct RaycastHit2D__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaycastHit2D__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaycastHit2D__Array__VTable vtable;
    };

    struct Collider2D__Fields {
        struct Behaviour__Fields _;
    };

    struct Collider2D {
        struct Collider2D__Class* klass;
        MonitorData* monitor;
        struct Collider2D__Fields fields;
    };

    struct Collider2D__Array {
        struct Collider2D__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Collider2D* vector[32];
    };

    struct Collider2D__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Collider2D__StaticFields {
    };

    struct Collider2D__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Collider2D__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Collider2D__VTable vtable;
    };

    struct Collider2D__Array__VTable {
    };

    struct Collider2D__Array__StaticFields {
    };

    struct Collider2D__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Collider2D__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Collider2D__Array__VTable vtable;
    };

    struct PhysicsScene2D___VTable {
    };

    struct PhysicsScene2D___StaticFields {
    };

    struct PhysicsScene2D___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhysicsScene2D___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhysicsScene2D___VTable vtable;
    };

    struct ContactFilter2D___VTable {
    };

    struct ContactFilter2D___StaticFields {
    };

    struct ContactFilter2D___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactFilter2D___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactFilter2D___VTable vtable;
    };

    struct RaycastHit2D___VTable {
    };

    struct RaycastHit2D___StaticFields {
    };

    struct RaycastHit2D___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaycastHit2D___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaycastHit2D___VTable vtable;
    };

    struct ColliderDistance2D {
        struct Vector2 m_PointA;
        struct Vector2 m_PointB;
        struct Vector2 m_Normal;
        float m_Distance;
        int32_t m_IsValid;
    };

    struct ColliderDistance2D__Boxed {
        struct ColliderDistance2D__Class* klass;
        MonitorData* monitor;
        struct ColliderDistance2D fields;
    };

    struct ColliderDistance2D__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ColliderDistance2D__StaticFields {
    };

    struct ColliderDistance2D__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColliderDistance2D__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColliderDistance2D__VTable vtable;
    };

    struct ContactPoint2D {
        struct Vector2 m_Point;
        struct Vector2 m_Normal;
        struct Vector2 m_RelativeVelocity;
        float m_Separation;
        float m_NormalImpulse;
        float m_TangentImpulse;
        int32_t m_Collider;
        int32_t m_OtherCollider;
        int32_t m_Rigidbody;
        int32_t m_OtherRigidbody;
        int32_t m_Enabled;
    };

    struct ContactPoint2D__Boxed {
        struct ContactPoint2D__Class* klass;
        MonitorData* monitor;
        struct ContactPoint2D fields;
    };

    struct ContactPoint2D__Array {
        struct ContactPoint2D__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ContactPoint2D vector[32];
    };

    struct ContactPoint2D__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ContactPoint2D__StaticFields {
    };

    struct ContactPoint2D__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactPoint2D__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactPoint2D__VTable vtable;
    };

    struct ContactPoint2D__Array__VTable {
    };

    struct ContactPoint2D__Array__StaticFields {
    };

    struct ContactPoint2D__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactPoint2D__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactPoint2D__Array__VTable vtable;
    };

    struct Rigidbody2D__Fields {
        struct Component_1__Fields _;
    };

    struct Rigidbody2D {
        struct Rigidbody2D__Class* klass;
        MonitorData* monitor;
        struct Rigidbody2D__Fields fields;
    };

    struct Rigidbody2D__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Rigidbody2D__StaticFields {
    };

    struct Rigidbody2D__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Rigidbody2D__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Rigidbody2D__VTable vtable;
    };

    struct ColliderDistance2D___VTable {
    };

    struct ColliderDistance2D___StaticFields {
    };

    struct ColliderDistance2D___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ColliderDistance2D___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ColliderDistance2D___VTable vtable;
    };

    struct PhysicsMaterial2D__Fields {
        struct Object_1__Fields _;
    };

    struct PhysicsMaterial2D {
        struct PhysicsMaterial2D__Class* klass;
        MonitorData* monitor;
        struct PhysicsMaterial2D__Fields fields;
    };

    struct PhysicsMaterial2D__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PhysicsMaterial2D__StaticFields {
    };

    struct PhysicsMaterial2D__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhysicsMaterial2D__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhysicsMaterial2D__VTable vtable;
    };

    enum class RigidbodyType2D__Enum : int32_t {
        Dynamic = 0x00000000,
        Kinematic = 0x00000001,
        Static = 0x00000002,
    };

} // namespace app
