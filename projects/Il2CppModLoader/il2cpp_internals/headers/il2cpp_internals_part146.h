namespace app {
struct Ray__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Ray__StaticFields {
};
struct Ray__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Ray__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Ray__VTable vtable;
};

struct Camera__Fields {
  struct Behaviour__Fields _;
};
struct Camera {
  struct Camera__Class *klass;
  struct MonitorData *monitor;
  struct Camera__Fields fields;
};
struct Camera_CameraCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct Camera_CameraCallback {
  struct Camera_CameraCallback__Class *klass;
  struct MonitorData *monitor;
  struct Camera_CameraCallback__Fields fields;
};
struct Camera_CameraCallback__VTable {
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
struct Camera_CameraCallback__StaticFields {
};
struct Camera_CameraCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Camera_CameraCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Camera_CameraCallback__VTable vtable;
};
struct Camera__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Camera__StaticFields {
  struct Camera_CameraCallback * onPreCull;
  struct Camera_CameraCallback * onPreRender;
  struct Camera_CameraCallback * onPostRender;
};
struct Camera__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Camera__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Camera__VTable vtable;
};

enum RenderingPath__Enum : int32_t {
  RenderingPath__Enum_UsePlayerSettings = -1,
  RenderingPath__Enum_VertexLit = 0,
  RenderingPath__Enum_Forward = 1,
  RenderingPath__Enum_DeferredLighting = 2,
  RenderingPath__Enum_DeferredShading = 3,
};
struct RenderingPath__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RenderingPath__Enum value;
};

enum OpaqueSortMode__Enum : int32_t {
  OpaqueSortMode__Enum_Default = 0,
  OpaqueSortMode__Enum_FrontToBack = 1,
  OpaqueSortMode__Enum_NoDistanceSort = 2,
};
struct OpaqueSortMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum OpaqueSortMode__Enum value;
};

enum TransparencySortMode__Enum : int32_t {
  TransparencySortMode__Enum_Default = 0,
  TransparencySortMode__Enum_Perspective = 1,
  TransparencySortMode__Enum_Orthographic = 2,
  TransparencySortMode__Enum_CustomAxis = 3,
};
struct TransparencySortMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TransparencySortMode__Enum value;
};

enum CameraType__Enum : int32_t {
  CameraType__Enum_Game = 1,
  CameraType__Enum_SceneView = 2,
  CameraType__Enum_Preview = 4,
  CameraType__Enum_VR = 8,
  CameraType__Enum_Reflection = 16,
};
struct CameraType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CameraType__Enum value;
};

struct Matrix4x4 {
  float m00;
  float m10;
  float m20;
  float m30;
  float m01;
  float m11;
  float m21;
  float m31;
  float m02;
  float m12;
  float m22;
  float m32;
  float m03;
  float m13;
  float m23;
  float m33;
};
struct Matrix4x4__Boxed {
  struct Matrix4x4__Class *klass;
  struct MonitorData *monitor;
  struct Matrix4x4 fields;
};
struct Matrix4x4__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Matrix4x4__StaticFields {
  struct Matrix4x4 zeroMatrix;
  struct Matrix4x4 identityMatrix;
};
struct Matrix4x4__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Matrix4x4__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Matrix4x4__VTable vtable;
};

struct Color {
  float r;
  float g;
  float b;
  float a;
};
struct Color__Boxed {
  struct Color__Class *klass;
  struct MonitorData *monitor;
  struct Color fields;
};
struct Color__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Color__StaticFields {
};
struct Color__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Color__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Color__VTable vtable;
};

enum CameraClearFlags__Enum : int32_t {
  CameraClearFlags__Enum_Skybox = 1,
  CameraClearFlags__Enum_Color = 2,
  CameraClearFlags__Enum_SolidColor = 2,
  CameraClearFlags__Enum_Depth = 3,
  CameraClearFlags__Enum_Nothing = 4,
};
struct CameraClearFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CameraClearFlags__Enum value;
};

enum DepthTextureMode__Enum : int32_t {
  DepthTextureMode__Enum_None = 0,
  DepthTextureMode__Enum_Depth = 1,
  DepthTextureMode__Enum_DepthNormals = 2,
  DepthTextureMode__Enum_MotionVectors = 4,
};
struct DepthTextureMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DepthTextureMode__Enum value;
};

struct Shader__Fields {
  struct Object_1__Fields _;
};
struct Shader {
  struct Shader__Class *klass;
  struct MonitorData *monitor;
  struct Shader__Fields fields;
};
struct Shader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Shader__StaticFields {
};
struct Shader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Shader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Shader__VTable vtable;
};

enum Camera_ProjectionMatrixMode__Enum : int32_t {
  Camera_ProjectionMatrixMode__Enum_Explicit = 0,
  Camera_ProjectionMatrixMode__Enum_Implicit = 1,
  Camera_ProjectionMatrixMode__Enum_PhysicalPropertiesBased = 2,
};
struct Camera_ProjectionMatrixMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Camera_ProjectionMatrixMode__Enum value;
};

struct Vector2 {
  float x;
  float y;
};
struct Vector2__Boxed {
  struct Vector2__Class *klass;
  struct MonitorData *monitor;
  struct Vector2 fields;
};
struct Vector2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Vector2__StaticFields {
  struct Vector2 zeroVector;
  struct Vector2 oneVector;
  struct Vector2 upVector;
  struct Vector2 downVector;
  struct Vector2 leftVector;
  struct Vector2 rightVector;
  struct Vector2 positiveInfinityVector;
  struct Vector2 negativeInfinityVector;
};
struct Vector2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vector2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vector2__VTable vtable;
};

enum Camera_GateFitMode__Enum : int32_t {
  Camera_GateFitMode__Enum_Vertical = 1,
  Camera_GateFitMode__Enum_Horizontal = 2,
  Camera_GateFitMode__Enum_Fill = 3,
  Camera_GateFitMode__Enum_Overscan = 4,
  Camera_GateFitMode__Enum_None = 0,
};
struct Camera_GateFitMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Camera_GateFitMode__Enum value;
};

struct Rect {
  float m_XMin;
  float m_YMin;
  float m_Width;
  float m_Height;
};
struct Rect__Boxed {
  struct Rect__Class *klass;
  struct MonitorData *monitor;
  struct Rect fields;
};
struct Rect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Rect__StaticFields {
};
struct Rect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Rect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Rect__VTable vtable;
};

struct RenderTexture__Fields {
  struct Texture__Fields _;
};
struct RenderTexture {
  struct RenderTexture__Class *klass;
  struct MonitorData *monitor;
  struct RenderTexture__Fields fields;
};
struct RenderTexture__VTable {
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
struct RenderTexture__StaticFields {
};
struct RenderTexture__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderTexture__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderTexture__VTable vtable;
};

struct RenderBuffer {
  int32_t m_RenderTextureInstanceID;
  void * m_BufferPtr;
};
struct RenderBuffer__Boxed {
  struct RenderBuffer__Class *klass;
  struct MonitorData *monitor;
  struct RenderBuffer fields;
};
struct RenderBuffer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RenderBuffer__StaticFields {
};
struct RenderBuffer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenderBuffer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenderBuffer__VTable vtable;
};

struct RenderBuffer__Array {
  struct RenderBuffer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RenderBuffer vector[32];
};

struct Vector4 {
  float x;
  float y;
  float z;
  float w;
};
struct Vector4__Boxed {
  struct Vector4__Class *klass;
  struct MonitorData *monitor;
  struct Vector4 fields;
};
struct Vector4__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Vector4__StaticFields {
  struct Vector4 zeroVector;
  struct Vector4 oneVector;
  struct Vector4 positiveInfinityVector;
  struct Vector4 negativeInfinityVector;
};
struct Vector4__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vector4__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vector4__VTable vtable;
};

enum Camera_MonoOrStereoscopicEye__Enum : int32_t {
  Camera_MonoOrStereoscopicEye__Enum_Left = 0,
  Camera_MonoOrStereoscopicEye__Enum_Right = 1,
  Camera_MonoOrStereoscopicEye__Enum_Mono = 2,
};
struct Camera_MonoOrStereoscopicEye__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Camera_MonoOrStereoscopicEye__Enum value;
};

struct Vector3__Array {
  struct Vector3__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Vector3 vector[32];
};

struct Camera_GateFitParameters {
  enum Camera_GateFitMode__Enum _mode_k__BackingField;
  float _aspect_k__BackingField;
};
struct Camera_GateFitParameters__Boxed {
  struct Camera_GateFitParameters__Class *klass;
  struct MonitorData *monitor;
  struct Camera_GateFitParameters fields;
};
struct Camera_GateFitParameters__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Camera_GateFitParameters__StaticFields {
};
struct Camera_GateFitParameters__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Camera_GateFitParameters__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Camera_GateFitParameters__VTable vtable;
};

struct Scene {
  int32_t m_Handle;
};
struct Scene__Boxed {
  struct Scene__Class *klass;
  struct MonitorData *monitor;
  struct Scene fields;
};
struct Scene__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Scene__StaticFields {
};
struct Scene__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Scene__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Scene__VTable vtable;
};

enum StereoTargetEyeMask__Enum : int32_t {
  StereoTargetEyeMask__Enum_None = 0,
  StereoTargetEyeMask__Enum_Left = 1,
  StereoTargetEyeMask__Enum_Right = 2,
  StereoTargetEyeMask__Enum_Both = 3,
};
struct StereoTargetEyeMask__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StereoTargetEyeMask__Enum value;
};

enum Camera_StereoscopicEye__Enum : int32_t {
  Camera_StereoscopicEye__Enum_Left = 0,
  Camera_StereoscopicEye__Enum_Right = 1,
};
struct Camera_StereoscopicEye__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Camera_StereoscopicEye__Enum value;
};

struct Camera__Array {
  struct Camera__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Camera * vector[32];
};

struct Cubemap__Fields {
  struct Texture__Fields _;
};
struct Cubemap {
  struct Cubemap__Class *klass;
  struct MonitorData *monitor;
  struct Cubemap__Fields fields;
};
struct Cubemap__VTable {
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
struct Cubemap__StaticFields {
};
struct Cubemap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Cubemap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Cubemap__VTable vtable;
};

enum CameraEvent__Enum : int32_t {
  CameraEvent__Enum_BeforeDepthTexture = 0,
  CameraEvent__Enum_AfterDepthTexture = 1,
  CameraEvent__Enum_BeforeDepthNormalsTexture = 2,
  CameraEvent__Enum_AfterDepthNormalsTexture = 3,
  CameraEvent__Enum_BeforeGBuffer = 4,
  CameraEvent__Enum_AfterGBuffer = 5,
  CameraEvent__Enum_BeforeLighting = 6,
  CameraEvent__Enum_AfterLighting = 7,
  CameraEvent__Enum_BeforeFinalPass = 8,
  CameraEvent__Enum_AfterFinalPass = 9,
  CameraEvent__Enum_BeforeForwardOpaque = 10,
  CameraEvent__Enum_AfterForwardOpaque = 11,
  CameraEvent__Enum_BeforeImageEffectsOpaque = 12,
  CameraEvent__Enum_AfterImageEffectsOpaque = 13,
  CameraEvent__Enum_BeforeSkybox = 14,
  CameraEvent__Enum_AfterSkybox = 15,
  CameraEvent__Enum_BeforeForwardAlpha = 16,
  CameraEvent__Enum_AfterForwardAlpha = 17,
  CameraEvent__Enum_BeforeImageEffects = 18,
  CameraEvent__Enum_AfterImageEffects = 19,
  CameraEvent__Enum_AfterEverything = 20,
  CameraEvent__Enum_BeforeReflections = 21,
  CameraEvent__Enum_AfterReflections = 22,
  CameraEvent__Enum_BeforeHaloAndLensFlares = 23,
  CameraEvent__Enum_AfterHaloAndLensFlares = 24,
};
struct CameraEvent__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CameraEvent__Enum value;
};

struct __declspec(align(8)) CommandBuffer__Fields {
  void * m_Ptr;
};
struct CommandBuffer {
  struct CommandBuffer__Class *klass;
  struct MonitorData *monitor;
  struct CommandBuffer__Fields fields;
};
struct CommandBuffer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct CommandBuffer__StaticFields {
};
struct CommandBuffer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CommandBuffer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CommandBuffer__VTable vtable;
};

enum ComputeQueueType__Enum : int32_t {
  ComputeQueueType__Enum_Default = 0,
  ComputeQueueType__Enum_Background = 1,
  ComputeQueueType__Enum_Urgent = 2,
};
struct ComputeQueueType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ComputeQueueType__Enum value;
};

struct CommandBuffer__Array {
  struct CommandBuffer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CommandBuffer * vector[32];
};

struct LowerResBlitTexture__Fields {
  struct Object_1__Fields _;
};
struct LowerResBlitTexture {
  struct LowerResBlitTexture__Class *klass;
  struct MonitorData *monitor;
  struct LowerResBlitTexture__Fields fields;
};
struct LowerResBlitTexture__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LowerResBlitTexture__StaticFields {
};
struct LowerResBlitTexture__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LowerResBlitTexture__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LowerResBlitTexture__VTable vtable;
};

struct PreloadData__Fields {
  struct Object_1__Fields _;
};
struct PreloadData {
  struct PreloadData__Class *klass;
  struct MonitorData *monitor;
  struct PreloadData__Fields fields;
};
struct PreloadData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PreloadData__StaticFields {
};
struct PreloadData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PreloadData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PreloadData__VTable vtable;
};

struct Color32 {
  int32_t rgba;
  uint8_t r;
  uint8_t g;
  uint8_t b;
  uint8_t a;
};
struct Color32__Boxed {
  struct Color32__Class *klass;
  struct MonitorData *monitor;
  struct Color32 fields;
};
struct Color32__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Color32__StaticFields {
};
struct Color32__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Color32__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Color32__VTable vtable;
};

struct Component_1__Array {
  struct Component_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Component_1 * vector[32];
};

struct __declspec(align(8)) List_1_UnityEngine_Component___Fields {
  struct Component_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Component_ {
  struct List_1_UnityEngine_Component___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Component___Fields fields;
};
struct IEnumerator_1_UnityEngine_Component_ {
  struct IEnumerator_1_UnityEngine_Component___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_Component___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Component___StaticFields {
};
struct IEnumerator_1_UnityEngine_Component___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Component___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Component___VTable vtable;
};
struct List_1_UnityEngine_Component___VTable {
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
struct List_1_UnityEngine_Component___StaticFields {
  struct Component_1__Array * _emptyArray;
};
struct List_1_UnityEngine_Component___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Component___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Component___VTable vtable;
};

enum SendMessageOptions__Enum : int32_t {
  SendMessageOptions__Enum_RequireReceiver = 0,
  SendMessageOptions__Enum_DontRequireReceiver = 1,
};
struct SendMessageOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SendMessageOptions__Enum value;
};

struct __declspec(align(8)) ComputeBuffer__Fields {
  void * m_Ptr;
};
struct ComputeBuffer {
  struct ComputeBuffer__Class *klass;
  struct MonitorData *monitor;
  struct ComputeBuffer__Fields fields;
};
struct ComputeBuffer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct ComputeBuffer__StaticFields {
};
struct ComputeBuffer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComputeBuffer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComputeBuffer__VTable vtable;
};

enum ComputeBufferType__Enum : int32_t {
  ComputeBufferType__Enum_Default = 0,
  ComputeBufferType__Enum_Raw = 1,
  ComputeBufferType__Enum_Append = 2,
  ComputeBufferType__Enum_Counter = 4,
  ComputeBufferType__Enum_DrawIndirect = 256,
  ComputeBufferType__Enum_IndirectArguments = 256,
  ComputeBufferType__Enum_GPUMemory = 512,
};
struct ComputeBufferType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ComputeBufferType__Enum value;
};

struct __declspec(align(8)) Coroutine__Fields {
  void * m_Ptr;
};
struct Coroutine {
  struct Coroutine__Class *klass;
  struct MonitorData *monitor;
  struct Coroutine__Fields fields;
};
struct Coroutine__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Coroutine__StaticFields {
};
struct Coroutine__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Coroutine__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Coroutine__VTable vtable;
};

struct __declspec(align(8)) CullingGroup__Fields {
  void * m_Ptr;
  struct CullingGroup_StateChanged * m_OnStateChanged;
};
struct CullingGroup {
  struct CullingGroup__Class *klass;
  struct MonitorData *monitor;
  struct CullingGroup__Fields fields;
};
struct CullingGroup_StateChanged__Fields {
  struct MulticastDelegate__Fields _;
};
struct CullingGroup_StateChanged {
  struct CullingGroup_StateChanged__Class *klass;
  struct MonitorData *monitor;
  struct CullingGroup_StateChanged__Fields fields;
};
struct CullingGroupEvent {
  int32_t m_Index;
  uint8_t m_PrevState;
  uint8_t m_ThisState;
};
struct CullingGroupEvent__Boxed {
  struct CullingGroupEvent__Class *klass;
  struct MonitorData *monitor;
  struct CullingGroupEvent fields;
};
struct CullingGroupEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CullingGroupEvent__StaticFields {
};
struct CullingGroupEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CullingGroupEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CullingGroupEvent__VTable vtable;
};
struct CullingGroup_StateChanged__VTable {
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
struct CullingGroup_StateChanged__StaticFields {
};
struct CullingGroup_StateChanged__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CullingGroup_StateChanged__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CullingGroup_StateChanged__VTable vtable;
};
struct CullingGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct CullingGroup__StaticFields {
};
struct CullingGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CullingGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CullingGroup__VTable vtable;
};

struct Texture2D__Fields {
  struct Texture__Fields _;
};
struct Texture2D {
  struct Texture2D__Class *klass;
  struct MonitorData *monitor;
  struct Texture2D__Fields fields;
};
enum CursorMode__Enum : int32_t {
  CursorMode__Enum_Auto = 0,
  CursorMode__Enum_ForceSoftware = 1,
};
struct CursorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CursorMode__Enum value;
};
struct Texture2D__VTable {
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
};}