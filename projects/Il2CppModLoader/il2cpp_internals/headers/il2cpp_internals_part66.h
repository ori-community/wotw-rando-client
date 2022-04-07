namespace app {
struct AsyncStreamReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose;
};
struct AsyncStreamReader__StaticFields {
};
struct AsyncStreamReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncStreamReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncStreamReader__VTable vtable;
};

enum Process_StreamReadMode__Enum : int32_t {
  Process_StreamReadMode__Enum_undefined = 0,
  Process_StreamReadMode__Enum_syncMode = 1,
  Process_StreamReadMode__Enum_asyncMode = 2,
};
struct Process_StreamReadMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Process_StreamReadMode__Enum value;
};
struct Process__Fields {
  struct Component__Fields _;
  bool haveProcessId;
  int32_t processId;
  bool haveProcessHandle;
  struct SafeProcessHandle * m_processHandle;
  bool isRemoteMachine;
  struct String * machineName;
  int32_t m_processAccess;
  struct ProcessThreadCollection * threads;
  struct ProcessModuleCollection * modules;
  bool haveWorkingSetLimits;
  bool havePriorityClass;
  struct ProcessStartInfo * startInfo;
  bool watchForExit;
  bool watchingForExit;
  struct EventHandler * onExited;
  bool exited;
  int32_t exitCode;
  bool signaled;
  bool haveExitTime;
  bool raisedOnExited;
  struct RegisteredWaitHandle * registeredWaitHandle;
  struct WaitHandle * waitHandle;
  struct ISynchronizeInvoke * synchronizingObject;
  struct StreamReader * standardOutput;
  struct StreamWriter * standardInput;
  struct StreamReader * standardError;
  bool disposed;
  enum Process_StreamReadMode__Enum outputStreamReadMode;
  enum Process_StreamReadMode__Enum errorStreamReadMode;
  enum Process_StreamReadMode__Enum inputStreamReadMode;
  struct AsyncStreamReader * output;
  struct AsyncStreamReader * error;
  struct String * process_name;
};
struct Process {
  struct Process__Class *klass;
  struct MonitorData *monitor;
  struct Process__Fields fields;
};
struct ProcessThreadCollection__Fields {
  struct ReadOnlyCollectionBase__Fields _;
};
struct ProcessThreadCollection {
  struct ProcessThreadCollection__Class *klass;
  struct MonitorData *monitor;
  struct ProcessThreadCollection__Fields fields;
};
struct ProcessModuleCollection__Fields {
  struct ReadOnlyCollectionBase__Fields _;
};
struct ProcessModuleCollection {
  struct ProcessModuleCollection__Class *klass;
  struct MonitorData *monitor;
  struct ProcessModuleCollection__Fields fields;
};
enum ProcessWindowStyle__Enum : int32_t {
  ProcessWindowStyle__Enum_Hidden = 1,
  ProcessWindowStyle__Enum_Maximized = 3,
  ProcessWindowStyle__Enum_Minimized = 2,
  ProcessWindowStyle__Enum_Normal = 0,
};
struct ProcessWindowStyle__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ProcessWindowStyle__Enum value;
};
struct __declspec(align(8)) ProcessStartInfo__Fields {
  struct String * fileName;
  struct String * arguments;
  struct String * directory;
  struct String * verb;
  enum ProcessWindowStyle__Enum windowStyle;
  bool errorDialog;
  void * errorDialogParentHandle;
  bool useShellExecute;
  struct String * userName;
  struct String * domain;
  struct SecureString * password;
  struct String * passwordInClearText;
  bool loadUserProfile;
  bool redirectStandardInput;
  bool redirectStandardOutput;
  bool redirectStandardError;
  struct Encoding * standardOutputEncoding;
  struct Encoding * standardErrorEncoding;
  bool createNoWindow;
  struct WeakReference * weakParentProcess;
  struct StringDictionary * environmentVariables;
  struct IDictionary_2_System_String_System_String_ * environment;
};
struct ProcessStartInfo {
  struct ProcessStartInfo__Class *klass;
  struct MonitorData *monitor;
  struct ProcessStartInfo__Fields fields;
};
struct __declspec(align(8)) StringDictionary__Fields {
  struct Hashtable * contents;
};
struct StringDictionary {
  struct StringDictionary__Class *klass;
  struct MonitorData *monitor;
  struct StringDictionary__Fields fields;
};
struct ProcessThreadCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetEnumerator_1;
};
struct ProcessThreadCollection__StaticFields {
};
struct ProcessThreadCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProcessThreadCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProcessThreadCollection__VTable vtable;
};
struct ProcessModuleCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData GetEnumerator_1;
};
struct ProcessModuleCollection__StaticFields {
};
struct ProcessModuleCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProcessModuleCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProcessModuleCollection__VTable vtable;
};
struct StringDictionary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData Remove;
};
struct StringDictionary__StaticFields {
};
struct StringDictionary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StringDictionary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StringDictionary__VTable vtable;
};
struct ProcessStartInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ProcessStartInfo__StaticFields {
  struct String__Array * empty;
};
struct ProcessStartInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProcessStartInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProcessStartInfo__VTable vtable;
};
struct Process__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData get_Site;
  VirtualInvokeData set_Site;
  VirtualInvokeData add_Disposed;
  VirtualInvokeData remove_Disposed;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanRaiseEvents;
  VirtualInvokeData get_Site_1;
  VirtualInvokeData set_Site_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData GetService;
};
struct Process__StaticFields {
};
struct Process__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Process__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Process__VTable vtable;
};

struct ProcessInfo {
  struct ProcessInfo__Class *klass;
  struct MonitorData *monitor;
};
struct ProcessInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ProcessInfo__StaticFields {
};
struct ProcessInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProcessInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProcessInfo__VTable vtable;
};

enum Process_State__Enum : int32_t {
  Process_State__Enum_HaveId = 1,
  Process_State__Enum_IsLocal = 2,
  Process_State__Enum_IsNt = 4,
  Process_State__Enum_HaveProcessInfo = 8,
  Process_State__Enum_Exited = 16,
  Process_State__Enum_Associated = 32,
  Process_State__Enum_IsWin2k = 64,
  Process_State__Enum_HaveNtProcessInfo = 12,
};
struct Process_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Process_State__Enum value;
};

struct Process_ProcInfo {
  void * process_handle;
  int32_t pid;
  struct String__Array * envVariables;
  struct String * UserName;
  struct String * Domain;
  void * Password;
  bool LoadUserProfile;
};
struct Process_ProcInfo__Boxed {
  struct Process_ProcInfo__Class *klass;
  struct MonitorData *monitor;
  struct Process_ProcInfo fields;
};
struct Process_ProcInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Process_ProcInfo__StaticFields {
};
struct Process_ProcInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Process_ProcInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Process_ProcInfo__VTable vtable;
};

struct ProcessWaitHandle__Fields {
  struct WaitHandle__Fields _;
};
struct ProcessWaitHandle {
  struct ProcessWaitHandle__Class *klass;
  struct MonitorData *monitor;
  struct ProcessWaitHandle__Fields fields;
};
struct ProcessWaitHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_Handle;
  VirtualInvokeData set_Handle;
  VirtualInvokeData WaitOne;
  VirtualInvokeData WaitOne_1;
  VirtualInvokeData WaitOne_2;
  VirtualInvokeData WaitOne_3;
  VirtualInvokeData WaitOne_4;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
};
struct ProcessWaitHandle__StaticFields {
};
struct ProcessWaitHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProcessWaitHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProcessWaitHandle__VTable vtable;
};

struct MonitoringDescriptionAttribute__Fields {
  struct DescriptionAttribute__Fields _;
};
struct MonitoringDescriptionAttribute {
  struct MonitoringDescriptionAttribute__Class *klass;
  struct MonitorData *monitor;
  struct MonitoringDescriptionAttribute__Fields fields;
};
struct MonitoringDescriptionAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
  VirtualInvokeData get_Description;
};
struct MonitoringDescriptionAttribute__StaticFields {
};
struct MonitoringDescriptionAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonitoringDescriptionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonitoringDescriptionAttribute__VTable vtable;
};

struct __declspec(align(8)) Stopwatch__Fields {
  int64_t elapsed;
  int64_t started;
  bool is_running;
};
struct Stopwatch {
  struct Stopwatch__Class *klass;
  struct MonitorData *monitor;
  struct Stopwatch__Fields fields;
};
struct Stopwatch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Stopwatch__StaticFields {
  int64_t Frequency;
  bool IsHighResolution;
};
struct Stopwatch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stopwatch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stopwatch__VTable vtable;
};

struct ExcludeFromCodeCoverageAttribute {
  struct ExcludeFromCodeCoverageAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct ExcludeFromCodeCoverageAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ExcludeFromCodeCoverageAttribute__StaticFields {
};
struct ExcludeFromCodeCoverageAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExcludeFromCodeCoverageAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExcludeFromCodeCoverageAttribute__VTable vtable;
};

struct __declspec(align(8)) AddingNewEventArgs__Fields {
  struct Object * newObject;
};
struct AddingNewEventArgs {
  struct AddingNewEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct AddingNewEventArgs__Fields fields;
};
struct AddingNewEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AddingNewEventArgs__StaticFields {
};
struct AddingNewEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddingNewEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddingNewEventArgs__VTable vtable;
};

struct AddingNewEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct AddingNewEventHandler {
  struct AddingNewEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct AddingNewEventHandler__Fields fields;
};
struct AddingNewEventHandler__VTable {
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
struct AddingNewEventHandler__StaticFields {
};
struct AddingNewEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AddingNewEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AddingNewEventHandler__VTable vtable;
};

struct __declspec(align(8)) AmbientValueAttribute__Fields {
  struct Object * value;
};
struct AmbientValueAttribute {
  struct AmbientValueAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AmbientValueAttribute__Fields fields;
};
struct AmbientValueAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AmbientValueAttribute__StaticFields {
};
struct AmbientValueAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AmbientValueAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AmbientValueAttribute__VTable vtable;
};

struct CollectionConverter {
  struct CollectionConverter__Class *klass;
  struct MonitorData *monitor;
};
struct ArrayConverter {
  struct ArrayConverter__Class *klass;
  struct MonitorData *monitor;
};
struct CollectionConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanConvertFrom;
  VirtualInvokeData CanConvertTo;
  VirtualInvokeData ConvertFrom;
  VirtualInvokeData ConvertTo;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCreateInstanceSupported;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertiesSupported;
  VirtualInvokeData GetStandardValues;
  VirtualInvokeData GetStandardValuesExclusive;
  VirtualInvokeData GetStandardValuesSupported;
  VirtualInvokeData IsValid;
};
struct CollectionConverter__StaticFields {
};
struct CollectionConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CollectionConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CollectionConverter__VTable vtable;
};
struct ArrayConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CanConvertFrom;
  VirtualInvokeData CanConvertTo;
  VirtualInvokeData ConvertFrom;
  VirtualInvokeData ConvertTo;
  VirtualInvokeData CreateInstance;
  VirtualInvokeData GetCreateInstanceSupported;
  VirtualInvokeData GetProperties;
  VirtualInvokeData GetPropertiesSupported;
  VirtualInvokeData GetStandardValues;
  VirtualInvokeData GetStandardValuesExclusive;
  VirtualInvokeData GetStandardValuesSupported;
  VirtualInvokeData IsValid;
};
struct ArrayConverter__StaticFields {
};
struct ArrayConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArrayConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArrayConverter__VTable vtable;
};

struct __declspec(align(8)) ArraySubsetEnumerator__Fields {
  struct Array * array;
  int32_t total;
  int32_t current;
};
struct ArraySubsetEnumerator {
  struct ArraySubsetEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct ArraySubsetEnumerator__Fields fields;
};
struct ArraySubsetEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct ArraySubsetEnumerator__StaticFields {
};
struct ArraySubsetEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArraySubsetEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArraySubsetEnumerator__VTable vtable;
};

struct __declspec(align(8)) AsyncCompletedEventArgs__Fields {
  struct Exception * error;
  bool cancelled;
  struct Object * userState;
};
struct AsyncCompletedEventArgs {
  struct AsyncCompletedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct AsyncCompletedEventArgs__Fields fields;
};
struct AsyncCompletedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncCompletedEventArgs__StaticFields {
};
struct AsyncCompletedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncCompletedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncCompletedEventArgs__VTable vtable;
};

struct AsyncCompletedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct AsyncCompletedEventHandler {
  struct AsyncCompletedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct AsyncCompletedEventHandler__Fields fields;
};
struct AsyncCompletedEventHandler__VTable {
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
struct AsyncCompletedEventHandler__StaticFields {
};
struct AsyncCompletedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncCompletedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncCompletedEventHandler__VTable vtable;
};

struct __declspec(align(8)) AsyncOperation__Fields {
  struct SynchronizationContext * syncContext;
  struct Object * userSuppliedState;
  bool alreadyCompleted;
};
struct AsyncOperation {
  struct AsyncOperation__Class *klass;
  struct MonitorData *monitor;
  struct AsyncOperation__Fields fields;
};
struct AsyncOperation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncOperation__StaticFields {
};
struct AsyncOperation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncOperation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncOperation__VTable vtable;
};

struct __declspec(align(8)) AttributeProviderAttribute__Fields {
  struct String * _typeName;
  struct String * _propertyName;
};
struct AttributeProviderAttribute {
  struct AttributeProviderAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AttributeProviderAttribute__Fields fields;
};
struct AttributeProviderAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AttributeProviderAttribute__StaticFields {
};
struct AttributeProviderAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttributeProviderAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttributeProviderAttribute__VTable vtable;
};

struct BackgroundWorker__Fields {
  struct Component__Fields _;
  bool canCancelWorker;
  bool workerReportsProgress;
  bool cancellationPending;
  bool isRunning;
  struct AsyncOperation * asyncOperation;
  struct BackgroundWorker_WorkerThreadStartDelegate * threadStart;
  struct SendOrPostCallback * operationCompleted;
  struct SendOrPostCallback * progressReporter;
};
struct BackgroundWorker {
  struct BackgroundWorker__Class *klass;
  struct MonitorData *monitor;
  struct BackgroundWorker__Fields fields;
};
struct BackgroundWorker_WorkerThreadStartDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct BackgroundWorker_WorkerThreadStartDelegate {
  struct BackgroundWorker_WorkerThreadStartDelegate__Class *klass;
  struct MonitorData *monitor;
  struct BackgroundWorker_WorkerThreadStartDelegate__Fields fields;
};
struct __declspec(align(8)) CancelEventArgs__Fields {
  bool cancel;
};
struct CancelEventArgs {
  struct CancelEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct CancelEventArgs__Fields fields;
};
struct DoWorkEventArgs__Fields {
  struct CancelEventArgs__Fields _;
  struct Object * result;
  struct Object * argument;
};
struct DoWorkEventArgs {
  struct DoWorkEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct DoWorkEventArgs__Fields fields;
};
struct RunWorkerCompletedEventArgs__Fields {
  struct AsyncCompletedEventArgs__Fields _;
  struct Object * result;
};
struct RunWorkerCompletedEventArgs {
  struct RunWorkerCompletedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct RunWorkerCompletedEventArgs__Fields fields;
};
struct __declspec(align(8)) ProgressChangedEventArgs__Fields {
  int32_t progressPercentage;
  struct Object * userState;
};
struct ProgressChangedEventArgs {
  struct ProgressChangedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct ProgressChangedEventArgs__Fields fields;
};
struct BackgroundWorker_WorkerThreadStartDelegate__VTable {
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
struct BackgroundWorker_WorkerThreadStartDelegate__StaticFields {
};
struct BackgroundWorker_WorkerThreadStartDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BackgroundWorker_WorkerThreadStartDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BackgroundWorker_WorkerThreadStartDelegate__VTable vtable;
};
struct CancelEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CancelEventArgs__StaticFields {
};
struct CancelEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CancelEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CancelEventArgs__VTable vtable;
};
struct DoWorkEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DoWorkEventArgs__StaticFields {
};
struct DoWorkEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DoWorkEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DoWorkEventArgs__VTable vtable;
};
struct RunWorkerCompletedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RunWorkerCompletedEventArgs__StaticFields {
};
struct RunWorkerCompletedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RunWorkerCompletedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RunWorkerCompletedEventArgs__VTable vtable;
};
struct ProgressChangedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ProgressChangedEventArgs__StaticFields {
};
struct ProgressChangedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProgressChangedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProgressChangedEventArgs__VTable vtable;
};
struct BackgroundWorker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData get_Site;
  VirtualInvokeData set_Site;
  VirtualInvokeData add_Disposed;
  VirtualInvokeData remove_Disposed;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanRaiseEvents;
  VirtualInvokeData get_Site_1;
  VirtualInvokeData set_Site_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData GetService;
  VirtualInvokeData OnDoWork;
  VirtualInvokeData OnRunWorkerCompleted;
  VirtualInvokeData OnProgressChanged;
};
struct BackgroundWorker__StaticFields {
  struct Object * doWorkKey;
  struct Object * runWorkerCompletedKey;
  struct Object * progressChangedKey;
};
struct BackgroundWorker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BackgroundWorker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BackgroundWorker__VTable vtable;
};

struct DoWorkEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DoWorkEventHandler {
  struct DoWorkEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct DoWorkEventHandler__Fields fields;
};
struct DoWorkEventHandler__VTable {
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
struct DoWorkEventHandler__StaticFields {
};
struct DoWorkEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DoWorkEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DoWorkEventHandler__VTable vtable;
};

struct ProgressChangedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct ProgressChangedEventHandler {
  struct ProgressChangedEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct ProgressChangedEventHandler__Fields fields;
};
struct ProgressChangedEventHandler__VTable {
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
struct ProgressChangedEventHandler__StaticFields {
};
struct ProgressChangedEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProgressChangedEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProgressChangedEventHandler__VTable vtable;
};

struct RunWorkerCompletedEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};}