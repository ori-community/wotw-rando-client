namespace app {
    struct UriTypeConverter__StaticFields {
    };

    struct UriTypeConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UriTypeConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UriTypeConverter__VTable vtable;
    };

    struct ElapsedEventHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct ElapsedEventHandler {
        struct ElapsedEventHandler__Class* klass;
        MonitorData* monitor;
        struct ElapsedEventHandler__Fields fields;
    };

    struct __declspec(align(8)) ElapsedEventArgs__Fields {
        struct DateTime time;
    };

    struct ElapsedEventArgs {
        struct ElapsedEventArgs__Class* klass;
        MonitorData* monitor;
        struct ElapsedEventArgs__Fields fields;
    };

    struct ElapsedEventArgs__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ElapsedEventArgs__StaticFields {
    };

    struct ElapsedEventArgs__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ElapsedEventArgs__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ElapsedEventArgs__VTable vtable;
    };

    struct ElapsedEventHandler__VTable {
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

    struct ElapsedEventHandler__StaticFields {
    };

    struct ElapsedEventHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ElapsedEventHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ElapsedEventHandler__VTable vtable;
    };

    struct Component__Fields {
        struct MarshalByRefObject__Fields _;
        struct ISite* site;
        struct EventHandlerList* events;
    };

    struct Component {
        struct Component__Class* klass;
        MonitorData* monitor;
        struct Component__Fields fields;
    };

    struct Timer_1__Fields {
        struct Component__Fields _;
        double interval;
        bool enabled;
        bool initializing;
        bool delayedEnable;
        struct ElapsedEventHandler* onIntervalElapsed;
        bool autoReset;
        struct ISynchronizeInvoke* synchronizingObject;
        bool disposed;
        struct Timer* timer;
        struct TimerCallback* callback;
        struct Object* cookie;
    };

    struct Timer_1 {
        struct Timer_1__Class* klass;
        MonitorData* monitor;
        struct Timer_1__Fields fields;
    };

    struct ISite {
        struct ISite__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) EventHandlerList__Fields {
        struct EventHandlerList_ListEntry* head;
        struct Component* parent;
    };

    struct EventHandlerList {
        struct EventHandlerList__Class* klass;
        MonitorData* monitor;
        struct EventHandlerList__Fields fields;
    };

    struct __declspec(align(8)) EventHandlerList_ListEntry__Fields {
        struct EventHandlerList_ListEntry* next;
        struct Object* key;
        struct Delegate* handler;
    };

    struct EventHandlerList_ListEntry {
        struct EventHandlerList_ListEntry__Class* klass;
        MonitorData* monitor;
        struct EventHandlerList_ListEntry__Fields fields;
    };

    struct ISynchronizeInvoke {
        struct ISynchronizeInvoke__Class* klass;
        MonitorData* monitor;
    };

    struct ISite__VTable {
        VirtualInvokeData get_Component;
        VirtualInvokeData get_Container;
        VirtualInvokeData get_DesignMode;
        VirtualInvokeData get_Name;
        VirtualInvokeData set_Name;
    };

    struct ISite__StaticFields {
    };

    struct ISite__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISite__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISite__VTable vtable;
    };

    struct EventHandlerList_ListEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EventHandlerList_ListEntry__StaticFields {
    };

    struct EventHandlerList_ListEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventHandlerList_ListEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventHandlerList_ListEntry__VTable vtable;
    };

    struct EventHandlerList__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
    };

    struct EventHandlerList__StaticFields {
    };

    struct EventHandlerList__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EventHandlerList__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EventHandlerList__VTable vtable;
    };

    struct Component__VTable {
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

    struct Component__StaticFields {
        struct Object* EventDisposed;
    };

    struct Component__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Component__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Component__VTable vtable;
    };

    struct ISynchronizeInvoke__VTable {
        VirtualInvokeData get_InvokeRequired;
        VirtualInvokeData BeginInvoke;
        VirtualInvokeData EndInvoke;
        VirtualInvokeData Invoke;
    };

    struct ISynchronizeInvoke__StaticFields {
    };

    struct ISynchronizeInvoke__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ISynchronizeInvoke__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ISynchronizeInvoke__VTable vtable;
    };

    struct Timer_1__VTable {
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
        VirtualInvokeData BeginInit;
        VirtualInvokeData EndInit;
    };

    struct Timer_1__StaticFields {
    };

    struct Timer_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Timer_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Timer_1__VTable vtable;
    };

    struct TimersDescriptionAttribute__Fields {
        struct DescriptionAttribute__Fields _;
        bool replaced;
    };

    struct TimersDescriptionAttribute {
        struct TimersDescriptionAttribute__Class* klass;
        MonitorData* monitor;
        struct TimersDescriptionAttribute__Fields fields;
    };

    struct TimersDescriptionAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
        VirtualInvokeData get_Description;
    };

    struct TimersDescriptionAttribute__StaticFields {
    };

    struct TimersDescriptionAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimersDescriptionAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimersDescriptionAttribute__VTable vtable;
    };

    enum class RegexOptions__Enum : int32_t {
        None = 0x00000000,
        IgnoreCase = 0x00000001,
        Multiline = 0x00000002,
        ExplicitCapture = 0x00000004,
        Compiled = 0x00000008,
        Singleline = 0x00000010,
        IgnorePatternWhitespace = 0x00000020,
        RightToLeft = 0x00000040,
        ECMAScript = 0x00000100,
        CultureInvariant = 0x00000200,
    };

    struct RegexOptions__Enum__Boxed {
        struct RegexOptions__Enum__Class* klass;
        MonitorData* monitor;
        RegexOptions__Enum value;
    };

    struct __declspec(align(8)) Regex__Fields {
        struct String* pattern;
        struct RegexRunnerFactory* factory;
        RegexOptions__Enum roptions;

        struct TimeSpan internalMatchTimeout;
        struct Hashtable* caps;
        struct Hashtable* capnames;
        struct String__Array* capslist;
        int32_t capsize;
        struct ExclusiveReference* runnerref;
        struct SharedReference* replref;
        struct RegexCode* code;
        bool refsInitialized;
    };

    struct Regex {
        struct Regex__Class* klass;
        MonitorData* monitor;
        struct Regex__Fields fields;
    };

    struct RegexRunnerFactory {
        struct RegexRunnerFactory__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) ExclusiveReference__Fields {
        struct RegexRunner* _ref;
        struct Object* _obj;
        int32_t _locked;
    };

    struct ExclusiveReference {
        struct ExclusiveReference__Class* klass;
        MonitorData* monitor;
        struct ExclusiveReference__Fields fields;
    };

    struct __declspec(align(8)) RegexRunner__Fields {
        int32_t runtextbeg;
        int32_t runtextend;
        int32_t runtextstart;
        struct String* runtext;
        int32_t runtextpos;
        struct Int32__Array* runtrack;
        int32_t runtrackpos;
        struct Int32__Array* runstack;
        int32_t runstackpos;
        struct Int32__Array* runcrawl;
        int32_t runcrawlpos;
        int32_t runtrackcount;
        struct Match* runmatch;
        struct Regex* runregex;
        int32_t timeout;
        bool ignoreTimeout;
        int32_t timeoutOccursAt;
        int32_t timeoutChecksToSkip;
    };

    struct RegexRunner {
        struct RegexRunner__Class* klass;
        MonitorData* monitor;
        struct RegexRunner__Fields fields;
    };

    struct __declspec(align(8)) Capture__Fields {
        struct String* _text;
        int32_t _index;
        int32_t _length;
    };

    struct Capture {
        struct Capture__Class* klass;
        MonitorData* monitor;
        struct Capture__Fields fields;
    };

    struct Group__Fields {
        struct Capture__Fields _;
        struct Int32__Array* _caps;
        int32_t _capcount;
        struct CaptureCollection* _capcoll;
        struct String* _name;
    };

    struct Group {
        struct Group__Class* klass;
        MonitorData* monitor;
        struct Group__Fields fields;
    };

    struct Match__Fields {
        struct Group__Fields _;
        struct GroupCollection* _groupcoll;
        struct Regex* _regex;
        int32_t _textbeg;
        int32_t _textpos;
        int32_t _textend;
        int32_t _textstart;
        struct Int32__Array__Array* _matches;
        struct Int32__Array* _matchcount;
        bool _balancing;
    };

    struct Match {
        struct Match__Class* klass;
        MonitorData* monitor;
        struct Match__Fields fields;
    };

    struct __declspec(align(8)) CaptureCollection__Fields {
        struct Group* _group;
        int32_t _capcount;
        struct Capture__Array* _captures;
    };

    struct CaptureCollection {
        struct CaptureCollection__Class* klass;
        MonitorData* monitor;
        struct CaptureCollection__Fields fields;
    };

    struct Capture__Array {
        struct Capture__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Capture* vector[32];
    };

    struct __declspec(align(8)) GroupCollection__Fields {
        struct Match* _match;
        struct Hashtable* _captureMap;
        struct Group__Array* _groups;
    };

    struct GroupCollection {
        struct GroupCollection__Class* klass;
        MonitorData* monitor;
        struct GroupCollection__Fields fields;
    };

    struct Group__Array {
        struct Group__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Group* vector[32];
    };

    struct Int32__Array__Array {
        struct Int32__Array__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Int32__Array* vector[32];
    };

    struct RegexInterpreter__Fields {
        struct RegexRunner__Fields _;
        int32_t runoperator;
        struct Int32__Array* runcodes;
        int32_t runcodepos;
        struct String__Array* runstrings;
        struct RegexCode* runcode;
        struct RegexPrefix* runfcPrefix;
        struct RegexBoyerMoore* runbmPrefix;
        int32_t runanchors;
        bool runrtl;
        bool runci;
        struct CultureInfo* runculture;
    };

    struct RegexInterpreter {
        struct RegexInterpreter__Class* klass;
        MonitorData* monitor;
        struct RegexInterpreter__Fields fields;
    };

    struct __declspec(align(8)) RegexCode__Fields {
        struct Int32__Array* _codes;
        struct String__Array* _strings;
        int32_t _trackcount;
        struct Hashtable* _caps;
        int32_t _capsize;
        struct RegexPrefix* _fcPrefix;
        struct RegexBoyerMoore* _bmPrefix;
        int32_t _anchors;
        bool _rightToLeft;
    };

    struct RegexCode {
        struct RegexCode__Class* klass;
        MonitorData* monitor;
        struct RegexCode__Fields fields;
    };

    struct __declspec(align(8)) RegexPrefix__Fields {
        struct String* _prefix;
        bool _caseInsensitive;
    };

    struct RegexPrefix {
        struct RegexPrefix__Class* klass;
        MonitorData* monitor;
        struct RegexPrefix__Fields fields;
    };

    struct __declspec(align(8)) RegexBoyerMoore__Fields {
        struct Int32__Array* _positive;
        struct Int32__Array* _negativeASCII;
        struct Int32__Array__Array* _negativeUnicode;
        struct String* _pattern;
        int32_t _lowASCII;
        int32_t _highASCII;
        bool _rightToLeft;
        bool _caseInsensitive;
        struct CultureInfo* _culture;
    };

    struct RegexBoyerMoore {
        struct RegexBoyerMoore__Class* klass;
        MonitorData* monitor;
        struct RegexBoyerMoore__Fields fields;
    };

    struct __declspec(align(8)) SharedReference__Fields {
        struct WeakReference* _ref;
        int32_t _locked;
    };

    struct SharedReference {
        struct SharedReference__Class* klass;
        MonitorData* monitor;
        struct SharedReference__Fields fields;
    };

    struct __declspec(align(8)) LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry___Fields {
        struct LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry_* head;
        int32_t count;
        int32_t version;
        struct Object* _syncRoot;
        struct SerializationInfo* _siInfo;
    };

    struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_ {
        struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry___Class* klass;
        MonitorData* monitor;
        struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry___Fields fields;
    };

    struct __declspec(align(8)) LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry___Fields {
        struct LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_* list;
        struct LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry_* next;
        struct LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry_* prev;
        struct CachedCodeEntry* item;
    };

    struct LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry_ {
        struct LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry___Class* klass;
        MonitorData* monitor;
        struct LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry___Fields fields;
    };

    struct __declspec(align(8)) CachedCodeEntry__Fields {
        struct String* _key;
        struct RegexCode* _code;
        struct Hashtable* _caps;
        struct Hashtable* _capnames;
        struct String__Array* _capslist;
        int32_t _capsize;
        struct RegexRunnerFactory* _factory;
        struct ExclusiveReference* _runnerref;
        struct SharedReference* _replref;
    };

    struct CachedCodeEntry {
        struct CachedCodeEntry__Class* klass;
        MonitorData* monitor;
        struct CachedCodeEntry__Fields fields;
    };

    struct CachedCodeEntry__Array {
        struct CachedCodeEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CachedCodeEntry* vector[32];
    };

    struct IEnumerator_1_System_Text_RegularExpressions_CachedCodeEntry_ {
        struct IEnumerator_1_System_Text_RegularExpressions_CachedCodeEntry___Class* klass;
        MonitorData* monitor;
    };

    struct RegexRunnerFactory__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
    };

    struct RegexRunnerFactory__StaticFields {
    };

    struct RegexRunnerFactory__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RegexRunnerFactory__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RegexRunnerFactory__VTable vtable;
    };

    struct RegexOptions__Enum__VTable {
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

    struct RegexOptions__Enum__StaticFields {
    };

    struct RegexOptions__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RegexOptions__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RegexOptions__Enum__VTable vtable;
    };

    struct Capture__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Capture__StaticFields {
    };

    struct Capture__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Capture__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Capture__VTable vtable;
    };

    struct Capture__Array__VTable {
    };

    struct Capture__Array__StaticFields {
    };

    struct Capture__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Capture__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Capture__Array__VTable vtable;
    };

    struct CaptureCollection__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData get_SyncRoot;
        VirtualInvokeData get_IsSynchronized;
        VirtualInvokeData GetEnumerator;
    };

    struct CaptureCollection__StaticFields {
    };

    struct CaptureCollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CaptureCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CaptureCollection__VTable vtable;
    };

    struct Group__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Group__StaticFields {
        struct Group* _emptygroup;
    };

    struct Group__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Group__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Group__VTable vtable;
    };

    struct Group__Array__VTable {
    };

    struct Group__Array__StaticFields {
    };

    struct Group__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Group__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Group__Array__VTable vtable;
    };

    struct GroupCollection__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData get_SyncRoot;
        VirtualInvokeData get_IsSynchronized;
        VirtualInvokeData GetEnumerator;
    };

    struct GroupCollection__StaticFields {
    };

    struct GroupCollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GroupCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GroupCollection__VTable vtable;
    };

    struct Int32__Array__Array__VTable {
    };

    struct Int32__Array__Array__StaticFields {
    };

    struct Int32__Array__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Int32__Array__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Int32__Array__Array__VTable vtable;
    };

    struct Match__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Reset;
        VirtualInvokeData get_Groups;
        VirtualInvokeData GroupToStringImpl;
        VirtualInvokeData AddMatch;
        VirtualInvokeData BalanceMatch;
        VirtualInvokeData RemoveMatch;
        VirtualInvokeData IsMatched;
        VirtualInvokeData MatchIndex;
        VirtualInvokeData MatchLength;
        VirtualInvokeData Tidy;
    };

    struct Match__StaticFields {
        struct Match* _empty;
    };

    struct Match__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Match__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Match__VTable vtable;
    };

    struct RegexPrefix__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RegexPrefix__StaticFields {
        struct RegexPrefix* _empty;
    };

    struct RegexPrefix__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RegexPrefix__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RegexPrefix__VTable vtable;
    };

    struct RegexBoyerMoore__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RegexBoyerMoore__StaticFields {
    };

    struct RegexBoyerMoore__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RegexBoyerMoore__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RegexBoyerMoore__VTable vtable;
    };

    struct RegexCode__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RegexCode__StaticFields {
    };

    struct RegexCode__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RegexCode__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RegexCode__VTable vtable;
    };

    struct RegexInterpreter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Go;
        VirtualInvokeData FindFirstChar;
        VirtualInvokeData InitTrackCount;
    };

    struct RegexInterpreter__StaticFields {
    };

    struct RegexInterpreter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RegexInterpreter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RegexInterpreter__VTable vtable;
    };

    struct RegexRunner__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct RegexRunner__StaticFields {
    };

    struct RegexRunner__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RegexRunner__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RegexRunner__VTable vtable;
    };

    struct ExclusiveReference__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ExclusiveReference__StaticFields {
    };

    struct ExclusiveReference__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExclusiveReference__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExclusiveReference__VTable vtable;
    };

    struct SharedReference__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SharedReference__StaticFields {
    };

    struct SharedReference__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SharedReference__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SharedReference__VTable vtable;
    };

    struct CachedCodeEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

} // namespace app
