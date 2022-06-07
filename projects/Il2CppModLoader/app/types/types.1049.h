namespace app {
enum class EVRApplicationError__Enum : int32_t {
    None = 0x00000000,
    AppKeyAlreadyExists = 0x00000064,
    NoManifest = 0x00000065,
    NoApplication = 0x00000066,
    InvalidIndex = 0x00000067,
    UnknownApplication = 0x00000068,
    IPCFailed = 0x00000069,
    ApplicationAlreadyRunning = 0x0000006a,
    InvalidManifest = 0x0000006b,
    InvalidApplication = 0x0000006c,
    LaunchFailed = 0x0000006d,
    ApplicationAlreadyStarting = 0x0000006e,
    LaunchInProgress = 0x0000006f,
    OldApplicationQuitting = 0x00000070,
    TransitionAborted = 0x00000071,
    IsTemplate = 0x00000072,
    SteamVRIsExiting = 0x00000073,
    BufferTooSmall = 0x000000c8,
    PropertyNotSet = 0x000000c9,
    UnknownProperty = 0x000000ca,
    InvalidParameter = 0x000000cb,
};

struct EVRApplicationError__Enum__Boxed {
    struct EVRApplicationError__Enum__Class *klass;
    MonitorData *monitor;
    EVRApplicationError__Enum value;
    
};

struct EVRApplicationError__Enum__VTable {
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

struct EVRApplicationError__Enum__StaticFields {
};

struct EVRApplicationError__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EVRApplicationError__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EVRApplicationError__Enum__VTable vtable;
};

struct IVRApplications_AddApplicationManifest__VTable {
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

struct IVRApplications_AddApplicationManifest__StaticFields {
};

struct IVRApplications_AddApplicationManifest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_AddApplicationManifest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_AddApplicationManifest__VTable vtable;
};

struct IVRApplications_RemoveApplicationManifest__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_RemoveApplicationManifest {
    struct IVRApplications_RemoveApplicationManifest__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_RemoveApplicationManifest__Fields fields;
};

struct IVRApplications_RemoveApplicationManifest__VTable {
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

struct IVRApplications_RemoveApplicationManifest__StaticFields {
};

struct IVRApplications_RemoveApplicationManifest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_RemoveApplicationManifest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_RemoveApplicationManifest__VTable vtable;
};

struct IVRApplications_IsApplicationInstalled__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_IsApplicationInstalled {
    struct IVRApplications_IsApplicationInstalled__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_IsApplicationInstalled__Fields fields;
};

struct IVRApplications_IsApplicationInstalled__VTable {
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

struct IVRApplications_IsApplicationInstalled__StaticFields {
};

struct IVRApplications_IsApplicationInstalled__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_IsApplicationInstalled__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_IsApplicationInstalled__VTable vtable;
};

struct IVRApplications_GetApplicationCount__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_GetApplicationCount {
    struct IVRApplications_GetApplicationCount__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_GetApplicationCount__Fields fields;
};

struct IVRApplications_GetApplicationCount__VTable {
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

struct IVRApplications_GetApplicationCount__StaticFields {
};

struct IVRApplications_GetApplicationCount__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_GetApplicationCount__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_GetApplicationCount__VTable vtable;
};

struct IVRApplications_GetApplicationKeyByIndex__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_GetApplicationKeyByIndex {
    struct IVRApplications_GetApplicationKeyByIndex__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_GetApplicationKeyByIndex__Fields fields;
};

struct IVRApplications_GetApplicationKeyByIndex__VTable {
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

struct IVRApplications_GetApplicationKeyByIndex__StaticFields {
};

struct IVRApplications_GetApplicationKeyByIndex__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_GetApplicationKeyByIndex__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_GetApplicationKeyByIndex__VTable vtable;
};

struct IVRApplications_GetApplicationKeyByProcessId__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_GetApplicationKeyByProcessId {
    struct IVRApplications_GetApplicationKeyByProcessId__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_GetApplicationKeyByProcessId__Fields fields;
};

struct IVRApplications_GetApplicationKeyByProcessId__VTable {
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

struct IVRApplications_GetApplicationKeyByProcessId__StaticFields {
};

struct IVRApplications_GetApplicationKeyByProcessId__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_GetApplicationKeyByProcessId__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_GetApplicationKeyByProcessId__VTable vtable;
};

struct IVRApplications_LaunchApplication__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_LaunchApplication {
    struct IVRApplications_LaunchApplication__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_LaunchApplication__Fields fields;
};

struct IVRApplications_LaunchApplication__VTable {
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

struct IVRApplications_LaunchApplication__StaticFields {
};

struct IVRApplications_LaunchApplication__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_LaunchApplication__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_LaunchApplication__VTable vtable;
};

struct IVRApplications_LaunchTemplateApplication__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_LaunchTemplateApplication {
    struct IVRApplications_LaunchTemplateApplication__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_LaunchTemplateApplication__Fields fields;
};

struct AppOverrideKeys_t {
    void *pchKey;
    void *pchValue;
};

struct AppOverrideKeys_t__Boxed {
    struct AppOverrideKeys_t__Class *klass;
    MonitorData *monitor;
    struct AppOverrideKeys_t fields;
};

struct AppOverrideKeys_t__Array {
    struct AppOverrideKeys_t__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AppOverrideKeys_t vector[32];
};

struct AppOverrideKeys_t__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AppOverrideKeys_t__StaticFields {
};

struct AppOverrideKeys_t__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AppOverrideKeys_t__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AppOverrideKeys_t__VTable vtable;
};

struct AppOverrideKeys_t__Array__VTable {
};

struct AppOverrideKeys_t__Array__StaticFields {
};

struct AppOverrideKeys_t__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AppOverrideKeys_t__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AppOverrideKeys_t__Array__VTable vtable;
};

struct IVRApplications_LaunchTemplateApplication__VTable {
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

struct IVRApplications_LaunchTemplateApplication__StaticFields {
};

struct IVRApplications_LaunchTemplateApplication__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_LaunchTemplateApplication__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_LaunchTemplateApplication__VTable vtable;
};

struct IVRApplications_LaunchApplicationFromMimeType__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_LaunchApplicationFromMimeType {
    struct IVRApplications_LaunchApplicationFromMimeType__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_LaunchApplicationFromMimeType__Fields fields;
};

struct IVRApplications_LaunchApplicationFromMimeType__VTable {
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

struct IVRApplications_LaunchApplicationFromMimeType__StaticFields {
};

struct IVRApplications_LaunchApplicationFromMimeType__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_LaunchApplicationFromMimeType__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_LaunchApplicationFromMimeType__VTable vtable;
};

struct IVRApplications_LaunchDashboardOverlay__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_LaunchDashboardOverlay {
    struct IVRApplications_LaunchDashboardOverlay__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_LaunchDashboardOverlay__Fields fields;
};

struct IVRApplications_LaunchDashboardOverlay__VTable {
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

struct IVRApplications_LaunchDashboardOverlay__StaticFields {
};

struct IVRApplications_LaunchDashboardOverlay__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_LaunchDashboardOverlay__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_LaunchDashboardOverlay__VTable vtable;
};

struct IVRApplications_CancelApplicationLaunch__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_CancelApplicationLaunch {
    struct IVRApplications_CancelApplicationLaunch__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_CancelApplicationLaunch__Fields fields;
};

struct IVRApplications_CancelApplicationLaunch__VTable {
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

struct IVRApplications_CancelApplicationLaunch__StaticFields {
};

struct IVRApplications_CancelApplicationLaunch__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_CancelApplicationLaunch__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_CancelApplicationLaunch__VTable vtable;
};

struct IVRApplications_IdentifyApplication__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_IdentifyApplication {
    struct IVRApplications_IdentifyApplication__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_IdentifyApplication__Fields fields;
};

struct IVRApplications_IdentifyApplication__VTable {
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

struct IVRApplications_IdentifyApplication__StaticFields {
};

struct IVRApplications_IdentifyApplication__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_IdentifyApplication__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_IdentifyApplication__VTable vtable;
};

struct IVRApplications_GetApplicationProcessId__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_GetApplicationProcessId {
    struct IVRApplications_GetApplicationProcessId__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_GetApplicationProcessId__Fields fields;
};

struct IVRApplications_GetApplicationProcessId__VTable {
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

struct IVRApplications_GetApplicationProcessId__StaticFields {
};

struct IVRApplications_GetApplicationProcessId__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_GetApplicationProcessId__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_GetApplicationProcessId__VTable vtable;
};

struct IVRApplications_GetApplicationsErrorNameFromEnum__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_GetApplicationsErrorNameFromEnum {
    struct IVRApplications_GetApplicationsErrorNameFromEnum__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_GetApplicationsErrorNameFromEnum__Fields fields;
};

struct IVRApplications_GetApplicationsErrorNameFromEnum__VTable {
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

struct IVRApplications_GetApplicationsErrorNameFromEnum__StaticFields {
};

struct IVRApplications_GetApplicationsErrorNameFromEnum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_GetApplicationsErrorNameFromEnum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_GetApplicationsErrorNameFromEnum__VTable vtable;
};

struct IVRApplications_GetApplicationPropertyString__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_GetApplicationPropertyString {
    struct IVRApplications_GetApplicationPropertyString__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_GetApplicationPropertyString__Fields fields;
};

enum class EVRApplicationProperty__Enum : int32_t {
    Name_String = 0x00000000,
    LaunchType_String = 0x0000000b,
    WorkingDirectory_String = 0x0000000c,
    BinaryPath_String = 0x0000000d,
    Arguments_String = 0x0000000e,
    URL_String = 0x0000000f,
    Description_String = 0x00000032,
    NewsURL_String = 0x00000033,
    ImagePath_String = 0x00000034,
    Source_String = 0x00000035,
    IsDashboardOverlay_Bool = 0x0000003c,
    IsTemplate_Bool = 0x0000003d,
    IsInstanced_Bool = 0x0000003e,
    IsInternal_Bool = 0x0000003f,
    WantsCompositorPauseInStandby_Bool = 0x00000040,
    LastLaunchTime_Uint64 = 0x00000046,
};

struct EVRApplicationProperty__Enum__Boxed {
    struct EVRApplicationProperty__Enum__Class *klass;
    MonitorData *monitor;
    EVRApplicationProperty__Enum value;
    
};

struct EVRApplicationProperty__Enum__VTable {
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

struct EVRApplicationProperty__Enum__StaticFields {
};

struct EVRApplicationProperty__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EVRApplicationProperty__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EVRApplicationProperty__Enum__VTable vtable;
};

struct EVRApplicationError___VTable {
};

struct EVRApplicationError___StaticFields {
};

struct EVRApplicationError___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EVRApplicationError___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EVRApplicationError___VTable vtable;
};

struct IVRApplications_GetApplicationPropertyString__VTable {
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

struct IVRApplications_GetApplicationPropertyString__StaticFields {
};

struct IVRApplications_GetApplicationPropertyString__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_GetApplicationPropertyString__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_GetApplicationPropertyString__VTable vtable;
};

struct IVRApplications_GetApplicationPropertyBool__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_GetApplicationPropertyBool {
    struct IVRApplications_GetApplicationPropertyBool__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_GetApplicationPropertyBool__Fields fields;
};

struct IVRApplications_GetApplicationPropertyBool__VTable {
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

struct IVRApplications_GetApplicationPropertyBool__StaticFields {
};

struct IVRApplications_GetApplicationPropertyBool__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_GetApplicationPropertyBool__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_GetApplicationPropertyBool__VTable vtable;
};

struct IVRApplications_GetApplicationPropertyUint64__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_GetApplicationPropertyUint64 {
    struct IVRApplications_GetApplicationPropertyUint64__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_GetApplicationPropertyUint64__Fields fields;
};

struct IVRApplications_GetApplicationPropertyUint64__VTable {
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

struct IVRApplications_GetApplicationPropertyUint64__StaticFields {
};

struct IVRApplications_GetApplicationPropertyUint64__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_GetApplicationPropertyUint64__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_GetApplicationPropertyUint64__VTable vtable;
};

struct IVRApplications_SetApplicationAutoLaunch__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_SetApplicationAutoLaunch {
    struct IVRApplications_SetApplicationAutoLaunch__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_SetApplicationAutoLaunch__Fields fields;
};

struct IVRApplications_SetApplicationAutoLaunch__VTable {
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

struct IVRApplications_SetApplicationAutoLaunch__StaticFields {
};

struct IVRApplications_SetApplicationAutoLaunch__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_SetApplicationAutoLaunch__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_SetApplicationAutoLaunch__VTable vtable;
};

struct IVRApplications_GetApplicationAutoLaunch__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_GetApplicationAutoLaunch {
    struct IVRApplications_GetApplicationAutoLaunch__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_GetApplicationAutoLaunch__Fields fields;
};

struct IVRApplications_GetApplicationAutoLaunch__VTable {
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

struct IVRApplications_GetApplicationAutoLaunch__StaticFields {
};

struct IVRApplications_GetApplicationAutoLaunch__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_GetApplicationAutoLaunch__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_GetApplicationAutoLaunch__VTable vtable;
};

struct IVRApplications_SetDefaultApplicationForMimeType__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_SetDefaultApplicationForMimeType {
    struct IVRApplications_SetDefaultApplicationForMimeType__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_SetDefaultApplicationForMimeType__Fields fields;
};

struct IVRApplications_SetDefaultApplicationForMimeType__VTable {
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

struct IVRApplications_SetDefaultApplicationForMimeType__StaticFields {
};

struct IVRApplications_SetDefaultApplicationForMimeType__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IVRApplications_SetDefaultApplicationForMimeType__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IVRApplications_SetDefaultApplicationForMimeType__VTable vtable;
};

struct IVRApplications_GetDefaultApplicationForMimeType__Fields {
    struct MulticastDelegate__Fields _;
};

struct IVRApplications_GetDefaultApplicationForMimeType {
    struct IVRApplications_GetDefaultApplicationForMimeType__Class *klass;
    MonitorData *monitor;
    struct IVRApplications_GetDefaultApplicationForMimeType__Fields fields;
};

}
