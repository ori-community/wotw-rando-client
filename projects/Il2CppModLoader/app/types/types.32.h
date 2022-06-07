namespace app {
struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___StaticFields {
};

struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_System_Threading_AsyncLocalValueChangedArgs_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AsyncLocal_1_System_Globalization_CultureInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AsyncLocal_1_System_Globalization_CultureInfo___VTable vtable;
};

struct ThreadState__Enum__VTable {
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

struct ThreadState__Enum__StaticFields {
};

struct ThreadState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ThreadState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ThreadState__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InternalThread__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InternalThread__VTable vtable;
};

struct Thread__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Thread__StaticFields {
    struct LocalDataStoreMgr *s_LocalDataStoreMgr;
    struct LocalDataStoreHolder *s_LocalDataStore;
    struct CultureInfo *m_CurrentCulture;
    struct CultureInfo *m_CurrentUICulture;
    struct AsyncLocal_1_System_Globalization_CultureInfo_ *s_asyncLocalCurrentCulture;
    struct AsyncLocal_1_System_Globalization_CultureInfo_ *s_asyncLocalCurrentUICulture;
    struct Thread *current_thread;
};

struct Thread__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Thread__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NumberFormatter_CustomInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NumberFormatter_CustomInfo__VTable vtable;
};

enum class TypeNameFormatFlags__Enum : int32_t {
    FormatBasic = 0x00000000,
    FormatNamespace = 0x00000001,
    FormatFullInst = 0x00000002,
    FormatAssembly = 0x00000004,
    FormatSignature = 0x00000008,
    FormatNoVersion = 0x00000010,
    FormatAngleBrackets = 0x00000040,
    FormatStubInfo = 0x00000080,
    FormatGenericParam = 0x00000100,
    FormatSerialization = 0x00000103,
};

struct TypeNameFormatFlags__Enum__Boxed {
    struct TypeNameFormatFlags__Enum__Class *klass;
    MonitorData *monitor;
    TypeNameFormatFlags__Enum value;
    
};

struct TypeNameFormatFlags__Enum__VTable {
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

struct TypeNameFormatFlags__Enum__StaticFields {
};

struct TypeNameFormatFlags__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TypeNameFormatFlags__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TypeNameFormatFlags__Enum__VTable vtable;
};

enum class ConsoleColor__Enum : int32_t {
    Black = 0x00000000,
    DarkBlue = 0x00000001,
    DarkGreen = 0x00000002,
    DarkCyan = 0x00000003,
    DarkRed = 0x00000004,
    DarkMagenta = 0x00000005,
    DarkYellow = 0x00000006,
    Gray = 0x00000007,
    DarkGray = 0x00000008,
    Blue = 0x00000009,
    Green = 0x0000000a,
    Cyan = 0x0000000b,
    Red = 0x0000000c,
    Magenta = 0x0000000d,
    Yellow = 0x0000000e,
    White = 0x0000000f,
};

struct ConsoleColor__Enum__Boxed {
    struct ConsoleColor__Enum__Class *klass;
    MonitorData *monitor;
    ConsoleColor__Enum value;
    
};

struct __declspec(align(8)) TermInfoDriver__Fields {
    struct TermInfoReader *reader;
    int32_t cursorLeft;
    int32_t cursorTop;
    struct String *title;
    struct String *titleFormat;
    bool cursorVisible;
    struct String *csrVisible;
    struct String *csrInvisible;
    struct String *clear;
    struct String *bell;
    struct String *term;
    struct StreamReader *stdin_1;
    struct CStreamWriter *stdout_1;
    int32_t windowWidth;
    int32_t windowHeight;
    int32_t bufferHeight;
    int32_t bufferWidth;
    struct Char__Array *buffer;
    int32_t readpos;
    int32_t writepos;
    struct String *keypadXmit;
    struct String *keypadLocal;
    bool inited;
    struct Object *initLock;
    bool initKeys;
    struct String *origPair;
    struct String *origColors;
    struct String *cursorAddress;
    ConsoleColor__Enum fgcolor;
    
    struct String *setfgcolor;
    struct String *setbgcolor;
    int32_t maxColors;
    bool noGetPosition;
    struct Hashtable *keymap;
    struct ByteMatcher *rootmap;
    int32_t rl_startx;
    int32_t rl_starty;
    struct Byte__Array *control_characters;
    struct Char__Array *echobuf;
    int32_t echon;
};

struct TermInfoDriver {
    struct TermInfoDriver__Class *klass;
    MonitorData *monitor;
    struct TermInfoDriver__Fields fields;
};

struct __declspec(align(8)) TermInfoReader__Fields {
    int16_t boolSize;
    int16_t numSize;
    int16_t strOffsets;
    struct Byte__Array *buffer;
    int32_t booleansOffset;
};

struct TermInfoReader {
    struct TermInfoReader__Class *klass;
    MonitorData *monitor;
    struct TermInfoReader__Fields fields;
};

struct StreamReader__Fields {
    struct TextReader__Fields _;
    struct Stream *stream;
    struct Encoding *encoding;
    struct Decoder *decoder;
    struct Byte__Array *byteBuffer;
    struct Char__Array *charBuffer;
    struct Byte__Array *_preamble;
    int32_t charPos;
    int32_t charLen;
    int32_t byteLen;
    int32_t bytePos;
    int32_t _maxCharsPerBuffer;
    bool _detectEncoding;
    bool _checkPreamble;
    bool _isBlocked;
    bool _closable;
    struct Task *_asyncReadTask;
};

struct StreamReader {
    struct StreamReader__Class *klass;
    MonitorData *monitor;
    struct StreamReader__Fields fields;
};

struct CStreamWriter__Fields {
    struct StreamWriter__Fields _;
    struct TermInfoDriver *driver;
};

struct CStreamWriter {
    struct CStreamWriter__Class *klass;
    MonitorData *monitor;
    struct CStreamWriter__Fields fields;
};

struct __declspec(align(8)) ByteMatcher__Fields {
    struct Hashtable *map;
    struct Hashtable *starts;
};

struct ByteMatcher {
    struct ByteMatcher__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TermInfoReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct StreamReader *Null;
};

struct StreamReader__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StreamReader__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CStreamWriter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CStreamWriter__VTable vtable;
};

struct ConsoleColor__Enum__VTable {
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

struct ConsoleColor__Enum__StaticFields {
};

struct ConsoleColor__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConsoleColor__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConsoleColor__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ByteMatcher__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    int32_t *native_terminal_size;
    int32_t terminal_size;
    struct String__Array *locations;
    struct Int32__Array *_consoleColorToAnsiCode;
};

struct TermInfoDriver__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TermInfoDriver__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TermInfoDriver__VTable vtable;
};

enum class TermInfoStrings__Enum : int32_t {
    BackTab = 0x00000000,
    Bell = 0x00000001,
    CarriageReturn = 0x00000002,
    ChangeScrollRegion = 0x00000003,
    ClearAllTabs = 0x00000004,
    ClearScreen = 0x00000005,
    ClrEol = 0x00000006,
    ClrEos = 0x00000007,
    ColumnAddress = 0x00000008,
    CommandCharacter = 0x00000009,
    CursorAddress = 0x0000000a,
    CursorDown = 0x0000000b,
    CursorHome = 0x0000000c,
    CursorInvisible = 0x0000000d,
    CursorLeft = 0x0000000e,
    CursorMemAddress = 0x0000000f,
    CursorNormal = 0x00000010,
    CursorRight = 0x00000011,
    CursorToLl = 0x00000012,
    CursorUp = 0x00000013,
    CursorVisible = 0x00000014,
    DeleteCharacter = 0x00000015,
    DeleteLine = 0x00000016,
    DisStatusLine = 0x00000017,
    DownHalfLine = 0x00000018,
    EnterAltCharsetMode = 0x00000019,
    EnterBlinkMode = 0x0000001a,
    EnterBoldMode = 0x0000001b,
    EnterCaMode = 0x0000001c,
    EnterDeleteMode = 0x0000001d,
    EnterDimMode = 0x0000001e,
    EnterInsertMode = 0x0000001f,
    EnterSecureMode = 0x00000020,
    EnterProtectedMode = 0x00000021,
    EnterReverseMode = 0x00000022,
    EnterStandoutMode = 0x00000023,
    EnterUnderlineMode = 0x00000024,
    EraseChars = 0x00000025,
    ExitAltCharsetMode = 0x00000026,
    ExitAttributeMode = 0x00000027,
    ExitCaMode = 0x00000028,
    ExitDeleteMode = 0x00000029,
    ExitInsertMode = 0x0000002a,
    ExitStandoutMode = 0x0000002b,
    ExitUnderlineMode = 0x0000002c,
    FlashScreen = 0x0000002d,
    FormFeed = 0x0000002e,
    FromStatusLine = 0x0000002f,
    Init1string = 0x00000030,
    Init2string = 0x00000031,
    Init3string = 0x00000032,
    InitFile = 0x00000033,
    InsertCharacter = 0x00000034,
    InsertLine = 0x00000035,
    InsertPadding = 0x00000036,
    KeyBackspace = 0x00000037,
    KeyCatab = 0x00000038,
    KeyClear = 0x00000039,
    KeyCtab = 0x0000003a,
    KeyDc = 0x0000003b,
    KeyDl = 0x0000003c,
    KeyDown = 0x0000003d,
    KeyEic = 0x0000003e,
    KeyEol = 0x0000003f,
    KeyEos = 0x00000040,
    KeyF0 = 0x00000041,
    KeyF1 = 0x00000042,
    KeyF10 = 0x00000043,
    KeyF2 = 0x00000044,
    KeyF3 = 0x00000045,
    KeyF4 = 0x00000046,
    KeyF5 = 0x00000047,
    KeyF6 = 0x00000048,
    KeyF7 = 0x00000049,
    KeyF8 = 0x0000004a,
    KeyF9 = 0x0000004b,
    KeyHome = 0x0000004c,
    KeyIc = 0x0000004d,
    KeyIl = 0x0000004e,
    KeyLeft = 0x0000004f,
    KeyLl = 0x00000050,
    KeyNpage = 0x00000051,
    KeyPpage = 0x00000052,
    KeyRight = 0x00000053,
    KeySf = 0x00000054,
    KeySr = 0x00000055,
    KeyStab = 0x00000056,
    KeyUp = 0x00000057,
    KeypadLocal = 0x00000058,
    KeypadXmit = 0x00000059,
    LabF0 = 0x0000005a,
    LabF1 = 0x0000005b,
    LabF10 = 0x0000005c,
    LabF2 = 0x0000005d,
    LabF3 = 0x0000005e,
    LabF4 = 0x0000005f,
    LabF5 = 0x00000060,
    LabF6 = 0x00000061,
    LabF7 = 0x00000062,
    LabF8 = 0x00000063,
    LabF9 = 0x00000064,
    MetaOff = 0x00000065,
    MetaOn = 0x00000066,
    Newline = 0x00000067,
    PadChar = 0x00000068,
    ParmDch = 0x00000069,
    ParmDeleteLine = 0x0000006a,
    ParmDownCursor = 0x0000006b,
    ParmIch = 0x0000006c,
    ParmIndex = 0x0000006d,
    ParmInsertLine = 0x0000006e,
    ParmLeftCursor = 0x0000006f,
    ParmRightCursor = 0x00000070,
    ParmRindex = 0x00000071,
    ParmUpCursor = 0x00000072,
    PkeyKey = 0x00000073,
    PkeyLocal = 0x00000074,
    PkeyXmit = 0x00000075,
    PrintScreen = 0x00000076,
    PrtrOff = 0x00000077,
    PrtrOn = 0x00000078,
    RepeatChar = 0x00000079,
    Reset1string = 0x0000007a,
    Reset2string = 0x0000007b,
    Reset3string = 0x0000007c,
    ResetFile = 0x0000007d,
    RestoreCursor = 0x0000007e,
    RowAddress = 0x0000007f,
    SaveCursor = 0x00000080,
    ScrollForward = 0x00000081,
    ScrollReverse = 0x00000082,
    SetAttributes = 0x00000083,
    SetTab = 0x00000084,
    SetWindow = 0x00000085,
    Tab = 0x00000086,
    ToStatusLine = 0x00000087,
    UnderlineChar = 0x00000088,
    UpHalfLine = 0x00000089,
    InitProg = 0x0000008a,
    KeyA1 = 0x0000008b,
    KeyA3 = 0x0000008c,
    KeyB2 = 0x0000008d,
    KeyC1 = 0x0000008e,
    KeyC3 = 0x0000008f,
    PrtrNon = 0x00000090,
    CharPadding = 0x00000091,
    AcsChars = 0x00000092,
    PlabNorm = 0x00000093,
    KeyBtab = 0x00000094,
    EnterXonMode = 0x00000095,
    ExitXonMode = 0x00000096,
    EnterAmMode = 0x00000097,
    ExitAmMode = 0x00000098,
    XonCharacter = 0x00000099,
    XoffCharacter = 0x0000009a,
    EnaAcs = 0x0000009b,
    LabelOn = 0x0000009c,
    LabelOff = 0x0000009d,
    KeyBeg = 0x0000009e,
    KeyCancel = 0x0000009f,
    KeyClose = 0x000000a0,
    KeyCommand = 0x000000a1,
    KeyCopy = 0x000000a2,
    KeyCreate = 0x000000a3,
    KeyEnd = 0x000000a4,
    KeyEnter = 0x000000a5,
    KeyExit = 0x000000a6,
    KeyFind = 0x000000a7,
    KeyHelp = 0x000000a8,
    KeyMark = 0x000000a9,
    KeyMessage = 0x000000aa,
    KeyMove = 0x000000ab,
    KeyNext = 0x000000ac,
    KeyOpen = 0x000000ad,
    KeyOptions = 0x000000ae,
    KeyPrevious = 0x000000af,
    KeyPrint = 0x000000b0,
    KeyRedo = 0x000000b1,
    KeyReference = 0x000000b2,
    KeyRefresh = 0x000000b3,
    KeyReplace = 0x000000b4,
    KeyRestart = 0x000000b5,
    KeyResume = 0x000000b6,
    KeySave = 0x000000b7,
    KeySuspend = 0x000000b8,
    KeyUndo = 0x000000b9,
    KeySbeg = 0x000000ba,
    KeyScancel = 0x000000bb,
    KeyScommand = 0x000000bc,
    KeyScopy = 0x000000bd,
    KeyScreate = 0x000000be,
    KeySdc = 0x000000bf,
    KeySdl = 0x000000c0,
    KeySelect = 0x000000c1,
    KeySend = 0x000000c2,
    KeySeol = 0x000000c3,
    KeySexit = 0x000000c4,
    KeySfind = 0x000000c5,
    KeyShelp = 0x000000c6,
    KeyShome = 0x000000c7,
    KeySic = 0x000000c8,
    KeySleft = 0x000000c9,
    KeySmessage = 0x000000ca,
    KeySmove = 0x000000cb,
    KeySnext = 0x000000cc,
    KeySoptions = 0x000000cd,
    KeySprevious = 0x000000ce,
    KeySprint = 0x000000cf,
    KeySredo = 0x000000d0,
    KeySreplace = 0x000000d1,
    KeySright = 0x000000d2,
    KeySrsume = 0x000000d3,
    KeySsave = 0x000000d4,
    KeySsuspend = 0x000000d5,
    KeySundo = 0x000000d6,
    ReqForInput = 0x000000d7,
    KeyF11 = 0x000000d8,
    KeyF12 = 0x000000d9,
    KeyF13 = 0x000000da,
    KeyF14 = 0x000000db,
    KeyF15 = 0x000000dc,
    KeyF16 = 0x000000dd,
    KeyF17 = 0x000000de,
    KeyF18 = 0x000000df,
    KeyF19 = 0x000000e0,
    KeyF20 = 0x000000e1,
    KeyF21 = 0x000000e2,
    KeyF22 = 0x000000e3,
    KeyF23 = 0x000000e4,
    KeyF24 = 0x000000e5,
    KeyF25 = 0x000000e6,
    KeyF26 = 0x000000e7,
    KeyF27 = 0x000000e8,
    KeyF28 = 0x000000e9,
    KeyF29 = 0x000000ea,
    KeyF30 = 0x000000eb,
    KeyF31 = 0x000000ec,
    KeyF32 = 0x000000ed,
    KeyF33 = 0x000000ee,
    KeyF34 = 0x000000ef,
    KeyF35 = 0x000000f0,
    KeyF36 = 0x000000f1,
    KeyF37 = 0x000000f2,
    KeyF38 = 0x000000f3,
    KeyF39 = 0x000000f4,
    KeyF40 = 0x000000f5,
    KeyF41 = 0x000000f6,
    KeyF42 = 0x000000f7,
    KeyF43 = 0x000000f8,
    KeyF44 = 0x000000f9,
    KeyF45 = 0x000000fa,
    KeyF46 = 0x000000fb,
    KeyF47 = 0x000000fc,
    KeyF48 = 0x000000fd,
    KeyF49 = 0x000000fe,
    KeyF50 = 0x000000ff,
    KeyF51 = 0x00000100,
    KeyF52 = 0x00000101,
    KeyF53 = 0x00000102,
    KeyF54 = 0x00000103,
    KeyF55 = 0x00000104,
    KeyF56 = 0x00000105,
    KeyF57 = 0x00000106,
    KeyF58 = 0x00000107,
    KeyF59 = 0x00000108,
    KeyF60 = 0x00000109,
    KeyF61 = 0x0000010a,
    KeyF62 = 0x0000010b,
    KeyF63 = 0x0000010c,
    ClrBol = 0x0000010d,
    ClearMargins = 0x0000010e,
    SetLeftMargin = 0x0000010f,
    SetRightMargin = 0x00000110,
    LabelFormat = 0x00000111,
    SetClock = 0x00000112,
    DisplayClock = 0x00000113,
    RemoveClock = 0x00000114,
    CreateWindow = 0x00000115,
    GotoWindow = 0x00000116,
    Hangup = 0x00000117,
    DialPhone = 0x00000118,
    QuickDial = 0x00000119,
    Tone = 0x0000011a,
    Pulse = 0x0000011b,
    FlashHook = 0x0000011c,
    FixedPause = 0x0000011d,
    WaitTone = 0x0000011e,
    User0 = 0x0000011f,
    User1 = 0x00000120,
    User2 = 0x00000121,
    User3 = 0x00000122,
    User4 = 0x00000123,
    User5 = 0x00000124,
    User6 = 0x00000125,
    User7 = 0x00000126,
    User8 = 0x00000127,
    User9 = 0x00000128,
    OrigPair = 0x00000129,
    OrigColors = 0x0000012a,
    InitializeColor = 0x0000012b,
    InitializePair = 0x0000012c,
    SetColorPair = 0x0000012d,
    SetForeground = 0x0000012e,
    SetBackground = 0x0000012f,
    ChangeCharPitch = 0x00000130,
    ChangeLinePitch = 0x00000131,
    ChangeResHorz = 0x00000132,
    ChangeResVert = 0x00000133,
    DefineChar = 0x00000134,
    EnterDoublewideMode = 0x00000135,
    EnterDraftQuality = 0x00000136,
    EnterItalicsMode = 0x00000137,
    EnterLeftwardMode = 0x00000138,
    EnterMicroMode = 0x00000139,
    EnterNearLetterQuality = 0x0000013a,
    EnterNormalQuality = 0x0000013b,
    EnterShadowMode = 0x0000013c,
    EnterSubscriptMode = 0x0000013d,
    EnterSuperscriptMode = 0x0000013e,
    EnterUpwardMode = 0x0000013f,
    ExitDoublewideMode = 0x00000140,
    ExitItalicsMode = 0x00000141,
    ExitLeftwardMode = 0x00000142,
    ExitMicroMode = 0x00000143,
    ExitShadowMode = 0x00000144,
    ExitSubscriptMode = 0x00000145,
    ExitSuperscriptMode = 0x00000146,
    ExitUpwardMode = 0x00000147,
    MicroColumnAddress = 0x00000148,
    MicroDown = 0x00000149,
    MicroLeft = 0x0000014a,
    MicroRight = 0x0000014b,
    MicroRowAddress = 0x0000014c,
    MicroUp = 0x0000014d,
    OrderOfPins = 0x0000014e,
    ParmDownMicro = 0x0000014f,
    ParmLeftMicro = 0x00000150,
    ParmRightMicro = 0x00000151,
    ParmUpMicro = 0x00000152,
    SelectCharSet = 0x00000153,
    SetBottomMargin = 0x00000154,
    SetBottomMarginParm = 0x00000155,
    SetLeftMarginParm = 0x00000156,
    SetRightMarginParm = 0x00000157,
    SetTopMargin = 0x00000158,
    SetTopMarginParm = 0x00000159,
    StartBitImage = 0x0000015a,
    StartCharSetDef = 0x0000015b,
    StopBitImage = 0x0000015c,
    StopCharSetDef = 0x0000015d,
    SubscriptCharacters = 0x0000015e,
    SuperscriptCharacters = 0x0000015f,
    TheseCauseCr = 0x00000160,
    ZeroMotion = 0x00000161,
    CharSetNames = 0x00000162,
    KeyMouse = 0x00000163,
    MouseInfo = 0x00000164,
    ReqMousePos = 0x00000165,
    GetMouse = 0x00000166,
    SetAForeground = 0x00000167,
    SetABackground = 0x00000168,
    PkeyPlab = 0x00000169,
    DeviceType = 0x0000016a,
    CodeSetInit = 0x0000016b,
    Set0DesSeq = 0x0000016c,
    Set1DesSeq = 0x0000016d,
    Set2DesSeq = 0x0000016e,
    Set3DesSeq = 0x0000016f,
    SetLrMargin = 0x00000170,
    SetTbMargin = 0x00000171,
    BitImageRepeat = 0x00000172,
    BitImageNewline = 0x00000173,
    BitImageCarriageReturn = 0x00000174,
    ColorNames = 0x00000175,
    DefineBitImageRegion = 0x00000176,
    EndBitImageRegion = 0x00000177,
    SetColorBand = 0x00000178,
    SetPageLength = 0x00000179,
    DisplayPcChar = 0x0000017a,
    EnterPcCharsetMode = 0x0000017b,
    ExitPcCharsetMode = 0x0000017c,
    EnterScancodeMode = 0x0000017d,
    ExitScancodeMode = 0x0000017e,
    PcTermOptions = 0x0000017f,
    ScancodeEscape = 0x00000180,
    AltScancodeEsc = 0x00000181,
    EnterHorizontalHlMode = 0x00000182,
    EnterLeftHlMode = 0x00000183,
    EnterLowHlMode = 0x00000184,
    EnterRightHlMode = 0x00000185,
    EnterTopHlMode = 0x00000186,
    EnterVerticalHlMode = 0x00000187,
    SetAAttributes = 0x00000188,
    SetPglenInch = 0x00000189,
    Last = 0x0000018a,
};

struct TermInfoStrings__Enum__Boxed {
    struct TermInfoStrings__Enum__Class *klass;
    MonitorData *monitor;
    TermInfoStrings__Enum value;
    
};

struct TermInfoStrings__Enum__VTable {
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

struct TermInfoStrings__Enum__StaticFields {
};

struct TermInfoStrings__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TermInfoStrings__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TermInfoStrings__Enum__VTable vtable;
};

struct ParameterizedStrings_FormatParam {
    int32_t _int32_1;
    struct String *_string;
};

struct ParameterizedStrings_FormatParam__Boxed {
    struct ParameterizedStrings_FormatParam__Class *klass;
    MonitorData *monitor;
    struct ParameterizedStrings_FormatParam fields;
};

struct ParameterizedStrings_FormatParam__Array {
    struct ParameterizedStrings_FormatParam__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ParameterizedStrings_FormatParam vector[32];
};

}
