namespace app {
struct ShadowMapPass__Enum__StaticFields {
};

struct ShadowMapPass__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShadowMapPass__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShadowMapPass__Enum__VTable vtable;
};

struct Light__Array {
    struct Light__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Light *vector[32];
};

struct Light__Array__VTable {
};

struct Light__Array__StaticFields {
};

struct Light__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Light__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Light__Array__VTable vtable;
};

struct LightBakingOutput___VTable {
};

struct LightBakingOutput___StaticFields {
};

struct LightBakingOutput___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LightBakingOutput___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LightBakingOutput___VTable vtable;
};

struct Skybox__Fields {
    struct Behaviour__Fields _;
};

struct Skybox {
    struct Skybox__Class *klass;
    MonitorData *monitor;
    struct Skybox__Fields fields;
};

struct Skybox__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Skybox__StaticFields {
};

struct Skybox__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Skybox__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Skybox__VTable vtable;
};

struct MeshFilter__Fields {
    struct Component_1__Fields _;
};

struct MeshFilter {
    struct MeshFilter__Class *klass;
    MonitorData *monitor;
    struct MeshFilter__Fields fields;
};

struct MeshFilter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MeshFilter__StaticFields {
};

struct MeshFilter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeshFilter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeshFilter__VTable vtable;
};

enum class BuiltinRenderTextureType__Enum : int32_t {
    PropertyName = -4,
    BufferPtr = -3,
    RenderTexture = -2,
    BindableTexture = -1,
    None = 0x00000000,
    CurrentActive = 0x00000001,
    CameraTarget = 0x00000002,
    Depth = 0x00000003,
    DepthNormals = 0x00000004,
    ResolvedDepth = 0x00000005,
    PrepassNormalsSpec = 0x00000007,
    PrepassLight = 0x00000008,
    PrepassLightSpec = 0x00000009,
    GBuffer0 = 0x0000000a,
    GBuffer1 = 0x0000000b,
    GBuffer2 = 0x0000000c,
    GBuffer3 = 0x0000000d,
    Reflections = 0x0000000e,
    MotionVectors = 0x0000000f,
    GBuffer4 = 0x00000010,
    GBuffer5 = 0x00000011,
    GBuffer6 = 0x00000012,
    GBuffer7 = 0x00000013,
};

struct BuiltinRenderTextureType__Enum__Boxed {
    struct BuiltinRenderTextureType__Enum__Class *klass;
    MonitorData *monitor;
    BuiltinRenderTextureType__Enum value;
    
};

struct RenderTargetIdentifier {
    BuiltinRenderTextureType__Enum m_Type;
    
    int32_t m_NameID;
    int32_t m_InstanceID;
    void *m_BufferPointer;
    int32_t m_MipLevel;
    CubemapFace__Enum m_CubeFace;
    
    int32_t m_DepthSlice;
};

struct RenderTargetIdentifier__Boxed {
    struct RenderTargetIdentifier__Class *klass;
    MonitorData *monitor;
    struct RenderTargetIdentifier fields;
};

struct BuiltinRenderTextureType__Enum__VTable {
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

struct BuiltinRenderTextureType__Enum__StaticFields {
};

struct BuiltinRenderTextureType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BuiltinRenderTextureType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BuiltinRenderTextureType__Enum__VTable vtable;
};

struct RenderTargetIdentifier__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
};

struct RenderTargetIdentifier__StaticFields {
};

struct RenderTargetIdentifier__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RenderTargetIdentifier__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RenderTargetIdentifier__VTable vtable;
};

enum class GraphicsFormat__Enum : int32_t {
    None = 0x00000000,
    R8_SRGB = 0x00000001,
    R8G8_SRGB = 0x00000002,
    R8G8B8_SRGB = 0x00000003,
    R8G8B8A8_SRGB = 0x00000004,
    R8_UNorm = 0x00000005,
    R8G8_UNorm = 0x00000006,
    R8G8B8_UNorm = 0x00000007,
    R8G8B8A8_UNorm = 0x00000008,
    R8_SNorm = 0x00000009,
    R8G8_SNorm = 0x0000000a,
    R8G8B8_SNorm = 0x0000000b,
    R8G8B8A8_SNorm = 0x0000000c,
    R8_UInt = 0x0000000d,
    R8G8_UInt = 0x0000000e,
    R8G8B8_UInt = 0x0000000f,
    R8G8B8A8_UInt = 0x00000010,
    R8_SInt = 0x00000011,
    R8G8_SInt = 0x00000012,
    R8G8B8_SInt = 0x00000013,
    R8G8B8A8_SInt = 0x00000014,
    R16_UNorm = 0x00000015,
    R16G16_UNorm = 0x00000016,
    R16G16B16_UNorm = 0x00000017,
    R16G16B16A16_UNorm = 0x00000018,
    R16_SNorm = 0x00000019,
    R16G16_SNorm = 0x0000001a,
    R16G16B16_SNorm = 0x0000001b,
    R16G16B16A16_SNorm = 0x0000001c,
    R16_UInt = 0x0000001d,
    R16G16_UInt = 0x0000001e,
    R16G16B16_UInt = 0x0000001f,
    R16G16B16A16_UInt = 0x00000020,
    R16_SInt = 0x00000021,
    R16G16_SInt = 0x00000022,
    R16G16B16_SInt = 0x00000023,
    R16G16B16A16_SInt = 0x00000024,
    R32_UInt = 0x00000025,
    R32G32_UInt = 0x00000026,
    R32G32B32_UInt = 0x00000027,
    R32G32B32A32_UInt = 0x00000028,
    R32_SInt = 0x00000029,
    R32G32_SInt = 0x0000002a,
    R32G32B32_SInt = 0x0000002b,
    R32G32B32A32_SInt = 0x0000002c,
    R16_SFloat = 0x0000002d,
    R16G16_SFloat = 0x0000002e,
    R16G16B16_SFloat = 0x0000002f,
    R16G16B16A16_SFloat = 0x00000030,
    R32_SFloat = 0x00000031,
    R32G32_SFloat = 0x00000032,
    R32G32B32_SFloat = 0x00000033,
    R32G32B32A32_SFloat = 0x00000034,
    B8G8R8_SRGB = 0x00000038,
    B8G8R8A8_SRGB = 0x00000039,
    B8G8R8_UNorm = 0x0000003a,
    B8G8R8A8_UNorm = 0x0000003b,
    B8G8R8_SNorm = 0x0000003c,
    B8G8R8A8_SNorm = 0x0000003d,
    B8G8R8_UInt = 0x0000003e,
    B8G8R8A8_UInt = 0x0000003f,
    B8G8R8_SInt = 0x00000040,
    B8G8R8A8_SInt = 0x00000041,
    R4G4B4A4_UNormPack16 = 0x00000042,
    B4G4R4A4_UNormPack16 = 0x00000043,
    R5G6B5_UNormPack16 = 0x00000044,
    B5G6R5_UNormPack16 = 0x00000045,
    R5G5B5A1_UNormPack16 = 0x00000046,
    B5G5R5A1_UNormPack16 = 0x00000047,
    A1R5G5B5_UNormPack16 = 0x00000048,
    E5B9G9R9_UFloatPack32 = 0x00000049,
    B10G11R11_UFloatPack32 = 0x0000004a,
    A2B10G10R10_UNormPack32 = 0x0000004b,
    A2B10G10R10_UIntPack32 = 0x0000004c,
    A2B10G10R10_SIntPack32 = 0x0000004d,
    A2R10G10B10_UNormPack32 = 0x0000004e,
    A2R10G10B10_UIntPack32 = 0x0000004f,
    A2R10G10B10_SIntPack32 = 0x00000050,
    A2R10G10B10_XRSRGBPack32 = 0x00000051,
    A2R10G10B10_XRUNormPack32 = 0x00000052,
    R10G10B10_XRSRGBPack32 = 0x00000053,
    R10G10B10_XRUNormPack32 = 0x00000054,
    A10R10G10B10_XRSRGBPack32 = 0x00000055,
    A10R10G10B10_XRUNormPack32 = 0x00000056,
    D16_UNorm = 0x0000005a,
    D24_UNorm = 0x0000005b,
    D24_UNorm_S8_UInt = 0x0000005c,
    D32_SFloat = 0x0000005d,
    D32_SFloat_S8_Uint = 0x0000005e,
    S8_Uint = 0x0000005f,
    RGB_DXT1_SRGB = 0x00000060,
    RGBA_DXT1_SRGB = 0x00000060,
    RGB_DXT1_UNorm = 0x00000061,
    RGBA_DXT1_UNorm = 0x00000061,
    RGBA_DXT3_SRGB = 0x00000062,
    RGBA_DXT3_UNorm = 0x00000063,
    RGBA_DXT5_SRGB = 0x00000064,
    RGBA_DXT5_UNorm = 0x00000065,
    R_BC4_UNorm = 0x00000066,
    R_BC4_SNorm = 0x00000067,
    RG_BC5_UNorm = 0x00000068,
    RG_BC5_SNorm = 0x00000069,
    RGB_BC6H_UFloat = 0x0000006a,
    RGB_BC6H_SFloat = 0x0000006b,
    RGBA_BC7_SRGB = 0x0000006c,
    RGBA_BC7_UNorm = 0x0000006d,
    RGB_PVRTC_2Bpp_SRGB = 0x0000006e,
    RGB_PVRTC_2Bpp_UNorm = 0x0000006f,
    RGB_PVRTC_4Bpp_SRGB = 0x00000070,
    RGB_PVRTC_4Bpp_UNorm = 0x00000071,
    RGBA_PVRTC_2Bpp_SRGB = 0x00000072,
    RGBA_PVRTC_2Bpp_UNorm = 0x00000073,
    RGBA_PVRTC_4Bpp_SRGB = 0x00000074,
    RGBA_PVRTC_4Bpp_UNorm = 0x00000075,
    RGB_ETC_UNorm = 0x00000076,
    RGB_ETC2_SRGB = 0x00000077,
    RGB_ETC2_UNorm = 0x00000078,
    RGB_A1_ETC2_SRGB = 0x00000079,
    RGB_A1_ETC2_UNorm = 0x0000007a,
    RGBA_ETC2_SRGB = 0x0000007b,
    RGBA_ETC2_UNorm = 0x0000007c,
    R_EAC_UNorm = 0x0000007d,
    R_EAC_SNorm = 0x0000007e,
    RG_EAC_UNorm = 0x0000007f,
    RG_EAC_SNorm = 0x00000080,
    RGBA_ASTC4X4_SRGB = 0x00000081,
    RGBA_ASTC4X4_UNorm = 0x00000082,
    RGBA_ASTC5X5_SRGB = 0x00000083,
    RGBA_ASTC5X5_UNorm = 0x00000084,
    RGBA_ASTC6X6_SRGB = 0x00000085,
    RGBA_ASTC6X6_UNorm = 0x00000086,
    RGBA_ASTC8X8_SRGB = 0x00000087,
    RGBA_ASTC8X8_UNorm = 0x00000088,
    RGBA_ASTC10X10_SRGB = 0x00000089,
    RGBA_ASTC10X10_UNorm = 0x0000008a,
    RGBA_ASTC12X12_SRGB = 0x0000008b,
    RGBA_ASTC12X12_UNorm = 0x0000008c,
};

struct GraphicsFormat__Enum__Boxed {
    struct GraphicsFormat__Enum__Class *klass;
    MonitorData *monitor;
    GraphicsFormat__Enum value;
    
};

enum class TextureFormat__Enum : int32_t {
    Alpha8 = 0x00000001,
    ARGB4444 = 0x00000002,
    RGB24 = 0x00000003,
    RGBA32 = 0x00000004,
    ARGB32 = 0x00000005,
    RGB565 = 0x00000007,
    R16 = 0x00000009,
    DXT1 = 0x0000000a,
    DXT5 = 0x0000000c,
    RGBA4444 = 0x0000000d,
    BGRA32 = 0x0000000e,
    RHalf = 0x0000000f,
    RGHalf = 0x00000010,
    RGBAHalf = 0x00000011,
    RFloat = 0x00000012,
    RGFloat = 0x00000013,
    RGBAFloat = 0x00000014,
    YUY2 = 0x00000015,
    RGB9e5Float = 0x00000016,
    BC4 = 0x0000001a,
    BC5 = 0x0000001b,
    BC6H = 0x00000018,
    BC7 = 0x00000019,
    DXT1Crunched = 0x0000001c,
    DXT5Crunched = 0x0000001d,
    PVRTC_RGB2 = 0x0000001e,
    PVRTC_RGBA2 = 0x0000001f,
    PVRTC_RGB4 = 0x00000020,
    PVRTC_RGBA4 = 0x00000021,
    ETC_RGB4 = 0x00000022,
    EAC_R = 0x00000029,
    EAC_R_SIGNED = 0x0000002a,
    EAC_RG = 0x0000002b,
    EAC_RG_SIGNED = 0x0000002c,
    ETC2_RGB = 0x0000002d,
    ETC2_RGBA1 = 0x0000002e,
    ETC2_RGBA8 = 0x0000002f,
    ASTC_RGB_4x4 = 0x00000030,
    ASTC_RGB_5x5 = 0x00000031,
    ASTC_RGB_6x6 = 0x00000032,
    ASTC_RGB_8x8 = 0x00000033,
    ASTC_RGB_10x10 = 0x00000034,
    ASTC_RGB_12x12 = 0x00000035,
    ASTC_RGBA_4x4 = 0x00000036,
    ASTC_RGBA_5x5 = 0x00000037,
    ASTC_RGBA_6x6 = 0x00000038,
    ASTC_RGBA_8x8 = 0x00000039,
    ASTC_RGBA_10x10 = 0x0000003a,
    ASTC_RGBA_12x12 = 0x0000003b,
    ETC_RGB4_3DS = 0x0000003c,
    ETC_RGBA8_3DS = 0x0000003d,
    RG16 = 0x0000003e,
    R8 = 0x0000003f,
    ETC_RGB4Crunched = 0x00000040,
    ETC2_RGBA8Crunched = 0x00000041,
};

struct TextureFormat__Enum__Boxed {
    struct TextureFormat__Enum__Class *klass;
    MonitorData *monitor;
    TextureFormat__Enum value;
    
};

struct GraphicsFormat__Enum__VTable {
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

struct GraphicsFormat__Enum__StaticFields {
};

struct GraphicsFormat__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GraphicsFormat__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GraphicsFormat__Enum__VTable vtable;
};

struct TextureFormat__Enum__VTable {
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

struct TextureFormat__Enum__StaticFields {
};

struct TextureFormat__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextureFormat__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextureFormat__Enum__VTable vtable;
};

enum class RenderTextureFormat__Enum : int32_t {
    ARGB32 = 0x00000000,
    Depth = 0x00000001,
    ARGBHalf = 0x00000002,
    Shadowmap = 0x00000003,
    RGB565 = 0x00000004,
    ARGB4444 = 0x00000005,
    ARGB1555 = 0x00000006,
    Default = 0x00000007,
    ARGB2101010 = 0x00000008,
    DefaultHDR = 0x00000009,
    ARGB64 = 0x0000000a,
    ARGBFloat = 0x0000000b,
    RGFloat = 0x0000000c,
    RGHalf = 0x0000000d,
    RFloat = 0x0000000e,
    RHalf = 0x0000000f,
    R8 = 0x00000010,
    ARGBInt = 0x00000011,
    RGInt = 0x00000012,
    RInt = 0x00000013,
    BGRA32 = 0x00000014,
    RGB111110Float = 0x00000016,
    RG32 = 0x00000017,
    RGBAUShort = 0x00000018,
    RG16 = 0x00000019,
    BGRA10101010_XR = 0x0000001a,
    BGR101010_XR = 0x0000001b,
    R16 = 0x0000001c,
};

struct RenderTextureFormat__Enum__Boxed {
    struct RenderTextureFormat__Enum__Class *klass;
    MonitorData *monitor;
    RenderTextureFormat__Enum value;
    
};

struct RenderTextureFormat__Enum__VTable {
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

struct RenderTextureFormat__Enum__StaticFields {
};

struct RenderTextureFormat__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RenderTextureFormat__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RenderTextureFormat__Enum__VTable vtable;
};

struct SkinnedMeshRenderer__Fields {
    struct Renderer__Fields _;
};

struct SkinnedMeshRenderer {
    struct SkinnedMeshRenderer__Class *klass;
    MonitorData *monitor;
    struct SkinnedMeshRenderer__Fields fields;
};

struct SkinnedMeshRenderer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SkinnedMeshRenderer__StaticFields {
};

struct SkinnedMeshRenderer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkinnedMeshRenderer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkinnedMeshRenderer__VTable vtable;
};

struct Transform__Array {
    struct Transform__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Transform *vector[32];
};

struct Transform__Array__VTable {
};

struct Transform__Array__StaticFields {
};

struct Transform__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Transform__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Transform__Array__VTable vtable;
};

struct MeshRenderer__Fields {
    struct Renderer__Fields _;
};

struct MeshRenderer {
    struct MeshRenderer__Class *klass;
    MonitorData *monitor;
    struct MeshRenderer__Fields fields;
};

struct MeshRenderer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MeshRenderer__StaticFields {
};

struct MeshRenderer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MeshRenderer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MeshRenderer__VTable vtable;
};

struct ScriptableObject__Fields {
    struct Object_1__Fields _;
};

struct ScriptableObject {
    struct ScriptableObject__Class *klass;
    MonitorData *monitor;
    struct ScriptableObject__Fields fields;
};

struct ScriptableObject__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ScriptableObject__StaticFields {
};

struct ScriptableObject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScriptableObject__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScriptableObject__VTable vtable;
};

struct RenderPipelineAsset__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ *m_CreatedPipelines;
};

struct RenderPipelineAsset {
    struct RenderPipelineAsset__Class *klass;
    MonitorData *monitor;
    struct RenderPipelineAsset__Fields fields;
};

struct __declspec(align(8)) List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Fields {
    struct IRenderPipeline__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ {
    struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Class *klass;
    MonitorData *monitor;
    struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Fields fields;
};

struct IRenderPipeline {
    struct IRenderPipeline__Class *klass;
    MonitorData *monitor;
};

struct IRenderPipeline__Array {
    struct IRenderPipeline__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct IRenderPipeline *vector[32];
};

struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ {
    struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Class *klass;
    MonitorData *monitor;
};

enum class MoonRenderPipelineAsset_XboxResolution__Enum : int32_t {
    _720p = 0x00000000,
    _800p = 0x00000001,
    _900p = 0x00000002,
    _1080p = 0x00000003,
    _2160p = 0x00000004,
    Native = 0x00000005,
    _4320p = 0x00000006,
};

struct MoonRenderPipelineAsset_XboxResolution__Enum__Boxed {
    struct MoonRenderPipelineAsset_XboxResolution__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_XboxResolution__Enum value;
    
};

enum class MoonRenderPipelineAsset_DebugDownsample__Enum : int32_t {
    Off = 0x00000000,
    _1x1 = 0x00000001,
    _2x2 = 0x00000002,
    _4x4 = 0x00000004,
};

struct MoonRenderPipelineAsset_DebugDownsample__Enum__Boxed {
    struct MoonRenderPipelineAsset_DebugDownsample__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_DebugDownsample__Enum value;
    
};

enum class MoonRenderPipelineAsset_FrameBufferFormat__Enum : int32_t {
    Auto = 0x00000000,
    ARGBHalf = 0x00000001,
    ARGB32 = 0x00000002,
    A2RGB10 = 0x00000003,
    RG11B10 = 0x00000004,
    Custom = 0x00000005,
};

struct MoonRenderPipelineAsset_FrameBufferFormat__Enum__Boxed {
    struct MoonRenderPipelineAsset_FrameBufferFormat__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_FrameBufferFormat__Enum value;
    
};

enum class MoonRenderPipelineAsset_FrameBufferDepth__Enum : int32_t {
    _0 = 0x00000000,
    _8 = 0x00000008,
    _16 = 0x00000010,
    _24 = 0x00000018,
    _32 = 0x00000020,
};

struct MoonRenderPipelineAsset_FrameBufferDepth__Enum__Boxed {
    struct MoonRenderPipelineAsset_FrameBufferDepth__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_FrameBufferDepth__Enum value;
    
};

enum class SceneRTAllocationPolicy__Enum : int32_t {
    Permanent = 0x00000000,
    Temp = 0x00000001,
};

struct SceneRTAllocationPolicy__Enum__Boxed {
    struct SceneRTAllocationPolicy__Enum__Class *klass;
    MonitorData *monitor;
    SceneRTAllocationPolicy__Enum value;
    
};

enum class SliceRTAllocationPolicy__Enum : int32_t {
    SharedPermanent = 0x00000000,
    SharedTemp = 0x00000001,
};

struct SliceRTAllocationPolicy__Enum__Boxed {
    struct SliceRTAllocationPolicy__Enum__Class *klass;
    MonitorData *monitor;
    SliceRTAllocationPolicy__Enum value;
    
};

enum class ClearPolicy__Enum : int32_t {
    SubviewportMRTOneByOne = 0x00000000,
    FullScreen = 0x00000001,
    DontClear = 0x00000002,
};

struct ClearPolicy__Enum__Boxed {
    struct ClearPolicy__Enum__Class *klass;
    MonitorData *monitor;
    ClearPolicy__Enum value;
    
};

enum class ClearFlagMode__Enum : int32_t {
    Ignore = 0x00000000,
    On = 0x00000001,
    Off = 0x00000002,
};

struct ClearFlagMode__Enum__Boxed {
    struct ClearFlagMode__Enum__Class *klass;
    MonitorData *monitor;
    ClearFlagMode__Enum value;
    
};

enum class MoonRenderPipelineAsset_ClearSceneRT__Enum : int32_t {
    Off = 0x00000000,
    CameraBackground = 0x00000001,
    Clear = 0x00000002,
    Magenta = 0x00000003,
    Green = 0x00000004,
    Cyan = 0x00000005,
    Yellow = 0x00000006,
    White = 0x00000007,
    Black = 0x00000008,
    Custom = 0x00000009,
};

struct MoonRenderPipelineAsset_ClearSceneRT__Enum__Boxed {
    struct MoonRenderPipelineAsset_ClearSceneRT__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_ClearSceneRT__Enum value;
    
};

enum class MoonRenderPipelineAsset_ClearSliceBlurRT__Enum : int32_t {
    Never = 0x00000000,
    WhenZTested = 0x00000001,
    Always = 0x00000002,
};

struct MoonRenderPipelineAsset_ClearSliceBlurRT__Enum__Boxed {
    struct MoonRenderPipelineAsset_ClearSliceBlurRT__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_ClearSliceBlurRT__Enum value;
    
};

enum class MoonRenderPipelineAsset_DeferredLightingDebug__Enum : int32_t {
    Off = 0x00000000,
    FinalColor = 0x00000001,
    FinalAlpha = 0x00000002,
    Normal = 0x00000003,
    Offset = 0x00000004,
    FinalAlbedoLMI = 0x00000005,
    ResultLighting = 0x00000006,
};

struct MoonRenderPipelineAsset_DeferredLightingDebug__Enum__Boxed {
    struct MoonRenderPipelineAsset_DeferredLightingDebug__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_DeferredLightingDebug__Enum value;
    
};

enum class MoonRenderPipelineAsset_FXAADepthPrecull__Enum : int32_t {
    Off = 0x00000000,
    FocusedSlice = 0x00000001,
    SmartSlice = 0x00000002,
    AllSlices = 0x00000003,
};

struct MoonRenderPipelineAsset_FXAADepthPrecull__Enum__Boxed {
    struct MoonRenderPipelineAsset_FXAADepthPrecull__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_FXAADepthPrecull__Enum value;
    
};

enum class MoonRenderPipelineAsset_FXAAHiRes__Enum : int32_t {
    Off = 0x00000000,
    DepthTest = 0x00000001,
    SmartBlit = 0x00000002,
    Full = 0x00000003,
};

struct MoonRenderPipelineAsset_FXAAHiRes__Enum__Boxed {
    struct MoonRenderPipelineAsset_FXAAHiRes__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_FXAAHiRes__Enum value;
    
};

enum class MoonRenderPipelineAsset_MaskErasingFixType__Enum : int32_t {
    Off = 0x00000000,
    FocusedSlice = 0x00000001,
    AllSlices = 0x00000002,
};

struct MoonRenderPipelineAsset_MaskErasingFixType__Enum__Boxed {
    struct MoonRenderPipelineAsset_MaskErasingFixType__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_MaskErasingFixType__Enum value;
    
};

enum class RenderScope__Enum : int32_t {
    GameView = 0x00000001,
    SceneView = 0x00000002,
    None = 0x00000000,
    All = 0x00000003,
};

struct RenderScope__Enum__Boxed {
    struct RenderScope__Enum__Class *klass;
    MonitorData *monitor;
    RenderScope__Enum value;
    
};

enum class MoonRenderPipelineAsset_SliceCompositionType__Enum : int32_t {
    PerSlice = 0x00000000,
    FullPS = 0x00000001,
    PerSliceImmediate = 0x00000002,
};

struct MoonRenderPipelineAsset_SliceCompositionType__Enum__Boxed {
    struct MoonRenderPipelineAsset_SliceCompositionType__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_SliceCompositionType__Enum value;
    
};

enum class FilterMode__Enum : int32_t {
    Point = 0x00000000,
    Bilinear = 0x00000001,
    Trilinear = 0x00000002,
};

struct FilterMode__Enum__Boxed {
    struct FilterMode__Enum__Class *klass;
    MonitorData *monitor;
    FilterMode__Enum value;
    
};

struct IntRange {
    int32_t min;
    int32_t max;
};

struct IntRange__Boxed {
    struct IntRange__Class *klass;
    MonitorData *monitor;
    struct IntRange fields;
};

enum class MoonRenderPipelineAsset_FxaaQualityLevel__Enum : int32_t {
    ExtremePerformance = 0x00000000,
    Performance = 0x00000001,
    Default = 0x00000002,
    Quality = 0x00000003,
    ExtremeQuality = 0x00000004,
    Custom = 0x00000005,
};

struct MoonRenderPipelineAsset_FxaaQualityLevel__Enum__Boxed {
    struct MoonRenderPipelineAsset_FxaaQualityLevel__Enum__Class *klass;
    MonitorData *monitor;
    MoonRenderPipelineAsset_FxaaQualityLevel__Enum value;
    
};

}
