namespace app {
struct ArgumentNullException__StaticFields {
};
struct ArgumentNullException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArgumentNullException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArgumentNullException__VTable vtable;
};

struct ArgumentOutOfRangeException__Fields {
  struct ArgumentException__Fields _;
  struct Object * m_actualValue;
};
struct ArgumentOutOfRangeException {
  struct ArgumentOutOfRangeException__Class *klass;
  struct MonitorData *monitor;
  struct ArgumentOutOfRangeException__Fields fields;
};
struct ArgumentOutOfRangeException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct ArgumentOutOfRangeException__StaticFields {
  struct String * _rangeMessage;
};
struct ArgumentOutOfRangeException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArgumentOutOfRangeException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArgumentOutOfRangeException__VTable vtable;
};

struct ArithmeticException__Fields {
  struct SystemException__Fields _;
};
struct ArithmeticException {
  struct ArithmeticException__Class *klass;
  struct MonitorData *monitor;
  struct ArithmeticException__Fields fields;
};
struct ArithmeticException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct ArithmeticException__StaticFields {
};
struct ArithmeticException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArithmeticException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArithmeticException__VTable vtable;
};

struct ArrayTypeMismatchException__Fields {
  struct SystemException__Fields _;
};
struct ArrayTypeMismatchException {
  struct ArrayTypeMismatchException__Class *klass;
  struct MonitorData *monitor;
  struct ArrayTypeMismatchException__Fields fields;
};
struct ArrayTypeMismatchException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct ArrayTypeMismatchException__StaticFields {
};
struct ArrayTypeMismatchException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArrayTypeMismatchException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArrayTypeMismatchException__VTable vtable;
};

struct Attribute__Array {
  struct Attribute__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Attribute * vector[32];
};

enum AttributeTargets__Enum : int32_t {
  AttributeTargets__Enum_Assembly = 1,
  AttributeTargets__Enum_Module = 2,
  AttributeTargets__Enum_Class = 4,
  AttributeTargets__Enum_Struct = 8,
  AttributeTargets__Enum_Enum = 16,
  AttributeTargets__Enum_Constructor = 32,
  AttributeTargets__Enum_Method = 64,
  AttributeTargets__Enum_Property = 128,
  AttributeTargets__Enum_Field = 256,
  AttributeTargets__Enum_Event = 512,
  AttributeTargets__Enum_Interface = 1024,
  AttributeTargets__Enum_Parameter = 2048,
  AttributeTargets__Enum_Delegate = 4096,
  AttributeTargets__Enum_ReturnValue = 8192,
  AttributeTargets__Enum_GenericParameter = 16384,
  AttributeTargets__Enum_All = 32767,
};
struct AttributeTargets__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AttributeTargets__Enum value;
};
struct __declspec(align(8)) AttributeUsageAttribute__Fields {
  enum AttributeTargets__Enum m_attributeTarget;
  bool m_allowMultiple;
  bool m_inherited;
};
struct AttributeUsageAttribute {
  struct AttributeUsageAttribute__Class *klass;
  struct MonitorData *monitor;
  struct AttributeUsageAttribute__Fields fields;
};
struct AttributeUsageAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AttributeUsageAttribute__StaticFields {
  struct AttributeUsageAttribute * Default;
};
struct AttributeUsageAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttributeUsageAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttributeUsageAttribute__VTable vtable;
};

struct BadImageFormatException__Fields {
  struct SystemException__Fields _;
  struct String * _fileName;
  struct String * _fusionLog;
};
struct BadImageFormatException {
  struct BadImageFormatException__Class *klass;
  struct MonitorData *monitor;
  struct BadImageFormatException__Fields fields;
};
struct BadImageFormatException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct BadImageFormatException__StaticFields {
};
struct BadImageFormatException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BadImageFormatException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BadImageFormatException__VTable vtable;
};

struct CannotUnloadAppDomainException__Fields {
  struct SystemException__Fields _;
};
struct CannotUnloadAppDomainException {
  struct CannotUnloadAppDomainException__Class *klass;
  struct MonitorData *monitor;
  struct CannotUnloadAppDomainException__Fields fields;
};
struct CannotUnloadAppDomainException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct CannotUnloadAppDomainException__StaticFields {
};
struct CannotUnloadAppDomainException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CannotUnloadAppDomainException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CannotUnloadAppDomainException__VTable vtable;
};

enum UnicodeCategory__Enum : int32_t {
  UnicodeCategory__Enum_UppercaseLetter = 0,
  UnicodeCategory__Enum_LowercaseLetter = 1,
  UnicodeCategory__Enum_TitlecaseLetter = 2,
  UnicodeCategory__Enum_ModifierLetter = 3,
  UnicodeCategory__Enum_OtherLetter = 4,
  UnicodeCategory__Enum_NonSpacingMark = 5,
  UnicodeCategory__Enum_SpacingCombiningMark = 6,
  UnicodeCategory__Enum_EnclosingMark = 7,
  UnicodeCategory__Enum_DecimalDigitNumber = 8,
  UnicodeCategory__Enum_LetterNumber = 9,
  UnicodeCategory__Enum_OtherNumber = 10,
  UnicodeCategory__Enum_SpaceSeparator = 11,
  UnicodeCategory__Enum_LineSeparator = 12,
  UnicodeCategory__Enum_ParagraphSeparator = 13,
  UnicodeCategory__Enum_Control = 14,
  UnicodeCategory__Enum_Format = 15,
  UnicodeCategory__Enum_Surrogate = 16,
  UnicodeCategory__Enum_PrivateUse = 17,
  UnicodeCategory__Enum_ConnectorPunctuation = 18,
  UnicodeCategory__Enum_DashPunctuation = 19,
  UnicodeCategory__Enum_OpenPunctuation = 20,
  UnicodeCategory__Enum_ClosePunctuation = 21,
  UnicodeCategory__Enum_InitialQuotePunctuation = 22,
  UnicodeCategory__Enum_FinalQuotePunctuation = 23,
  UnicodeCategory__Enum_OtherPunctuation = 24,
  UnicodeCategory__Enum_MathSymbol = 25,
  UnicodeCategory__Enum_CurrencySymbol = 26,
  UnicodeCategory__Enum_ModifierSymbol = 27,
  UnicodeCategory__Enum_OtherSymbol = 28,
  UnicodeCategory__Enum_OtherNotAssigned = 29,
};
struct UnicodeCategory__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnicodeCategory__Enum value;
};

struct __declspec(align(8)) CharEnumerator__Fields {
  struct String * str;
  int32_t index;
  uint16_t currentElement;
};
struct CharEnumerator {
  struct CharEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct CharEnumerator__Fields fields;
};
struct CharEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData Reset;
  VirtualInvokeData Clone;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
};
struct CharEnumerator__StaticFields {
};
struct CharEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharEnumerator__VTable vtable;
};

struct __declspec(align(8)) CLSCompliantAttribute__Fields {
  bool m_compliant;
};
struct CLSCompliantAttribute {
  struct CLSCompliantAttribute__Class *klass;
  struct MonitorData *monitor;
  struct CLSCompliantAttribute__Fields fields;
};
struct CLSCompliantAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct CLSCompliantAttribute__StaticFields {
};
struct CLSCompliantAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CLSCompliantAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CLSCompliantAttribute__VTable vtable;
};

struct ConsoleCancelEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct ConsoleCancelEventHandler {
  struct ConsoleCancelEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct ConsoleCancelEventHandler__Fields fields;
};
enum ConsoleSpecialKey__Enum : int32_t {
  ConsoleSpecialKey__Enum_ControlC = 0,
  ConsoleSpecialKey__Enum_ControlBreak = 1,
};
struct ConsoleSpecialKey__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConsoleSpecialKey__Enum value;
};
struct __declspec(align(8)) ConsoleCancelEventArgs__Fields {
  enum ConsoleSpecialKey__Enum _type;
  bool _cancel;
};
struct ConsoleCancelEventArgs {
  struct ConsoleCancelEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct ConsoleCancelEventArgs__Fields fields;
};
struct ConsoleCancelEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConsoleCancelEventArgs__StaticFields {
};
struct ConsoleCancelEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConsoleCancelEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConsoleCancelEventArgs__VTable vtable;
};
struct ConsoleCancelEventHandler__VTable {
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
struct ConsoleCancelEventHandler__StaticFields {
};
struct ConsoleCancelEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConsoleCancelEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConsoleCancelEventHandler__VTable vtable;
};

enum ConsoleKey__Enum : int32_t {
  ConsoleKey__Enum_Backspace = 8,
  ConsoleKey__Enum_Tab = 9,
  ConsoleKey__Enum_Clear = 12,
  ConsoleKey__Enum_Enter = 13,
  ConsoleKey__Enum_Pause = 19,
  ConsoleKey__Enum_Escape = 27,
  ConsoleKey__Enum_Spacebar = 32,
  ConsoleKey__Enum_PageUp = 33,
  ConsoleKey__Enum_PageDown = 34,
  ConsoleKey__Enum_End = 35,
  ConsoleKey__Enum_Home = 36,
  ConsoleKey__Enum_LeftArrow = 37,
  ConsoleKey__Enum_UpArrow = 38,
  ConsoleKey__Enum_RightArrow = 39,
  ConsoleKey__Enum_DownArrow = 40,
  ConsoleKey__Enum_Select = 41,
  ConsoleKey__Enum_Print = 42,
  ConsoleKey__Enum_Execute = 43,
  ConsoleKey__Enum_PrintScreen = 44,
  ConsoleKey__Enum_Insert = 45,
  ConsoleKey__Enum_Delete = 46,
  ConsoleKey__Enum_Help = 47,
  ConsoleKey__Enum_D0 = 48,
  ConsoleKey__Enum_D1 = 49,
  ConsoleKey__Enum_D2 = 50,
  ConsoleKey__Enum_D3 = 51,
  ConsoleKey__Enum_D4 = 52,
  ConsoleKey__Enum_D5 = 53,
  ConsoleKey__Enum_D6 = 54,
  ConsoleKey__Enum_D7 = 55,
  ConsoleKey__Enum_D8 = 56,
  ConsoleKey__Enum_D9 = 57,
  ConsoleKey__Enum_A = 65,
  ConsoleKey__Enum_B = 66,
  ConsoleKey__Enum_C = 67,
  ConsoleKey__Enum_D = 68,
  ConsoleKey__Enum_E = 69,
  ConsoleKey__Enum_F = 70,
  ConsoleKey__Enum_G = 71,
  ConsoleKey__Enum_H = 72,
  ConsoleKey__Enum_I = 73,
  ConsoleKey__Enum_J = 74,
  ConsoleKey__Enum_K = 75,
  ConsoleKey__Enum_L = 76,
  ConsoleKey__Enum_M = 77,
  ConsoleKey__Enum_N = 78,
  ConsoleKey__Enum_O = 79,
  ConsoleKey__Enum_P = 80,
  ConsoleKey__Enum_Q = 81,
  ConsoleKey__Enum_R = 82,
  ConsoleKey__Enum_S = 83,
  ConsoleKey__Enum_T = 84,
  ConsoleKey__Enum_U = 85,
  ConsoleKey__Enum_V = 86,
  ConsoleKey__Enum_W = 87,
  ConsoleKey__Enum_X = 88,
  ConsoleKey__Enum_Y = 89,
  ConsoleKey__Enum_Z = 90,
  ConsoleKey__Enum_LeftWindows = 91,
  ConsoleKey__Enum_RightWindows = 92,
  ConsoleKey__Enum_Applications = 93,
  ConsoleKey__Enum_Sleep = 95,
  ConsoleKey__Enum_NumPad0 = 96,
  ConsoleKey__Enum_NumPad1 = 97,
  ConsoleKey__Enum_NumPad2 = 98,
  ConsoleKey__Enum_NumPad3 = 99,
  ConsoleKey__Enum_NumPad4 = 100,
  ConsoleKey__Enum_NumPad5 = 101,
  ConsoleKey__Enum_NumPad6 = 102,
  ConsoleKey__Enum_NumPad7 = 103,
  ConsoleKey__Enum_NumPad8 = 104,
  ConsoleKey__Enum_NumPad9 = 105,
  ConsoleKey__Enum_Multiply = 106,
  ConsoleKey__Enum_Add = 107,
  ConsoleKey__Enum_Separator = 108,
  ConsoleKey__Enum_Subtract = 109,
  ConsoleKey__Enum_Decimal = 110,
  ConsoleKey__Enum_Divide = 111,
  ConsoleKey__Enum_F1 = 112,
  ConsoleKey__Enum_F2 = 113,
  ConsoleKey__Enum_F3 = 114,
  ConsoleKey__Enum_F4 = 115,
  ConsoleKey__Enum_F5 = 116,
  ConsoleKey__Enum_F6 = 117,
  ConsoleKey__Enum_F7 = 118,
  ConsoleKey__Enum_F8 = 119,
  ConsoleKey__Enum_F9 = 120,
  ConsoleKey__Enum_F10 = 121,
  ConsoleKey__Enum_F11 = 122,
  ConsoleKey__Enum_F12 = 123,
  ConsoleKey__Enum_F13 = 124,
  ConsoleKey__Enum_F14 = 125,
  ConsoleKey__Enum_F15 = 126,
  ConsoleKey__Enum_F16 = 127,
  ConsoleKey__Enum_F17 = 128,
  ConsoleKey__Enum_F18 = 129,
  ConsoleKey__Enum_F19 = 130,
  ConsoleKey__Enum_F20 = 131,
  ConsoleKey__Enum_F21 = 132,
  ConsoleKey__Enum_F22 = 133,
  ConsoleKey__Enum_F23 = 134,
  ConsoleKey__Enum_F24 = 135,
  ConsoleKey__Enum_BrowserBack = 166,
  ConsoleKey__Enum_BrowserForward = 167,
  ConsoleKey__Enum_BrowserRefresh = 168,
  ConsoleKey__Enum_BrowserStop = 169,
  ConsoleKey__Enum_BrowserSearch = 170,
  ConsoleKey__Enum_BrowserFavorites = 171,
  ConsoleKey__Enum_BrowserHome = 172,
  ConsoleKey__Enum_VolumeMute = 173,
  ConsoleKey__Enum_VolumeDown = 174,
  ConsoleKey__Enum_VolumeUp = 175,
  ConsoleKey__Enum_MediaNext = 176,
  ConsoleKey__Enum_MediaPrevious = 177,
  ConsoleKey__Enum_MediaStop = 178,
  ConsoleKey__Enum_MediaPlay = 179,
  ConsoleKey__Enum_LaunchMail = 180,
  ConsoleKey__Enum_LaunchMediaSelect = 181,
  ConsoleKey__Enum_LaunchApp1 = 182,
  ConsoleKey__Enum_LaunchApp2 = 183,
  ConsoleKey__Enum_Oem1 = 186,
  ConsoleKey__Enum_OemPlus = 187,
  ConsoleKey__Enum_OemComma = 188,
  ConsoleKey__Enum_OemMinus = 189,
  ConsoleKey__Enum_OemPeriod = 190,
  ConsoleKey__Enum_Oem2 = 191,
  ConsoleKey__Enum_Oem3 = 192,
  ConsoleKey__Enum_Oem4 = 219,
  ConsoleKey__Enum_Oem5 = 220,
  ConsoleKey__Enum_Oem6 = 221,
  ConsoleKey__Enum_Oem7 = 222,
  ConsoleKey__Enum_Oem8 = 223,
  ConsoleKey__Enum_Oem102 = 226,
  ConsoleKey__Enum_Process = 229,
  ConsoleKey__Enum_Packet = 231,
  ConsoleKey__Enum_Attention = 246,
  ConsoleKey__Enum_CrSel = 247,
  ConsoleKey__Enum_ExSel = 248,
  ConsoleKey__Enum_EraseEndOfFile = 249,
  ConsoleKey__Enum_Play = 250,
  ConsoleKey__Enum_Zoom = 251,
  ConsoleKey__Enum_NoName = 252,
  ConsoleKey__Enum_Pa1 = 253,
  ConsoleKey__Enum_OemClear = 254,
};
struct ConsoleKey__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConsoleKey__Enum value;
};
enum ConsoleModifiers__Enum : int32_t {
  ConsoleModifiers__Enum_Alt = 1,
  ConsoleModifiers__Enum_Shift = 2,
  ConsoleModifiers__Enum_Control = 4,
};
struct ConsoleModifiers__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConsoleModifiers__Enum value;
};
struct ConsoleKeyInfo {
  uint16_t _keyChar;
  enum ConsoleKey__Enum _key;
  enum ConsoleModifiers__Enum _mods;
};
struct ConsoleKeyInfo__Boxed {
  struct ConsoleKeyInfo__Class *klass;
  struct MonitorData *monitor;
  struct ConsoleKeyInfo fields;
};
struct ConsoleKeyInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConsoleKeyInfo__StaticFields {
};
struct ConsoleKeyInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConsoleKeyInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConsoleKeyInfo__VTable vtable;
};

struct ContextBoundObject__Fields {
  struct MarshalByRefObject__Fields _;
};
struct ContextBoundObject {
  struct ContextBoundObject__Class *klass;
  struct MonitorData *monitor;
  struct ContextBoundObject__Fields fields;
};
struct ContextBoundObject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CreateObjRef;
  VirtualInvokeData InitializeLifetimeService;
};
struct ContextBoundObject__StaticFields {
};
struct ContextBoundObject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContextBoundObject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContextBoundObject__VTable vtable;
};

struct ContextStaticAttribute {
  struct ContextStaticAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct ContextStaticAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ContextStaticAttribute__StaticFields {
};
struct ContextStaticAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContextStaticAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContextStaticAttribute__VTable vtable;
};

struct IConvertible {
  struct IConvertible__Class *klass;
  struct MonitorData *monitor;
};
struct IConvertible__VTable {
  VirtualInvokeData GetTypeCode;
  VirtualInvokeData ToBoolean;
  VirtualInvokeData ToChar;
  VirtualInvokeData ToSByte;
  VirtualInvokeData ToByte;
  VirtualInvokeData ToInt16;
  VirtualInvokeData ToUInt16;
  VirtualInvokeData ToInt32;
  VirtualInvokeData ToUInt32;
  VirtualInvokeData ToInt64;
  VirtualInvokeData ToUInt64;
  VirtualInvokeData ToSingle;
  VirtualInvokeData ToDouble;
  VirtualInvokeData ToDecimal;
  VirtualInvokeData ToDateTime;
  VirtualInvokeData ToString;
  VirtualInvokeData ToType;
};
struct IConvertible__StaticFields {
};
struct IConvertible__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IConvertible__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IConvertible__VTable vtable;
};

enum Base64FormattingOptions__Enum : int32_t {
  Base64FormattingOptions__Enum_None = 0,
  Base64FormattingOptions__Enum_InsertLineBreaks = 1,
};
struct Base64FormattingOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Base64FormattingOptions__Enum value;
};

enum DateTimeKind__Enum : int32_t {
  DateTimeKind__Enum_Unspecified = 0,
  DateTimeKind__Enum_Utc = 1,
  DateTimeKind__Enum_Local = 2,
};
struct DateTimeKind__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DateTimeKind__Enum value;
};

struct DateTimeOffset {
  struct DateTime m_dateTime;
  int16_t m_offsetMinutes;
};
struct DateTimeOffset__Boxed {
  struct DateTimeOffset__Class *klass;
  struct MonitorData *monitor;
  struct DateTimeOffset fields;
};
struct DateTimeOffset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_IComparable_CompareTo;
  VirtualInvokeData ToString_1;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
  VirtualInvokeData CompareTo;
  VirtualInvokeData Equals_1;
};
struct DateTimeOffset__StaticFields {
  struct DateTimeOffset MinValue;
  struct DateTimeOffset MaxValue;
};
struct DateTimeOffset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DateTimeOffset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DateTimeOffset__VTable vtable;
};

struct DBNull {
  struct DBNull__Class *klass;
  struct MonitorData *monitor;
};
struct DBNull__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
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
  VirtualInvokeData ToString_1;
  VirtualInvokeData System_IConvertible_ToType;
};
struct DBNull__StaticFields {
  struct DBNull * Value;
};
struct DBNull__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DBNull__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DBNull__VTable vtable;
};

struct __declspec(align(8)) DefaultBinder_BinderState__Fields {
  struct Int32__Array * m_argsMap;
  int32_t m_originalSize;
  bool m_isParamArray;
};
struct DefaultBinder_BinderState {
  struct DefaultBinder_BinderState__Class *klass;
  struct MonitorData *monitor;
  struct DefaultBinder_BinderState__Fields fields;
};
struct DefaultBinder_BinderState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DefaultBinder_BinderState__StaticFields {
};
struct DefaultBinder_BinderState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultBinder_BinderState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultBinder_BinderState__VTable vtable;
};

struct DefaultBinder_c {
  struct DefaultBinder_c__Class *klass;
  struct MonitorData *monitor;
};
struct Predicate_1_Type___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_Type_ {
  struct Predicate_1_Type___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_Type___Fields fields;
};
struct Predicate_1_Type___VTable {
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
struct Predicate_1_Type___StaticFields {
};
struct Predicate_1_Type___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Predicate_1_Type___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Predicate_1_Type___VTable vtable;
};
struct DefaultBinder_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DefaultBinder_c__StaticFields {
  struct DefaultBinder_c * __9;
  struct Predicate_1_Type_ * __9__3_0;
};
struct DefaultBinder_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultBinder_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultBinder_c__VTable vtable;
};

struct DivideByZeroException__Fields {
  struct ArithmeticException__Fields _;
};
struct DivideByZeroException {
  struct DivideByZeroException__Class *klass;
  struct MonitorData *monitor;
  struct DivideByZeroException__Fields fields;
};
struct DivideByZeroException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct DivideByZeroException__StaticFields {
};
struct DivideByZeroException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DivideByZeroException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DivideByZeroException__VTable vtable;
};

struct TypeLoadException__Fields {
  struct SystemException__Fields _;
  struct String * ClassName;
  struct String * AssemblyName;
  struct String * MessageArg;
  int32_t ResourceId;
};
struct TypeLoadException {
  struct TypeLoadException__Class *klass;
  struct MonitorData *monitor;
  struct TypeLoadException__Fields fields;
};
struct DllNotFoundException__Fields {
  struct TypeLoadException__Fields _;
};
struct DllNotFoundException {
  struct DllNotFoundException__Class *klass;
  struct MonitorData *monitor;
  struct DllNotFoundException__Fields fields;
};
struct TypeLoadException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct TypeLoadException__StaticFields {
};
struct TypeLoadException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeLoadException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeLoadException__VTable vtable;
};
struct DllNotFoundException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct DllNotFoundException__StaticFields {
};
struct DllNotFoundException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DllNotFoundException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DllNotFoundException__VTable vtable;
};

struct Empty {
  struct Empty__Class *klass;
  struct MonitorData *monitor;
};
struct Empty__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
};
struct Empty__StaticFields {
  struct Empty * Value;
};
struct Empty__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Empty__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Empty__VTable vtable;
};

struct EntryPointNotFoundException__Fields {
  struct TypeLoadException__Fields _;
};
struct EntryPointNotFoundException {
  struct EntryPointNotFoundException__Class *klass;
  struct MonitorData *monitor;
  struct EntryPointNotFoundException__Fields fields;
};
struct EntryPointNotFoundException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};}