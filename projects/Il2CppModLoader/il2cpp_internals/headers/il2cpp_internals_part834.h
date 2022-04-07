namespace app {
struct XalService_AsyncCompletionRoutine__StaticFields {
};
struct XalService_AsyncCompletionRoutine__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_AsyncCompletionRoutine__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_AsyncCompletionRoutine__VTable vtable;
};

struct XalService_CommonArgs {
  uint32_t Flags;
  uint32_t TitleId;
  struct String * ClientId;
  struct String * Sandbox;
  struct String * RedirectUri;
  struct String * CorrelationVector;
  bool UseRemoteConnect;
  bool DisableDiagnosticTelemetry;
  void * AndroidAppContext;
};
struct XalService_CommonArgs__Boxed {
  struct XalService_CommonArgs__Class *klass;
  struct MonitorData *monitor;
  struct XalService_CommonArgs fields;
};
struct XalService_DeviceInfoArgs {
  struct String * DeviceType;
  struct String * OsVersion;
  struct String * DeviceId;
};
struct XalService_DeviceInfoArgs__Boxed {
  struct XalService_DeviceInfoArgs__Class *klass;
  struct MonitorData *monitor;
  struct XalService_DeviceInfoArgs fields;
};
struct XalService_TelemetryInfoArgs {
  struct String * ApplicationId;
  struct String * ApplicationVersion;
  struct String * OsName;
  struct String * OsVersion;
  struct String * OsLocale;
  struct String * DeviceClass;
  struct String * DeviceId;
};
struct XalService_TelemetryInfoArgs__Boxed {
  struct XalService_TelemetryInfoArgs__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_CommonArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_CommonArgs__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_DeviceInfoArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_DeviceInfoArgs__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_TelemetryInfoArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_TelemetryInfoArgs__VTable vtable;
};

enum XalService_AsyncQueueCallbackType__Enum : int32_t {
  XalService_AsyncQueueCallbackType__Enum_AsyncQueueCallbackType_Work = 0,
  XalService_AsyncQueueCallbackType__Enum_AsyncQueueCallbackType_Completion = 1,
};
struct XalService_AsyncQueueCallbackType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XalService_AsyncQueueCallbackType__Enum value;
};

struct XalService_XalPlatformWebShowUrlEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct XalService_XalPlatformWebShowUrlEventHandler {
  struct XalService_XalPlatformWebShowUrlEventHandler__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_XalPlatformWebShowUrlEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_XalPlatformWebShowUrlEventHandler__VTable vtable;
};

struct XalService_XalPlatformStorageEventHandlers {
  struct XalService_XalPlatformStorageWriteEventHandler * Write;
  struct XalService_XalPlatformStorageReadEventHandler * Read;
  struct XalService_XalPlatformStorageClearEventHandler * Clear;
  void * Context;
};
struct XalService_XalPlatformStorageEventHandlers__Boxed {
  struct XalService_XalPlatformStorageEventHandlers__Class *klass;
  struct MonitorData *monitor;
  struct XalService_XalPlatformStorageEventHandlers fields;
};
struct XalService_XalPlatformStorageWriteEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct XalService_XalPlatformStorageWriteEventHandler {
  struct XalService_XalPlatformStorageWriteEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct XalService_XalPlatformStorageWriteEventHandler__Fields fields;
};
struct XalService_XalPlatformStorageReadEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct XalService_XalPlatformStorageReadEventHandler {
  struct XalService_XalPlatformStorageReadEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct XalService_XalPlatformStorageReadEventHandler__Fields fields;
};
struct XalService_XalPlatformStorageClearEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct XalService_XalPlatformStorageClearEventHandler {
  struct XalService_XalPlatformStorageClearEventHandler__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_XalPlatformStorageWriteEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_XalPlatformStorageReadEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_XalPlatformStorageClearEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_XalPlatformStorageEventHandlers__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_XalPlatformStorageEventHandlers__VTable vtable;
};

struct XalService_XalPlatformRemoteConnectEventHandlers {
  struct XalService_XalPlatformRemoteConnectShowPromptEventHandler * Show;
  struct XalService_XalPlatformRemoteConnectClosePromptEventHandler * Close;
  void * Context;
};
struct XalService_XalPlatformRemoteConnectEventHandlers__Boxed {
  struct XalService_XalPlatformRemoteConnectEventHandlers__Class *klass;
  struct MonitorData *monitor;
  struct XalService_XalPlatformRemoteConnectEventHandlers fields;
};
struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct XalService_XalPlatformRemoteConnectShowPromptEventHandler {
  struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__Fields fields;
};
struct XalService_XalPlatformRemoteConnectClosePromptEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct XalService_XalPlatformRemoteConnectClosePromptEventHandler {
  struct XalService_XalPlatformRemoteConnectClosePromptEventHandler__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_XalPlatformRemoteConnectShowPromptEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_XalPlatformRemoteConnectClosePromptEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_XalPlatformRemoteConnectEventHandlers__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_XalPlatformRemoteConnectEventHandlers__VTable vtable;
};

struct __declspec(align(8)) XalService_ManagedStorageHandlers__Fields {
  struct PlatformStorageWriteEventHandler * WriteHandler;
  struct PlatformStorageReadEventHandler * ReadHandler;
  struct PlatformStorageClearEventHandler * ClearHandler;
};
struct XalService_ManagedStorageHandlers {
  struct XalService_ManagedStorageHandlers__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_ManagedStorageHandlers__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_ManagedStorageHandlers__VTable vtable;
};

struct __declspec(align(8)) XalService_ManagedRemoteConnectHandlers__Fields {
  struct PlatformRemoteConnectShowPromptEventHandler * ShowHandler;
  struct PlatformRemoteConnectClosePromptEventHandler * CloseHandler;
  struct CancellationToken Cancellation;
};
struct XalService_ManagedRemoteConnectHandlers {
  struct XalService_ManagedRemoteConnectHandlers__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_ManagedRemoteConnectHandlers__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_ManagedRemoteConnectHandlers__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass16_0__Fields {
  struct XalService * __4__this;
  struct TaskCompletionSource_1_System_Boolean_ * tcs;
};
struct XalService_c_DisplayClass16_0 {
  struct XalService_c_DisplayClass16_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_c_DisplayClass16_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_c_DisplayClass16_0__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass22_0__Fields {
  void * operation;
};
struct XalService_c_DisplayClass22_0 {
  struct XalService_c_DisplayClass22_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_c_DisplayClass22_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_c_DisplayClass22_0__VTable vtable;
};

struct XalService_c {
  struct XalService_c__Class *klass;
  struct MonitorData *monitor;
};
struct XalService_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XalService_c__StaticFields {
  struct XalService_c * __9;
  struct Action_1_System_Threading_Tasks_Task_ * __9__22_1;
  struct Action_1_System_Threading_Tasks_Task_ * __9__23_1;
  struct Action_1_System_Threading_Tasks_Task_ * __9__24_1;
};
struct XalService_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_c__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass23_0__Fields {
  void * operation;
};
struct XalService_c_DisplayClass23_0 {
  struct XalService_c_DisplayClass23_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_c_DisplayClass23_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_c_DisplayClass23_0__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass24_0__Fields {
  void * operation;
};
struct XalService_c_DisplayClass24_0 {
  struct XalService_c_DisplayClass24_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_c_DisplayClass24_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_c_DisplayClass24_0__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass28_0__Fields {
  void * operation;
};
struct XalService_c_DisplayClass28_0 {
  struct XalService_c_DisplayClass28_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_c_DisplayClass28_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_c_DisplayClass28_0__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass30_0__Fields {
  struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ * tcs;
  struct XalService * __4__this;
};
struct XalService_c_DisplayClass30_0 {
  struct XalService_c_DisplayClass30_0__Class *klass;
  struct MonitorData *monitor;
  struct XalService_c_DisplayClass30_0__Fields fields;
};
struct __declspec(align(8)) TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___Fields {
  struct Task_1_Microsoft_Xbox_Services_Xal_XalUser_ * m_task;
};
struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ {
  struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_c_DisplayClass30_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_c_DisplayClass30_0__VTable vtable;
};

struct __declspec(align(8)) XalService_c_DisplayClass31_0__Fields {
  struct XalService * __4__this;
  struct TaskCompletionSource_1_Microsoft_Xbox_Services_Xal_XalUser_ * tcs;
};
struct XalService_c_DisplayClass31_0 {
  struct XalService_c_DisplayClass31_0__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalService_c_DisplayClass31_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalService_c_DisplayClass31_0__VTable vtable;
};

enum XalUserState__Enum : int32_t {
  XalUserState__Enum_SignedIn = 0,
  XalUserState__Enum_SigningOut = 1,
  XalUserState__Enum_SignedOut = 2,
};
struct XalUserState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XalUserState__Enum value;
};

enum XalAgeGroup__Enum : int32_t {
  XalAgeGroup__Enum_Unknown = 0,
  XalAgeGroup__Enum_Child = 1,
  XalAgeGroup__Enum_Teen = 2,
  XalAgeGroup__Enum_Adult = 3,
};
struct XalAgeGroup__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XalAgeGroup__Enum value;
};

enum XalPrivilege__Enum : int32_t {
  XalPrivilege__Enum_Clubs = 188,
  XalPrivilege__Enum_Sessions = 189,
  XalPrivilege__Enum_BroadCast = 190,
  XalPrivilege__Enum_ManageProfilePrivacy = 196,
  XalPrivilege__Enum_GameDvr = 198,
  XalPrivilege__Enum_MultiplayerParties = 203,
  XalPrivilege__Enum_CommsInGameVoice = 205,
  XalPrivilege__Enum_CloudManageSession = 207,
  XalPrivilege__Enum_CloudJoinSession = 208,
  XalPrivilege__Enum_CloudSavedGames = 209,
  XalPrivilege__Enum_SocialNetworkSharing = 220,
  XalPrivilege__Enum_Ugc = 247,
  XalPrivilege__Enum_Comms = 252,
  XalPrivilege__Enum_Multiplayer = 254,
  XalPrivilege__Enum_AddFriends = 255,
};
struct XalPrivilege__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XalPrivilege__Enum value;
};
enum XalPrivilegeCheckDenyReasons__Enum : int32_t {
  XalPrivilegeCheckDenyReasons__Enum_None = 0,
  XalPrivilegeCheckDenyReasons__Enum_PurchaseRequired = 1,
  XalPrivilegeCheckDenyReasons__Enum_Restricted = 2,
  XalPrivilegeCheckDenyReasons__Enum_Banned = 3,
  XalPrivilegeCheckDenyReasons__Enum_Unknown = -1,
};
struct XalPrivilegeCheckDenyReasons__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XalPrivilegeCheckDenyReasons__Enum value;
};
struct XalPrivilegeCheckResult {
  enum XalPrivilege__Enum Privilege;
  bool HasPrivilege;
  enum XalPrivilegeCheckDenyReasons__Enum DenyReasons;
};
struct XalPrivilegeCheckResult__Boxed {
  struct XalPrivilegeCheckResult__Class *klass;
  struct MonitorData *monitor;
  struct XalPrivilegeCheckResult fields;
};
struct XalPrivilegeCheckResult__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XalPrivilegeCheckResult__StaticFields {
};
struct XalPrivilegeCheckResult__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalPrivilegeCheckResult__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalPrivilegeCheckResult__VTable vtable;
};

enum XalGamerPictureSize__Enum : int32_t {
  XalGamerPictureSize__Enum_Small_64x64 = 0,
  XalGamerPictureSize__Enum_Medium_208x208 = 1,
  XalGamerPictureSize__Enum_Large_424x424 = 2,
  XalGamerPictureSize__Enum_ExtraLarge_1080x1080 = 3,
};
struct XalGamerPictureSize__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XalGamerPictureSize__Enum value;
};

struct XalUser_InternalXalUserLocalId {
  int64_t Value;
};
struct XalUser_InternalXalUserLocalId__Boxed {
  struct XalUser_InternalXalUserLocalId__Class *klass;
  struct MonitorData *monitor;
  struct XalUser_InternalXalUserLocalId fields;
};
struct XalUser_InternalXalUserLocalId__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XalUser_InternalXalUserLocalId__StaticFields {
};
struct XalUser_InternalXalUserLocalId__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalUser_InternalXalUserLocalId__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalUser_InternalXalUserLocalId__VTable vtable;
};

struct XalUser_XalUserChangeEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct XalUser_XalUserChangeEventHandler {
  struct XalUser_XalUserChangeEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct XalUser_XalUserChangeEventHandler__Fields fields;
};
struct XalUser_XalUserChangeEventHandler__VTable {
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
struct XalUser_XalUserChangeEventHandler__StaticFields {
};
struct XalUser_XalUserChangeEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalUser_XalUserChangeEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalUser_XalUserChangeEventHandler__VTable vtable;
};

struct __declspec(align(8)) XalUser_c_DisplayClass22_0__Fields {
  struct TaskCompletionSource_1_System_Boolean_ * tcs;
};
struct XalUser_c_DisplayClass22_0 {
  struct XalUser_c_DisplayClass22_0__Class *klass;
  struct MonitorData *monitor;
  struct XalUser_c_DisplayClass22_0__Fields fields;
};
struct XalUser_c_DisplayClass22_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XalUser_c_DisplayClass22_0__StaticFields {
};
struct XalUser_c_DisplayClass22_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalUser_c_DisplayClass22_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalUser_c_DisplayClass22_0__VTable vtable;
};

struct __declspec(align(8)) XalUser_c_DisplayClass25_0__Fields {
  struct Action_1_Int32_ * onError;
  struct Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_ * onComplete;
};
struct XalUser_c_DisplayClass25_0 {
  struct XalUser_c_DisplayClass25_0__Class *klass;
  struct MonitorData *monitor;
  struct XalUser_c_DisplayClass25_0__Fields fields;
};
struct XalUser_c_DisplayClass25_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XalUser_c_DisplayClass25_0__StaticFields {
};
struct XalUser_c_DisplayClass25_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalUser_c_DisplayClass25_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalUser_c_DisplayClass25_0__VTable vtable;
};

struct __declspec(align(8)) XalUser_c_DisplayClass26_0__Fields {
  struct TaskCompletionSource_1_System_Boolean_ * tcs;
};
struct XalUser_c_DisplayClass26_0 {
  struct XalUser_c_DisplayClass26_0__Class *klass;
  struct MonitorData *monitor;
  struct XalUser_c_DisplayClass26_0__Fields fields;
};
struct XalUser_c_DisplayClass26_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XalUser_c_DisplayClass26_0__StaticFields {
};
struct XalUser_c_DisplayClass26_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalUser_c_DisplayClass26_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalUser_c_DisplayClass26_0__VTable vtable;
};

struct __declspec(align(8)) XalUser_c_DisplayClass27_0__Fields {
  struct TaskCompletionSource_1_System_Byte_ * tcs;
};
struct XalUser_c_DisplayClass27_0 {
  struct XalUser_c_DisplayClass27_0__Class *klass;
  struct MonitorData *monitor;
  struct XalUser_c_DisplayClass27_0__Fields fields;
};
struct XalUser_c_DisplayClass27_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XalUser_c_DisplayClass27_0__StaticFields {
};
struct XalUser_c_DisplayClass27_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XalUser_c_DisplayClass27_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XalUser_c_DisplayClass27_0__VTable vtable;
};

struct Action_1_XGamingRuntime_XblAchievement___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_XGamingRuntime_XblAchievement_ {
  struct Action_1_XGamingRuntime_XblAchievement___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_XGamingRuntime_XblAchievement___Fields fields;
};
struct Action_1_XGamingRuntime_XblAchievement___VTable {
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
struct Action_1_XGamingRuntime_XblAchievement___StaticFields {
};
struct Action_1_XGamingRuntime_XblAchievement___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_XGamingRuntime_XblAchievement___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_XGamingRuntime_XblAchievement___VTable vtable;
};

struct Action_2_String_Int32___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_String_Int32_ {
  struct Action_2_String_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_String_Int32___Fields fields;
};
struct Action_2_String_Int32___VTable {
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
struct Action_2_String_Int32___StaticFields {
};
struct Action_2_String_Int32___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_String_Int32___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_String_Int32___VTable vtable;
};

struct Wrapper {
  struct Wrapper__Class *klass;
  struct MonitorData *monitor;
};
struct Wrapper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Wrapper__StaticFields {
  bool _InitializedOk_k__BackingField;
  bool _Initialized_k__BackingField;
  uint64_t m_userId;
  struct Action * SavesUpdates;
  struct Action * m_signedOutCallback;
  int32_t _SaveDataStateVersion_k__BackingField;
  struct XblContextHandle * m_xblContext;
  struct XUserHandle * m_userHandle;
  struct XRegistrationToken * m_userChangeToken;
  struct Action * m_signInComplete;
  struct Action * m_signInFailed;
  struct XGameSaveContainerHandle * m_blobContainer;
  struct XGameSaveProviderHandle * m_gameSaveProvider;
  bool m_canCheckGRDK;
  struct XGameSaveUpdateHandle * m_deleteUpdateHandle;
  bool m_downloadingSaves;
  struct Dictionary_2_System_String_System_Byte_ * m_blobsCache;
  int32_t m_savesInProgress;
};}