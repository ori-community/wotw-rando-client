namespace app {
struct FilterResults__Boxed {
  struct FilterResults__Class *klass;
  struct MonitorData *monitor;
  struct FilterResults fields;
};
enum DrawRendererSortMode__Enum : int32_t {
  DrawRendererSortMode__Enum_Perspective = 0,
  DrawRendererSortMode__Enum_Orthographic = 1,
  DrawRendererSortMode__Enum_CustomAxis = 2,
};
struct DrawRendererSortMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DrawRendererSortMode__Enum value;
};
struct DrawRendererSortSettings {
  struct Matrix4x4 worldToCameraMatrix;
  struct Vector3 cameraPosition;
  struct Vector3 cameraCustomSortAxis;
  enum SortFlags__Enum flags;
  enum DrawRendererSortMode__Enum sortMode;
  struct Matrix4x4 _previousVPMatrix;
  struct Matrix4x4 _nonJitteredVPMatrix;
};
struct DrawRendererSortSettings__Boxed {
  struct DrawRendererSortSettings__Class *klass;
  struct MonitorData *monitor;
  struct DrawRendererSortSettings fields;
};
struct DrawRendererSettings_shaderPassNames_FixedBuffer12 {
  int32_t FixedElementField;
};
struct DrawRendererSettings_shaderPassNames_FixedBuffer12__Boxed {
  struct DrawRendererSettings_shaderPassNames_FixedBuffer12__Class *klass;
  struct MonitorData *monitor;
  struct DrawRendererSettings_shaderPassNames_FixedBuffer12 fields;
};
enum RendererConfiguration__Enum : int32_t {
  RendererConfiguration__Enum_None = 0,
  RendererConfiguration__Enum_PerObjectLightProbe = 1,
  RendererConfiguration__Enum_PerObjectReflectionProbes = 2,
  RendererConfiguration__Enum_PerObjectLightProbeProxyVolume = 4,
  RendererConfiguration__Enum_PerObjectLightmaps = 8,
  RendererConfiguration__Enum_ProvideLightIndices = 16,
  RendererConfiguration__Enum_PerObjectMotionVectors = 32,
  RendererConfiguration__Enum_PerObjectLightIndices8 = 64,
  RendererConfiguration__Enum_ProvideReflectionProbeIndices = 128,
  RendererConfiguration__Enum_PerObjectOcclusionProbe = 256,
  RendererConfiguration__Enum_PerObjectOcclusionProbeProxyVolume = 512,
  RendererConfiguration__Enum_PerObjectShadowMask = 1024,
};
struct RendererConfiguration__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RendererConfiguration__Enum value;
};
enum DrawRendererFlags__Enum : int32_t {
  DrawRendererFlags__Enum_None = 0,
  DrawRendererFlags__Enum_EnableDynamicBatching = 1,
  DrawRendererFlags__Enum_EnableInstancing = 2,
};
struct DrawRendererFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DrawRendererFlags__Enum value;
};
struct DrawRendererSettings {
  struct DrawRendererSortSettings sorting;
  struct DrawRendererSettings_shaderPassNames_FixedBuffer12 shaderPassNames;
  enum RendererConfiguration__Enum rendererConfiguration;
  enum DrawRendererFlags__Enum flags;
  int32_t m_OverrideMaterialInstanceId;
  int32_t m_OverrideMaterialPassIdx;
  int32_t useSRPBatcher;
};
struct DrawRendererSettings__Boxed {
  struct DrawRendererSettings__Class *klass;
  struct MonitorData *monitor;
  struct DrawRendererSettings fields;
};
struct RenderQueueRange {
  int32_t min;
  int32_t max;
};
struct RenderQueueRange__Boxed {
  struct RenderQueueRange__Class *klass;
  struct MonitorData *monitor;
  struct RenderQueueRange fields;
};
enum FilterBoundsMode__Enum : int32_t {
  FilterBoundsMode__Enum_Off = 0,
  FilterBoundsMode__Enum_Intersect = 1,
  FilterBoundsMode__Enum_Contains = 2,
  FilterBoundsMode__Enum_InverseIntersect = 3,
  FilterBoundsMode__Enum_InverseContains = 4,
  FilterBoundsMode__Enum_DepthSlice = 5,
};
struct FilterBoundsMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FilterBoundsMode__Enum value;
};
struct FilterRenderersSettings {
  struct RenderQueueRange m_RenderQueueRange;
  int32_t m_LayerMask;
  uint32_t m_RenderingLayerMask;
  int32_t m_ExcludeMotionVectorObjects;
  enum FilterBoundsMode__Enum boundsMode;
  struct Bounds bounds;
  float boundsZMin;
  float boundsZMax;
};
struct FilterRenderersSettings__Boxed {
  struct FilterRenderersSettings__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FilterResults__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FilterResults__VTable vtable;
};
struct DrawRendererSortSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DrawRendererSortSettings__StaticFields {
};
struct DrawRendererSortSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DrawRendererSortSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DrawRendererSortSettings__VTable vtable;
};
struct DrawRendererSettings_shaderPassNames_FixedBuffer12__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DrawRendererSettings_shaderPassNames_FixedBuffer12__StaticFields {
};
struct DrawRendererSettings_shaderPassNames_FixedBuffer12__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DrawRendererSettings_shaderPassNames_FixedBuffer12__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DrawRendererSettings_shaderPassNames_FixedBuffer12__VTable vtable;
};
struct DrawRendererSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DrawRendererSettings__StaticFields {
  int32_t maxShaderPasses;
};
struct DrawRendererSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DrawRendererSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DrawRendererSettings__VTable vtable;
};
struct RenderQueueRange__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RenderQueueRange__StaticFields {
};
struct RenderQueueRange__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderQueueRange__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderQueueRange__VTable vtable;
};
struct FilterRenderersSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FilterRenderersSettings__StaticFields {
};
struct FilterRenderersSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FilterRenderersSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FilterRenderersSettings__VTable vtable;
};

struct RenderTargetBlendState {
  uint8_t m_WriteMask;
  uint8_t m_SourceColorBlendMode;
  uint8_t m_DestinationColorBlendMode;
  uint8_t m_SourceAlphaBlendMode;
  uint8_t m_DestinationAlphaBlendMode;
  uint8_t m_ColorBlendOperation;
  uint8_t m_AlphaBlendOperation;
  uint8_t m_Padding;
};
struct RenderTargetBlendState__Boxed {
  struct RenderTargetBlendState__Class *klass;
  struct MonitorData *monitor;
  struct RenderTargetBlendState fields;
};
struct BlendState {
  struct RenderTargetBlendState m_BlendState0;
  struct RenderTargetBlendState m_BlendState1;
  struct RenderTargetBlendState m_BlendState2;
  struct RenderTargetBlendState m_BlendState3;
  struct RenderTargetBlendState m_BlendState4;
  struct RenderTargetBlendState m_BlendState5;
  struct RenderTargetBlendState m_BlendState6;
  struct RenderTargetBlendState m_BlendState7;
  uint8_t m_SeparateMRTBlendStates;
  uint8_t m_AlphaToMask;
  int16_t m_Padding;
};
struct BlendState__Boxed {
  struct BlendState__Class *klass;
  struct MonitorData *monitor;
  struct BlendState fields;
};
enum CullMode__Enum : int32_t {
  CullMode__Enum_Off = 0,
  CullMode__Enum_Front = 1,
  CullMode__Enum_Back = 2,
};
struct CullMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CullMode__Enum value;
};
struct RasterState {
  enum CullMode__Enum m_CullingMode;
  int32_t m_OffsetUnits;
  float m_OffsetFactor;
  uint8_t m_DepthClip;
  uint8_t m_Padding1;
  uint8_t m_Padding2;
  uint8_t m_Padding3;
};
struct RasterState__Boxed {
  struct RasterState__Class *klass;
  struct MonitorData *monitor;
  struct RasterState fields;
};
struct DepthState {
  uint8_t m_WriteEnabled;
  int8_t m_CompareFunction;
};
struct DepthState__Boxed {
  struct DepthState__Class *klass;
  struct MonitorData *monitor;
  struct DepthState fields;
};
struct StencilState {
  uint8_t m_Enabled;
  uint8_t m_ReadMask;
  uint8_t m_WriteMask;
  uint8_t m_Padding;
  uint8_t m_CompareFunctionFront;
  uint8_t m_PassOperationFront;
  uint8_t m_FailOperationFront;
  uint8_t m_ZFailOperationFront;
  uint8_t m_CompareFunctionBack;
  uint8_t m_PassOperationBack;
  uint8_t m_FailOperationBack;
  uint8_t m_ZFailOperationBack;
};
struct StencilState__Boxed {
  struct StencilState__Class *klass;
  struct MonitorData *monitor;
  struct StencilState fields;
};
enum RenderStateMask__Enum : int32_t {
  RenderStateMask__Enum_Nothing = 0,
  RenderStateMask__Enum_Blend = 1,
  RenderStateMask__Enum_Raster = 2,
  RenderStateMask__Enum_Depth = 4,
  RenderStateMask__Enum_Stencil = 8,
  RenderStateMask__Enum_Everything = 15,
};
struct RenderStateMask__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderStateMask__Enum value;
};
struct RenderStateBlock {
  struct BlendState m_BlendState;
  struct RasterState m_RasterState;
  struct DepthState m_DepthState;
  struct StencilState m_StencilState;
  int32_t m_StencilReference;
  enum RenderStateMask__Enum m_Mask;
};
struct RenderStateBlock__Boxed {
  struct RenderStateBlock__Class *klass;
  struct MonitorData *monitor;
  struct RenderStateBlock fields;
};
struct RenderTargetBlendState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RenderTargetBlendState__StaticFields {
};
struct RenderTargetBlendState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderTargetBlendState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderTargetBlendState__VTable vtable;
};
struct BlendState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BlendState__StaticFields {
};
struct BlendState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BlendState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BlendState__VTable vtable;
};
struct RasterState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RasterState__StaticFields {
  struct RasterState Default;
};
struct RasterState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RasterState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RasterState__VTable vtable;
};
struct DepthState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DepthState__StaticFields {
};
struct DepthState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DepthState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DepthState__VTable vtable;
};
struct StencilState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StencilState__StaticFields {
};
struct StencilState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StencilState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StencilState__VTable vtable;
};
struct RenderStateBlock__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RenderStateBlock__StaticFields {
};
struct RenderStateBlock__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderStateBlock__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderStateBlock__VTable vtable;
};

struct SelectionBaseAttribute {
  struct SelectionBaseAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct SelectionBaseAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SelectionBaseAttribute__StaticFields {
};
struct SelectionBaseAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SelectionBaseAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SelectionBaseAttribute__VTable vtable;
};

struct SerializeField {
  struct SerializeField__Class *klass;
  struct MonitorData *monitor;
};
struct SerializeField__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SerializeField__StaticFields {
};
struct SerializeField__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializeField__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializeField__VTable vtable;
};

struct SerializableGenericAttribute {
  struct SerializableGenericAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct SerializableGenericAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct SerializableGenericAttribute__StaticFields {
};
struct SerializableGenericAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializableGenericAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializableGenericAttribute__VTable vtable;
};

struct UnityException__Fields {
  struct Exception__Fields _;
};
struct UnityException {
  struct UnityException__Class *klass;
  struct MonitorData *monitor;
  struct UnityException__Fields fields;
};
struct UnityException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct UnityException__StaticFields {
};
struct UnityException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityException__VTable vtable;
};

struct UnassignedReferenceException__Fields {
  struct Exception__Fields _;
};
struct UnassignedReferenceException {
  struct UnassignedReferenceException__Class *klass;
  struct MonitorData *monitor;
  struct UnassignedReferenceException__Fields fields;
};
struct UnassignedReferenceException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct UnassignedReferenceException__StaticFields {
};
struct UnassignedReferenceException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnassignedReferenceException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnassignedReferenceException__VTable vtable;
};

enum OperatingSystemFamily__Enum : int32_t {
  OperatingSystemFamily__Enum_Other = 0,
  OperatingSystemFamily__Enum_MacOSX = 1,
  OperatingSystemFamily__Enum_Windows = 2,
  OperatingSystemFamily__Enum_Linux = 3,
};
struct OperatingSystemFamily__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum OperatingSystemFamily__Enum value;
};

enum DeviceType__Enum : int32_t {
  DeviceType__Enum_Unknown = 0,
  DeviceType__Enum_Handheld = 1,
  DeviceType__Enum_Console = 2,
  DeviceType__Enum_Desktop = 3,
};
struct DeviceType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DeviceType__Enum value;
};

enum GraphicsDeviceType__Enum : int32_t {
  GraphicsDeviceType__Enum_OpenGL2 = 0,
  GraphicsDeviceType__Enum_Direct3D9 = 1,
  GraphicsDeviceType__Enum_Direct3D11 = 2,
  GraphicsDeviceType__Enum_PlayStation3 = 3,
  GraphicsDeviceType__Enum_Null = 4,
  GraphicsDeviceType__Enum_Xbox360 = 6,
  GraphicsDeviceType__Enum_OpenGLES2 = 8,
  GraphicsDeviceType__Enum_OpenGLES3 = 11,
  GraphicsDeviceType__Enum_PlayStationVita = 12,
  GraphicsDeviceType__Enum_PlayStation4 = 13,
  GraphicsDeviceType__Enum_XboxOne = 14,
  GraphicsDeviceType__Enum_PlayStationMobile = 15,
  GraphicsDeviceType__Enum_Metal = 16,
  GraphicsDeviceType__Enum_OpenGLCore = 17,
  GraphicsDeviceType__Enum_Direct3D12 = 18,
  GraphicsDeviceType__Enum_N3DS = 19,
  GraphicsDeviceType__Enum_Vulkan = 21,
  GraphicsDeviceType__Enum_Switch = 22,
  GraphicsDeviceType__Enum_XboxOneD3D12 = 23,
};
struct GraphicsDeviceType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GraphicsDeviceType__Enum value;
};

enum CopyTextureSupport__Enum : int32_t {
  CopyTextureSupport__Enum_None = 0,
  CopyTextureSupport__Enum_Basic = 1,
  CopyTextureSupport__Enum_Copy3D = 2,
  CopyTextureSupport__Enum_DifferentTypes = 4,
  CopyTextureSupport__Enum_TextureToRT = 8,
  CopyTextureSupport__Enum_RTToTexture = 16,
};
struct CopyTextureSupport__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CopyTextureSupport__Enum value;
};

enum NPOTSupport__Enum : int32_t {
  NPOTSupport__Enum_None = 0,
  NPOTSupport__Enum_Restricted = 1,
  NPOTSupport__Enum_Full = 2,
};
struct NPOTSupport__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NPOTSupport__Enum value;
};

enum FormatUsage__Enum : int32_t {
  FormatUsage__Enum_Sample = 0,
  FormatUsage__Enum_Linear = 1,
  FormatUsage__Enum_Render = 3,
  FormatUsage__Enum_Blend = 4,
  FormatUsage__Enum_LoadStore = 8,
  FormatUsage__Enum_MSAA2x = 9,
  FormatUsage__Enum_MSAA4x = 10,
  FormatUsage__Enum_MSAA8x = 11,
};
struct FormatUsage__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FormatUsage__Enum value;
};

struct TextAsset__Fields {
  struct Object_1__Fields _;
};
struct TextAsset {
  struct TextAsset__Class *klass;
  struct MonitorData *monitor;
  struct TextAsset__Fields fields;
};
struct TextAsset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextAsset__StaticFields {
};
struct TextAsset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextAsset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextAsset__VTable vtable;
};

enum TextureWrapMode__Enum : int32_t {
  TextureWrapMode__Enum_Repeat = 0,
  TextureWrapMode__Enum_Clamp = 1,
  TextureWrapMode__Enum_Mirror = 2,
  TextureWrapMode__Enum_MirrorOnce = 3,
};
struct TextureWrapMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextureWrapMode__Enum value;
};

enum TextureCreationFlags__Enum : int32_t {
  TextureCreationFlags__Enum_None = 0,
  TextureCreationFlags__Enum_MipChain = 1,
  TextureCreationFlags__Enum_Crunch = 64,
};
struct TextureCreationFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextureCreationFlags__Enum value;
};

struct Rect__Array {
  struct Rect__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Rect vector[32];
};

struct Texture2D__Array {
  struct Texture2D__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Texture2D * vector[32];
};

struct __declspec(align(8)) List_1_UnityEngine_Rect___Fields {
  struct Rect__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Rect_ {
  struct List_1_UnityEngine_Rect___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Rect___Fields fields;
};
struct IEnumerator_1_UnityEngine_Rect_ {
  struct IEnumerator_1_UnityEngine_Rect___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_Rect___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Rect___StaticFields {
};
struct IEnumerator_1_UnityEngine_Rect___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Rect___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Rect___VTable vtable;
};
struct List_1_UnityEngine_Rect___VTable {
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
struct List_1_UnityEngine_Rect___StaticFields {
  struct Rect__Array * _emptyArray;
};
struct List_1_UnityEngine_Rect___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Rect___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Rect___VTable vtable;
};

struct Texture3D__Fields {
  struct Texture__Fields _;
};
struct Texture3D {
  struct Texture3D__Class *klass;
  struct MonitorData *monitor;
  struct Texture3D__Fields fields;
};
struct Texture3D__VTable {
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
struct Texture3D__StaticFields {
};
struct Texture3D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Texture3D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Texture3D__VTable vtable;
};

struct Texture2DArray__Fields {
  struct Texture__Fields _;
};
struct Texture2DArray {
  struct Texture2DArray__Class *klass;
  struct MonitorData *monitor;
  struct Texture2DArray__Fields fields;
};
struct Texture2DArray__VTable {
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
struct Texture2DArray__StaticFields {
};
struct Texture2DArray__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Texture2DArray__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Texture2DArray__VTable vtable;
};

struct CubemapArray__Fields {
  struct Texture__Fields _;
};
struct CubemapArray {
  struct CubemapArray__Class *klass;
  struct MonitorData *monitor;
  struct CubemapArray__Fields fields;
};
struct CubemapArray__VTable {
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
struct CubemapArray__StaticFields {
};
struct CubemapArray__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CubemapArray__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CubemapArray__VTable vtable;
};

struct __declspec(align(8)) TrackedReference__Fields {
  void * m_Ptr;
};
struct TrackedReference {
  struct TrackedReference__Class *klass;
  struct MonitorData *monitor;
  struct TrackedReference__Fields fields;
};
struct TrackedReference__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TrackedReference__StaticFields {
};
struct TrackedReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TrackedReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TrackedReference__VTable vtable;
};

struct __declspec(align(8)) UnityAPICompatibilityVersionAttribute__Fields {
  struct String * _version;
};
struct UnityAPICompatibilityVersionAttribute {
  struct UnityAPICompatibilityVersionAttribute__Class *klass;
  struct MonitorData *monitor;
  struct UnityAPICompatibilityVersionAttribute__Fields fields;
};
struct UnityAPICompatibilityVersionAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct UnityAPICompatibilityVersionAttribute__StaticFields {
};
struct UnityAPICompatibilityVersionAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnityAPICompatibilityVersionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnityAPICompatibilityVersionAttribute__VTable vtable;
};

enum HideFlags__Enum : int32_t {
  HideFlags__Enum_None = 0,
  HideFlags__Enum_HideInHierarchy = 1,
  HideFlags__Enum_HideInInspector = 2,
  HideFlags__Enum_DontSaveInEditor = 4,
  HideFlags__Enum_NotEditable = 8,
  HideFlags__Enum_DontSaveInBuild = 16,
  HideFlags__Enum_DontUnloadUnusedAsset = 32,
  HideFlags__Enum_DontSave = 52,
  HideFlags__Enum_HideAndDontSave = 61,
};
struct HideFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HideFlags__Enum value;
};

struct __declspec(align(8)) ArgumentCache__Fields {
  struct Object_1 * m_ObjectArgument;
  struct String * m_ObjectArgumentAssemblyTypeName;
  int32_t m_IntArgument;
  float m_FloatArgument;
  struct String * m_StringArgument;
  bool m_BoolArgument;
};
struct ArgumentCache {
  struct ArgumentCache__Class *klass;
  struct MonitorData *monitor;
  struct ArgumentCache__Fields fields;
};
struct ArgumentCache__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct ArgumentCache__StaticFields {
};
struct ArgumentCache__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArgumentCache__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArgumentCache__VTable vtable;
};

struct BaseInvokableCall {
  struct BaseInvokableCall__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) InvokableCall__Fields {
  struct UnityAction * Delegate;
};
struct InvokableCall {
  struct InvokableCall__Class *klass;
  struct MonitorData *monitor;
  struct InvokableCall__Fields fields;
};}