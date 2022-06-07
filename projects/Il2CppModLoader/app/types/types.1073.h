namespace app {
struct XalPlatformOperationResult__Enum__StaticFields {
};

struct XalPlatformOperationResult__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalPlatformOperationResult__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalPlatformOperationResult__Enum__VTable vtable;
};

struct XalService__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData CleanupAsync;
    VirtualInvokeData Cleanup;
    VirtualInvokeData GetMaxUsers;
    VirtualInvokeData SetPlatformStorageEventHandlers;
    VirtualInvokeData SetPlatformWebViewEventHandler;
    VirtualInvokeData SetPlatformWebShowUrlComplete;
    VirtualInvokeData SetPlatformRemoteConnectHandlers;
    VirtualInvokeData TryAddFirstUserSilentAsync;
    VirtualInvokeData AddUserWithUiAsync;
};

struct XalService__StaticFields {
    struct XalService_XalLogCallback *LogCallback;
    XalTraceLevel__Enum TraceLevel;
    
    struct XalService *instance;
};

struct XalService__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService__VTable vtable;
};

struct XalService_AsyncCompletionRoutine__Fields {
    struct MulticastDelegate__Fields _;
};

struct XalService_AsyncCompletionRoutine {
    struct XalService_AsyncCompletionRoutine__Class *klass;
    MonitorData *monitor;
    struct XalService_AsyncCompletionRoutine__Fields fields;
};

struct XalService_AsyncCompletionRoutine__VTable {
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

struct XalService_AsyncCompletionRoutine__StaticFields {
};

struct XalService_AsyncCompletionRoutine__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_AsyncCompletionRoutine__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_AsyncCompletionRoutine__VTable vtable;
};

struct XalService_CommonArgs {
    uint32_t Flags;
    uint32_t TitleId;
    struct String *ClientId;
    struct String *Sandbox;
    struct String *RedirectUri;
    struct String *CorrelationVector;
    bool UseRemoteConnect;
    bool DisableDiagnosticTelemetry;
    void *AndroidAppContext;
};

struct XalService_CommonArgs__Boxed {
    struct XalService_CommonArgs__Class *klass;
    MonitorData *monitor;
    struct XalService_CommonArgs fields;
};

struct XalService_DeviceInfoArgs {
    struct String *DeviceType;
    struct String *OsVersion;
    struct String *DeviceId;
};

struct XalService_DeviceInfoArgs__Boxed {
    struct XalService_DeviceInfoArgs__Class *klass;
    MonitorData *monitor;
    struct XalService_DeviceInfoArgs fields;
};

struct XalService_TelemetryInfoArgs {
    struct String *ApplicationId;
    struct String *ApplicationVersion;
    struct String *OsName;
    struct String *OsVersion;
    struct String *OsLocale;
    struct String *DeviceClass;
    struct String *DeviceId;
};

struct XalService_TelemetryInfoArgs__Boxed {
    struct XalService_TelemetryInfoArgs__Class *klass;
    MonitorData *monitor;
    struct XalService_TelemetryInfoArgs fields;
};

struct XalService_CommonArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_CommonArgs__StaticFields {
};

struct XalService_CommonArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_CommonArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_CommonArgs__VTable vtable;
};

struct XalService_CommonArgs___VTable {
};

struct XalService_CommonArgs___StaticFields {
};

struct XalService_CommonArgs___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_CommonArgs___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_CommonArgs___VTable vtable;
};

struct XalService_DeviceInfoArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_DeviceInfoArgs__StaticFields {
};

struct XalService_DeviceInfoArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_DeviceInfoArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_DeviceInfoArgs__VTable vtable;
};

struct XalService_DeviceInfoArgs___VTable {
};

struct XalService_DeviceInfoArgs___StaticFields {
};

struct XalService_DeviceInfoArgs___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_DeviceInfoArgs___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_DeviceInfoArgs___VTable vtable;
};

struct XalService_TelemetryInfoArgs__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_TelemetryInfoArgs__StaticFields {
};

struct XalService_TelemetryInfoArgs__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_TelemetryInfoArgs__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_TelemetryInfoArgs__VTable vtable;
};

struct XalService_TelemetryInfoArgs___VTable {
};

struct XalService_TelemetryInfoArgs___StaticFields {
};

struct XalService_TelemetryInfoArgs___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_TelemetryInfoArgs___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_TelemetryInfoArgs___VTable vtable;
};

enum class XalService_AsyncQueueCallbackType__Enum : int32_t {
    AsyncQueueCallbackType_Work = 0x00000000,
    AsyncQueueCallbackType_Completion = 0x00000001,
};

struct XalService_AsyncQueueCallbackType__Enum__Boxed {
    struct XalService_AsyncQueueCallbackType__Enum__Class *klass;
    MonitorData *monitor;
    XalService_AsyncQueueCallbackType__Enum value;
    
};

struct XalService_AsyncQueueCallbackType__Enum__VTable {
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

struct XalService_AsyncQueueCallbackType__Enum__StaticFields {
};

struct XalService_AsyncQueueCallbackType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_AsyncQueueCallbackType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_AsyncQueueCallbackType__Enum__VTable vtable;
};

struct XalService_XalPlatformWebShowUrlEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct XalService_XalPlatformWebShowUrlEventHandler {
    struct XalService_XalPlatformWebShowUrlEventHandler__Class *klass;
    MonitorData *monitor;
    struct XalService_XalPlatformWebShowUrlEventHandler__Fields fields;
};

struct XalService_XalPlatformWebShowUrlEventHandler__VTable {
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

struct XalService_XalPlatformWebShowUrlEventHandler__StaticFields {
};

struct XalService_XalPlatformWebShowUrlEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_XalPlatformWebShowUrlEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_XalPlatformWebShowUrlEventHandler__VTable vtable;
};

struct XalService_XalPlatformStorageEventHandlers {
    struct XalService_XalPlatformStorageWriteEventHandler *Write;
    struct XalService_XalPlatformStorageReadEventHandler *Read;
    struct XalService_XalPlatformStorageClearEventHandler *Clear;
    void *Context;
};

struct XalService_XalPlatformStorageEventHandlers__Boxed {
    struct XalService_XalPlatformStorageEventHandlers__Class *klass;
    MonitorData *monitor;
    struct XalService_XalPlatformStorageEventHandlers fields;
};

struct XalService_XalPlatformStorageWriteEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct XalService_XalPlatformStorageWriteEventHandler {
    struct XalService_XalPlatformStorageWriteEventHandler__Class *klass;
    MonitorData *monitor;
    struct XalService_XalPlatformStorageWriteEventHandler__Fields fields;
};

struct XalService_XalPlatformStorageReadEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct XalService_XalPlatformStorageReadEventHandler {
    struct XalService_XalPlatformStorageReadEventHandler__Class *klass;
    MonitorData *monitor;
    struct XalService_XalPlatformStorageReadEventHandler__Fields fields;
};

struct XalService_XalPlatformStorageClearEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct XalService_XalPlatformStorageClearEventHandler {
    struct XalService_XalPlatformStorageClearEventHandler__Class *klass;
    MonitorData *monitor;
    struct XalService_XalPlatformStorageClearEventHandler__Fields fields;
};

struct XalService_XalPlatformStorageWriteEventHandler__VTable {
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

struct XalService_XalPlatformStorageWriteEventHandler__StaticFields {
};

struct XalService_XalPlatformStorageWriteEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_XalPlatformStorageWriteEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_XalPlatformStorageWriteEventHandler__VTable vtable;
};

struct XalService_XalPlatformStorageReadEventHandler__VTable {
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

struct XalService_XalPlatformStorageReadEventHandler__StaticFields {
};

struct XalService_XalPlatformStorageReadEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_XalPlatformStorageReadEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_XalPlatformStorageReadEventHandler__VTable vtable;
};

struct XalService_XalPlatformStorageClearEventHandler__VTable {
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

struct XalService_XalPlatformStorageClearEventHandler__StaticFields {
};

struct XalService_XalPlatformStorageClearEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_XalPlatformStorageClearEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_XalPlatformStorageClearEventHandler__VTable vtable;
};

struct XalService_XalPlatformStorageEventHandlers__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_XalPlatformStorageEventHandlers__StaticFields {
};

struct XalService_XalPlatformStorageEventHandlers__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_XalPlatformStorageEventHandlers__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_XalPlatformStorageEventHandlers__VTable vtable;
};

struct XalService_XalPlatformStorageEventHandlers___VTable {
};

struct XalService_XalPlatformStorageEventHandlers___StaticFields {
};

struct XalService_XalPlatformStorageEventHandlers___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_XalPlatformStorageEventHandlers___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_XalPlatformStorageEventHandlers___VTable vtable;
};

struct XalService_XalPlatformRemoteConnectEventHandlers {
    struct XalService_XalPlatformRemoteConnectShowPromptEventHandler *Show;
    struct XalService_XalPlatformRemoteConnectClosePromptEventHandler *Close;
    void *Context;
};

struct XalService_XalPlatformRemoteConnectEventHandlers__Boxed {
    struct XalService_XalPlatformRemoteConnectEventHandlers__Class *klass;
    MonitorData *monitor;
    struct XalService_XalPlatformRemoteConnectEventHandlers fields;
};

struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct XalService_XalPlatformRemoteConnectShowPromptEventHandler {
    struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__Class *klass;
    MonitorData *monitor;
    struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__Fields fields;
};

struct XalService_XalPlatformRemoteConnectClosePromptEventHandler__Fields {
    struct MulticastDelegate__Fields _;
};

struct XalService_XalPlatformRemoteConnectClosePromptEventHandler {
    struct XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class *klass;
    MonitorData *monitor;
    struct XalService_XalPlatformRemoteConnectClosePromptEventHandler__Fields fields;
};

struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__VTable {
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

struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__StaticFields {
};

struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__VTable vtable;
};

struct XalService_XalPlatformRemoteConnectClosePromptEventHandler__VTable {
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

struct XalService_XalPlatformRemoteConnectClosePromptEventHandler__StaticFields {
};

struct XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_XalPlatformRemoteConnectClosePromptEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_XalPlatformRemoteConnectClosePromptEventHandler__VTable vtable;
};

struct XalService_XalPlatformRemoteConnectEventHandlers__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_XalPlatformRemoteConnectEventHandlers__StaticFields {
};

struct XalService_XalPlatformRemoteConnectEventHandlers__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_XalPlatformRemoteConnectEventHandlers__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_XalPlatformRemoteConnectEventHandlers__VTable vtable;
};

struct XalService_XalPlatformRemoteConnectEventHandlers___VTable {
};

struct XalService_XalPlatformRemoteConnectEventHandlers___StaticFields {
};

struct XalService_XalPlatformRemoteConnectEventHandlers___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_XalPlatformRemoteConnectEventHandlers___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_XalPlatformRemoteConnectEventHandlers___VTable vtable;
};

struct __declspec(align(8)) XalService_ManagedStorageHandlers__Fields {
    struct PlatformStorageWriteEventHandler *WriteHandler;
    struct PlatformStorageReadEventHandler *ReadHandler;
    struct PlatformStorageClearEventHandler *ClearHandler;
};

struct XalService_ManagedStorageHandlers {
    struct XalService_ManagedStorageHandlers__Class *klass;
    MonitorData *monitor;
    struct XalService_ManagedStorageHandlers__Fields fields;
};

struct XalService_ManagedStorageHandlers__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_ManagedStorageHandlers__StaticFields {
};

struct XalService_ManagedStorageHandlers__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_ManagedStorageHandlers__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_ManagedStorageHandlers__VTable vtable;
};

struct __declspec(align(8)) XalService_ManagedRemoteConnectHandlers__Fields {
    struct PlatformRemoteConnectShowPromptEventHandler *ShowHandler;
    struct PlatformRemoteConnectClosePromptEventHandler *CloseHandler;
    struct CancellationToken Cancellation;
};

struct XalService_ManagedRemoteConnectHandlers {
    struct XalService_ManagedRemoteConnectHandlers__Class *klass;
    MonitorData *monitor;
    struct XalService_ManagedRemoteConnectHandlers__Fields fields;
};

struct XalService_ManagedRemoteConnectHandlers__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_ManagedRemoteConnectHandlers__StaticFields {
};

struct XalService_ManagedRemoteConnectHandlers__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_ManagedRemoteConnectHandlers__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_ManagedRemoteConnectHandlers__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass16_0__Fields {
    struct XalService *__4__this;
    struct TaskCompletionSource_1_System_Boolean_ *tcs;
};

struct XalService_c_DisplayClass16_0 {
    struct XalService_c_DisplayClass16_0__Class *klass;
    MonitorData *monitor;
    struct XalService_c_DisplayClass16_0__Fields fields;
};

struct XalService_c_DisplayClass16_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_c_DisplayClass16_0__StaticFields {
};

struct XalService_c_DisplayClass16_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_c_DisplayClass16_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_c_DisplayClass16_0__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass22_0__Fields {
    void *operation;
};

struct XalService_c_DisplayClass22_0 {
    struct XalService_c_DisplayClass22_0__Class *klass;
    MonitorData *monitor;
    struct XalService_c_DisplayClass22_0__Fields fields;
};

struct XalService_c_DisplayClass22_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_c_DisplayClass22_0__StaticFields {
};

struct XalService_c_DisplayClass22_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_c_DisplayClass22_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_c_DisplayClass22_0__VTable vtable;
};

struct XalService_c {
    struct XalService_c__Class *klass;
    MonitorData *monitor;
};

struct XalService_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_c__StaticFields {
    struct XalService_c *__9;
    struct Action_1_System_Threading_Tasks_Task_ *__9__22_1;
    struct Action_1_System_Threading_Tasks_Task_ *__9__23_1;
    struct Action_1_System_Threading_Tasks_Task_ *__9__24_1;
};

struct XalService_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_c__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass23_0__Fields {
    void *operation;
};

struct XalService_c_DisplayClass23_0 {
    struct XalService_c_DisplayClass23_0__Class *klass;
    MonitorData *monitor;
    struct XalService_c_DisplayClass23_0__Fields fields;
};

struct XalService_c_DisplayClass23_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_c_DisplayClass23_0__StaticFields {
};

struct XalService_c_DisplayClass23_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_c_DisplayClass23_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_c_DisplayClass23_0__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass24_0__Fields {
    void *operation;
};

struct XalService_c_DisplayClass24_0 {
    struct XalService_c_DisplayClass24_0__Class *klass;
    MonitorData *monitor;
    struct XalService_c_DisplayClass24_0__Fields fields;
};

struct XalService_c_DisplayClass24_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_c_DisplayClass24_0__StaticFields {
};

struct XalService_c_DisplayClass24_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_c_DisplayClass24_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_c_DisplayClass24_0__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass28_0__Fields {
    void *operation;
};

struct XalService_c_DisplayClass28_0 {
    struct XalService_c_DisplayClass28_0__Class *klass;
    MonitorData *monitor;
    struct XalService_c_DisplayClass28_0__Fields fields;
};

struct XalService_c_DisplayClass28_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_c_DisplayClass28_0__StaticFields {
};

struct XalService_c_DisplayClass28_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_c_DisplayClass28_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_c_DisplayClass28_0__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass30_0__Fields {
    struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ *tcs;
    struct XalService *__4__this;
};

struct XalService_c_DisplayClass30_0 {
    struct XalService_c_DisplayClass30_0__Class *klass;
    MonitorData *monitor;
    struct XalService_c_DisplayClass30_0__Fields fields;
};

struct __declspec(align(8)) TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___Fields {
    struct Task_1_Microsoft_Xbox_Services_Xal_XalUser_ *m_task;
};

struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ {
    struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___Class *klass;
    MonitorData *monitor;
    struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___Fields fields;
};

struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___StaticFields {
};

struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___VTable vtable;
};

struct XalService_c_DisplayClass30_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_c_DisplayClass30_0__StaticFields {
};

struct XalService_c_DisplayClass30_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_c_DisplayClass30_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_c_DisplayClass30_0__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass31_0__Fields {
    struct XalService *__4__this;
    struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ *tcs;
};

struct XalService_c_DisplayClass31_0 {
    struct XalService_c_DisplayClass31_0__Class *klass;
    MonitorData *monitor;
    struct XalService_c_DisplayClass31_0__Fields fields;
};

struct XalService_c_DisplayClass31_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XalService_c_DisplayClass31_0__StaticFields {
};

struct XalService_c_DisplayClass31_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalService_c_DisplayClass31_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalService_c_DisplayClass31_0__VTable vtable;
};

enum class XalUserState__Enum : int32_t {
    SignedIn = 0x00000000,
    SigningOut = 0x00000001,
    SignedOut = 0x00000002,
};

struct XalUserState__Enum__Boxed {
    struct XalUserState__Enum__Class *klass;
    MonitorData *monitor;
    XalUserState__Enum value;
    
};

struct XalUserState__Enum__VTable {
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

struct XalUserState__Enum__StaticFields {
};

struct XalUserState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct XalUserState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct XalUserState__Enum__VTable vtable;
};

enum class XalAgeGroup__Enum : int32_t {
    Unknown = 0x00000000,
    Child = 0x00000001,
    Teen = 0x00000002,
    Adult = 0x00000003,
};

struct XalAgeGroup__Enum__Boxed {
    struct XalAgeGroup__Enum__Class *klass;
    MonitorData *monitor;
    XalAgeGroup__Enum value;
    
};

}
