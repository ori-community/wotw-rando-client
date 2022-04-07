namespace app {
struct __declspec(align(8)) DynamicPropertyCollection__Fields {
  struct ArrayList * _properties;
};
struct DynamicPropertyCollection {
  struct DynamicPropertyCollection__Class *klass;
  struct MonitorData *monitor;
  struct DynamicPropertyCollection__Fields fields;
};
struct ContextCallbackObject__Fields {
  struct ContextBoundObject__Fields _;
};
struct ContextCallbackObject {
  struct ContextCallbackObject__Class *klass;
  struct MonitorData *monitor;
  struct ContextCallbackObject__Fields fields;
};
struct UIntPtr__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
};
struct UIntPtr__StaticFields {
  void * Zero;
};
struct UIntPtr__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UIntPtr__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UIntPtr__VTable vtable;
};
struct IMessageSink__VTable {
  VirtualInvokeData SyncProcessMessage;
  VirtualInvokeData AsyncProcessMessage;
};
struct IMessageSink__StaticFields {
};
struct IMessageSink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMessageSink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMessageSink__VTable vtable;
};
struct IContextProperty__VTable {
  VirtualInvokeData get_Name;
  VirtualInvokeData Freeze;
  VirtualInvokeData IsNewContextOK;
};
struct IContextProperty__StaticFields {
};
struct IContextProperty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IContextProperty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IContextProperty__VTable vtable;
};
struct IEnumerator_1_System_Runtime_Remoting_Contexts_IContextProperty___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Runtime_Remoting_Contexts_IContextProperty___StaticFields {
};
struct IEnumerator_1_System_Runtime_Remoting_Contexts_IContextProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Runtime_Remoting_Contexts_IContextProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Runtime_Remoting_Contexts_IContextProperty___VTable vtable;
};
struct List_1_System_Runtime_Remoting_Contexts_IContextProperty___VTable {
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
struct List_1_System_Runtime_Remoting_Contexts_IContextProperty___StaticFields {
  struct IContextProperty__Array * _emptyArray;
};
struct List_1_System_Runtime_Remoting_Contexts_IContextProperty___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Runtime_Remoting_Contexts_IContextProperty___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Runtime_Remoting_Contexts_IContextProperty___VTable vtable;
};
struct DynamicPropertyCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DynamicPropertyCollection__StaticFields {
};
struct DynamicPropertyCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicPropertyCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicPropertyCollection__VTable vtable;
};
struct ContextCallbackObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
};
struct ContextCallbackObject__StaticFields {
};
struct ContextCallbackObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContextCallbackObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContextCallbackObject__VTable vtable;
};
struct Context__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ContextID;
  VirtualInvokeData get_ContextProperties;
  VirtualInvokeData GetProperty;
  VirtualInvokeData SetProperty;
  VirtualInvokeData Freeze;
};
struct Context__StaticFields {
  struct Object__Array * local_slots;
  struct IMessageSink * default_server_context_sink;
  int32_t global_count;
  struct LocalDataStoreMgr * _localDataStoreMgr;
  struct DynamicPropertyCollection * global_dynamic_properties;
};
struct Context__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Context__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Context__VTable vtable;
};

struct __declspec(align(8)) CADMessageBase__Fields {
  struct Object__Array * _args;
  struct Byte__Array * _serializedArgs;
  int32_t _propertyCount;
  struct CADArgHolder * _callContext;
  struct Byte__Array * serializedMethod;
};
struct CADMessageBase {
  struct CADMessageBase__Class *klass;
  struct MonitorData *monitor;
  struct CADMessageBase__Fields fields;
};
struct CADMethodCallMessage__Fields {
  struct CADMessageBase__Fields _;
  struct String * _uri;
};
struct CADMethodCallMessage {
  struct CADMethodCallMessage__Class *klass;
  struct MonitorData *monitor;
  struct CADMethodCallMessage__Fields fields;
};
struct __declspec(align(8)) CADArgHolder__Fields {
  int32_t index;
};
struct CADArgHolder {
  struct CADArgHolder__Class *klass;
  struct MonitorData *monitor;
  struct CADArgHolder__Fields fields;
};
struct CADMethodReturnMessage__Fields {
  struct CADMessageBase__Fields _;
  struct Object * _returnValue;
  struct CADArgHolder * _exception;
  struct Type__Array * _sig;
};
struct CADMethodReturnMessage {
  struct CADMethodReturnMessage__Class *klass;
  struct MonitorData *monitor;
  struct CADMethodReturnMessage__Fields fields;
};
struct CADArgHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CADArgHolder__StaticFields {
};
struct CADArgHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CADArgHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CADArgHolder__VTable vtable;
};
struct CADMessageBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CADMessageBase__StaticFields {
};
struct CADMessageBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CADMessageBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CADMessageBase__VTable vtable;
};
struct CADMethodCallMessage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CADMethodCallMessage__StaticFields {
};
struct CADMethodCallMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CADMethodCallMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CADMethodCallMessage__VTable vtable;
};
struct CADMethodReturnMessage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CADMethodReturnMessage__StaticFields {
};
struct CADMethodReturnMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CADMethodReturnMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CADMethodReturnMessage__VTable vtable;
};

enum PlatformID__Enum : int32_t {
  PlatformID__Enum_Win32S = 0,
  PlatformID__Enum_Win32Windows = 1,
  PlatformID__Enum_Win32NT = 2,
  PlatformID__Enum_WinCE = 3,
  PlatformID__Enum_Unix = 4,
  PlatformID__Enum_Xbox = 5,
  PlatformID__Enum_MacOSX = 6,
};
struct PlatformID__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PlatformID__Enum value;
};

struct __declspec(align(8)) OperatingSystem__Fields {
  enum PlatformID__Enum _platform;
  struct Version * _version;
  struct String * _servicePack;
};
struct OperatingSystem {
  struct OperatingSystem__Class *klass;
  struct MonitorData *monitor;
  struct OperatingSystem__Fields fields;
};
struct OperatingSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
};
struct OperatingSystem__StaticFields {
};
struct OperatingSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OperatingSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OperatingSystem__VTable vtable;
};

enum Environment_SpecialFolder__Enum : int32_t {
  Environment_SpecialFolder__Enum_MyDocuments = 5,
  Environment_SpecialFolder__Enum_Desktop = 0,
  Environment_SpecialFolder__Enum_MyComputer = 17,
  Environment_SpecialFolder__Enum_Programs = 2,
  Environment_SpecialFolder__Enum_Personal = 5,
  Environment_SpecialFolder__Enum_Favorites = 6,
  Environment_SpecialFolder__Enum_Startup = 7,
  Environment_SpecialFolder__Enum_Recent = 8,
  Environment_SpecialFolder__Enum_SendTo = 9,
  Environment_SpecialFolder__Enum_StartMenu = 11,
  Environment_SpecialFolder__Enum_MyMusic = 13,
  Environment_SpecialFolder__Enum_DesktopDirectory = 16,
  Environment_SpecialFolder__Enum_Templates = 21,
  Environment_SpecialFolder__Enum_ApplicationData = 26,
  Environment_SpecialFolder__Enum_LocalApplicationData = 28,
  Environment_SpecialFolder__Enum_InternetCache = 32,
  Environment_SpecialFolder__Enum_Cookies = 33,
  Environment_SpecialFolder__Enum_History = 34,
  Environment_SpecialFolder__Enum_CommonApplicationData = 35,
  Environment_SpecialFolder__Enum_System = 37,
  Environment_SpecialFolder__Enum_ProgramFiles = 38,
  Environment_SpecialFolder__Enum_MyPictures = 39,
  Environment_SpecialFolder__Enum_CommonProgramFiles = 43,
  Environment_SpecialFolder__Enum_MyVideos = 14,
  Environment_SpecialFolder__Enum_NetworkShortcuts = 19,
  Environment_SpecialFolder__Enum_Fonts = 20,
  Environment_SpecialFolder__Enum_CommonStartMenu = 22,
  Environment_SpecialFolder__Enum_CommonPrograms = 23,
  Environment_SpecialFolder__Enum_CommonStartup = 24,
  Environment_SpecialFolder__Enum_CommonDesktopDirectory = 25,
  Environment_SpecialFolder__Enum_PrinterShortcuts = 27,
  Environment_SpecialFolder__Enum_Windows = 36,
  Environment_SpecialFolder__Enum_UserProfile = 40,
  Environment_SpecialFolder__Enum_SystemX86 = 41,
  Environment_SpecialFolder__Enum_ProgramFilesX86 = 42,
  Environment_SpecialFolder__Enum_CommonProgramFilesX86 = 44,
  Environment_SpecialFolder__Enum_CommonTemplates = 45,
  Environment_SpecialFolder__Enum_CommonDocuments = 46,
  Environment_SpecialFolder__Enum_CommonAdminTools = 47,
  Environment_SpecialFolder__Enum_AdminTools = 48,
  Environment_SpecialFolder__Enum_CommonMusic = 53,
  Environment_SpecialFolder__Enum_CommonPictures = 54,
  Environment_SpecialFolder__Enum_CommonVideos = 55,
  Environment_SpecialFolder__Enum_Resources = 56,
  Environment_SpecialFolder__Enum_LocalizedResources = 57,
  Environment_SpecialFolder__Enum_CommonOemLinks = 58,
  Environment_SpecialFolder__Enum_CDBurning = 59,
};
struct Environment_SpecialFolder__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Environment_SpecialFolder__Enum value;
};

enum Environment_SpecialFolderOption__Enum : int32_t {
  Environment_SpecialFolderOption__Enum_None = 0,
  Environment_SpecialFolderOption__Enum_DoNotVerify = 16384,
  Environment_SpecialFolderOption__Enum_Create = 32768,
};
struct Environment_SpecialFolderOption__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Environment_SpecialFolderOption__Enum value;
};

enum EnvironmentVariableTarget__Enum : int32_t {
  EnvironmentVariableTarget__Enum_Process = 0,
  EnvironmentVariableTarget__Enum_User = 1,
  EnvironmentVariableTarget__Enum_Machine = 2,
};
struct EnvironmentVariableTarget__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EnvironmentVariableTarget__Enum value;
};

struct ArgIterator {
  void * sig;
  void * args;
  int32_t next_arg;
  int32_t num_args;
};
struct ArgIterator__Boxed {
  struct ArgIterator__Class *klass;
  struct MonitorData *monitor;
  struct ArgIterator fields;
};
struct ArgIterator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ArgIterator__StaticFields {
};
struct ArgIterator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArgIterator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArgIterator__VTable vtable;
};

struct TextWriter__Fields {
  struct MarshalByRefObject__Fields _;
  struct Char__Array * CoreNewLine;
  struct IFormatProvider * InternalFormatProvider;
};
struct TextWriter {
  struct TextWriter__Class *klass;
  struct MonitorData *monitor;
  struct TextWriter__Fields fields;
};
struct StreamWriter__Fields {
  struct TextWriter__Fields _;
  struct Stream * stream;
  struct Encoding * encoding;
  struct Encoder * encoder;
  struct Byte__Array * byteBuffer;
  struct Char__Array * charBuffer;
  int32_t charPos;
  int32_t charLen;
  bool autoFlush;
  bool haveWrittenPreamble;
  bool closable;
  struct Task * _asyncWriteTask;
};
struct StreamWriter {
  struct StreamWriter__Class *klass;
  struct MonitorData *monitor;
  struct StreamWriter__Fields fields;
};
struct StreamWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_FormatProvider;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Flush;
  VirtualInvokeData get_Encoding;
  VirtualInvokeData get_NewLine;
  VirtualInvokeData Write;
  VirtualInvokeData Write_1;
  VirtualInvokeData Write_2;
  VirtualInvokeData Write_3;
  VirtualInvokeData Write_4;
  VirtualInvokeData Write_5;
  VirtualInvokeData Write_6;
  VirtualInvokeData Write_7;
  VirtualInvokeData Write_8;
  VirtualInvokeData Write_9;
  VirtualInvokeData Write_10;
  VirtualInvokeData Write_11;
  VirtualInvokeData Write_12;
  VirtualInvokeData Write_13;
  VirtualInvokeData WriteLine;
  VirtualInvokeData WriteLine_1;
  VirtualInvokeData WriteLine_2;
  VirtualInvokeData WriteLine_3;
  VirtualInvokeData WriteLine_4;
  VirtualInvokeData WriteLine_5;
  VirtualInvokeData WriteLine_6;
  VirtualInvokeData WriteLine_7;
  VirtualInvokeData WriteLine_8;
  VirtualInvokeData set_AutoFlush;
  VirtualInvokeData get_BaseStream;
};
struct StreamWriter__StaticFields {
  struct StreamWriter * Null;
  struct Encoding * _UTF8NoBOM;
};
struct StreamWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StreamWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StreamWriter__VTable vtable;
};
struct TextWriter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_FormatProvider;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Flush;
  VirtualInvokeData __unknown;
  VirtualInvokeData get_NewLine;
  VirtualInvokeData Write;
  VirtualInvokeData Write_1;
  VirtualInvokeData Write_2;
  VirtualInvokeData Write_3;
  VirtualInvokeData Write_4;
  VirtualInvokeData Write_5;
  VirtualInvokeData Write_6;
  VirtualInvokeData Write_7;
  VirtualInvokeData Write_8;
  VirtualInvokeData Write_9;
  VirtualInvokeData Write_10;
  VirtualInvokeData Write_11;
  VirtualInvokeData Write_12;
  VirtualInvokeData Write_13;
  VirtualInvokeData WriteLine;
  VirtualInvokeData WriteLine_1;
  VirtualInvokeData WriteLine_2;
  VirtualInvokeData WriteLine_3;
  VirtualInvokeData WriteLine_4;
  VirtualInvokeData WriteLine_5;
  VirtualInvokeData WriteLine_6;
  VirtualInvokeData WriteLine_7;
  VirtualInvokeData WriteLine_8;
};
struct TextWriter__StaticFields {
  struct TextWriter * Null;
  struct Action_1_Object_ * _WriteCharDelegate;
  struct Action_1_Object_ * _WriteStringDelegate;
  struct Action_1_Object_ * _WriteCharArrayRangeDelegate;
  struct Action_1_Object_ * _WriteLineCharDelegate;
  struct Action_1_Object_ * _WriteLineStringDelegate;
  struct Action_1_Object_ * _WriteLineCharArrayRangeDelegate;
  struct Action_1_Object_ * _FlushDelegate;
};
struct TextWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextWriter__VTable vtable;
};

struct Console_WindowsConsole_WindowsCancelHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct Console_WindowsConsole_WindowsCancelHandler {
  struct Console_WindowsConsole_WindowsCancelHandler__Class *klass;
  struct MonitorData *monitor;
  struct Console_WindowsConsole_WindowsCancelHandler__Fields fields;
};
struct Console_WindowsConsole_WindowsCancelHandler__VTable {
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
struct Console_WindowsConsole_WindowsCancelHandler__StaticFields {
};
struct Console_WindowsConsole_WindowsCancelHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Console_WindowsConsole_WindowsCancelHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Console_WindowsConsole_WindowsCancelHandler__VTable vtable;
};

struct Console_InternalCancelHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct Console_InternalCancelHandler {
  struct Console_InternalCancelHandler__Class *klass;
  struct MonitorData *monitor;
  struct Console_InternalCancelHandler__Fields fields;
};
struct Console_InternalCancelHandler__VTable {
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
struct Console_InternalCancelHandler__StaticFields {
};
struct Console_InternalCancelHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Console_InternalCancelHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Console_InternalCancelHandler__VTable vtable;
};

struct IConsoleDriver {
  struct IConsoleDriver__Class *klass;
  struct MonitorData *monitor;
};
struct IConsoleDriver__VTable {
  VirtualInvokeData ReadKey;
};
struct IConsoleDriver__StaticFields {
};
struct IConsoleDriver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IConsoleDriver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IConsoleDriver__VTable vtable;
};

struct __declspec(align(8)) DelegateSerializationHolder__Fields {
  struct Delegate * _delegate;
};
struct DelegateSerializationHolder {
  struct DelegateSerializationHolder__Class *klass;
  struct MonitorData *monitor;
  struct DelegateSerializationHolder__Fields fields;
};
struct DelegateSerializationHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData GetRealObject;
};
struct DelegateSerializationHolder__StaticFields {
};
struct DelegateSerializationHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DelegateSerializationHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DelegateSerializationHolder__VTable vtable;
};

struct __declspec(align(8)) DelegateSerializationHolder_DelegateEntry__Fields {
  struct String * type;
  struct String * assembly;
  struct Object * target;
  struct String * targetTypeAssembly;
  struct String * targetTypeName;
  struct String * methodName;
  struct DelegateSerializationHolder_DelegateEntry * delegateEntry;
};
struct DelegateSerializationHolder_DelegateEntry {
  struct DelegateSerializationHolder_DelegateEntry__Class *klass;
  struct MonitorData *monitor;
  struct DelegateSerializationHolder_DelegateEntry__Fields fields;
};
struct DelegateSerializationHolder_DelegateEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DelegateSerializationHolder_DelegateEntry__StaticFields {
};
struct DelegateSerializationHolder_DelegateEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DelegateSerializationHolder_DelegateEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DelegateSerializationHolder_DelegateEntry__VTable vtable;
};

struct __declspec(align(8)) Identity__Fields {
  struct String * _objectUri;
  struct IMessageSink * _channelSink;
  struct IMessageSink * _envoySink;
  struct DynamicPropertyCollection * _clientDynamicProperties;
  struct DynamicPropertyCollection * _serverDynamicProperties;
  struct ObjRef * _objRef;
  bool _disposed;
};
struct Identity {
  struct Identity__Class *klass;
  struct MonitorData *monitor;
  struct Identity__Fields fields;
};
struct ServerIdentity__Fields {
  struct Identity__Fields _;
  struct Type * _objectType;
  struct MarshalByRefObject * _serverObject;
  struct IMessageSink * _serverSink;
  struct Context * _context;
  struct Lease * _lease;
};
struct ServerIdentity {
  struct ServerIdentity__Class *klass;
  struct MonitorData *monitor;
  struct ServerIdentity__Fields fields;
};
struct ClientIdentity__Fields {
  struct Identity__Fields _;
  struct WeakReference * _proxyReference;
};
struct ClientIdentity {
  struct ClientIdentity__Class *klass;
  struct MonitorData *monitor;
  struct ClientIdentity__Fields fields;
};
struct GCHandle {
  int32_t handle;
};
struct GCHandle__Boxed {
  struct GCHandle__Class *klass;
  struct MonitorData *monitor;
  struct GCHandle fields;
};
struct __declspec(align(8)) WeakReference__Fields {
  bool isLongReference;
  struct GCHandle gcHandle;
};
struct WeakReference {
  struct WeakReference__Class *klass;
  struct MonitorData *monitor;
  struct WeakReference__Fields fields;
};
enum LeaseState__Enum : int32_t {
  LeaseState__Enum_Null = 0,
  LeaseState__Enum_Initial = 1,
  LeaseState__Enum_Active = 2,
  LeaseState__Enum_Renewing = 3,
  LeaseState__Enum_Expired = 4,
};
struct LeaseState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LeaseState__Enum value;
};
struct Lease__Fields {
  struct MarshalByRefObject__Fields _;
  struct DateTime _leaseExpireTime;
  enum LeaseState__Enum _currentState;
  struct TimeSpan _initialLeaseTime;
  struct TimeSpan _renewOnCallTime;
  struct TimeSpan _sponsorshipTimeout;
  struct ArrayList * _sponsors;
  struct Queue * _renewingSponsors;
  struct Lease_RenewalDelegate * _renewalDelegate;
};
struct Lease {
  struct Lease__Class *klass;
  struct MonitorData *monitor;
  struct Lease__Fields fields;
};
struct __declspec(align(8)) Queue__Fields {
  struct Object__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _growFactor;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue {
  struct Queue__Class *klass;
  struct MonitorData *monitor;
  struct Queue__Fields fields;
};
struct Lease_RenewalDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct Lease_RenewalDelegate {
  struct Lease_RenewalDelegate__Class *klass;
  struct MonitorData *monitor;
  struct Lease_RenewalDelegate__Fields fields;
};
struct ILease {
  struct ILease__Class *klass;
  struct MonitorData *monitor;
};
struct ISponsor {
  struct ISponsor__Class *klass;
  struct MonitorData *monitor;
};
struct ClientActivatedIdentity__Fields {
  struct ServerIdentity__Fields _;
  struct MarshalByRefObject * _targetThis;
};
struct ClientActivatedIdentity {
  struct ClientActivatedIdentity__Class *klass;
  struct MonitorData *monitor;
  struct ClientActivatedIdentity__Fields fields;
};
struct IMessage {
  struct IMessage__Class *klass;
  struct MonitorData *monitor;
};
struct IMessageCtrl {
  struct IMessageCtrl__Class *klass;
  struct MonitorData *monitor;
};
struct GCHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GCHandle__StaticFields {
};
struct GCHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GCHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GCHandle__VTable vtable;
};
struct WeakReference__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_IsAlive;
  VirtualInvokeData get_Target;
  VirtualInvokeData set_Target;
  VirtualInvokeData get_TrackResurrection;
  VirtualInvokeData GetObjectData_1;
};
struct WeakReference__StaticFields {
};
struct WeakReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeakReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeakReference__VTable vtable;
};
struct ClientIdentity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
};
struct ClientIdentity__StaticFields {
};
struct ClientIdentity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClientIdentity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClientIdentity__VTable vtable;
};
struct Identity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
};
struct Identity__StaticFields {
};
struct Identity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Identity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Identity__VTable vtable;
};
struct Queue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData Clone;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData Clone_1;
  VirtualInvokeData get_IsSynchronized_1;
  VirtualInvokeData get_SyncRoot_1;
  VirtualInvokeData Clear;
  VirtualInvokeData CopyTo_1;
  VirtualInvokeData Enqueue;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData Dequeue;
  VirtualInvokeData Peek;
  VirtualInvokeData ToArray;
};
struct Queue__StaticFields {
};
struct Queue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Queue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Queue__VTable vtable;
};
struct ILease__VTable {
  VirtualInvokeData get_CurrentLeaseTime;
  VirtualInvokeData get_CurrentState;
  VirtualInvokeData set_InitialLeaseTime;
  VirtualInvokeData get_RenewOnCallTime;
  VirtualInvokeData set_RenewOnCallTime;
  VirtualInvokeData set_SponsorshipTimeout;
  VirtualInvokeData Renew;
};
struct ILease__StaticFields {
};
struct ILease__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ILease__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ILease__VTable vtable;
};
struct Lease_RenewalDelegate__VTable {
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
struct Lease_RenewalDelegate__StaticFields {
};
struct Lease_RenewalDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Lease_RenewalDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Lease_RenewalDelegate__VTable vtable;
};}