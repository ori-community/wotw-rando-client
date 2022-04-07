namespace app {
struct Texture2D__StaticFields {
};
struct Texture2D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Texture2D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Texture2D__VTable vtable;
};

enum CursorLockMode__Enum : int32_t {
  CursorLockMode__Enum_None = 0,
  CursorLockMode__Enum_Locked = 1,
  CursorLockMode__Enum_Confined = 2,
};
struct CursorLockMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CursorLockMode__Enum value;
};

struct CustomYieldInstruction {
  struct CustomYieldInstruction__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) WaitForSecondsRealtime__Fields {
  float _waitTime_k__BackingField;
  float m_WaitUntilTime;
};
struct WaitForSecondsRealtime {
  struct WaitForSecondsRealtime__Class *klass;
  struct MonitorData *monitor;
  struct WaitForSecondsRealtime__Fields fields;
};
struct WaitForSecondsRealtime__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
  VirtualInvokeData get_keepWaiting;
};
struct WaitForSecondsRealtime__StaticFields {
};
struct WaitForSecondsRealtime__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitForSecondsRealtime__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitForSecondsRealtime__VTable vtable;
};
struct CustomYieldInstruction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
  VirtualInvokeData __unknown;
};
struct CustomYieldInstruction__StaticFields {
};
struct CustomYieldInstruction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomYieldInstruction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomYieldInstruction__VTable vtable;
};

struct DebugLogHandler {
  struct DebugLogHandler__Class *klass;
  struct MonitorData *monitor;
};
struct DebugLogHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData LogFormat;
  VirtualInvokeData LogException;
};
struct DebugLogHandler__StaticFields {
};
struct DebugLogHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebugLogHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebugLogHandler__VTable vtable;
};

struct ILogger {
  struct ILogger__Class *klass;
  struct MonitorData *monitor;
};
struct ILogger__VTable {
  VirtualInvokeData get_logHandler;
  VirtualInvokeData set_logHandler;
  VirtualInvokeData Log;
  VirtualInvokeData Log_1;
  VirtualInvokeData LogFormat;
};
struct ILogger__StaticFields {
};
struct ILogger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ILogger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ILogger__VTable vtable;
};

struct __declspec(align(8)) Display__Fields {
  void * nativeDisplay;
};
struct Display {
  struct Display__Class *klass;
  struct MonitorData *monitor;
  struct Display__Fields fields;
};
struct Display__Array {
  struct Display__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Display * vector[32];
};
struct Display_DisplaysUpdatedDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct Display_DisplaysUpdatedDelegate {
  struct Display_DisplaysUpdatedDelegate__Class *klass;
  struct MonitorData *monitor;
  struct Display_DisplaysUpdatedDelegate__Fields fields;
};
struct Display_DisplaysUpdatedDelegate__VTable {
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
struct Display_DisplaysUpdatedDelegate__StaticFields {
};
struct Display_DisplaysUpdatedDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Display_DisplaysUpdatedDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Display_DisplaysUpdatedDelegate__VTable vtable;
};
struct Display__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Display__StaticFields {
  struct Display__Array * displays;
  struct Display * _mainDisplay;
  struct Display_DisplaysUpdatedDelegate * onDisplaysUpdated;
};
struct Display__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Display__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Display__VTable vtable;
};

struct ExcludeFromObjectFactoryAttribute {
  struct ExcludeFromObjectFactoryAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct ExcludeFromObjectFactoryAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ExcludeFromObjectFactoryAttribute__StaticFields {
};
struct ExcludeFromObjectFactoryAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExcludeFromObjectFactoryAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExcludeFromObjectFactoryAttribute__VTable vtable;
};

enum PrimitiveType__Enum : int32_t {
  PrimitiveType__Enum_Sphere = 0,
  PrimitiveType__Enum_Capsule = 1,
  PrimitiveType__Enum_Cylinder = 2,
  PrimitiveType__Enum_Cube = 3,
  PrimitiveType__Enum_Plane = 4,
  PrimitiveType__Enum_Quad = 5,
};
struct PrimitiveType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PrimitiveType__Enum value;
};

struct GameObject__Array {
  struct GameObject__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GameObject * vector[32];
};

struct Plane {
  struct Vector3 m_Normal;
  float m_Distance;
};
struct Plane__Boxed {
  struct Plane__Class *klass;
  struct MonitorData *monitor;
  struct Plane fields;
};
struct Plane__Array {
  struct Plane__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Plane vector[32];
};
struct Plane__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Plane__StaticFields {
};
struct Plane__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Plane__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Plane__VTable vtable;
};

enum Allocator__Enum : int32_t {
  Allocator__Enum_Invalid = 0,
  Allocator__Enum_None = 1,
  Allocator__Enum_Temp = 2,
  Allocator__Enum_TempJob = 3,
  Allocator__Enum_Persistent = 4,
};
struct Allocator__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Allocator__Enum value;
};
struct NativeArray_1_UnityEngine_Bounds_ {
  struct Void * m_Buffer;
  int32_t m_Length;
  enum Allocator__Enum m_AllocatorLabel;
};
struct NativeArray_1_UnityEngine_Bounds___Boxed {
  struct NativeArray_1_UnityEngine_Bounds___Class *klass;
  struct MonitorData *monitor;
  struct NativeArray_1_UnityEngine_Bounds_ fields;
};
struct IEnumerator_1_UnityEngine_Bounds_ {
  struct IEnumerator_1_UnityEngine_Bounds___Class *klass;
  struct MonitorData *monitor;
};
struct NativeArray_1_System_Byte_ {
  struct Void * m_Buffer;
  int32_t m_Length;
  enum Allocator__Enum m_AllocatorLabel;
};
struct NativeArray_1_System_Byte___Boxed {
  struct NativeArray_1_System_Byte___Class *klass;
  struct MonitorData *monitor;
  struct NativeArray_1_System_Byte_ fields;
};
struct IEnumerator_1_UnityEngine_Bounds___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Bounds___StaticFields {
};
struct IEnumerator_1_UnityEngine_Bounds___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Bounds___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Bounds___VTable vtable;
};
struct NativeArray_1_UnityEngine_Bounds___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Equals_1;
};
struct NativeArray_1_UnityEngine_Bounds___StaticFields {
};
struct NativeArray_1_UnityEngine_Bounds___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NativeArray_1_UnityEngine_Bounds___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NativeArray_1_UnityEngine_Bounds___VTable vtable;
};
struct NativeArray_1_System_Byte___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Equals_1;
};
struct NativeArray_1_System_Byte___StaticFields {
};
struct NativeArray_1_System_Byte___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NativeArray_1_System_Byte___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NativeArray_1_System_Byte___VTable vtable;
};

struct Mesh__Fields {
  struct Object_1__Fields _;
};
struct Mesh {
  struct Mesh__Class *klass;
  struct MonitorData *monitor;
  struct Mesh__Fields fields;
};
struct Quaternion {
  float x;
  float y;
  float z;
  float w;
};
struct Quaternion__Boxed {
  struct Quaternion__Class *klass;
  struct MonitorData *monitor;
  struct Quaternion fields;
};
struct Mesh__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Mesh__StaticFields {
};
struct Mesh__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Mesh__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Mesh__VTable vtable;
};
struct Quaternion__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Quaternion__StaticFields {
  struct Quaternion identityQuaternion;
};
struct Quaternion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Quaternion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Quaternion__VTable vtable;
};

struct GradientColorKey {
  struct Color color;
  float time;
};
struct GradientColorKey__Boxed {
  struct GradientColorKey__Class *klass;
  struct MonitorData *monitor;
  struct GradientColorKey fields;
};
struct GradientColorKey__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GradientColorKey__StaticFields {
};
struct GradientColorKey__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GradientColorKey__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GradientColorKey__VTable vtable;
};

struct GradientAlphaKey {
  float alpha;
  float time;
};
struct GradientAlphaKey__Boxed {
  struct GradientAlphaKey__Class *klass;
  struct MonitorData *monitor;
  struct GradientAlphaKey fields;
};
struct GradientAlphaKey__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GradientAlphaKey__StaticFields {
};
struct GradientAlphaKey__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GradientAlphaKey__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GradientAlphaKey__VTable vtable;
};

struct __declspec(align(8)) Gradient__Fields {
  void * m_Ptr;
};
struct Gradient {
  struct Gradient__Class *klass;
  struct MonitorData *monitor;
  struct Gradient__Fields fields;
};
struct Gradient__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Gradient__StaticFields {
};
struct Gradient__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Gradient__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Gradient__VTable vtable;
};

struct GradientColorKey__Array {
  struct GradientColorKey__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GradientColorKey vector[32];
};

struct GradientAlphaKey__Array {
  struct GradientAlphaKey__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GradientAlphaKey vector[32];
};

struct Resolution {
  int32_t m_Width;
  int32_t m_Height;
  int32_t m_RefreshRate;
};
struct Resolution__Boxed {
  struct Resolution__Class *klass;
  struct MonitorData *monitor;
  struct Resolution fields;
};
struct Resolution__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Resolution__StaticFields {
};
struct Resolution__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Resolution__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Resolution__VTable vtable;
};

enum FullScreenMode__Enum : int32_t {
  FullScreenMode__Enum_ExclusiveFullScreen = 0,
  FullScreenMode__Enum_FullScreenWindow = 1,
  FullScreenMode__Enum_MaximizedWindow = 2,
  FullScreenMode__Enum_Windowed = 3,
};
struct FullScreenMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FullScreenMode__Enum value;
};

struct Resolution__Array {
  struct Resolution__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Resolution vector[32];
};

enum CubemapFace__Enum : int32_t {
  CubemapFace__Enum_Unknown = -1,
  CubemapFace__Enum_PositiveX = 0,
  CubemapFace__Enum_NegativeX = 1,
  CubemapFace__Enum_PositiveY = 2,
  CubemapFace__Enum_NegativeY = 3,
  CubemapFace__Enum_PositiveZ = 4,
  CubemapFace__Enum_NegativeZ = 5,
};
struct CubemapFace__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CubemapFace__Enum value;
};

struct Internal_DrawTextureArguments {
  struct Rect screenRect;
  struct Rect sourceRect;
  int32_t leftBorder;
  int32_t rightBorder;
  int32_t topBorder;
  int32_t bottomBorder;
  struct Color color;
  struct Vector4 borderWidths;
  struct Vector4 cornerRadiuses;
  int32_t pass;
  struct Texture * texture;
  struct Material * mat;
};
struct Internal_DrawTextureArguments__Boxed {
  struct Internal_DrawTextureArguments__Class *klass;
  struct MonitorData *monitor;
  struct Internal_DrawTextureArguments fields;
};
struct Material__Fields {
  struct Object_1__Fields _;
};
struct Material {
  struct Material__Class *klass;
  struct MonitorData *monitor;
  struct Material__Fields fields;
};
struct Material__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Material__StaticFields {
};
struct Material__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Material__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Material__VTable vtable;
};
struct Internal_DrawTextureArguments__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Internal_DrawTextureArguments__StaticFields {
};
struct Internal_DrawTextureArguments__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Internal_DrawTextureArguments__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Internal_DrawTextureArguments__VTable vtable;
};

struct __declspec(align(8)) MaterialPropertyBlock__Fields {
  void * m_Ptr;
};
struct MaterialPropertyBlock {
  struct MaterialPropertyBlock__Class *klass;
  struct MonitorData *monitor;
  struct MaterialPropertyBlock__Fields fields;
};
enum ShadowCastingMode__Enum : int32_t {
  ShadowCastingMode__Enum_Off = 0,
  ShadowCastingMode__Enum_On = 1,
  ShadowCastingMode__Enum_TwoSided = 2,
  ShadowCastingMode__Enum_ShadowsOnly = 3,
};
struct ShadowCastingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ShadowCastingMode__Enum value;
};
enum LightProbeUsage__Enum : int32_t {
  LightProbeUsage__Enum_Off = 0,
  LightProbeUsage__Enum_BlendProbes = 1,
  LightProbeUsage__Enum_UseProxyVolume = 2,
  LightProbeUsage__Enum_CustomProvided = 4,
};
struct LightProbeUsage__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LightProbeUsage__Enum value;
};
struct LightProbeProxyVolume__Fields {
  struct Behaviour__Fields _;
};
struct LightProbeProxyVolume {
  struct LightProbeProxyVolume__Class *klass;
  struct MonitorData *monitor;
  struct LightProbeProxyVolume__Fields fields;
};
struct MaterialPropertyBlock__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MaterialPropertyBlock__StaticFields {
};
struct MaterialPropertyBlock__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MaterialPropertyBlock__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MaterialPropertyBlock__VTable vtable;
};
struct LightProbeProxyVolume__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LightProbeProxyVolume__StaticFields {
};
struct LightProbeProxyVolume__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LightProbeProxyVolume__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LightProbeProxyVolume__VTable vtable;
};

enum MeshTopology__Enum : int32_t {
  MeshTopology__Enum_Triangles = 0,
  MeshTopology__Enum_Quads = 2,
  MeshTopology__Enum_Lines = 3,
  MeshTopology__Enum_LineStrip = 4,
  MeshTopology__Enum_Points = 5,
};
struct MeshTopology__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MeshTopology__Enum value;
};

struct Vector2__Array {
  struct Vector2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Vector2 vector[32];
};

struct FrameTiming {
  double mainThreadFrameTime;
  double mainThreadSemaphoreTime;
  double mainThreadWaitForPresent;
  double WaitForRenderJobDuration;
  uint64_t cpuTimePresentCalled;
  double cpuFrameTime;
  double rtSpinTime;
  double overallFrameTime;
  uint64_t cpuTimeFrameComplete;
  double gpuFrameTime;
  uint32_t drawCallCount;
  float heightScale;
  float widthScale;
  uint32_t syncInterval;
};
struct FrameTiming__Boxed {
  struct FrameTiming__Class *klass;
  struct MonitorData *monitor;
  struct FrameTiming fields;
};
struct FrameTiming__Array {
  struct FrameTiming__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FrameTiming vector[32];
};
struct FrameTiming__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FrameTiming__StaticFields {
};
struct FrameTiming__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FrameTiming__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FrameTiming__VTable vtable;
};

enum WaitForPresentSyncPoint__Enum : int32_t {
  WaitForPresentSyncPoint__Enum_BeginFrame = 0,
  WaitForPresentSyncPoint__Enum_EndFrame = 1,
};
struct WaitForPresentSyncPoint__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WaitForPresentSyncPoint__Enum value;
};

enum GraphicsJobsSyncPoint__Enum : int32_t {
  GraphicsJobsSyncPoint__Enum_EndOfFrame = 0,
  GraphicsJobsSyncPoint__Enum_AfterScriptUpdate = 1,
  GraphicsJobsSyncPoint__Enum_AfterScriptLateUpdate = 2,
  GraphicsJobsSyncPoint__Enum_WaitForPresent = 3,
};
struct GraphicsJobsSyncPoint__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GraphicsJobsSyncPoint__Enum value;
};

enum ColorSpace__Enum : int32_t {
  ColorSpace__Enum_Uninitialized = -1,
  ColorSpace__Enum_Gamma = 0,
  ColorSpace__Enum_Linear = 1,
};
struct ColorSpace__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ColorSpace__Enum value;
};

struct ImageEffectTransformsToLDR {
  struct ImageEffectTransformsToLDR__Class *klass;
  struct MonitorData *monitor;
};
struct ImageEffectTransformsToLDR__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ImageEffectTransformsToLDR__StaticFields {
};
struct ImageEffectTransformsToLDR__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ImageEffectTransformsToLDR__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ImageEffectTransformsToLDR__VTable vtable;
};

struct ImageEffectAllowedInSceneView {
  struct ImageEffectAllowedInSceneView__Class *klass;
  struct MonitorData *monitor;
};
struct ImageEffectAllowedInSceneView__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ImageEffectAllowedInSceneView__StaticFields {
};
struct ImageEffectAllowedInSceneView__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ImageEffectAllowedInSceneView__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ImageEffectAllowedInSceneView__VTable vtable;
};

struct ImageEffectOpaque {
  struct ImageEffectOpaque__Class *klass;
  struct MonitorData *monitor;
};
struct ImageEffectOpaque__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ImageEffectOpaque__StaticFields {
};
struct ImageEffectOpaque__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ImageEffectOpaque__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ImageEffectOpaque__VTable vtable;
};

struct Renderer__Fields {
  struct Component_1__Fields _;
  struct Material * m_cachedMaterial;
  bool m_materialCached;
};
struct Renderer {
  struct Renderer__Class *klass;
  struct MonitorData *monitor;
  struct Renderer__Fields fields;
};
struct TrailRenderer__Fields {
  struct Renderer__Fields _;
};
struct TrailRenderer {
  struct TrailRenderer__Class *klass;
  struct MonitorData *monitor;
  struct TrailRenderer__Fields fields;
};
struct Renderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Renderer__StaticFields {
};
struct Renderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Renderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Renderer__VTable vtable;
};
struct TrailRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TrailRenderer__StaticFields {
};
struct TrailRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TrailRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TrailRenderer__VTable vtable;
};

struct LineRenderer__Fields {
  struct Renderer__Fields _;
};
struct LineRenderer {
  struct LineRenderer__Class *klass;
  struct MonitorData *monitor;
  struct LineRenderer__Fields fields;
};
struct LineRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LineRenderer__StaticFields {
};
struct LineRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LineRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LineRenderer__VTable vtable;
};

struct Material__Array {
  struct Material__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Material * vector[32];
};

enum LightmapType__Enum : int32_t {
  LightmapType__Enum_NoLightmap = -1,
  LightmapType__Enum_StaticLightmap = 0,
  LightmapType__Enum_DynamicLightmap = 1,
};
struct LightmapType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LightmapType__Enum value;
};

enum FogMode__Enum : int32_t {
  FogMode__Enum_Linear = 1,
  FogMode__Enum_Exponential = 2,
  FogMode__Enum_ExponentialSquared = 3,
};
struct FogMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FogMode__Enum value;
};

struct Vector4__Array {
  struct Vector4__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Vector4 vector[32];
};

struct __declspec(align(8)) List_1_UnityEngine_Vector4___Fields {
  struct Vector4__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Vector4_ {
  struct List_1_UnityEngine_Vector4___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Vector4___Fields fields;
};
struct IEnumerator_1_UnityEngine_Vector4_ {
  struct IEnumerator_1_UnityEngine_Vector4___Class *klass;
  struct MonitorData *monitor;
};}