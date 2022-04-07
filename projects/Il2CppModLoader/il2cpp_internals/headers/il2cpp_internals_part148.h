namespace app {
struct IEnumerator_1_UnityEngine_Vector4___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Vector4___StaticFields {
};
struct IEnumerator_1_UnityEngine_Vector4___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Vector4___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Vector4___VTable vtable;
};
struct List_1_UnityEngine_Vector4___VTable {
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
struct List_1_UnityEngine_Vector4___StaticFields {
  struct Vector4__Array * _emptyArray;
};
struct List_1_UnityEngine_Vector4___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Vector4___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Vector4___VTable vtable;
};

struct Flare__Fields {
  struct Object_1__Fields _;
};
struct Flare {
  struct Flare__Class *klass;
  struct MonitorData *monitor;
  struct Flare__Fields fields;
};
struct Flare__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Flare__StaticFields {
};
struct Flare__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Flare__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Flare__VTable vtable;
};

struct Light__Fields {
  struct Behaviour__Fields _;
  int32_t m_BakedIndex;
};
struct Light {
  struct Light__Class *klass;
  struct MonitorData *monitor;
  struct Light__Fields fields;
};
struct Light__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Light__StaticFields {
};
struct Light__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Light__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Light__VTable vtable;
};

enum LightType__Enum : int32_t {
  LightType__Enum_Spot = 0,
  LightType__Enum_Directional = 1,
  LightType__Enum_Point = 2,
  LightType__Enum_Area = 3,
  LightType__Enum_Rectangle = 3,
  LightType__Enum_Disc = 4,
};
struct LightType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LightType__Enum value;
};

enum LightmapBakeType__Enum : int32_t {
  LightmapBakeType__Enum_Realtime = 4,
  LightmapBakeType__Enum_Baked = 2,
  LightmapBakeType__Enum_Mixed = 1,
};
struct LightmapBakeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LightmapBakeType__Enum value;
};
enum MixedLightingMode__Enum : int32_t {
  MixedLightingMode__Enum_IndirectOnly = 0,
  MixedLightingMode__Enum_Shadowmask = 2,
  MixedLightingMode__Enum_Subtractive = 1,
};
struct MixedLightingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MixedLightingMode__Enum value;
};
struct LightBakingOutput {
  int32_t probeOcclusionLightIndex;
  int32_t occlusionMaskChannel;
  enum LightmapBakeType__Enum lightmapBakeType;
  enum MixedLightingMode__Enum mixedLightingMode;
  bool isBaked;
};
struct LightBakingOutput__Boxed {
  struct LightBakingOutput__Class *klass;
  struct MonitorData *monitor;
  struct LightBakingOutput fields;
};
struct LightBakingOutput__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightBakingOutput__StaticFields {
};
struct LightBakingOutput__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightBakingOutput__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightBakingOutput__VTable vtable;
};

enum LightShadowCasterMode__Enum : int32_t {
  LightShadowCasterMode__Enum_Default = 0,
  LightShadowCasterMode__Enum_NonLightmappedOnly = 1,
  LightShadowCasterMode__Enum_Everything = 2,
};
struct LightShadowCasterMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LightShadowCasterMode__Enum value;
};

enum LightShadows__Enum : int32_t {
  LightShadows__Enum_None = 0,
  LightShadows__Enum_Hard = 1,
  LightShadows__Enum_Soft = 2,
};
struct LightShadows__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LightShadows__Enum value;
};

enum LightShadowResolution__Enum : int32_t {
  LightShadowResolution__Enum_FromQualitySettings = -1,
  LightShadowResolution__Enum_Low = 0,
  LightShadowResolution__Enum_Medium = 1,
  LightShadowResolution__Enum_High = 2,
  LightShadowResolution__Enum_VeryHigh = 3,
};
struct LightShadowResolution__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LightShadowResolution__Enum value;
};

enum LightRenderMode__Enum : int32_t {
  LightRenderMode__Enum_Auto = 0,
  LightRenderMode__Enum_ForcePixel = 1,
  LightRenderMode__Enum_ForceVertex = 2,
};
struct LightRenderMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LightRenderMode__Enum value;
};

enum LightEvent__Enum : int32_t {
  LightEvent__Enum_BeforeShadowMap = 0,
  LightEvent__Enum_AfterShadowMap = 1,
  LightEvent__Enum_BeforeScreenspaceMask = 2,
  LightEvent__Enum_AfterScreenspaceMask = 3,
  LightEvent__Enum_BeforeShadowMapPass = 4,
  LightEvent__Enum_AfterShadowMapPass = 5,
};
struct LightEvent__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LightEvent__Enum value;
};

enum ShadowMapPass__Enum : int32_t {
  ShadowMapPass__Enum_PointlightPositiveX = 1,
  ShadowMapPass__Enum_PointlightNegativeX = 2,
  ShadowMapPass__Enum_PointlightPositiveY = 4,
  ShadowMapPass__Enum_PointlightNegativeY = 8,
  ShadowMapPass__Enum_PointlightPositiveZ = 16,
  ShadowMapPass__Enum_PointlightNegativeZ = 32,
  ShadowMapPass__Enum_DirectionalCascade0 = 64,
  ShadowMapPass__Enum_DirectionalCascade1 = 128,
  ShadowMapPass__Enum_DirectionalCascade2 = 256,
  ShadowMapPass__Enum_DirectionalCascade3 = 512,
  ShadowMapPass__Enum_Spotlight = 1024,
  ShadowMapPass__Enum_Pointlight = 63,
  ShadowMapPass__Enum_Directional = 960,
  ShadowMapPass__Enum_All = 2047,
};
struct ShadowMapPass__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ShadowMapPass__Enum value;
};

struct Light__Array {
  struct Light__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Light * vector[32];
};

struct Skybox__Fields {
  struct Behaviour__Fields _;
};
struct Skybox {
  struct Skybox__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Skybox__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Skybox__VTable vtable;
};

struct MeshFilter__Fields {
  struct Component_1__Fields _;
};
struct MeshFilter {
  struct MeshFilter__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeshFilter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeshFilter__VTable vtable;
};

enum BuiltinRenderTextureType__Enum : int32_t {
  BuiltinRenderTextureType__Enum_PropertyName = -4,
  BuiltinRenderTextureType__Enum_BufferPtr = -3,
  BuiltinRenderTextureType__Enum_RenderTexture = -2,
  BuiltinRenderTextureType__Enum_BindableTexture = -1,
  BuiltinRenderTextureType__Enum_None = 0,
  BuiltinRenderTextureType__Enum_CurrentActive = 1,
  BuiltinRenderTextureType__Enum_CameraTarget = 2,
  BuiltinRenderTextureType__Enum_Depth = 3,
  BuiltinRenderTextureType__Enum_DepthNormals = 4,
  BuiltinRenderTextureType__Enum_ResolvedDepth = 5,
  BuiltinRenderTextureType__Enum_PrepassNormalsSpec = 7,
  BuiltinRenderTextureType__Enum_PrepassLight = 8,
  BuiltinRenderTextureType__Enum_PrepassLightSpec = 9,
  BuiltinRenderTextureType__Enum_GBuffer0 = 10,
  BuiltinRenderTextureType__Enum_GBuffer1 = 11,
  BuiltinRenderTextureType__Enum_GBuffer2 = 12,
  BuiltinRenderTextureType__Enum_GBuffer3 = 13,
  BuiltinRenderTextureType__Enum_Reflections = 14,
  BuiltinRenderTextureType__Enum_MotionVectors = 15,
  BuiltinRenderTextureType__Enum_GBuffer4 = 16,
  BuiltinRenderTextureType__Enum_GBuffer5 = 17,
  BuiltinRenderTextureType__Enum_GBuffer6 = 18,
  BuiltinRenderTextureType__Enum_GBuffer7 = 19,
};
struct BuiltinRenderTextureType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BuiltinRenderTextureType__Enum value;
};
struct RenderTargetIdentifier {
  enum BuiltinRenderTextureType__Enum m_Type;
  int32_t m_NameID;
  int32_t m_InstanceID;
  void * m_BufferPointer;
  int32_t m_MipLevel;
  enum CubemapFace__Enum m_CubeFace;
  int32_t m_DepthSlice;
};
struct RenderTargetIdentifier__Boxed {
  struct RenderTargetIdentifier__Class *klass;
  struct MonitorData *monitor;
  struct RenderTargetIdentifier fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderTargetIdentifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderTargetIdentifier__VTable vtable;
};

enum GraphicsFormat__Enum : int32_t {
  GraphicsFormat__Enum_None = 0,
  GraphicsFormat__Enum_R8_SRGB = 1,
  GraphicsFormat__Enum_R8G8_SRGB = 2,
  GraphicsFormat__Enum_R8G8B8_SRGB = 3,
  GraphicsFormat__Enum_R8G8B8A8_SRGB = 4,
  GraphicsFormat__Enum_R8_UNorm = 5,
  GraphicsFormat__Enum_R8G8_UNorm = 6,
  GraphicsFormat__Enum_R8G8B8_UNorm = 7,
  GraphicsFormat__Enum_R8G8B8A8_UNorm = 8,
  GraphicsFormat__Enum_R8_SNorm = 9,
  GraphicsFormat__Enum_R8G8_SNorm = 10,
  GraphicsFormat__Enum_R8G8B8_SNorm = 11,
  GraphicsFormat__Enum_R8G8B8A8_SNorm = 12,
  GraphicsFormat__Enum_R8_UInt = 13,
  GraphicsFormat__Enum_R8G8_UInt = 14,
  GraphicsFormat__Enum_R8G8B8_UInt = 15,
  GraphicsFormat__Enum_R8G8B8A8_UInt = 16,
  GraphicsFormat__Enum_R8_SInt = 17,
  GraphicsFormat__Enum_R8G8_SInt = 18,
  GraphicsFormat__Enum_R8G8B8_SInt = 19,
  GraphicsFormat__Enum_R8G8B8A8_SInt = 20,
  GraphicsFormat__Enum_R16_UNorm = 21,
  GraphicsFormat__Enum_R16G16_UNorm = 22,
  GraphicsFormat__Enum_R16G16B16_UNorm = 23,
  GraphicsFormat__Enum_R16G16B16A16_UNorm = 24,
  GraphicsFormat__Enum_R16_SNorm = 25,
  GraphicsFormat__Enum_R16G16_SNorm = 26,
  GraphicsFormat__Enum_R16G16B16_SNorm = 27,
  GraphicsFormat__Enum_R16G16B16A16_SNorm = 28,
  GraphicsFormat__Enum_R16_UInt = 29,
  GraphicsFormat__Enum_R16G16_UInt = 30,
  GraphicsFormat__Enum_R16G16B16_UInt = 31,
  GraphicsFormat__Enum_R16G16B16A16_UInt = 32,
  GraphicsFormat__Enum_R16_SInt = 33,
  GraphicsFormat__Enum_R16G16_SInt = 34,
  GraphicsFormat__Enum_R16G16B16_SInt = 35,
  GraphicsFormat__Enum_R16G16B16A16_SInt = 36,
  GraphicsFormat__Enum_R32_UInt = 37,
  GraphicsFormat__Enum_R32G32_UInt = 38,
  GraphicsFormat__Enum_R32G32B32_UInt = 39,
  GraphicsFormat__Enum_R32G32B32A32_UInt = 40,
  GraphicsFormat__Enum_R32_SInt = 41,
  GraphicsFormat__Enum_R32G32_SInt = 42,
  GraphicsFormat__Enum_R32G32B32_SInt = 43,
  GraphicsFormat__Enum_R32G32B32A32_SInt = 44,
  GraphicsFormat__Enum_R16_SFloat = 45,
  GraphicsFormat__Enum_R16G16_SFloat = 46,
  GraphicsFormat__Enum_R16G16B16_SFloat = 47,
  GraphicsFormat__Enum_R16G16B16A16_SFloat = 48,
  GraphicsFormat__Enum_R32_SFloat = 49,
  GraphicsFormat__Enum_R32G32_SFloat = 50,
  GraphicsFormat__Enum_R32G32B32_SFloat = 51,
  GraphicsFormat__Enum_R32G32B32A32_SFloat = 52,
  GraphicsFormat__Enum_B8G8R8_SRGB = 56,
  GraphicsFormat__Enum_B8G8R8A8_SRGB = 57,
  GraphicsFormat__Enum_B8G8R8_UNorm = 58,
  GraphicsFormat__Enum_B8G8R8A8_UNorm = 59,
  GraphicsFormat__Enum_B8G8R8_SNorm = 60,
  GraphicsFormat__Enum_B8G8R8A8_SNorm = 61,
  GraphicsFormat__Enum_B8G8R8_UInt = 62,
  GraphicsFormat__Enum_B8G8R8A8_UInt = 63,
  GraphicsFormat__Enum_B8G8R8_SInt = 64,
  GraphicsFormat__Enum_B8G8R8A8_SInt = 65,
  GraphicsFormat__Enum_R4G4B4A4_UNormPack16 = 66,
  GraphicsFormat__Enum_B4G4R4A4_UNormPack16 = 67,
  GraphicsFormat__Enum_R5G6B5_UNormPack16 = 68,
  GraphicsFormat__Enum_B5G6R5_UNormPack16 = 69,
  GraphicsFormat__Enum_R5G5B5A1_UNormPack16 = 70,
  GraphicsFormat__Enum_B5G5R5A1_UNormPack16 = 71,
  GraphicsFormat__Enum_A1R5G5B5_UNormPack16 = 72,
  GraphicsFormat__Enum_E5B9G9R9_UFloatPack32 = 73,
  GraphicsFormat__Enum_B10G11R11_UFloatPack32 = 74,
  GraphicsFormat__Enum_A2B10G10R10_UNormPack32 = 75,
  GraphicsFormat__Enum_A2B10G10R10_UIntPack32 = 76,
  GraphicsFormat__Enum_A2B10G10R10_SIntPack32 = 77,
  GraphicsFormat__Enum_A2R10G10B10_UNormPack32 = 78,
  GraphicsFormat__Enum_A2R10G10B10_UIntPack32 = 79,
  GraphicsFormat__Enum_A2R10G10B10_SIntPack32 = 80,
  GraphicsFormat__Enum_A2R10G10B10_XRSRGBPack32 = 81,
  GraphicsFormat__Enum_A2R10G10B10_XRUNormPack32 = 82,
  GraphicsFormat__Enum_R10G10B10_XRSRGBPack32 = 83,
  GraphicsFormat__Enum_R10G10B10_XRUNormPack32 = 84,
  GraphicsFormat__Enum_A10R10G10B10_XRSRGBPack32 = 85,
  GraphicsFormat__Enum_A10R10G10B10_XRUNormPack32 = 86,
  GraphicsFormat__Enum_D16_UNorm = 90,
  GraphicsFormat__Enum_D24_UNorm = 91,
  GraphicsFormat__Enum_D24_UNorm_S8_UInt = 92,
  GraphicsFormat__Enum_D32_SFloat = 93,
  GraphicsFormat__Enum_D32_SFloat_S8_Uint = 94,
  GraphicsFormat__Enum_S8_Uint = 95,
  GraphicsFormat__Enum_RGB_DXT1_SRGB = 96,
  GraphicsFormat__Enum_RGBA_DXT1_SRGB = 96,
  GraphicsFormat__Enum_RGB_DXT1_UNorm = 97,
  GraphicsFormat__Enum_RGBA_DXT1_UNorm = 97,
  GraphicsFormat__Enum_RGBA_DXT3_SRGB = 98,
  GraphicsFormat__Enum_RGBA_DXT3_UNorm = 99,
  GraphicsFormat__Enum_RGBA_DXT5_SRGB = 100,
  GraphicsFormat__Enum_RGBA_DXT5_UNorm = 101,
  GraphicsFormat__Enum_R_BC4_UNorm = 102,
  GraphicsFormat__Enum_R_BC4_SNorm = 103,
  GraphicsFormat__Enum_RG_BC5_UNorm = 104,
  GraphicsFormat__Enum_RG_BC5_SNorm = 105,
  GraphicsFormat__Enum_RGB_BC6H_UFloat = 106,
  GraphicsFormat__Enum_RGB_BC6H_SFloat = 107,
  GraphicsFormat__Enum_RGBA_BC7_SRGB = 108,
  GraphicsFormat__Enum_RGBA_BC7_UNorm = 109,
  GraphicsFormat__Enum_RGB_PVRTC_2Bpp_SRGB = 110,
  GraphicsFormat__Enum_RGB_PVRTC_2Bpp_UNorm = 111,
  GraphicsFormat__Enum_RGB_PVRTC_4Bpp_SRGB = 112,
  GraphicsFormat__Enum_RGB_PVRTC_4Bpp_UNorm = 113,
  GraphicsFormat__Enum_RGBA_PVRTC_2Bpp_SRGB = 114,
  GraphicsFormat__Enum_RGBA_PVRTC_2Bpp_UNorm = 115,
  GraphicsFormat__Enum_RGBA_PVRTC_4Bpp_SRGB = 116,
  GraphicsFormat__Enum_RGBA_PVRTC_4Bpp_UNorm = 117,
  GraphicsFormat__Enum_RGB_ETC_UNorm = 118,
  GraphicsFormat__Enum_RGB_ETC2_SRGB = 119,
  GraphicsFormat__Enum_RGB_ETC2_UNorm = 120,
  GraphicsFormat__Enum_RGB_A1_ETC2_SRGB = 121,
  GraphicsFormat__Enum_RGB_A1_ETC2_UNorm = 122,
  GraphicsFormat__Enum_RGBA_ETC2_SRGB = 123,
  GraphicsFormat__Enum_RGBA_ETC2_UNorm = 124,
  GraphicsFormat__Enum_R_EAC_UNorm = 125,
  GraphicsFormat__Enum_R_EAC_SNorm = 126,
  GraphicsFormat__Enum_RG_EAC_UNorm = 127,
  GraphicsFormat__Enum_RG_EAC_SNorm = 128,
  GraphicsFormat__Enum_RGBA_ASTC4X4_SRGB = 129,
  GraphicsFormat__Enum_RGBA_ASTC4X4_UNorm = 130,
  GraphicsFormat__Enum_RGBA_ASTC5X5_SRGB = 131,
  GraphicsFormat__Enum_RGBA_ASTC5X5_UNorm = 132,
  GraphicsFormat__Enum_RGBA_ASTC6X6_SRGB = 133,
  GraphicsFormat__Enum_RGBA_ASTC6X6_UNorm = 134,
  GraphicsFormat__Enum_RGBA_ASTC8X8_SRGB = 135,
  GraphicsFormat__Enum_RGBA_ASTC8X8_UNorm = 136,
  GraphicsFormat__Enum_RGBA_ASTC10X10_SRGB = 137,
  GraphicsFormat__Enum_RGBA_ASTC10X10_UNorm = 138,
  GraphicsFormat__Enum_RGBA_ASTC12X12_SRGB = 139,
  GraphicsFormat__Enum_RGBA_ASTC12X12_UNorm = 140,
};
struct GraphicsFormat__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GraphicsFormat__Enum value;
};
enum TextureFormat__Enum : int32_t {
  TextureFormat__Enum_Alpha8 = 1,
  TextureFormat__Enum_ARGB4444 = 2,
  TextureFormat__Enum_RGB24 = 3,
  TextureFormat__Enum_RGBA32 = 4,
  TextureFormat__Enum_ARGB32 = 5,
  TextureFormat__Enum_RGB565 = 7,
  TextureFormat__Enum_R16 = 9,
  TextureFormat__Enum_DXT1 = 10,
  TextureFormat__Enum_DXT5 = 12,
  TextureFormat__Enum_RGBA4444 = 13,
  TextureFormat__Enum_BGRA32 = 14,
  TextureFormat__Enum_RHalf = 15,
  TextureFormat__Enum_RGHalf = 16,
  TextureFormat__Enum_RGBAHalf = 17,
  TextureFormat__Enum_RFloat = 18,
  TextureFormat__Enum_RGFloat = 19,
  TextureFormat__Enum_RGBAFloat = 20,
  TextureFormat__Enum_YUY2 = 21,
  TextureFormat__Enum_RGB9e5Float = 22,
  TextureFormat__Enum_BC4 = 26,
  TextureFormat__Enum_BC5 = 27,
  TextureFormat__Enum_BC6H = 24,
  TextureFormat__Enum_BC7 = 25,
  TextureFormat__Enum_DXT1Crunched = 28,
  TextureFormat__Enum_DXT5Crunched = 29,
  TextureFormat__Enum_PVRTC_RGB2 = 30,
  TextureFormat__Enum_PVRTC_RGBA2 = 31,
  TextureFormat__Enum_PVRTC_RGB4 = 32,
  TextureFormat__Enum_PVRTC_RGBA4 = 33,
  TextureFormat__Enum_ETC_RGB4 = 34,
  TextureFormat__Enum_EAC_R = 41,
  TextureFormat__Enum_EAC_R_SIGNED = 42,
  TextureFormat__Enum_EAC_RG = 43,
  TextureFormat__Enum_EAC_RG_SIGNED = 44,
  TextureFormat__Enum_ETC2_RGB = 45,
  TextureFormat__Enum_ETC2_RGBA1 = 46,
  TextureFormat__Enum_ETC2_RGBA8 = 47,
  TextureFormat__Enum_ASTC_RGB_4x4 = 48,
  TextureFormat__Enum_ASTC_RGB_5x5 = 49,
  TextureFormat__Enum_ASTC_RGB_6x6 = 50,
  TextureFormat__Enum_ASTC_RGB_8x8 = 51,
  TextureFormat__Enum_ASTC_RGB_10x10 = 52,
  TextureFormat__Enum_ASTC_RGB_12x12 = 53,
  TextureFormat__Enum_ASTC_RGBA_4x4 = 54,
  TextureFormat__Enum_ASTC_RGBA_5x5 = 55,
  TextureFormat__Enum_ASTC_RGBA_6x6 = 56,
  TextureFormat__Enum_ASTC_RGBA_8x8 = 57,
  TextureFormat__Enum_ASTC_RGBA_10x10 = 58,
  TextureFormat__Enum_ASTC_RGBA_12x12 = 59,
  TextureFormat__Enum_ETC_RGB4_3DS = 60,
  TextureFormat__Enum_ETC_RGBA8_3DS = 61,
  TextureFormat__Enum_RG16 = 62,
  TextureFormat__Enum_R8 = 63,
  TextureFormat__Enum_ETC_RGB4Crunched = 64,
  TextureFormat__Enum_ETC2_RGBA8Crunched = 65,
};
struct TextureFormat__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextureFormat__Enum value;
};

enum RenderTextureFormat__Enum : int32_t {
  RenderTextureFormat__Enum_ARGB32 = 0,
  RenderTextureFormat__Enum_Depth = 1,
  RenderTextureFormat__Enum_ARGBHalf = 2,
  RenderTextureFormat__Enum_Shadowmap = 3,
  RenderTextureFormat__Enum_RGB565 = 4,
  RenderTextureFormat__Enum_ARGB4444 = 5,
  RenderTextureFormat__Enum_ARGB1555 = 6,
  RenderTextureFormat__Enum_Default = 7,
  RenderTextureFormat__Enum_ARGB2101010 = 8,
  RenderTextureFormat__Enum_DefaultHDR = 9,
  RenderTextureFormat__Enum_ARGB64 = 10,
  RenderTextureFormat__Enum_ARGBFloat = 11,
  RenderTextureFormat__Enum_RGFloat = 12,
  RenderTextureFormat__Enum_RGHalf = 13,
  RenderTextureFormat__Enum_RFloat = 14,
  RenderTextureFormat__Enum_RHalf = 15,
  RenderTextureFormat__Enum_R8 = 16,
  RenderTextureFormat__Enum_ARGBInt = 17,
  RenderTextureFormat__Enum_RGInt = 18,
  RenderTextureFormat__Enum_RInt = 19,
  RenderTextureFormat__Enum_BGRA32 = 20,
  RenderTextureFormat__Enum_RGB111110Float = 22,
  RenderTextureFormat__Enum_RG32 = 23,
  RenderTextureFormat__Enum_RGBAUShort = 24,
  RenderTextureFormat__Enum_RG16 = 25,
  RenderTextureFormat__Enum_BGRA10101010_XR = 26,
  RenderTextureFormat__Enum_BGR101010_XR = 27,
  RenderTextureFormat__Enum_R16 = 28,
};
struct RenderTextureFormat__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderTextureFormat__Enum value;
};

struct SkinnedMeshRenderer__Fields {
  struct Renderer__Fields _;
};
struct SkinnedMeshRenderer {
  struct SkinnedMeshRenderer__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkinnedMeshRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkinnedMeshRenderer__VTable vtable;
};

struct Transform__Array {
  struct Transform__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Transform * vector[32];
};

struct MeshRenderer__Fields {
  struct Renderer__Fields _;
};
struct MeshRenderer {
  struct MeshRenderer__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeshRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeshRenderer__VTable vtable;
};

struct ScriptableObject__Fields {
  struct Object_1__Fields _;
};
struct ScriptableObject {
  struct ScriptableObject__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScriptableObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScriptableObject__VTable vtable;
};

struct RenderPipelineAsset__Fields {
  struct ScriptableObject__Fields _;
  struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ * m_CreatedPipelines;
};
struct RenderPipelineAsset {
  struct RenderPipelineAsset__Class *klass;
  struct MonitorData *monitor;
  struct RenderPipelineAsset__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Fields {
  struct IRenderPipeline__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ {
  struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Fields fields;
};
struct IRenderPipeline {
  struct IRenderPipeline__Class *klass;
  struct MonitorData *monitor;
};
struct IRenderPipeline__Array {
  struct IRenderPipeline__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IRenderPipeline * vector[32];
};
struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ {
  struct IEnumerator_1_UnityEngine_Experimental_Rendering_IRenderPipeline___Class *klass;
  struct MonitorData *monitor;
};
enum MoonRenderPipelineAsset_XboxResolution__Enum : int32_t {
  MoonRenderPipelineAsset_XboxResolution__Enum__720p = 0,
  MoonRenderPipelineAsset_XboxResolution__Enum__800p = 1,
  MoonRenderPipelineAsset_XboxResolution__Enum__900p = 2,
  MoonRenderPipelineAsset_XboxResolution__Enum__1080p = 3,
  MoonRenderPipelineAsset_XboxResolution__Enum__2160p = 4,
  MoonRenderPipelineAsset_XboxResolution__Enum_Native = 5,
  MoonRenderPipelineAsset_XboxResolution__Enum__4320p = 6,
};
struct MoonRenderPipelineAsset_XboxResolution__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_XboxResolution__Enum value;
};
enum MoonRenderPipelineAsset_DebugDownsample__Enum : int32_t {
  MoonRenderPipelineAsset_DebugDownsample__Enum_Off = 0,
  MoonRenderPipelineAsset_DebugDownsample__Enum__1x1 = 1,
  MoonRenderPipelineAsset_DebugDownsample__Enum__2x2 = 2,
  MoonRenderPipelineAsset_DebugDownsample__Enum__4x4 = 4,
};
struct MoonRenderPipelineAsset_DebugDownsample__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_DebugDownsample__Enum value;
};
enum MoonRenderPipelineAsset_FrameBufferFormat__Enum : int32_t {
  MoonRenderPipelineAsset_FrameBufferFormat__Enum_Auto = 0,
  MoonRenderPipelineAsset_FrameBufferFormat__Enum_ARGBHalf = 1,
  MoonRenderPipelineAsset_FrameBufferFormat__Enum_ARGB32 = 2,
  MoonRenderPipelineAsset_FrameBufferFormat__Enum_A2RGB10 = 3,
  MoonRenderPipelineAsset_FrameBufferFormat__Enum_RG11B10 = 4,
  MoonRenderPipelineAsset_FrameBufferFormat__Enum_Custom = 5,
};
struct MoonRenderPipelineAsset_FrameBufferFormat__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_FrameBufferFormat__Enum value;
};
enum MoonRenderPipelineAsset_FrameBufferDepth__Enum : int32_t {
  MoonRenderPipelineAsset_FrameBufferDepth__Enum__0 = 0,
  MoonRenderPipelineAsset_FrameBufferDepth__Enum__8 = 8,
  MoonRenderPipelineAsset_FrameBufferDepth__Enum__16 = 16,
  MoonRenderPipelineAsset_FrameBufferDepth__Enum__24 = 24,
  MoonRenderPipelineAsset_FrameBufferDepth__Enum__32 = 32,
};
struct MoonRenderPipelineAsset_FrameBufferDepth__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_FrameBufferDepth__Enum value;
};
enum SceneRTAllocationPolicy__Enum : int32_t {
  SceneRTAllocationPolicy__Enum_Permanent = 0,
  SceneRTAllocationPolicy__Enum_Temp = 1,
};
struct SceneRTAllocationPolicy__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SceneRTAllocationPolicy__Enum value;
};
enum SliceRTAllocationPolicy__Enum : int32_t {
  SliceRTAllocationPolicy__Enum_SharedPermanent = 0,
  SliceRTAllocationPolicy__Enum_SharedTemp = 1,
};
struct SliceRTAllocationPolicy__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SliceRTAllocationPolicy__Enum value;
};
enum ClearPolicy__Enum : int32_t {
  ClearPolicy__Enum_SubviewportMRTOneByOne = 0,
  ClearPolicy__Enum_FullScreen = 1,
  ClearPolicy__Enum_DontClear = 2,
};
struct ClearPolicy__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ClearPolicy__Enum value;
};
enum ClearFlagMode__Enum : int32_t {
  ClearFlagMode__Enum_Ignore = 0,
  ClearFlagMode__Enum_On = 1,
  ClearFlagMode__Enum_Off = 2,
};
struct ClearFlagMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ClearFlagMode__Enum value;
};
enum MoonRenderPipelineAsset_ClearSceneRT__Enum : int32_t {
  MoonRenderPipelineAsset_ClearSceneRT__Enum_Off = 0,
  MoonRenderPipelineAsset_ClearSceneRT__Enum_CameraBackground = 1,
  MoonRenderPipelineAsset_ClearSceneRT__Enum_Clear = 2,
  MoonRenderPipelineAsset_ClearSceneRT__Enum_Magenta = 3,
  MoonRenderPipelineAsset_ClearSceneRT__Enum_Green = 4,
  MoonRenderPipelineAsset_ClearSceneRT__Enum_Cyan = 5,
  MoonRenderPipelineAsset_ClearSceneRT__Enum_Yellow = 6,
  MoonRenderPipelineAsset_ClearSceneRT__Enum_White = 7,
  MoonRenderPipelineAsset_ClearSceneRT__Enum_Black = 8,
  MoonRenderPipelineAsset_ClearSceneRT__Enum_Custom = 9,
};
struct MoonRenderPipelineAsset_ClearSceneRT__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_ClearSceneRT__Enum value;
};
enum MoonRenderPipelineAsset_ClearSliceBlurRT__Enum : int32_t {
  MoonRenderPipelineAsset_ClearSliceBlurRT__Enum_Never = 0,
  MoonRenderPipelineAsset_ClearSliceBlurRT__Enum_WhenZTested = 1,
  MoonRenderPipelineAsset_ClearSliceBlurRT__Enum_Always = 2,
};
struct MoonRenderPipelineAsset_ClearSliceBlurRT__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_ClearSliceBlurRT__Enum value;
};
enum MoonRenderPipelineAsset_DeferredLightingDebug__Enum : int32_t {
  MoonRenderPipelineAsset_DeferredLightingDebug__Enum_Off = 0,
  MoonRenderPipelineAsset_DeferredLightingDebug__Enum_FinalColor = 1,
  MoonRenderPipelineAsset_DeferredLightingDebug__Enum_FinalAlpha = 2,
  MoonRenderPipelineAsset_DeferredLightingDebug__Enum_Normal = 3,
  MoonRenderPipelineAsset_DeferredLightingDebug__Enum_Offset = 4,
  MoonRenderPipelineAsset_DeferredLightingDebug__Enum_FinalAlbedoLMI = 5,
  MoonRenderPipelineAsset_DeferredLightingDebug__Enum_ResultLighting = 6,
};
struct MoonRenderPipelineAsset_DeferredLightingDebug__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_DeferredLightingDebug__Enum value;
};
enum MoonRenderPipelineAsset_FXAADepthPrecull__Enum : int32_t {
  MoonRenderPipelineAsset_FXAADepthPrecull__Enum_Off = 0,
  MoonRenderPipelineAsset_FXAADepthPrecull__Enum_FocusedSlice = 1,
  MoonRenderPipelineAsset_FXAADepthPrecull__Enum_SmartSlice = 2,
  MoonRenderPipelineAsset_FXAADepthPrecull__Enum_AllSlices = 3,
};
struct MoonRenderPipelineAsset_FXAADepthPrecull__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_FXAADepthPrecull__Enum value;
};
enum MoonRenderPipelineAsset_FXAAHiRes__Enum : int32_t {
  MoonRenderPipelineAsset_FXAAHiRes__Enum_Off = 0,
  MoonRenderPipelineAsset_FXAAHiRes__Enum_DepthTest = 1,
  MoonRenderPipelineAsset_FXAAHiRes__Enum_SmartBlit = 2,
  MoonRenderPipelineAsset_FXAAHiRes__Enum_Full = 3,
};
struct MoonRenderPipelineAsset_FXAAHiRes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_FXAAHiRes__Enum value;
};
enum MoonRenderPipelineAsset_MaskErasingFixType__Enum : int32_t {
  MoonRenderPipelineAsset_MaskErasingFixType__Enum_Off = 0,
  MoonRenderPipelineAsset_MaskErasingFixType__Enum_FocusedSlice = 1,
  MoonRenderPipelineAsset_MaskErasingFixType__Enum_AllSlices = 2,
};
struct MoonRenderPipelineAsset_MaskErasingFixType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_MaskErasingFixType__Enum value;
};
enum RenderScope__Enum : int32_t {
  RenderScope__Enum_GameView = 1,
  RenderScope__Enum_SceneView = 2,
  RenderScope__Enum_None = 0,
  RenderScope__Enum_All = 3,
};
struct RenderScope__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderScope__Enum value;
};
enum MoonRenderPipelineAsset_SliceCompositionType__Enum : int32_t {
  MoonRenderPipelineAsset_SliceCompositionType__Enum_PerSlice = 0,
  MoonRenderPipelineAsset_SliceCompositionType__Enum_FullPS = 1,
  MoonRenderPipelineAsset_SliceCompositionType__Enum_PerSliceImmediate = 2,
};
struct MoonRenderPipelineAsset_SliceCompositionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_SliceCompositionType__Enum value;
};
enum FilterMode__Enum : int32_t {
  FilterMode__Enum_Point = 0,
  FilterMode__Enum_Bilinear = 1,
  FilterMode__Enum_Trilinear = 2,
};
struct FilterMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FilterMode__Enum value;
};
struct IntRange {
  int32_t min;
  int32_t max;
};
struct IntRange__Boxed {
  struct IntRange__Class *klass;
  struct MonitorData *monitor;
  struct IntRange fields;
};
enum MoonRenderPipelineAsset_FxaaQualityLevel__Enum : int32_t {
  MoonRenderPipelineAsset_FxaaQualityLevel__Enum_ExtremePerformance = 0,
  MoonRenderPipelineAsset_FxaaQualityLevel__Enum_Performance = 1,
  MoonRenderPipelineAsset_FxaaQualityLevel__Enum_Default = 2,
  MoonRenderPipelineAsset_FxaaQualityLevel__Enum_Quality = 3,
  MoonRenderPipelineAsset_FxaaQualityLevel__Enum_ExtremeQuality = 4,
  MoonRenderPipelineAsset_FxaaQualityLevel__Enum_Custom = 5,
};
struct MoonRenderPipelineAsset_FxaaQualityLevel__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_FxaaQualityLevel__Enum value;
};
struct FXAA_QualitySettings {
  float subpixelAliasingRemovalAmount;
  float edgeDetectionThreshold;
  float minimumRequiredLuminance;
};
struct FXAA_QualitySettings__Boxed {
  struct FXAA_QualitySettings__Class *klass;
  struct MonitorData *monitor;
  struct FXAA_QualitySettings fields;
};
enum MoonRenderPipelineAsset_DofBlurType__Enum : int32_t {
  MoonRenderPipelineAsset_DofBlurType__Enum_Blur_Standard = 0,
  MoonRenderPipelineAsset_DofBlurType__Enum_Blur_Separated = 1,
  MoonRenderPipelineAsset_DofBlurType__Enum_Blur_Low_Samples = 2,
};
struct MoonRenderPipelineAsset_DofBlurType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_DofBlurType__Enum value;
};
struct FloatRange {
  float min;
  float max;
};
struct FloatRange__Boxed {
  struct FloatRange__Class *klass;
  struct MonitorData *monitor;
  struct FloatRange fields;
};
enum MoonRenderPipelineAsset_POT__Enum : int32_t {
  MoonRenderPipelineAsset_POT__Enum__1 = 1,
  MoonRenderPipelineAsset_POT__Enum__2 = 2,
  MoonRenderPipelineAsset_POT__Enum__4 = 4,
  MoonRenderPipelineAsset_POT__Enum__8 = 8,
  MoonRenderPipelineAsset_POT__Enum__16 = 16,
};
struct MoonRenderPipelineAsset_POT__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_POT__Enum value;
};
enum MoonRenderPipelineAsset_HDRRecMode__Enum : int32_t {
  MoonRenderPipelineAsset_HDRRecMode__Enum_Off = 0,
  MoonRenderPipelineAsset_HDRRecMode__Enum_On = 1,
  MoonRenderPipelineAsset_HDRRecMode__Enum_Forced = 2,
};
struct MoonRenderPipelineAsset_HDRRecMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonRenderPipelineAsset_HDRRecMode__Enum value;
};}