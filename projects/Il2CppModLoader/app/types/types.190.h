namespace app {
struct AnimationCurve {
    struct AnimationCurve__Class *klass;
    MonitorData *monitor;
    struct AnimationCurve__Fields fields;
};

struct Keyframe__Array {
    struct Keyframe__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Keyframe vector[32];
};

struct AnimationCurve__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
};

struct AnimationCurve__StaticFields {
};

struct AnimationCurve__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationCurve__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationCurve__VTable vtable;
};

struct Keyframe__Array__VTable {
};

struct Keyframe__Array__StaticFields {
};

struct Keyframe__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Keyframe__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Keyframe__Array__VTable vtable;
};

enum class WrapMode__Enum : int32_t {
    Once = 0x00000001,
    Loop = 0x00000002,
    PingPong = 0x00000004,
    Default = 0x00000000,
    ClampForever = 0x00000008,
    Clamp = 0x00000001,
};

struct WrapMode__Enum__Boxed {
    struct WrapMode__Enum__Class *klass;
    MonitorData *monitor;
    WrapMode__Enum value;
    
};

struct WrapMode__Enum__VTable {
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

struct WrapMode__Enum__StaticFields {
};

struct WrapMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WrapMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WrapMode__Enum__VTable vtable;
};

struct Keyframe___VTable {
};

struct Keyframe___StaticFields {
};

struct Keyframe___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Keyframe___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Keyframe___VTable vtable;
};

enum class Application_NvnBufferUsage__Enum : int32_t {
    None = 0x00000000,
    Generic = 0x00000001,
    Texture = 0x00000002,
    TextureCompressible = 0x00000003,
    Shader = 0x00000004,
    RenderTarget = 0x00000005,
    RenderTargetCompressible = 0x00000006,
    LBuffer = 0x00000007,
    GPUScratch = 0x00000008,
    TexturePerm = 0x00000009,
    TextureCompressiblePerm = 0x0000000a,
    ShaderPerm = 0x0000000b,
    RenderTargetPerm = 0x0000000c,
    RenderTargetCompressiblePerm = 0x0000000d,
    Count = 0x0000000e,
};

struct Application_NvnBufferUsage__Enum__Boxed {
    struct Application_NvnBufferUsage__Enum__Class *klass;
    MonitorData *monitor;
    Application_NvnBufferUsage__Enum value;
    
};

struct Application_NvnBufferUsage__Enum__VTable {
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

struct Application_NvnBufferUsage__Enum__StaticFields {
};

struct Application_NvnBufferUsage__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Application_NvnBufferUsage__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Application_NvnBufferUsage__Enum__VTable vtable;
};

enum class Application_JobFilterGroup__Enum : int32_t {
    None = 0x00000000,
    Physics = 0x00000001,
};

struct Application_JobFilterGroup__Enum__Boxed {
    struct Application_JobFilterGroup__Enum__Class *klass;
    MonitorData *monitor;
    Application_JobFilterGroup__Enum value;
    
};

struct Application_JobFilterGroup__Enum__VTable {
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

struct Application_JobFilterGroup__Enum__StaticFields {
};

struct Application_JobFilterGroup__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Application_JobFilterGroup__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Application_JobFilterGroup__Enum__VTable vtable;
};

enum class RuntimePlatform__Enum : int32_t {
    OSXEditor = 0x00000000,
    OSXPlayer = 0x00000001,
    WindowsPlayer = 0x00000002,
    OSXWebPlayer = 0x00000003,
    OSXDashboardPlayer = 0x00000004,
    WindowsWebPlayer = 0x00000005,
    WindowsEditor = 0x00000007,
    IPhonePlayer = 0x00000008,
    XBOX360 = 0x0000000a,
    PS3 = 0x00000009,
    Android = 0x0000000b,
    NaCl = 0x0000000c,
    FlashPlayer = 0x0000000f,
    LinuxPlayer = 0x0000000d,
    LinuxEditor = 0x00000010,
    WebGLPlayer = 0x00000011,
    MetroPlayerX86 = 0x00000012,
    WSAPlayerX86 = 0x00000012,
    MetroPlayerX64 = 0x00000013,
    WSAPlayerX64 = 0x00000013,
    MetroPlayerARM = 0x00000014,
    WSAPlayerARM = 0x00000014,
    WP8Player = 0x00000015,
    BlackBerryPlayer = 0x00000016,
    TizenPlayer = 0x00000017,
    PSP2 = 0x00000018,
    PS4 = 0x00000019,
    PSM = 0x0000001a,
    XboxOne = 0x0000001b,
    SamsungTVPlayer = 0x0000001c,
    WiiU = 0x0000001e,
    tvOS = 0x0000001f,
    Switch = 0x00000020,
    Lumin = 0x00000021,
};

struct RuntimePlatform__Enum__Boxed {
    struct RuntimePlatform__Enum__Class *klass;
    MonitorData *monitor;
    RuntimePlatform__Enum value;
    
};

struct RuntimePlatform__Enum__VTable {
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

struct RuntimePlatform__Enum__StaticFields {
};

struct RuntimePlatform__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RuntimePlatform__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RuntimePlatform__Enum__VTable vtable;
};

enum class SystemLanguage__Enum : int32_t {
    Afrikaans = 0x00000000,
    Arabic = 0x00000001,
    Basque = 0x00000002,
    Belarusian = 0x00000003,
    Bulgarian = 0x00000004,
    Catalan = 0x00000005,
    Chinese = 0x00000006,
    Czech = 0x00000007,
    Danish = 0x00000008,
    Dutch = 0x00000009,
    English = 0x0000000a,
    Estonian = 0x0000000b,
    Faroese = 0x0000000c,
    Finnish = 0x0000000d,
    French = 0x0000000e,
    German = 0x0000000f,
    Greek = 0x00000010,
    Hebrew = 0x00000011,
    Icelandic = 0x00000013,
    Indonesian = 0x00000014,
    Italian = 0x00000015,
    Japanese = 0x00000016,
    Korean = 0x00000017,
    Latvian = 0x00000018,
    Lithuanian = 0x00000019,
    Norwegian = 0x0000001a,
    Polish = 0x0000001b,
    Portuguese = 0x0000001c,
    Romanian = 0x0000001d,
    Russian = 0x0000001e,
    SerboCroatian = 0x0000001f,
    Slovak = 0x00000020,
    Slovenian = 0x00000021,
    Spanish = 0x00000022,
    SpanishMexican = 0x00000023,
    Swedish = 0x00000024,
    Thai = 0x00000025,
    Turkish = 0x00000026,
    Ukrainian = 0x00000027,
    Vietnamese = 0x00000028,
    ChineseSimplified = 0x00000029,
    ChineseTraditional = 0x0000002a,
    Unknown = 0x0000002b,
    Hungarian = 0x00000012,
};

struct SystemLanguage__Enum__Boxed {
    struct SystemLanguage__Enum__Class *klass;
    MonitorData *monitor;
    SystemLanguage__Enum value;
    
};

struct SystemLanguage__Enum__VTable {
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

struct SystemLanguage__Enum__StaticFields {
};

struct SystemLanguage__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SystemLanguage__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SystemLanguage__Enum__VTable vtable;
};

enum class ThreadPriority__Enum_1 : int32_t {
    Low = 0x00000000,
    BelowNormal = 0x00000001,
    Normal = 0x00000002,
    High = 0x00000004,
};

struct ThreadPriority__Enum_1__Boxed {
    struct ThreadPriority__Enum_1__Class *klass;
    MonitorData *monitor;
    ThreadPriority__Enum_1 value;
    
};

struct ThreadPriority__Enum_1__VTable {
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

struct ThreadPriority__Enum_1__StaticFields {
};

struct ThreadPriority__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadPriority__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadPriority__Enum_1__VTable vtable;
};

enum class NetworkReachability__Enum : int32_t {
    NotReachable = 0x00000000,
    ReachableViaCarrierDataNetwork = 0x00000001,
    ReachableViaLocalAreaNetwork = 0x00000002,
};

struct NetworkReachability__Enum__Boxed {
    struct NetworkReachability__Enum__Class *klass;
    MonitorData *monitor;
    NetworkReachability__Enum value;
    
};

struct NetworkReachability__Enum__VTable {
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

struct NetworkReachability__Enum__StaticFields {
};

struct NetworkReachability__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NetworkReachability__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NetworkReachability__Enum__VTable vtable;
};

struct Application_LogCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct Application_LogCallback {
    struct Application_LogCallback__Class *klass;
    MonitorData *monitor;
    struct Application_LogCallback__Fields fields;
};

enum class LogType__Enum : int32_t {
    Error = 0x00000000,
    Assert = 0x00000001,
    Warning = 0x00000002,
    Log = 0x00000003,
    Exception = 0x00000004,
};

struct LogType__Enum__Boxed {
    struct LogType__Enum__Class *klass;
    MonitorData *monitor;
    LogType__Enum value;
    
};

struct LogType__Enum__VTable {
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

struct LogType__Enum__StaticFields {
};

struct LogType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LogType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LogType__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Application_LogCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Application_LogCallback__VTable vtable;
};

struct YieldInstruction {
    struct YieldInstruction__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) AsyncOperation_1__Fields {
    void *m_Ptr;
    struct Action_1_UnityEngine_AsyncOperation_ *m_completeCallback;
};

struct AsyncOperation_1 {
    struct AsyncOperation_1__Class *klass;
    MonitorData *monitor;
    struct AsyncOperation_1__Fields fields;
};

struct Action_1_UnityEngine_AsyncOperation___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_UnityEngine_AsyncOperation_ {
    struct Action_1_UnityEngine_AsyncOperation___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct YieldInstruction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_UnityEngine_AsyncOperation___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncOperation_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncOperation_1__VTable vtable;
};

struct Application_ControllerStateChanged__Fields {
    struct MulticastDelegate__Fields _;
};

struct Application_ControllerStateChanged {
    struct Application_ControllerStateChanged__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Application_ControllerStateChanged__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Application_ControllerStateChanged__VTable vtable;
};

struct Application_LowMemoryCallback__Fields {
    struct MulticastDelegate__Fields _;
};

struct Application_LowMemoryCallback {
    struct Application_LowMemoryCallback__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Application_LowMemoryCallback__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Application_LowMemoryCallback__VTable vtable;
};

struct AsyncGPUReadbackRequest {
    void *m_Ptr;
    int32_t m_Version;
};

struct AsyncGPUReadbackRequest__Boxed {
    struct AsyncGPUReadbackRequest__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncGPUReadbackRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncGPUReadbackRequest__VTable vtable;
};

struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ {
    struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest___VTable vtable;
};

struct AsyncGPUReadbackRequest___VTable {
};

struct AsyncGPUReadbackRequest___StaticFields {
};

struct AsyncGPUReadbackRequest___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncGPUReadbackRequest___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncGPUReadbackRequest___VTable vtable;
};

struct __declspec(align(8)) Object_1__Fields {
    void *m_CachedPtr;
};

struct Object_1 {
    struct Object_1__Class *klass;
    MonitorData *monitor;
    struct Object_1__Fields fields;
};

struct Texture__Fields {
    struct Object_1__Fields _;
};

struct Texture {
    struct Texture__Class *klass;
    MonitorData *monitor;
    struct Texture__Fields fields;
};

enum class TextureDimension__Enum : int32_t {
    Unknown = -1,
    None = 0x00000000,
    Any = 0x00000001,
    Tex2D = 0x00000002,
    Tex3D = 0x00000003,
    Cube = 0x00000004,
    Tex2DArray = 0x00000005,
    CubeArray = 0x00000006,
};

struct TextureDimension__Enum__Boxed {
    struct TextureDimension__Enum__Class *klass;
    MonitorData *monitor;
    TextureDimension__Enum value;
    
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Object_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Object_1__VTable vtable;
};

struct TextureDimension__Enum__VTable {
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

struct TextureDimension__Enum__StaticFields {
};

struct TextureDimension__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TextureDimension__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TextureDimension__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Texture__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Texture__VTable vtable;
};

struct MonoPInvokeCallbackAttribute_1 {
    struct MonoPInvokeCallbackAttribute_1__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MonoPInvokeCallbackAttribute_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MonoPInvokeCallbackAttribute_1__VTable vtable;
};

}
