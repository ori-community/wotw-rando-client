namespace app {
struct ISponsor__VTable {
  VirtualInvokeData Renewal;
};
struct ISponsor__StaticFields {
};
struct ISponsor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISponsor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISponsor__VTable vtable;
};
struct Lease__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData get_CurrentLeaseTime;
  VirtualInvokeData get_CurrentState;
  VirtualInvokeData set_InitialLeaseTime;
  VirtualInvokeData get_RenewOnCallTime;
  VirtualInvokeData set_RenewOnCallTime;
  VirtualInvokeData set_SponsorshipTimeout;
  VirtualInvokeData Renew;
  VirtualInvokeData Unregister;
};
struct Lease__StaticFields {
};
struct Lease__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Lease__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Lease__VTable vtable;
};
struct IMessage__VTable {
  VirtualInvokeData get_Properties;
};
struct IMessage__StaticFields {
};
struct IMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMessage__VTable vtable;
};
struct IMessageCtrl__VTable {
};
struct IMessageCtrl__StaticFields {
};
struct IMessageCtrl__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMessageCtrl__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMessageCtrl__VTable vtable;
};
struct ClientActivatedIdentity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData OnLifetimeExpired;
  VirtualInvokeData SyncObjectProcessMessage;
  VirtualInvokeData AsyncObjectProcessMessage;
};
struct ClientActivatedIdentity__StaticFields {
};
struct ClientActivatedIdentity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClientActivatedIdentity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClientActivatedIdentity__VTable vtable;
};
struct ServerIdentity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData OnLifetimeExpired;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
};
struct ServerIdentity__StaticFields {
};
struct ServerIdentity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerIdentity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerIdentity__VTable vtable;
};

struct __declspec(align(8)) MonoAsyncCall__Fields {
  struct Object * msg;
  void * cb_method;
  struct Object * cb_target;
  struct Object * state;
  struct Object * res;
  struct Object * out_args;
};
struct MonoAsyncCall {
  struct MonoAsyncCall__Class *klass;
  struct MonitorData *monitor;
  struct MonoAsyncCall__Fields fields;
};
struct MonoAsyncCall__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MonoAsyncCall__StaticFields {
};
struct MonoAsyncCall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoAsyncCall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoAsyncCall__VTable vtable;
};

struct ICustomAttributeProvider {
  struct ICustomAttributeProvider__Class *klass;
  struct MonitorData *monitor;
};
struct ICustomAttributeProvider__VTable {
  VirtualInvokeData GetCustomAttributes;
  VirtualInvokeData GetCustomAttributes_1;
  VirtualInvokeData IsDefined;
};
struct ICustomAttributeProvider__StaticFields {
};
struct ICustomAttributeProvider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICustomAttributeProvider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICustomAttributeProvider__VTable vtable;
};

struct __declspec(align(8)) CustomAttributeData__Fields {
  struct ConstructorInfo * ctorInfo;
  struct IList_1_System_Reflection_CustomAttributeTypedArgument_ * ctorArgs;
  struct IList_1_System_Reflection_CustomAttributeNamedArgument_ * namedArgs;
  struct CustomAttributeData_LazyCAttrData * lazyData;
};
struct CustomAttributeData {
  struct CustomAttributeData__Class *klass;
  struct MonitorData *monitor;
  struct CustomAttributeData__Fields fields;
};
struct CustomAttributeData__Array {
  struct CustomAttributeData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CustomAttributeData * vector[32];
};
struct IList_1_System_Reflection_CustomAttributeTypedArgument_ {
  struct IList_1_System_Reflection_CustomAttributeTypedArgument___Class *klass;
  struct MonitorData *monitor;
};
struct IList_1_System_Reflection_CustomAttributeNamedArgument_ {
  struct IList_1_System_Reflection_CustomAttributeNamedArgument___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CustomAttributeData_LazyCAttrData__Fields {
  struct Assembly * assembly;
  void * data;
  uint32_t data_length;
};
struct CustomAttributeData_LazyCAttrData {
  struct CustomAttributeData_LazyCAttrData__Class *klass;
  struct MonitorData *monitor;
  struct CustomAttributeData_LazyCAttrData__Fields fields;
};
struct IList_1_System_Reflection_CustomAttributeTypedArgument___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_System_Reflection_CustomAttributeTypedArgument___StaticFields {
};
struct IList_1_System_Reflection_CustomAttributeTypedArgument___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_System_Reflection_CustomAttributeTypedArgument___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_System_Reflection_CustomAttributeTypedArgument___VTable vtable;
};
struct IList_1_System_Reflection_CustomAttributeNamedArgument___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_System_Reflection_CustomAttributeNamedArgument___StaticFields {
};
struct IList_1_System_Reflection_CustomAttributeNamedArgument___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_System_Reflection_CustomAttributeNamedArgument___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_System_Reflection_CustomAttributeNamedArgument___VTable vtable;
};
struct CustomAttributeData_LazyCAttrData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CustomAttributeData_LazyCAttrData__StaticFields {
};
struct CustomAttributeData_LazyCAttrData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomAttributeData_LazyCAttrData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomAttributeData_LazyCAttrData__VTable vtable;
};
struct CustomAttributeData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Constructor;
  VirtualInvokeData get_ConstructorArguments;
  VirtualInvokeData get_NamedArguments;
};
struct CustomAttributeData__StaticFields {
};
struct CustomAttributeData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomAttributeData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomAttributeData__VTable vtable;
};

struct __declspec(align(8)) MonoCustomAttrs_AttributeInfo__Fields {
  struct AttributeUsageAttribute * _usage;
  int32_t _inheritanceLevel;
};
struct MonoCustomAttrs_AttributeInfo {
  struct MonoCustomAttrs_AttributeInfo__Class *klass;
  struct MonitorData *monitor;
  struct MonoCustomAttrs_AttributeInfo__Fields fields;
};
struct MonoCustomAttrs_AttributeInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MonoCustomAttrs_AttributeInfo__StaticFields {
};
struct MonoCustomAttrs_AttributeInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MonoCustomAttrs_AttributeInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MonoCustomAttrs_AttributeInfo__VTable vtable;
};

struct NullConsoleDriver {
  struct NullConsoleDriver__Class *klass;
  struct MonitorData *monitor;
};
struct NullConsoleDriver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ReadKey;
};
struct NullConsoleDriver__StaticFields {
  struct ConsoleKeyInfo EmptyConsoleKeyInfo;
};
struct NullConsoleDriver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NullConsoleDriver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NullConsoleDriver__VTable vtable;
};

struct __declspec(align(8)) NumberFormatter__Fields {
  struct NumberFormatInfo * _nfi;
  struct Char__Array * _cbuf;
  bool _NaN;
  bool _infinity;
  bool _isCustomFormat;
  bool _specifierIsUpper;
  bool _positive;
  uint16_t _specifier;
  int32_t _precision;
  int32_t _defPrecision;
  int32_t _digitsLen;
  int32_t _offset;
  int32_t _decPointPos;
  uint32_t _val1;
  uint32_t _val2;
  uint32_t _val3;
  uint32_t _val4;
  int32_t _ind;
};
struct NumberFormatter {
  struct NumberFormatter__Class *klass;
  struct MonitorData *monitor;
  struct NumberFormatter__Fields fields;
};
struct NumberFormatter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NumberFormatter__StaticFields {
  uint64_t * MantissaBitsTable;
  int32_t * TensExponentTable;
  uint16_t * DigitLowerTable;
  uint16_t * DigitUpperTable;
  int64_t * TenPowersList;
  int32_t * DecHexDigits;
  struct NumberFormatter * threadNumberFormatter;
  struct NumberFormatter * userFormatProvider;
};
struct NumberFormatter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NumberFormatter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NumberFormatter__VTable vtable;
};

struct __declspec(align(8)) Thread__Fields {
  struct InternalThread * internal_thread;
  struct Object * m_ThreadStartArg;
  struct Object * pending_exception;
  struct IPrincipal * principal;
  int32_t principal_version;
  struct MulticastDelegate * m_Delegate;
  struct ExecutionContext * m_ExecutionContext;
  bool m_ExecutionContextBelongsToOuterScope;
};
struct Thread {
  struct Thread__Class *klass;
  struct MonitorData *monitor;
  struct Thread__Fields fields;
};
struct __declspec(align(8)) AsyncLocal_1_System_Globalization_CultureInfo___Fields {
  struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1_ * m_valueChangedHandler;
};
struct AsyncLocal_1_System_Globalization_CultureInfo_ {
  struct AsyncLocal_1_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct AsyncLocal_1_System_Globalization_CultureInfo___Fields fields;
};
struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1_ {
  struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___Fields fields;
};
struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo_ {
  struct CultureInfo * _PreviousValue_k__BackingField;
  struct CultureInfo * _CurrentValue_k__BackingField;
  bool _ThreadContextChanged_k__BackingField;
};
struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___Boxed {
  struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___Class *klass;
  struct MonitorData *monitor;
  struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo_ fields;
};
enum ThreadState__Enum : int32_t {
  ThreadState__Enum_Running = 0,
  ThreadState__Enum_StopRequested = 1,
  ThreadState__Enum_SuspendRequested = 2,
  ThreadState__Enum_Background = 4,
  ThreadState__Enum_Unstarted = 8,
  ThreadState__Enum_Stopped = 16,
  ThreadState__Enum_WaitSleepJoin = 32,
  ThreadState__Enum_Suspended = 64,
  ThreadState__Enum_AbortRequested = 128,
  ThreadState__Enum_Aborted = 256,
};
struct ThreadState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ThreadState__Enum value;
};
struct __declspec(align(8)) InternalThread__Fields {
  int32_t lock_thread_id;
  void * handle;
  void * native_handle;
  void * unused3;
  void * name;
  int32_t name_len;
  enum ThreadState__Enum state;
  struct Object * abort_exc;
  int32_t abort_state_handle;
  int64_t thread_id;
  void * debugger_thread;
  void * static_data;
  void * runtime_thread_info;
  struct Object * current_appcontext;
  struct Object * root_domain_thread;
  struct Byte__Array * _serialized_principal;
  int32_t _serialized_principal_version;
  void * appdomain_refs;
  int32_t interruption_requested;
  void * synch_cs;
  bool threadpool_thread;
  bool thread_interrupt_requested;
  int32_t stack_size;
  uint8_t apartment_state;
  int32_t critical_region_level;
  int32_t managed_id;
  int32_t small_id;
  void * manage_callback;
  void * unused4;
  void * flags;
  void * thread_pinning_ref;
  void * abort_protected_block_count;
  int32_t priority;
  void * owned_mutex;
  void * suspended_event;
  int32_t self_suspended;
  void * unused1;
  void * unused2;
  void * last;
};
struct InternalThread {
  struct InternalThread__Class *klass;
  struct MonitorData *monitor;
  struct InternalThread__Fields fields;
};
struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___StaticFields {
};
struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncLocalValueChangedArgs_1_System_Globalization_CultureInfo___VTable vtable;
};
struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___VTable {
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
struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___StaticFields {
};
struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___VTable vtable;
};
struct AsyncLocal_1_System_Globalization_CultureInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Threading_IAsyncLocal_OnValueChanged;
};
struct AsyncLocal_1_System_Globalization_CultureInfo___StaticFields {
};
struct AsyncLocal_1_System_Globalization_CultureInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AsyncLocal_1_System_Globalization_CultureInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AsyncLocal_1_System_Globalization_CultureInfo___VTable vtable;
};
struct InternalThread__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InternalThread__StaticFields {
};
struct InternalThread__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InternalThread__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InternalThread__VTable vtable;
};
struct Thread__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Thread__StaticFields {
  struct LocalDataStoreMgr * s_LocalDataStoreMgr;
  struct LocalDataStoreHolder * s_LocalDataStore;
  struct CultureInfo * m_CurrentCulture;
  struct CultureInfo * m_CurrentUICulture;
  struct AsyncLocal_1_System_Globalization_CultureInfo_ * s_asyncLocalCurrentCulture;
  struct AsyncLocal_1_System_Globalization_CultureInfo_ * s_asyncLocalCurrentUICulture;
  struct Thread * current_thread;
};
struct Thread__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Thread__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Thread__VTable vtable;
};

struct __declspec(align(8)) NumberFormatter_CustomInfo__Fields {
  bool UseGroup;
  int32_t DecimalDigits;
  int32_t DecimalPointPos;
  int32_t DecimalTailSharpDigits;
  int32_t IntegerDigits;
  int32_t IntegerHeadSharpDigits;
  int32_t IntegerHeadPos;
  bool UseExponent;
  int32_t ExponentDigits;
  int32_t ExponentTailSharpDigits;
  bool ExponentNegativeSignOnly;
  int32_t DividePlaces;
  int32_t Percents;
  int32_t Permilles;
};
struct NumberFormatter_CustomInfo {
  struct NumberFormatter_CustomInfo__Class *klass;
  struct MonitorData *monitor;
  struct NumberFormatter_CustomInfo__Fields fields;
};
struct NumberFormatter_CustomInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NumberFormatter_CustomInfo__StaticFields {
};
struct NumberFormatter_CustomInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NumberFormatter_CustomInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NumberFormatter_CustomInfo__VTable vtable;
};

enum TypeNameFormatFlags__Enum : int32_t {
  TypeNameFormatFlags__Enum_FormatBasic = 0,
  TypeNameFormatFlags__Enum_FormatNamespace = 1,
  TypeNameFormatFlags__Enum_FormatFullInst = 2,
  TypeNameFormatFlags__Enum_FormatAssembly = 4,
  TypeNameFormatFlags__Enum_FormatSignature = 8,
  TypeNameFormatFlags__Enum_FormatNoVersion = 16,
  TypeNameFormatFlags__Enum_FormatAngleBrackets = 64,
  TypeNameFormatFlags__Enum_FormatStubInfo = 128,
  TypeNameFormatFlags__Enum_FormatGenericParam = 256,
  TypeNameFormatFlags__Enum_FormatSerialization = 259,
};
struct TypeNameFormatFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TypeNameFormatFlags__Enum value;
};

enum ConsoleColor__Enum : int32_t {
  ConsoleColor__Enum_Black = 0,
  ConsoleColor__Enum_DarkBlue = 1,
  ConsoleColor__Enum_DarkGreen = 2,
  ConsoleColor__Enum_DarkCyan = 3,
  ConsoleColor__Enum_DarkRed = 4,
  ConsoleColor__Enum_DarkMagenta = 5,
  ConsoleColor__Enum_DarkYellow = 6,
  ConsoleColor__Enum_Gray = 7,
  ConsoleColor__Enum_DarkGray = 8,
  ConsoleColor__Enum_Blue = 9,
  ConsoleColor__Enum_Green = 10,
  ConsoleColor__Enum_Cyan = 11,
  ConsoleColor__Enum_Red = 12,
  ConsoleColor__Enum_Magenta = 13,
  ConsoleColor__Enum_Yellow = 14,
  ConsoleColor__Enum_White = 15,
};
struct ConsoleColor__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConsoleColor__Enum value;
};
struct __declspec(align(8)) TermInfoDriver__Fields {
  struct TermInfoReader * reader;
  int32_t cursorLeft;
  int32_t cursorTop;
  struct String * title;
  struct String * titleFormat;
  bool cursorVisible;
  struct String * csrVisible;
  struct String * csrInvisible;
  struct String * clear;
  struct String * bell;
  struct String * term;
  struct StreamReader * stdin_1;
  struct CStreamWriter * stdout_1;
  int32_t windowWidth;
  int32_t windowHeight;
  int32_t bufferHeight;
  int32_t bufferWidth;
  struct Char__Array * buffer;
  int32_t readpos;
  int32_t writepos;
  struct String * keypadXmit;
  struct String * keypadLocal;
  bool inited;
  struct Object * initLock;
  bool initKeys;
  struct String * origPair;
  struct String * origColors;
  struct String * cursorAddress;
  enum ConsoleColor__Enum fgcolor;
  struct String * setfgcolor;
  struct String * setbgcolor;
  int32_t maxColors;
  bool noGetPosition;
  struct Hashtable * keymap;
  struct ByteMatcher * rootmap;
  int32_t rl_startx;
  int32_t rl_starty;
  struct Byte__Array * control_characters;
  struct Char__Array * echobuf;
  int32_t echon;
};
struct TermInfoDriver {
  struct TermInfoDriver__Class *klass;
  struct MonitorData *monitor;
  struct TermInfoDriver__Fields fields;
};
struct __declspec(align(8)) TermInfoReader__Fields {
  int16_t boolSize;
  int16_t numSize;
  int16_t strOffsets;
  struct Byte__Array * buffer;
  int32_t booleansOffset;
};
struct TermInfoReader {
  struct TermInfoReader__Class *klass;
  struct MonitorData *monitor;
  struct TermInfoReader__Fields fields;
};
struct StreamReader__Fields {
  struct TextReader__Fields _;
  struct Stream * stream;
  struct Encoding * encoding;
  struct Decoder * decoder;
  struct Byte__Array * byteBuffer;
  struct Char__Array * charBuffer;
  struct Byte__Array * _preamble;
  int32_t charPos;
  int32_t charLen;
  int32_t byteLen;
  int32_t bytePos;
  int32_t _maxCharsPerBuffer;
  bool _detectEncoding;
  bool _checkPreamble;
  bool _isBlocked;
  bool _closable;
  struct Task * _asyncReadTask;
};
struct StreamReader {
  struct StreamReader__Class *klass;
  struct MonitorData *monitor;
  struct StreamReader__Fields fields;
};
struct CStreamWriter__Fields {
  struct StreamWriter__Fields _;
  struct TermInfoDriver * driver;
};
struct CStreamWriter {
  struct CStreamWriter__Class *klass;
  struct MonitorData *monitor;
  struct CStreamWriter__Fields fields;
};
struct __declspec(align(8)) ByteMatcher__Fields {
  struct Hashtable * map;
  struct Hashtable * starts;
};
struct ByteMatcher {
  struct ByteMatcher__Class *klass;
  struct MonitorData *monitor;
  struct ByteMatcher__Fields fields;
};
struct TermInfoReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TermInfoReader__StaticFields {
};
struct TermInfoReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TermInfoReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TermInfoReader__VTable vtable;
};
struct StreamReader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
  VirtualInvokeData Dispose;
  VirtualInvokeData Close;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Peek;
  VirtualInvokeData Read;
  VirtualInvokeData Read_1;
  VirtualInvokeData ReadToEnd;
  VirtualInvokeData ReadLine;
  VirtualInvokeData get_CurrentEncoding;
  VirtualInvokeData get_BaseStream;
  VirtualInvokeData ReadBuffer;
};
struct StreamReader__StaticFields {
  struct StreamReader * Null;
};
struct StreamReader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StreamReader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StreamReader__VTable vtable;
};
struct CStreamWriter__VTable {
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
struct CStreamWriter__StaticFields {
};
struct CStreamWriter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CStreamWriter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CStreamWriter__VTable vtable;
};
struct ByteMatcher__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ByteMatcher__StaticFields {
};
struct ByteMatcher__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ByteMatcher__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ByteMatcher__VTable vtable;
};
struct TermInfoDriver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ReadKey;
  VirtualInvokeData get_Initialized;
  VirtualInvokeData Init;
  VirtualInvokeData get_WindowHeight;
  VirtualInvokeData get_WindowWidth;
  VirtualInvokeData ReadLine;
  VirtualInvokeData SetCursorPosition;
};
struct TermInfoDriver__StaticFields {
  int32_t * native_terminal_size;
  int32_t terminal_size;
  struct String__Array * locations;
  struct Int32__Array * _consoleColorToAnsiCode;
};
struct TermInfoDriver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TermInfoDriver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TermInfoDriver__VTable vtable;
};

enum TermInfoStrings__Enum : int32_t {
  TermInfoStrings__Enum_BackTab = 0,
  TermInfoStrings__Enum_Bell = 1,
  TermInfoStrings__Enum_CarriageReturn = 2,
  TermInfoStrings__Enum_ChangeScrollRegion = 3,
  TermInfoStrings__Enum_ClearAllTabs = 4,
  TermInfoStrings__Enum_ClearScreen = 5,
  TermInfoStrings__Enum_ClrEol = 6,
  TermInfoStrings__Enum_ClrEos = 7,
  TermInfoStrings__Enum_ColumnAddress = 8,
  TermInfoStrings__Enum_CommandCharacter = 9,
  TermInfoStrings__Enum_CursorAddress = 10,
  TermInfoStrings__Enum_CursorDown = 11,
  TermInfoStrings__Enum_CursorHome = 12,
  TermInfoStrings__Enum_CursorInvisible = 13,
  TermInfoStrings__Enum_CursorLeft = 14,
  TermInfoStrings__Enum_CursorMemAddress = 15,
  TermInfoStrings__Enum_CursorNormal = 16,
  TermInfoStrings__Enum_CursorRight = 17,
  TermInfoStrings__Enum_CursorToLl = 18,
  TermInfoStrings__Enum_CursorUp = 19,
  TermInfoStrings__Enum_CursorVisible = 20,
  TermInfoStrings__Enum_DeleteCharacter = 21,
  TermInfoStrings__Enum_DeleteLine = 22,
  TermInfoStrings__Enum_DisStatusLine = 23,
  TermInfoStrings__Enum_DownHalfLine = 24,
  TermInfoStrings__Enum_EnterAltCharsetMode = 25,
  TermInfoStrings__Enum_EnterBlinkMode = 26,
  TermInfoStrings__Enum_EnterBoldMode = 27,
  TermInfoStrings__Enum_EnterCaMode = 28,
  TermInfoStrings__Enum_EnterDeleteMode = 29,
  TermInfoStrings__Enum_EnterDimMode = 30,
  TermInfoStrings__Enum_EnterInsertMode = 31,
  TermInfoStrings__Enum_EnterSecureMode = 32,
  TermInfoStrings__Enum_EnterProtectedMode = 33,
  TermInfoStrings__Enum_EnterReverseMode = 34,
  TermInfoStrings__Enum_EnterStandoutMode = 35,
  TermInfoStrings__Enum_EnterUnderlineMode = 36,
  TermInfoStrings__Enum_EraseChars = 37,
  TermInfoStrings__Enum_ExitAltCharsetMode = 38,
  TermInfoStrings__Enum_ExitAttributeMode = 39,
  TermInfoStrings__Enum_ExitCaMode = 40,
  TermInfoStrings__Enum_ExitDeleteMode = 41,
  TermInfoStrings__Enum_ExitInsertMode = 42,
  TermInfoStrings__Enum_ExitStandoutMode = 43,
  TermInfoStrings__Enum_ExitUnderlineMode = 44,
  TermInfoStrings__Enum_FlashScreen = 45,
  TermInfoStrings__Enum_FormFeed = 46,
  TermInfoStrings__Enum_FromStatusLine = 47,
  TermInfoStrings__Enum_Init1string = 48,
  TermInfoStrings__Enum_Init2string = 49,
  TermInfoStrings__Enum_Init3string = 50,
  TermInfoStrings__Enum_InitFile = 51,
  TermInfoStrings__Enum_InsertCharacter = 52,
  TermInfoStrings__Enum_InsertLine = 53,
  TermInfoStrings__Enum_InsertPadding = 54,
  TermInfoStrings__Enum_KeyBackspace = 55,
  TermInfoStrings__Enum_KeyCatab = 56,
  TermInfoStrings__Enum_KeyClear = 57,
  TermInfoStrings__Enum_KeyCtab = 58,
  TermInfoStrings__Enum_KeyDc = 59,
  TermInfoStrings__Enum_KeyDl = 60,
  TermInfoStrings__Enum_KeyDown = 61,
  TermInfoStrings__Enum_KeyEic = 62,
  TermInfoStrings__Enum_KeyEol = 63,
  TermInfoStrings__Enum_KeyEos = 64,
  TermInfoStrings__Enum_KeyF0 = 65,
  TermInfoStrings__Enum_KeyF1 = 66,
  TermInfoStrings__Enum_KeyF10 = 67,
  TermInfoStrings__Enum_KeyF2 = 68,
  TermInfoStrings__Enum_KeyF3 = 69,
  TermInfoStrings__Enum_KeyF4 = 70,
  TermInfoStrings__Enum_KeyF5 = 71,
  TermInfoStrings__Enum_KeyF6 = 72,
  TermInfoStrings__Enum_KeyF7 = 73,
  TermInfoStrings__Enum_KeyF8 = 74,
  TermInfoStrings__Enum_KeyF9 = 75,
  TermInfoStrings__Enum_KeyHome = 76,
  TermInfoStrings__Enum_KeyIc = 77,
  TermInfoStrings__Enum_KeyIl = 78,
  TermInfoStrings__Enum_KeyLeft = 79,
  TermInfoStrings__Enum_KeyLl = 80,
  TermInfoStrings__Enum_KeyNpage = 81,
  TermInfoStrings__Enum_KeyPpage = 82,
  TermInfoStrings__Enum_KeyRight = 83,
  TermInfoStrings__Enum_KeySf = 84,
  TermInfoStrings__Enum_KeySr = 85,
  TermInfoStrings__Enum_KeyStab = 86,
  TermInfoStrings__Enum_KeyUp = 87,
  TermInfoStrings__Enum_KeypadLocal = 88,
  TermInfoStrings__Enum_KeypadXmit = 89,
  TermInfoStrings__Enum_LabF0 = 90,
  TermInfoStrings__Enum_LabF1 = 91,
  TermInfoStrings__Enum_LabF10 = 92,
  TermInfoStrings__Enum_LabF2 = 93,
  TermInfoStrings__Enum_LabF3 = 94,
  TermInfoStrings__Enum_LabF4 = 95,
  TermInfoStrings__Enum_LabF5 = 96,
  TermInfoStrings__Enum_LabF6 = 97,
  TermInfoStrings__Enum_LabF7 = 98,
  TermInfoStrings__Enum_LabF8 = 99,
  TermInfoStrings__Enum_LabF9 = 100,
  TermInfoStrings__Enum_MetaOff = 101,
  TermInfoStrings__Enum_MetaOn = 102,
  TermInfoStrings__Enum_Newline = 103,
  TermInfoStrings__Enum_PadChar = 104,
  TermInfoStrings__Enum_ParmDch = 105,
  TermInfoStrings__Enum_ParmDeleteLine = 106,
  TermInfoStrings__Enum_ParmDownCursor = 107,
  TermInfoStrings__Enum_ParmIch = 108,
  TermInfoStrings__Enum_ParmIndex = 109,
  TermInfoStrings__Enum_ParmInsertLine = 110,
  TermInfoStrings__Enum_ParmLeftCursor = 111,
  TermInfoStrings__Enum_ParmRightCursor = 112,
  TermInfoStrings__Enum_ParmRindex = 113,
  TermInfoStrings__Enum_ParmUpCursor = 114,
  TermInfoStrings__Enum_PkeyKey = 115,
  TermInfoStrings__Enum_PkeyLocal = 116,
  TermInfoStrings__Enum_PkeyXmit = 117,
  TermInfoStrings__Enum_PrintScreen = 118,
  TermInfoStrings__Enum_PrtrOff = 119,
  TermInfoStrings__Enum_PrtrOn = 120,
  TermInfoStrings__Enum_RepeatChar = 121,
  TermInfoStrings__Enum_Reset1string = 122,
  TermInfoStrings__Enum_Reset2string = 123,
  TermInfoStrings__Enum_Reset3string = 124,
  TermInfoStrings__Enum_ResetFile = 125,
  TermInfoStrings__Enum_RestoreCursor = 126,
  TermInfoStrings__Enum_RowAddress = 127,
  TermInfoStrings__Enum_SaveCursor = 128,
  TermInfoStrings__Enum_ScrollForward = 129,
  TermInfoStrings__Enum_ScrollReverse = 130,
  TermInfoStrings__Enum_SetAttributes = 131,
  TermInfoStrings__Enum_SetTab = 132,
  TermInfoStrings__Enum_SetWindow = 133,
  TermInfoStrings__Enum_Tab = 134,
  TermInfoStrings__Enum_ToStatusLine = 135,
  TermInfoStrings__Enum_UnderlineChar = 136,
  TermInfoStrings__Enum_UpHalfLine = 137,
  TermInfoStrings__Enum_InitProg = 138,
  TermInfoStrings__Enum_KeyA1 = 139,
  TermInfoStrings__Enum_KeyA3 = 140,
  TermInfoStrings__Enum_KeyB2 = 141,
  TermInfoStrings__Enum_KeyC1 = 142,
  TermInfoStrings__Enum_KeyC3 = 143,
  TermInfoStrings__Enum_PrtrNon = 144,
  TermInfoStrings__Enum_CharPadding = 145,
  TermInfoStrings__Enum_AcsChars = 146,
  TermInfoStrings__Enum_PlabNorm = 147,
  TermInfoStrings__Enum_KeyBtab = 148,
  TermInfoStrings__Enum_EnterXonMode = 149,
  TermInfoStrings__Enum_ExitXonMode = 150,
  TermInfoStrings__Enum_EnterAmMode = 151,
  TermInfoStrings__Enum_ExitAmMode = 152,
  TermInfoStrings__Enum_XonCharacter = 153,
  TermInfoStrings__Enum_XoffCharacter = 154,
  TermInfoStrings__Enum_EnaAcs = 155,
  TermInfoStrings__Enum_LabelOn = 156,
  TermInfoStrings__Enum_LabelOff = 157,
  TermInfoStrings__Enum_KeyBeg = 158,
  TermInfoStrings__Enum_KeyCancel = 159,
  TermInfoStrings__Enum_KeyClose = 160,
  TermInfoStrings__Enum_KeyCommand = 161,
  TermInfoStrings__Enum_KeyCopy = 162,
  TermInfoStrings__Enum_KeyCreate = 163,
  TermInfoStrings__Enum_KeyEnd = 164,
  TermInfoStrings__Enum_KeyEnter = 165,
  TermInfoStrings__Enum_KeyExit = 166,
  TermInfoStrings__Enum_KeyFind = 167,
  TermInfoStrings__Enum_KeyHelp = 168,
  TermInfoStrings__Enum_KeyMark = 169,
  TermInfoStrings__Enum_KeyMessage = 170,
  TermInfoStrings__Enum_KeyMove = 171,
  TermInfoStrings__Enum_KeyNext = 172,
  TermInfoStrings__Enum_KeyOpen = 173,
  TermInfoStrings__Enum_KeyOptions = 174,
  TermInfoStrings__Enum_KeyPrevious = 175,
  TermInfoStrings__Enum_KeyPrint = 176,
  TermInfoStrings__Enum_KeyRedo = 177,
  TermInfoStrings__Enum_KeyReference = 178,
  TermInfoStrings__Enum_KeyRefresh = 179,
  TermInfoStrings__Enum_KeyReplace = 180,
  TermInfoStrings__Enum_KeyRestart = 181,
  TermInfoStrings__Enum_KeyResume = 182,
  TermInfoStrings__Enum_KeySave = 183,
  TermInfoStrings__Enum_KeySuspend = 184,
  TermInfoStrings__Enum_KeyUndo = 185,
  TermInfoStrings__Enum_KeySbeg = 186,
  TermInfoStrings__Enum_KeyScancel = 187,
  TermInfoStrings__Enum_KeyScommand = 188,
  TermInfoStrings__Enum_KeyScopy = 189,
  TermInfoStrings__Enum_KeyScreate = 190,
  TermInfoStrings__Enum_KeySdc = 191,
  TermInfoStrings__Enum_KeySdl = 192,
  TermInfoStrings__Enum_KeySelect = 193,
  TermInfoStrings__Enum_KeySend = 194,
  TermInfoStrings__Enum_KeySeol = 195,
  TermInfoStrings__Enum_KeySexit = 196,
  TermInfoStrings__Enum_KeySfind = 197,
  TermInfoStrings__Enum_KeyShelp = 198,
  TermInfoStrings__Enum_KeyShome = 199,
  TermInfoStrings__Enum_KeySic = 200,
  TermInfoStrings__Enum_KeySleft = 201,
  TermInfoStrings__Enum_KeySmessage = 202,
  TermInfoStrings__Enum_KeySmove = 203,
  TermInfoStrings__Enum_KeySnext = 204,
  TermInfoStrings__Enum_KeySoptions = 205,
  TermInfoStrings__Enum_KeySprevious = 206,
  TermInfoStrings__Enum_KeySprint = 207,
  TermInfoStrings__Enum_KeySredo = 208,
  TermInfoStrings__Enum_KeySreplace = 209,
  TermInfoStrings__Enum_KeySright = 210,
  TermInfoStrings__Enum_KeySrsume = 211,
  TermInfoStrings__Enum_KeySsave = 212,
  TermInfoStrings__Enum_KeySsuspend = 213,
  TermInfoStrings__Enum_KeySundo = 214,
  TermInfoStrings__Enum_ReqForInput = 215,
  TermInfoStrings__Enum_KeyF11 = 216,
  TermInfoStrings__Enum_KeyF12 = 217,
  TermInfoStrings__Enum_KeyF13 = 218,
  TermInfoStrings__Enum_KeyF14 = 219,
  TermInfoStrings__Enum_KeyF15 = 220,
  TermInfoStrings__Enum_KeyF16 = 221,
  TermInfoStrings__Enum_KeyF17 = 222,
  TermInfoStrings__Enum_KeyF18 = 223,
  TermInfoStrings__Enum_KeyF19 = 224,
  TermInfoStrings__Enum_KeyF20 = 225,
  TermInfoStrings__Enum_KeyF21 = 226,
  TermInfoStrings__Enum_KeyF22 = 227,
  TermInfoStrings__Enum_KeyF23 = 228,
  TermInfoStrings__Enum_KeyF24 = 229,
  TermInfoStrings__Enum_KeyF25 = 230,
  TermInfoStrings__Enum_KeyF26 = 231,
  TermInfoStrings__Enum_KeyF27 = 232,
  TermInfoStrings__Enum_KeyF28 = 233,
  TermInfoStrings__Enum_KeyF29 = 234,
  TermInfoStrings__Enum_KeyF30 = 235,
  TermInfoStrings__Enum_KeyF31 = 236,
  TermInfoStrings__Enum_KeyF32 = 237,
  TermInfoStrings__Enum_KeyF33 = 238,
  TermInfoStrings__Enum_KeyF34 = 239,
  TermInfoStrings__Enum_KeyF35 = 240,
  TermInfoStrings__Enum_KeyF36 = 241,
  TermInfoStrings__Enum_KeyF37 = 242,
  TermInfoStrings__Enum_KeyF38 = 243,
  TermInfoStrings__Enum_KeyF39 = 244,
  TermInfoStrings__Enum_KeyF40 = 245,
  TermInfoStrings__Enum_KeyF41 = 246,
  TermInfoStrings__Enum_KeyF42 = 247,
  TermInfoStrings__Enum_KeyF43 = 248,
  TermInfoStrings__Enum_KeyF44 = 249,
  TermInfoStrings__Enum_KeyF45 = 250,
  TermInfoStrings__Enum_KeyF46 = 251,
  TermInfoStrings__Enum_KeyF47 = 252,
  TermInfoStrings__Enum_KeyF48 = 253,
  TermInfoStrings__Enum_KeyF49 = 254,
  TermInfoStrings__Enum_KeyF50 = 255,
  TermInfoStrings__Enum_KeyF51 = 256,
  TermInfoStrings__Enum_KeyF52 = 257,
  TermInfoStrings__Enum_KeyF53 = 258,
  TermInfoStrings__Enum_KeyF54 = 259,
  TermInfoStrings__Enum_KeyF55 = 260,
  TermInfoStrings__Enum_KeyF56 = 261,
  TermInfoStrings__Enum_KeyF57 = 262,
  TermInfoStrings__Enum_KeyF58 = 263,
  TermInfoStrings__Enum_KeyF59 = 264,
  TermInfoStrings__Enum_KeyF60 = 265,
  TermInfoStrings__Enum_KeyF61 = 266,
  TermInfoStrings__Enum_KeyF62 = 267,
  TermInfoStrings__Enum_KeyF63 = 268,
  TermInfoStrings__Enum_ClrBol = 269,
  TermInfoStrings__Enum_ClearMargins = 270,
  TermInfoStrings__Enum_SetLeftMargin = 271,
  TermInfoStrings__Enum_SetRightMargin = 272,
  TermInfoStrings__Enum_LabelFormat = 273,
  TermInfoStrings__Enum_SetClock = 274,
  TermInfoStrings__Enum_DisplayClock = 275,
  TermInfoStrings__Enum_RemoveClock = 276,
  TermInfoStrings__Enum_CreateWindow = 277,
  TermInfoStrings__Enum_GotoWindow = 278,
  TermInfoStrings__Enum_Hangup = 279,
  TermInfoStrings__Enum_DialPhone = 280,
  TermInfoStrings__Enum_QuickDial = 281,
  TermInfoStrings__Enum_Tone = 282,
  TermInfoStrings__Enum_Pulse = 283,
  TermInfoStrings__Enum_FlashHook = 284,
  TermInfoStrings__Enum_FixedPause = 285,
  TermInfoStrings__Enum_WaitTone = 286,
  TermInfoStrings__Enum_User0 = 287,
  TermInfoStrings__Enum_User1 = 288,
  TermInfoStrings__Enum_User2 = 289,
  TermInfoStrings__Enum_User3 = 290,
  TermInfoStrings__Enum_User4 = 291,
  TermInfoStrings__Enum_User5 = 292,
  TermInfoStrings__Enum_User6 = 293,
  TermInfoStrings__Enum_User7 = 294,
  TermInfoStrings__Enum_User8 = 295,
  TermInfoStrings__Enum_User9 = 296,
  TermInfoStrings__Enum_OrigPair = 297,
  TermInfoStrings__Enum_OrigColors = 298,
  TermInfoStrings__Enum_InitializeColor = 299,
  TermInfoStrings__Enum_InitializePair = 300,
  TermInfoStrings__Enum_SetColorPair = 301,
  TermInfoStrings__Enum_SetForeground = 302,
  TermInfoStrings__Enum_SetBackground = 303,
  TermInfoStrings__Enum_ChangeCharPitch = 304,
  TermInfoStrings__Enum_ChangeLinePitch = 305,
  TermInfoStrings__Enum_ChangeResHorz = 306,
  TermInfoStrings__Enum_ChangeResVert = 307,
  TermInfoStrings__Enum_DefineChar = 308,
  TermInfoStrings__Enum_EnterDoublewideMode = 309,
  TermInfoStrings__Enum_EnterDraftQuality = 310,
  TermInfoStrings__Enum_EnterItalicsMode = 311,
  TermInfoStrings__Enum_EnterLeftwardMode = 312,
  TermInfoStrings__Enum_EnterMicroMode = 313,
  TermInfoStrings__Enum_EnterNearLetterQuality = 314,
  TermInfoStrings__Enum_EnterNormalQuality = 315,
  TermInfoStrings__Enum_EnterShadowMode = 316,
  TermInfoStrings__Enum_EnterSubscriptMode = 317,
  TermInfoStrings__Enum_EnterSuperscriptMode = 318,
  TermInfoStrings__Enum_EnterUpwardMode = 319,
  TermInfoStrings__Enum_ExitDoublewideMode = 320,
  TermInfoStrings__Enum_ExitItalicsMode = 321,
  TermInfoStrings__Enum_ExitLeftwardMode = 322,
  TermInfoStrings__Enum_ExitMicroMode = 323,
  TermInfoStrings__Enum_ExitShadowMode = 324,
  TermInfoStrings__Enum_ExitSubscriptMode = 325,
  TermInfoStrings__Enum_ExitSuperscriptMode = 326,
  TermInfoStrings__Enum_ExitUpwardMode = 327,
  TermInfoStrings__Enum_MicroColumnAddress = 328,
  TermInfoStrings__Enum_MicroDown = 329,
  TermInfoStrings__Enum_MicroLeft = 330,
  TermInfoStrings__Enum_MicroRight = 331,
  TermInfoStrings__Enum_MicroRowAddress = 332,
  TermInfoStrings__Enum_MicroUp = 333,
  TermInfoStrings__Enum_OrderOfPins = 334,
  TermInfoStrings__Enum_ParmDownMicro = 335,
  TermInfoStrings__Enum_ParmLeftMicro = 336,
  TermInfoStrings__Enum_ParmRightMicro = 337,
  TermInfoStrings__Enum_ParmUpMicro = 338,
  TermInfoStrings__Enum_SelectCharSet = 339,
  TermInfoStrings__Enum_SetBottomMargin = 340,
  TermInfoStrings__Enum_SetBottomMarginParm = 341,
  TermInfoStrings__Enum_SetLeftMarginParm = 342,
  TermInfoStrings__Enum_SetRightMarginParm = 343,
  TermInfoStrings__Enum_SetTopMargin = 344,
  TermInfoStrings__Enum_SetTopMarginParm = 345,
  TermInfoStrings__Enum_StartBitImage = 346,
  TermInfoStrings__Enum_StartCharSetDef = 347,
  TermInfoStrings__Enum_StopBitImage = 348,
  TermInfoStrings__Enum_StopCharSetDef = 349,
  TermInfoStrings__Enum_SubscriptCharacters = 350,
  TermInfoStrings__Enum_SuperscriptCharacters = 351,
  TermInfoStrings__Enum_TheseCauseCr = 352,
  TermInfoStrings__Enum_ZeroMotion = 353,
  TermInfoStrings__Enum_CharSetNames = 354,
  TermInfoStrings__Enum_KeyMouse = 355,
  TermInfoStrings__Enum_MouseInfo = 356,
  TermInfoStrings__Enum_ReqMousePos = 357,
  TermInfoStrings__Enum_GetMouse = 358,
  TermInfoStrings__Enum_SetAForeground = 359,
  TermInfoStrings__Enum_SetABackground = 360,
  TermInfoStrings__Enum_PkeyPlab = 361,
  TermInfoStrings__Enum_DeviceType = 362,
  TermInfoStrings__Enum_CodeSetInit = 363,
  TermInfoStrings__Enum_Set0DesSeq = 364,
  TermInfoStrings__Enum_Set1DesSeq = 365,
  TermInfoStrings__Enum_Set2DesSeq = 366,
  TermInfoStrings__Enum_Set3DesSeq = 367,
  TermInfoStrings__Enum_SetLrMargin = 368,
  TermInfoStrings__Enum_SetTbMargin = 369,
  TermInfoStrings__Enum_BitImageRepeat = 370,
  TermInfoStrings__Enum_BitImageNewline = 371,
  TermInfoStrings__Enum_BitImageCarriageReturn = 372,
  TermInfoStrings__Enum_ColorNames = 373,
  TermInfoStrings__Enum_DefineBitImageRegion = 374,
  TermInfoStrings__Enum_EndBitImageRegion = 375,
  TermInfoStrings__Enum_SetColorBand = 376,
  TermInfoStrings__Enum_SetPageLength = 377,
  TermInfoStrings__Enum_DisplayPcChar = 378,
  TermInfoStrings__Enum_EnterPcCharsetMode = 379,
  TermInfoStrings__Enum_ExitPcCharsetMode = 380,
  TermInfoStrings__Enum_EnterScancodeMode = 381,
  TermInfoStrings__Enum_ExitScancodeMode = 382,
  TermInfoStrings__Enum_PcTermOptions = 383,
  TermInfoStrings__Enum_ScancodeEscape = 384,
  TermInfoStrings__Enum_AltScancodeEsc = 385,
  TermInfoStrings__Enum_EnterHorizontalHlMode = 386,
  TermInfoStrings__Enum_EnterLeftHlMode = 387,
  TermInfoStrings__Enum_EnterLowHlMode = 388,
  TermInfoStrings__Enum_EnterRightHlMode = 389,
  TermInfoStrings__Enum_EnterTopHlMode = 390,
  TermInfoStrings__Enum_EnterVerticalHlMode = 391,
  TermInfoStrings__Enum_SetAAttributes = 392,
  TermInfoStrings__Enum_SetPglenInch = 393,
  TermInfoStrings__Enum_Last = 394,
};}