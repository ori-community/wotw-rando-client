namespace app {
    struct FastMemoryFlags__Enum__StaticFields {
    };

    struct FastMemoryFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FastMemoryFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FastMemoryFlags__Enum__VTable vtable;
    };

    enum class RenderTextureReadWrite__Enum : int32_t {
        Default = 0x00000000,
        Linear = 0x00000001,
        sRGB = 0x00000002,
    };

    struct RenderTextureReadWrite__Enum__Boxed {
        struct RenderTextureReadWrite__Enum__Class* klass;
        MonitorData* monitor;
        RenderTextureReadWrite__Enum value;
    };

    enum class RenderTextureMemoryless__Enum : int32_t {
        None = 0x00000000,
        Color = 0x00000001,
        Depth = 0x00000002,
        MSAA = 0x00000004,
    };

    struct RenderTextureMemoryless__Enum__Boxed {
        struct RenderTextureMemoryless__Enum__Class* klass;
        MonitorData* monitor;
        RenderTextureMemoryless__Enum value;
    };

    struct RenderTextureReadWrite__Enum__VTable {
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

    struct RenderTextureReadWrite__Enum__StaticFields {
    };

    struct RenderTextureReadWrite__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTextureReadWrite__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTextureReadWrite__Enum__VTable vtable;
    };

    struct RenderTextureMemoryless__Enum__VTable {
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

    struct RenderTextureMemoryless__Enum__StaticFields {
    };

    struct RenderTextureMemoryless__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTextureMemoryless__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTextureMemoryless__Enum__VTable vtable;
    };

    enum class ShadowSamplingMode__Enum : int32_t {
        CompareDepths = 0x00000000,
        RawDepth = 0x00000001,
        None = 0x00000002,
    };

    struct ShadowSamplingMode__Enum__Boxed {
        struct ShadowSamplingMode__Enum__Class* klass;
        MonitorData* monitor;
        ShadowSamplingMode__Enum value;
    };

    enum class VRTextureUsage__Enum : int32_t {
        None = 0x00000000,
        OneEye = 0x00000001,
        TwoEyes = 0x00000002,
    };

    struct VRTextureUsage__Enum__Boxed {
        struct VRTextureUsage__Enum__Class* klass;
        MonitorData* monitor;
        VRTextureUsage__Enum value;
    };

    enum class RenderTextureCreationFlags__Enum : int32_t {
        MipMap = 0x00000001,
        AutoGenerateMips = 0x00000002,
        SRGB = 0x00000004,
        EyeTexture = 0x00000008,
        EnableRandomWrite = 0x00000010,
        CreatedFromScript = 0x00000020,
        AllowVerticalFlip = 0x00000080,
        NoResolvedColorSurface = 0x00000100,
        DynamicallyScalable = 0x00000400,
        BindMS = 0x00000800,
    };

    struct RenderTextureCreationFlags__Enum__Boxed {
        struct RenderTextureCreationFlags__Enum__Class* klass;
        MonitorData* monitor;
        RenderTextureCreationFlags__Enum value;
    };

    struct RenderTextureDescriptor {
        int32_t _width_k__BackingField;
        int32_t _height_k__BackingField;
        int32_t _msaaSamples_k__BackingField;
        int32_t _volumeDepth_k__BackingField;
        RenderTextureFormat__Enum _colorFormat_k__BackingField;

        int32_t _depthBufferBits;
        TextureDimension__Enum _dimension_k__BackingField;

        ShadowSamplingMode__Enum _shadowSamplingMode_k__BackingField;

        VRTextureUsage__Enum _vrUsage_k__BackingField;

        RenderTextureCreationFlags__Enum _flags;

        RenderTextureMemoryless__Enum _memoryless_k__BackingField;
    };

    struct RenderTextureDescriptor__Boxed {
        struct RenderTextureDescriptor__Class* klass;
        MonitorData* monitor;
        struct RenderTextureDescriptor fields;
    };

    struct ShadowSamplingMode__Enum__VTable {
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

    struct ShadowSamplingMode__Enum__StaticFields {
    };

    struct ShadowSamplingMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShadowSamplingMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShadowSamplingMode__Enum__VTable vtable;
    };

    struct VRTextureUsage__Enum__VTable {
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

    struct VRTextureUsage__Enum__StaticFields {
    };

    struct VRTextureUsage__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VRTextureUsage__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VRTextureUsage__Enum__VTable vtable;
    };

    struct RenderTextureCreationFlags__Enum__VTable {
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

    struct RenderTextureCreationFlags__Enum__StaticFields {
    };

    struct RenderTextureCreationFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTextureCreationFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTextureCreationFlags__Enum__VTable vtable;
    };

    struct RenderTextureDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RenderTextureDescriptor__StaticFields {
        struct Int32__Array* depthFormatBits;
    };

    struct RenderTextureDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTextureDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTextureDescriptor__VTable vtable;
    };

    enum class ClearFlags__Enum : int32_t {
        None = 0x00000000,
        Color = 0x00000001,
        Depth = 0x00000002,
        Stencil = 0x00000004,
        Fast = 0x00000008,
        DepthStencil = 0x00000006,
        All = 0x00000007,
    };

    struct ClearFlags__Enum__Boxed {
        struct ClearFlags__Enum__Class* klass;
        MonitorData* monitor;
        ClearFlags__Enum value;
    };

    struct ClearFlags__Enum__VTable {
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

    struct ClearFlags__Enum__StaticFields {
    };

    struct ClearFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ClearFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ClearFlags__Enum__VTable vtable;
    };

    struct __declspec(align(8)) Sampler__Fields {
        void* m_Ptr;
    };

    struct Sampler {
        struct Sampler__Class* klass;
        MonitorData* monitor;
        struct Sampler__Fields fields;
    };

    struct CustomSampler__Fields {
        struct Sampler__Fields _;
    };

    struct CustomSampler {
        struct CustomSampler__Class* klass;
        MonitorData* monitor;
        struct CustomSampler__Fields fields;
    };

    struct Sampler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Sampler__StaticFields {
        struct Sampler* s_InvalidSampler;
    };

    struct Sampler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Sampler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Sampler__VTable vtable;
    };

    struct CustomSampler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CustomSampler__StaticFields {
        struct CustomSampler* s_InvalidCustomSampler;
    };

    struct CustomSampler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CustomSampler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CustomSampler__VTable vtable;
    };

    struct RenderTargetIdentifier__Array {
        struct RenderTargetIdentifier__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RenderTargetIdentifier vector[32];
    };

    struct RenderTargetIdentifier__Array__VTable {
    };

    struct RenderTargetIdentifier__Array__StaticFields {
    };

    struct RenderTargetIdentifier__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTargetIdentifier__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTargetIdentifier__Array__VTable vtable;
    };

    enum class RenderBufferLoadAction__Enum : int32_t {
        Load = 0x00000000,
        Clear = 0x00000001,
        DontCare = 0x00000002,
    };

    struct RenderBufferLoadAction__Enum__Boxed {
        struct RenderBufferLoadAction__Enum__Class* klass;
        MonitorData* monitor;
        RenderBufferLoadAction__Enum value;
    };

    enum class RenderBufferStoreAction__Enum : int32_t {
        Store = 0x00000000,
        Resolve = 0x00000001,
        StoreAndResolve = 0x00000002,
        DontCare = 0x00000003,
    };

    struct RenderBufferStoreAction__Enum__Boxed {
        struct RenderBufferStoreAction__Enum__Class* klass;
        MonitorData* monitor;
        RenderBufferStoreAction__Enum value;
    };

    struct RenderBufferLoadAction__Enum__VTable {
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

    struct RenderBufferLoadAction__Enum__StaticFields {
    };

    struct RenderBufferLoadAction__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderBufferLoadAction__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderBufferLoadAction__Enum__VTable vtable;
    };

    struct RenderBufferStoreAction__Enum__VTable {
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

    struct RenderBufferStoreAction__Enum__StaticFields {
    };

    struct RenderBufferStoreAction__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderBufferStoreAction__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderBufferStoreAction__Enum__VTable vtable;
    };

    struct RenderBufferLoadAction__Enum__Array {
        struct RenderBufferLoadAction__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        RenderBufferLoadAction__Enum vector[32];
    };

    struct RenderBufferStoreAction__Enum__Array {
        struct RenderBufferStoreAction__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        RenderBufferStoreAction__Enum vector[32];
    };

    struct RenderBufferLoadAction__Enum__Array__VTable {
    };

    struct RenderBufferLoadAction__Enum__Array__StaticFields {
    };

    struct RenderBufferLoadAction__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderBufferLoadAction__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderBufferLoadAction__Enum__Array__VTable vtable;
    };

    struct RenderBufferStoreAction__Enum__Array__VTable {
    };

    struct RenderBufferStoreAction__Enum__Array__StaticFields {
    };

    struct RenderBufferStoreAction__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderBufferStoreAction__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderBufferStoreAction__Enum__Array__VTable vtable;
    };

    struct RenderTextureDescriptor___VTable {
    };

    struct RenderTextureDescriptor___StaticFields {
    };

    struct RenderTextureDescriptor___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RenderTextureDescriptor___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RenderTextureDescriptor___VTable vtable;
    };

    struct Object_1__Array {
        struct Object_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Object_1* vector[32];
    };

    struct Object_1__Array__VTable {
    };

    struct Object_1__Array__StaticFields {
    };

    struct Object_1__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Object_1__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Object_1__Array__VTable vtable;
    };

    struct PreserveAttribute {
        struct PreserveAttribute__Class* klass;
        MonitorData* monitor;
    };

    enum class RuntimeInitializeLoadType__Enum : int32_t {
        AfterSceneLoad = 0x00000000,
        BeforeSceneLoad = 0x00000001,
    };

    struct RuntimeInitializeLoadType__Enum__Boxed {
        struct RuntimeInitializeLoadType__Enum__Class* klass;
        MonitorData* monitor;
        RuntimeInitializeLoadType__Enum value;
    };

    struct __declspec(align(8)) RuntimeInitializeOnLoadMethodAttribute__Fields {
        RuntimeInitializeLoadType__Enum _loadType_k__BackingField;
    };

    struct RuntimeInitializeOnLoadMethodAttribute {
        struct RuntimeInitializeOnLoadMethodAttribute__Class* klass;
        MonitorData* monitor;
        struct RuntimeInitializeOnLoadMethodAttribute__Fields fields;
    };

    struct PreserveAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct PreserveAttribute__StaticFields {
    };

    struct PreserveAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PreserveAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PreserveAttribute__VTable vtable;
    };

    struct RuntimeInitializeLoadType__Enum__VTable {
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

    struct RuntimeInitializeLoadType__Enum__StaticFields {
    };

    struct RuntimeInitializeLoadType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeInitializeLoadType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeInitializeLoadType__Enum__VTable vtable;
    };

    struct RuntimeInitializeOnLoadMethodAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct RuntimeInitializeOnLoadMethodAttribute__StaticFields {
    };

    struct RuntimeInitializeOnLoadMethodAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeInitializeOnLoadMethodAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeInitializeOnLoadMethodAttribute__VTable vtable;
    };

    struct ScriptableRenderContext {
        void* m_Ptr;
    };

    struct ScriptableRenderContext__Boxed {
        struct ScriptableRenderContext__Class* klass;
        MonitorData* monitor;
        struct ScriptableRenderContext fields;
    };

    struct ScriptableRenderContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ScriptableRenderContext__StaticFields {
    };

    struct ScriptableRenderContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScriptableRenderContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScriptableRenderContext__VTable vtable;
    };

    struct FilterResults {
        void* m_CullResults;
    };

    struct FilterResults__Boxed {
        struct FilterResults__Class* klass;
        MonitorData* monitor;
        struct FilterResults fields;
    };

    enum class DrawRendererSortMode__Enum : int32_t {
        Perspective = 0x00000000,
        Orthographic = 0x00000001,
        CustomAxis = 0x00000002,
    };

    struct DrawRendererSortMode__Enum__Boxed {
        struct DrawRendererSortMode__Enum__Class* klass;
        MonitorData* monitor;
        DrawRendererSortMode__Enum value;
    };

    struct DrawRendererSortSettings {
        struct Matrix4x4 worldToCameraMatrix;
        struct Vector3 cameraPosition;
        struct Vector3 cameraCustomSortAxis;
        SortFlags__Enum flags;

        DrawRendererSortMode__Enum sortMode;

        struct Matrix4x4 _previousVPMatrix;
        struct Matrix4x4 _nonJitteredVPMatrix;
    };

    struct DrawRendererSortSettings__Boxed {
        struct DrawRendererSortSettings__Class* klass;
        MonitorData* monitor;
        struct DrawRendererSortSettings fields;
    };

    struct DrawRendererSettings_shaderPassNames_FixedBuffer12 {
        int32_t FixedElementField;
    };

    struct DrawRendererSettings_shaderPassNames_FixedBuffer12__Boxed {
        struct DrawRendererSettings_shaderPassNames_FixedBuffer12__Class* klass;
        MonitorData* monitor;
        struct DrawRendererSettings_shaderPassNames_FixedBuffer12 fields;
    };

    enum class RendererConfiguration__Enum : int32_t {
        None = 0x00000000,
        PerObjectLightProbe = 0x00000001,
        PerObjectReflectionProbes = 0x00000002,
        PerObjectLightProbeProxyVolume = 0x00000004,
        PerObjectLightmaps = 0x00000008,
        ProvideLightIndices = 0x00000010,
        PerObjectMotionVectors = 0x00000020,
        PerObjectLightIndices8 = 0x00000040,
        ProvideReflectionProbeIndices = 0x00000080,
        PerObjectOcclusionProbe = 0x00000100,
        PerObjectOcclusionProbeProxyVolume = 0x00000200,
        PerObjectShadowMask = 0x00000400,
    };

    struct RendererConfiguration__Enum__Boxed {
        struct RendererConfiguration__Enum__Class* klass;
        MonitorData* monitor;
        RendererConfiguration__Enum value;
    };

    enum class DrawRendererFlags__Enum : int32_t {
        None = 0x00000000,
        EnableDynamicBatching = 0x00000001,
        EnableInstancing = 0x00000002,
    };

    struct DrawRendererFlags__Enum__Boxed {
        struct DrawRendererFlags__Enum__Class* klass;
        MonitorData* monitor;
        DrawRendererFlags__Enum value;
    };

    struct DrawRendererSettings {
        struct DrawRendererSortSettings sorting;
        struct DrawRendererSettings_shaderPassNames_FixedBuffer12 shaderPassNames;
        RendererConfiguration__Enum rendererConfiguration;

        DrawRendererFlags__Enum flags;

        int32_t m_OverrideMaterialInstanceId;
        int32_t m_OverrideMaterialPassIdx;
        int32_t useSRPBatcher;
    };

    struct DrawRendererSettings__Boxed {
        struct DrawRendererSettings__Class* klass;
        MonitorData* monitor;
        struct DrawRendererSettings fields;
    };

    struct RenderQueueRange {
        int32_t min;
        int32_t max;
    };

    struct RenderQueueRange__Boxed {
        struct RenderQueueRange__Class* klass;
        MonitorData* monitor;
        struct RenderQueueRange fields;
    };

    enum class FilterBoundsMode__Enum : int32_t {
        Off = 0x00000000,
        Intersect = 0x00000001,
        Contains = 0x00000002,
        InverseIntersect = 0x00000003,
        InverseContains = 0x00000004,
        DepthSlice = 0x00000005,
    };

    struct FilterBoundsMode__Enum__Boxed {
        struct FilterBoundsMode__Enum__Class* klass;
        MonitorData* monitor;
        FilterBoundsMode__Enum value;
    };

    struct FilterRenderersSettings {
        struct RenderQueueRange m_RenderQueueRange;
        int32_t m_LayerMask;
        uint32_t m_RenderingLayerMask;
        int32_t m_ExcludeMotionVectorObjects;
        FilterBoundsMode__Enum boundsMode;

        struct Bounds bounds;
        float boundsZMin;
        float boundsZMax;
    };

    struct FilterRenderersSettings__Boxed {
        struct FilterRenderersSettings__Class* klass;
        MonitorData* monitor;
        struct FilterRenderersSettings fields;
    };

    struct FilterResults__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FilterResults__StaticFields {
    };

    struct FilterResults__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FilterResults__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FilterResults__VTable vtable;
    };

    struct DrawRendererSortMode__Enum__VTable {
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

    struct DrawRendererSortMode__Enum__StaticFields {
    };

    struct DrawRendererSortMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DrawRendererSortMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DrawRendererSortMode__Enum__VTable vtable;
    };

    struct DrawRendererSortSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DrawRendererSortSettings__StaticFields {
    };

} // namespace app
