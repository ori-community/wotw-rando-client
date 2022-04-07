namespace app {

enum Application_NvnBufferUsage__Enum : int32_t {
  Application_NvnBufferUsage__Enum_None = 0,
  Application_NvnBufferUsage__Enum_Generic = 1,
  Application_NvnBufferUsage__Enum_Texture = 2,
  Application_NvnBufferUsage__Enum_TextureCompressible = 3,
  Application_NvnBufferUsage__Enum_Shader = 4,
  Application_NvnBufferUsage__Enum_RenderTarget = 5,
  Application_NvnBufferUsage__Enum_RenderTargetCompressible = 6,
  Application_NvnBufferUsage__Enum_LBuffer = 7,
  Application_NvnBufferUsage__Enum_GPUScratch = 8,
  Application_NvnBufferUsage__Enum_TexturePerm = 9,
  Application_NvnBufferUsage__Enum_TextureCompressiblePerm = 10,
  Application_NvnBufferUsage__Enum_ShaderPerm = 11,
  Application_NvnBufferUsage__Enum_RenderTargetPerm = 12,
  Application_NvnBufferUsage__Enum_RenderTargetCompressiblePerm = 13,
  Application_NvnBufferUsage__Enum_Count = 14,
};
struct Application_NvnBufferUsage__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Application_NvnBufferUsage__Enum value;
};

enum Application_JobFilterGroup__Enum : int32_t {
  Application_JobFilterGroup__Enum_None = 0,
  Application_JobFilterGroup__Enum_Physics = 1,
};
struct Application_JobFilterGroup__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Application_JobFilterGroup__Enum value;
};

enum RuntimePlatform__Enum : int32_t {
  RuntimePlatform__Enum_OSXEditor = 0,
  RuntimePlatform__Enum_OSXPlayer = 1,
  RuntimePlatform__Enum_WindowsPlayer = 2,
  RuntimePlatform__Enum_OSXWebPlayer = 3,
  RuntimePlatform__Enum_OSXDashboardPlayer = 4,
  RuntimePlatform__Enum_WindowsWebPlayer = 5,
  RuntimePlatform__Enum_WindowsEditor = 7,
  RuntimePlatform__Enum_IPhonePlayer = 8,
  RuntimePlatform__Enum_XBOX360 = 10,
  RuntimePlatform__Enum_PS3 = 9,
  RuntimePlatform__Enum_Android = 11,
  RuntimePlatform__Enum_NaCl = 12,
  RuntimePlatform__Enum_FlashPlayer = 15,
  RuntimePlatform__Enum_LinuxPlayer = 13,
  RuntimePlatform__Enum_LinuxEditor = 16,
  RuntimePlatform__Enum_WebGLPlayer = 17,
  RuntimePlatform__Enum_MetroPlayerX86 = 18,
  RuntimePlatform__Enum_WSAPlayerX86 = 18,
  RuntimePlatform__Enum_MetroPlayerX64 = 19,
  RuntimePlatform__Enum_WSAPlayerX64 = 19,
  RuntimePlatform__Enum_MetroPlayerARM = 20,
  RuntimePlatform__Enum_WSAPlayerARM = 20,
  RuntimePlatform__Enum_WP8Player = 21,
  RuntimePlatform__Enum_BlackBerryPlayer = 22,
  RuntimePlatform__Enum_TizenPlayer = 23,
  RuntimePlatform__Enum_PSP2 = 24,
  RuntimePlatform__Enum_PS4 = 25,
  RuntimePlatform__Enum_PSM = 26,
  RuntimePlatform__Enum_XboxOne = 27,
  RuntimePlatform__Enum_SamsungTVPlayer = 28,
  RuntimePlatform__Enum_WiiU = 30,
  RuntimePlatform__Enum_tvOS = 31,
  RuntimePlatform__Enum_Switch = 32,
  RuntimePlatform__Enum_Lumin = 33,
};
struct RuntimePlatform__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RuntimePlatform__Enum value;
};

enum SystemLanguage__Enum : int32_t {
  SystemLanguage__Enum_Afrikaans = 0,
  SystemLanguage__Enum_Arabic = 1,
  SystemLanguage__Enum_Basque = 2,
  SystemLanguage__Enum_Belarusian = 3,
  SystemLanguage__Enum_Bulgarian = 4,
  SystemLanguage__Enum_Catalan = 5,
  SystemLanguage__Enum_Chinese = 6,
  SystemLanguage__Enum_Czech = 7,
  SystemLanguage__Enum_Danish = 8,
  SystemLanguage__Enum_Dutch = 9,
  SystemLanguage__Enum_English = 10,
  SystemLanguage__Enum_Estonian = 11,
  SystemLanguage__Enum_Faroese = 12,
  SystemLanguage__Enum_Finnish = 13,
  SystemLanguage__Enum_French = 14,
  SystemLanguage__Enum_German = 15,
  SystemLanguage__Enum_Greek = 16,
  SystemLanguage__Enum_Hebrew = 17,
  SystemLanguage__Enum_Icelandic = 19,
  SystemLanguage__Enum_Indonesian = 20,
  SystemLanguage__Enum_Italian = 21,
  SystemLanguage__Enum_Japanese = 22,
  SystemLanguage__Enum_Korean = 23,
  SystemLanguage__Enum_Latvian = 24,
  SystemLanguage__Enum_Lithuanian = 25,
  SystemLanguage__Enum_Norwegian = 26,
  SystemLanguage__Enum_Polish = 27,
  SystemLanguage__Enum_Portuguese = 28,
  SystemLanguage__Enum_Romanian = 29,
  SystemLanguage__Enum_Russian = 30,
  SystemLanguage__Enum_SerboCroatian = 31,
  SystemLanguage__Enum_Slovak = 32,
  SystemLanguage__Enum_Slovenian = 33,
  SystemLanguage__Enum_Spanish = 34,
  SystemLanguage__Enum_SpanishMexican = 35,
  SystemLanguage__Enum_Swedish = 36,
  SystemLanguage__Enum_Thai = 37,
  SystemLanguage__Enum_Turkish = 38,
  SystemLanguage__Enum_Ukrainian = 39,
  SystemLanguage__Enum_Vietnamese = 40,
  SystemLanguage__Enum_ChineseSimplified = 41,
  SystemLanguage__Enum_ChineseTraditional = 42,
  SystemLanguage__Enum_Unknown = 43,
  SystemLanguage__Enum_Hungarian = 18,
};
struct SystemLanguage__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SystemLanguage__Enum value;
};

enum ThreadPriority__Enum_1 : int32_t {
  ThreadPriority__Enum_1_Low = 0,
  ThreadPriority__Enum_1_BelowNormal = 1,
  ThreadPriority__Enum_1_Normal = 2,
  ThreadPriority__Enum_1_High = 4,
};
struct ThreadPriority__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ThreadPriority__Enum_1 value;
};

enum NetworkReachability__Enum : int32_t {
  NetworkReachability__Enum_NotReachable = 0,
  NetworkReachability__Enum_ReachableViaCarrierDataNetwork = 1,
  NetworkReachability__Enum_ReachableViaLocalAreaNetwork = 2,
};
struct NetworkReachability__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NetworkReachability__Enum value;
};

struct Application_LogCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct Application_LogCallback {
  struct Application_LogCallback__Class *klass;
  struct MonitorData *monitor;
  struct Application_LogCallback__Fields fields;
};
enum LogType__Enum : int32_t {
  LogType__Enum_Error = 0,
  LogType__Enum_Assert = 1,
  LogType__Enum_Warning = 2,
  LogType__Enum_Log = 3,
  LogType__Enum_Exception = 4,
};
struct LogType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LogType__Enum value;
};
struct Application_LogCallback__VTable {
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
struct Application_LogCallback__StaticFields {
};
struct Application_LogCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Application_LogCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Application_LogCallback__VTable vtable;
};

struct YieldInstruction {
  struct YieldInstruction__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) AsyncOperation_1__Fields {
  void * m_Ptr;
  struct Action_1_UnityEngine_AsyncOperation_ * m_completeCallback;
};
struct AsyncOperation_1 {
  struct AsyncOperation_1__Class *klass;
  struct MonitorData *monitor;
  struct AsyncOperation_1__Fields fields;
};
struct Action_1_UnityEngine_AsyncOperation___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_AsyncOperation_ {
  struct Action_1_UnityEngine_AsyncOperation___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_AsyncOperation___Fields fields;
};
struct YieldInstruction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct YieldInstruction__StaticFields {
};
struct YieldInstruction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct YieldInstruction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct YieldInstruction__VTable vtable;
};
struct Action_1_UnityEngine_AsyncOperation___VTable {
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
struct Action_1_UnityEngine_AsyncOperation___StaticFields {
};
struct Action_1_UnityEngine_AsyncOperation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_AsyncOperation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_AsyncOperation___VTable vtable;
};
struct AsyncOperation_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncOperation_1__StaticFields {
};
struct AsyncOperation_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncOperation_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncOperation_1__VTable vtable;
};

struct Application_ControllerStateChanged__Fields {
  struct MulticastDelegate__Fields _;
};
struct Application_ControllerStateChanged {
  struct Application_ControllerStateChanged__Class *klass;
  struct MonitorData *monitor;
  struct Application_ControllerStateChanged__Fields fields;
};
struct Application_ControllerStateChanged__VTable {
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
struct Application_ControllerStateChanged__StaticFields {
};
struct Application_ControllerStateChanged__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Application_ControllerStateChanged__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Application_ControllerStateChanged__VTable vtable;
};

struct Application_LowMemoryCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct Application_LowMemoryCallback {
  struct Application_LowMemoryCallback__Class *klass;
  struct MonitorData *monitor;
  struct Application_LowMemoryCallback__Fields fields;
};
struct Application_LowMemoryCallback__VTable {
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
struct Application_LowMemoryCallback__StaticFields {
};
struct Application_LowMemoryCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Application_LowMemoryCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Application_LowMemoryCallback__VTable vtable;
};

struct AsyncGPUReadbackRequest {
  void * m_Ptr;
  int32_t m_Version;
};
struct AsyncGPUReadbackRequest__Boxed {
  struct AsyncGPUReadbackRequest__Class *klass;
  struct MonitorData *monitor;
  struct AsyncGPUReadbackRequest fields;
};
struct AsyncGPUReadbackRequest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncGPUReadbackRequest__StaticFields {
};
struct AsyncGPUReadbackRequest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncGPUReadbackRequest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncGPUReadbackRequest__VTable vtable;
};

struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ {
  struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___Fields fields;
};
struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___VTable {
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
struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___StaticFields {
};
struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___VTable vtable;
};

struct __declspec(align(8)) Object_1__Fields {
  void * m_CachedPtr;
};
struct Object_1 {
  struct Object_1__Class *klass;
  struct MonitorData *monitor;
  struct Object_1__Fields fields;
};
struct Texture__Fields {
  struct Object_1__Fields _;
};
struct Texture {
  struct Texture__Class *klass;
  struct MonitorData *monitor;
  struct Texture__Fields fields;
};
enum TextureDimension__Enum : int32_t {
  TextureDimension__Enum_Unknown = -1,
  TextureDimension__Enum_None = 0,
  TextureDimension__Enum_Any = 1,
  TextureDimension__Enum_Tex2D = 2,
  TextureDimension__Enum_Tex3D = 3,
  TextureDimension__Enum_Cube = 4,
  TextureDimension__Enum_Tex2DArray = 5,
  TextureDimension__Enum_CubeArray = 6,
};
struct TextureDimension__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TextureDimension__Enum value;
};
struct Object_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Object_1__StaticFields {
  int32_t OffsetOfInstanceIDInCPlusPlusObject;
};
struct Object_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Object_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Object_1__VTable vtable;
};
struct Texture__VTable {
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
struct Texture__StaticFields {
};
struct Texture__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Texture__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Texture__VTable vtable;
};

struct MonoPInvokeCallbackAttribute_1 {
  struct MonoPInvokeCallbackAttribute_1__Class *klass;
  struct MonitorData *monitor;
};
struct MonoPInvokeCallbackAttribute_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct MonoPInvokeCallbackAttribute_1__StaticFields {
};
struct MonoPInvokeCallbackAttribute_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoPInvokeCallbackAttribute_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoPInvokeCallbackAttribute_1__VTable vtable;
};

struct DisallowMultipleComponent {
  struct DisallowMultipleComponent__Class *klass;
  struct MonitorData *monitor;
};
struct DisallowMultipleComponent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DisallowMultipleComponent__StaticFields {
};
struct DisallowMultipleComponent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisallowMultipleComponent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisallowMultipleComponent__VTable vtable;
};

struct __declspec(align(8)) RequireComponent__Fields {
  struct Type * m_Type0;
  struct Type * m_Type1;
  struct Type * m_Type2;
};
struct RequireComponent {
  struct RequireComponent__Class *klass;
  struct MonitorData *monitor;
  struct RequireComponent__Fields fields;
};
struct RequireComponent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct RequireComponent__StaticFields {
};
struct RequireComponent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RequireComponent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RequireComponent__VTable vtable;
};

struct __declspec(align(8)) AddComponentMenu__Fields {
  struct String * m_AddComponentMenu;
  int32_t m_Ordering;
};
struct AddComponentMenu {
  struct AddComponentMenu__Class *klass;
  struct MonitorData *monitor;
  struct AddComponentMenu__Fields fields;
};
struct AddComponentMenu__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AddComponentMenu__StaticFields {
};
struct AddComponentMenu__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddComponentMenu__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddComponentMenu__VTable vtable;
};

struct __declspec(align(8)) CreateAssetMenuAttribute__Fields {
  struct String * _menuName_k__BackingField;
  struct String * _fileName_k__BackingField;
  int32_t _order_k__BackingField;
};
struct CreateAssetMenuAttribute {
  struct CreateAssetMenuAttribute__Class *klass;
  struct MonitorData *monitor;
  struct CreateAssetMenuAttribute__Fields fields;
};
struct CreateAssetMenuAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct CreateAssetMenuAttribute__StaticFields {
};
struct CreateAssetMenuAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CreateAssetMenuAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CreateAssetMenuAttribute__VTable vtable;
};

struct __declspec(align(8)) ContextMenu__Fields {
  struct String * menuItem;
  bool validate;
  int32_t priority;
};
struct ContextMenu {
  struct ContextMenu__Class *klass;
  struct MonitorData *monitor;
  struct ContextMenu__Fields fields;
};
struct ContextMenu__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ContextMenu__StaticFields {
};
struct ContextMenu__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContextMenu__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContextMenu__VTable vtable;
};

struct ExecuteInEditMode {
  struct ExecuteInEditMode__Class *klass;
  struct MonitorData *monitor;
};
struct ExecuteInEditMode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ExecuteInEditMode__StaticFields {
};
struct ExecuteInEditMode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExecuteInEditMode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExecuteInEditMode__VTable vtable;
};

struct ExecuteAlways {
  struct ExecuteAlways__Class *klass;
  struct MonitorData *monitor;
};
struct ExecuteAlways__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ExecuteAlways__StaticFields {
};
struct ExecuteAlways__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExecuteAlways__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExecuteAlways__VTable vtable;
};

struct HideInInspector {
  struct HideInInspector__Class *klass;
  struct MonitorData *monitor;
};
struct HideInInspector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct HideInInspector__StaticFields {
};
struct HideInInspector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HideInInspector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HideInInspector__VTable vtable;
};

struct __declspec(align(8)) HelpURLAttribute__Fields {
  struct String * m_Url;
};
struct HelpURLAttribute {
  struct HelpURLAttribute__Class *klass;
  struct MonitorData *monitor;
  struct HelpURLAttribute__Fields fields;
};
struct HelpURLAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct HelpURLAttribute__StaticFields {
};
struct HelpURLAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HelpURLAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HelpURLAttribute__VTable vtable;
};

struct __declspec(align(8)) DefaultExecutionOrder__Fields {
  int32_t _order_k__BackingField;
};
struct DefaultExecutionOrder {
  struct DefaultExecutionOrder__Class *klass;
  struct MonitorData *monitor;
  struct DefaultExecutionOrder__Fields fields;
};
struct DefaultExecutionOrder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DefaultExecutionOrder__StaticFields {
};
struct DefaultExecutionOrder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultExecutionOrder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultExecutionOrder__VTable vtable;
};

struct ExcludeFromPresetAttribute {
  struct ExcludeFromPresetAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct ExcludeFromPresetAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ExcludeFromPresetAttribute__StaticFields {
};
struct ExcludeFromPresetAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExcludeFromPresetAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExcludeFromPresetAttribute__VTable vtable;
};

struct Component_1__Fields {
  struct Object_1__Fields _;
  struct Transform * m_cachedTransform;
  struct GameObject * m_cachedGameObject;
  bool m_transformCached;
  bool m_gameObjectCached;
};
struct Component_1 {
  struct Component_1__Class *klass;
  struct MonitorData *monitor;
  struct Component_1__Fields fields;
};
struct Behaviour__Fields {
  struct Component_1__Fields _;
};
struct Behaviour {
  struct Behaviour__Class *klass;
  struct MonitorData *monitor;
  struct Behaviour__Fields fields;
};
struct Transform__Fields {
  struct Component_1__Fields _;
};
struct Transform {
  struct Transform__Class *klass;
  struct MonitorData *monitor;
  struct Transform__Fields fields;
};
struct GameObject__Fields {
  struct Object_1__Fields _;
};
struct GameObject {
  struct GameObject__Class *klass;
  struct MonitorData *monitor;
  struct GameObject__Fields fields;
};
struct Transform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
};
struct Transform__StaticFields {
};
struct Transform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Transform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Transform__VTable vtable;
};
struct GameObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameObject__StaticFields {
};
struct GameObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameObject__VTable vtable;
};
struct Component_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Component_1__StaticFields {
};
struct Component_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Component_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Component_1__VTable vtable;
};
struct Behaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Behaviour__StaticFields {
};
struct Behaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Behaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Behaviour__VTable vtable;
};

struct __declspec(align(8)) BootConfigData__Fields {
  void * m_Ptr;
};
struct BootConfigData {
  struct BootConfigData__Class *klass;
  struct MonitorData *monitor;
  struct BootConfigData__Fields fields;
};
struct BootConfigData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BootConfigData__StaticFields {
};
struct BootConfigData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BootConfigData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BootConfigData__VTable vtable;
};

struct Vector3 {
  float x;
  float y;
  float z;
};
struct Vector3__Boxed {
  struct Vector3__Class *klass;
  struct MonitorData *monitor;
  struct Vector3 fields;
};
struct Bounds {
  struct Vector3 m_Center;
  struct Vector3 m_Extents;
};
struct Bounds__Boxed {
  struct Bounds__Class *klass;
  struct MonitorData *monitor;
  struct Bounds fields;
};
struct Vector3__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Vector3__StaticFields {
  struct Vector3 zeroVector;
  struct Vector3 oneVector;
  struct Vector3 upVector;
  struct Vector3 downVector;
  struct Vector3 leftVector;
  struct Vector3 rightVector;
  struct Vector3 forwardVector;
  struct Vector3 backVector;
  struct Vector3 positiveInfinityVector;
  struct Vector3 negativeInfinityVector;
};
struct Vector3__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vector3__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vector3__VTable vtable;
};
struct Bounds__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct Bounds__StaticFields {
};
struct Bounds__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Bounds__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Bounds__VTable vtable;
};

struct Ray {
  struct Vector3 m_Origin;
  struct Vector3 m_Direction;
};
struct Ray__Boxed {
  struct Ray__Class *klass;
  struct MonitorData *monitor;
  struct Ray fields;
};}