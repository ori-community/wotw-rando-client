namespace app {
    struct Object {
        struct Object__Class* klass;
        MonitorData* monitor;
    };

    struct ValueType {
        struct ValueType__Class* klass;
        MonitorData* monitor;
    };

    struct Int32 {
        int32_t m_value;
    };

    struct Int32__Boxed {
        struct Int32__Class* klass;
        MonitorData* monitor;
        int32_t fields;
    };

    struct Char {
        uint16_t m_value;
    };

    struct Char__Boxed {
        struct Char__Class* klass;
        MonitorData* monitor;
        uint16_t fields;
    };

    struct __declspec(align(8)) String__Fields {
        int32_t m_stringLength;
        uint16_t m_firstChar;
    };

    struct String {
        struct String__Class* klass;
        MonitorData* monitor;
        struct String__Fields fields;
    };

    struct Boolean {
        bool m_value;
    };

    struct Boolean__Boxed {
        struct Boolean__Class* klass;
        MonitorData* monitor;
        bool fields;
    };

    struct Void {
    };

    struct Void__Boxed {
        struct Void__Class* klass;
        MonitorData* monitor;
        struct Void fields;
    };

    struct IFormatProvider {
        struct IFormatProvider__Class* klass;
        MonitorData* monitor;
    };

    struct Enum {
    };

    struct Enum__Boxed {
        struct Enum__Class* klass;
        MonitorData* monitor;
        struct Enum fields;
    };

    enum class TypeCode__Enum : int32_t {
        Empty = 0x00000000,
        Object = 0x00000001,
        DBNull = 0x00000002,
        Boolean = 0x00000003,
        Char = 0x00000004,
        SByte = 0x00000005,
        Byte = 0x00000006,
        Int16 = 0x00000007,
        UInt16 = 0x00000008,
        Int32 = 0x00000009,
        UInt32 = 0x0000000a,
        Int64 = 0x0000000b,
        UInt64 = 0x0000000c,
        Single = 0x0000000d,
        Double = 0x0000000e,
        Decimal = 0x0000000f,
        DateTime = 0x00000010,
        String = 0x00000012,
    };

    struct TypeCode__Enum__Boxed {
        struct TypeCode__Enum__Class* klass;
        MonitorData* monitor;
        TypeCode__Enum value;
    };

    struct Byte {
        uint8_t m_value;
    };

    struct Byte__Boxed {
        struct Byte__Class* klass;
        MonitorData* monitor;
        uint8_t fields;
    };

    struct SByte {
        int8_t m_value;
    };

    struct SByte__Boxed {
        struct SByte__Class* klass;
        MonitorData* monitor;
        int8_t fields;
    };

    struct Int16 {
        int16_t m_value;
    };

    struct Int16__Boxed {
        struct Int16__Class* klass;
        MonitorData* monitor;
        int16_t fields;
    };

    struct UInt16 {
        uint16_t m_value;
    };

    struct UInt16__Boxed {
        struct UInt16__Class* klass;
        MonitorData* monitor;
        uint16_t fields;
    };

    struct UInt32 {
        uint32_t m_value;
    };

    struct UInt32__Boxed {
        struct UInt32__Class* klass;
        MonitorData* monitor;
        uint32_t fields;
    };

    struct Int64 {
        int64_t m_value;
    };

    struct Int64__Boxed {
        struct Int64__Class* klass;
        MonitorData* monitor;
        int64_t fields;
    };

    struct UInt64 {
        uint64_t m_value;
    };

    struct UInt64__Boxed {
        struct UInt64__Class* klass;
        MonitorData* monitor;
        uint64_t fields;
    };

    struct Single {
        float m_value;
    };

    struct Single__Boxed {
        struct Single__Class* klass;
        MonitorData* monitor;
        float fields;
    };

    struct Double {
        double m_value;
    };

    struct Double__Boxed {
        struct Double__Class* klass;
        MonitorData* monitor;
        double fields;
    };

    struct Decimal {
        int32_t flags;
        int32_t hi;
        int32_t lo;
        int32_t mid;
    };

    struct Decimal__Boxed {
        struct Decimal__Class* klass;
        MonitorData* monitor;
        struct Decimal fields;
    };

    struct Array {
        struct Array__Class* klass;
        MonitorData* monitor;
        struct Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        void* vector[32];
    };

    struct UInt32__Array {
        struct UInt32__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        uint32_t vector[32];
    };

    struct IEnumerator {
        struct IEnumerator__Class* klass;
        MonitorData* monitor;
    };

    struct IComparer {
        struct IComparer__Class* klass;
        MonitorData* monitor;
    };

    struct IEqualityComparer {
        struct IEqualityComparer__Class* klass;
        MonitorData* monitor;
    };

    struct DateTime {
        uint64_t dateData;
    };

    struct DateTime__Boxed {
        struct DateTime__Class* klass;
        MonitorData* monitor;
        struct DateTime fields;
    };

    struct Int32__Array {
        struct Int32__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        int32_t vector[32];
    };

    struct MemberInfo_1 {
        struct MemberInfo_1__Class* klass;
        MonitorData* monitor;
    };

    struct IntPtr {
        struct Void* m_value;
    };

    struct IntPtr__Boxed {
        struct IntPtr__Class* klass;
        MonitorData* monitor;
        void* fields;
    };

    struct RuntimeTypeHandle {
        void* value;
    };

    struct RuntimeTypeHandle__Boxed {
        struct RuntimeTypeHandle__Class* klass;
        MonitorData* monitor;
        struct RuntimeTypeHandle fields;
    };

    struct __declspec(align(8)) Type__Fields {
        struct RuntimeTypeHandle _impl;
    };

    struct Type {
        struct Type__Class* klass;
        MonitorData* monitor;
        struct Type__Fields fields;
    };

    struct Object__Array {
        struct Object__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Object* vector[32];
    };

    struct TypeInfo__Fields {
        struct Type__Fields _;
    };

    struct TypeInfo {
        struct TypeInfo__Class* klass;
        MonitorData* monitor;
        struct TypeInfo__Fields fields;
    };

    struct RuntimeType__Fields {
        struct TypeInfo__Fields _;
        struct MonoTypeInfo* type_info;
        struct Object* GenericCache;
        struct RuntimeConstructorInfo* m_serializationCtor;
    };

    struct RuntimeType {
        struct RuntimeType__Class* klass;
        MonitorData* monitor;
        struct RuntimeType__Fields fields;
    };

    enum class MemberTypes__Enum : int32_t {
        Constructor = 0x00000001,
        Event = 0x00000002,
        Field = 0x00000004,
        Method = 0x00000008,
        Property = 0x00000010,
        TypeInfo = 0x00000020,
        Custom = 0x00000040,
        NestedType = 0x00000080,
        All = 0x000000bf,
    };

    struct MemberTypes__Enum__Boxed {
        struct MemberTypes__Enum__Class* klass;
        MonitorData* monitor;
        MemberTypes__Enum value;
    };

    struct IList_1_System_Reflection_CustomAttributeData_ {
        struct IList_1_System_Reflection_CustomAttributeData___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Module__Fields {
        void* _impl;
        struct Assembly* assembly;
        struct String* fqname;
        struct String* name;
        struct String* scopename;
        bool is_resource;
        int32_t token;
    };

    struct Module {
        struct Module__Class* klass;
        MonitorData* monitor;
        struct Module__Fields fields;
    };

    struct __declspec(align(8)) Delegate__Fields {
        void* method_ptr;
        void* invoke_impl;
        struct Object* m_target;
        void* method;
        void* delegate_trampoline;
        void* extra_arg;
        void* method_code;
        struct MethodInfo_1* method_info;
        struct MethodInfo_1* original_method_info;
        struct DelegateData* data;
        bool method_is_virtual;
    };

    struct Delegate {
        struct Delegate__Class* klass;
        MonitorData* monitor;
        struct Delegate__Fields fields;
    };

    struct MulticastDelegate__Fields {
        struct Delegate__Fields _;
        struct Delegate__Array* delegates;
    };

    struct MulticastDelegate {
        struct MulticastDelegate__Class* klass;
        MonitorData* monitor;
        struct MulticastDelegate__Fields fields;
    };

    struct TypeFilter__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct TypeFilter {
        struct TypeFilter__Class* klass;
        MonitorData* monitor;
        struct TypeFilter__Fields fields;
    };

    struct VoidPtr {
        struct VoidPtr__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SerializationInfo__Fields {
        struct String__Array* m_members;
        struct Object__Array* m_data;
        struct Type__Array* m_types;
        struct Dictionary_2_System_String_System_Int32_* m_nameToIndex;
        int32_t m_currMember;
        struct IFormatterConverter* m_converter;
        struct String* m_fullTypeName;
        struct String* m_assemName;
        struct Type* objectType;
        bool isFullTypeNameSetExplicit;
        bool isAssemblyNameSetExplicit;
        bool requireSameTokenInPartialTrust;
    };

    struct SerializationInfo {
        struct SerializationInfo__Class* klass;
        MonitorData* monitor;
        struct SerializationInfo__Fields fields;
    };

    struct String__Array {
        struct String__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct String* vector[32];
    };

    struct Type__Array {
        struct Type__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Type* vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_Int32___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_Int32_ {
        struct Dictionary_2_System_String_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_Int32___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        int32_t value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32_ vector[32];
    };

    struct IEqualityComparer_1_System_String_ {
        struct IEqualityComparer_1_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Fields {
        struct Dictionary_2_System_String_System_Int32_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Fields fields;
    };

    struct IEnumerator_1_System_String_ {
        struct IEnumerator_1_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Fields {
        struct Dictionary_2_System_String_System_Int32_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Fields fields;
    };

    struct IEnumerator_1_System_Int32_ {
        struct IEnumerator_1_System_Int32___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_String_ {
        struct ICollection_1_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Int32_ {
        struct ICollection_1_System_Int32___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_System_Int32_ {
        struct String* key;
        int32_t value;
    };

    struct KeyValuePair_2_System_String_System_Int32___Boxed {
        struct KeyValuePair_2_System_String_System_Int32___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_Int32_ fields;
    };

    struct KeyValuePair_2_System_String_System_Int32___Array {
        struct KeyValuePair_2_System_String_System_Int32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_Int32_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection {
        struct ICollection__Class* klass;
        MonitorData* monitor;
    };

    struct IDictionaryEnumerator {
        struct IDictionaryEnumerator__Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_String_ {
        struct IEnumerable_1_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Int32_ {
        struct IEnumerable_1_System_Int32___Class* klass;
        MonitorData* monitor;
    };

    enum class StreamingContextStates__Enum : int32_t {
        CrossProcess = 0x00000001,
        CrossMachine = 0x00000002,
        File = 0x00000004,
        Persistence = 0x00000008,
        Remoting = 0x00000010,
        Other = 0x00000020,
        Clone = 0x00000040,
        CrossAppDomain = 0x00000080,
        All = 0x000000ff,
    };

    struct StreamingContextStates__Enum__Boxed {
        struct StreamingContextStates__Enum__Class* klass;
        MonitorData* monitor;
        StreamingContextStates__Enum value;
    };

    struct StreamingContext {
        struct Object* m_additionalContext;
        StreamingContextStates__Enum m_state;
    };

    struct StreamingContext__Boxed {
        struct StreamingContext__Class* klass;
        MonitorData* monitor;
        struct StreamingContext fields;
    };

    struct IFormatterConverter {
        struct IFormatterConverter__Class* klass;
        MonitorData* monitor;
    };

    struct MethodBase {
        struct MethodBase__Class* klass;
        MonitorData* monitor;
    };

    struct MethodInfo_1 {
        struct MethodInfo_1__Class* klass;
        MonitorData* monitor;
    };

    struct RuntimeMethodInfo {
        struct RuntimeMethodInfo__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) MonoMethod__Fields {
        void* mhandle;
        struct String* name;
        struct Type* reftype;
    };

    struct MonoMethod {
        struct MonoMethod__Class* klass;
        MonitorData* monitor;
        struct MonoMethod__Fields fields;
    };

    enum class ParameterAttributes__Enum : int32_t {
        None = 0x00000000,
        In = 0x00000001,
        Out = 0x00000002,
        Lcid = 0x00000004,
        Retval = 0x00000008,
        Optional = 0x00000010,
        ReservedMask = 0x0000f000,
        HasDefault = 0x00001000,
        HasFieldMarshal = 0x00002000,
        Reserved3 = 0x00004000,
        Reserved4 = 0x00008000,
    };

    struct ParameterAttributes__Enum__Boxed {
        struct ParameterAttributes__Enum__Class* klass;
        MonitorData* monitor;
        ParameterAttributes__Enum value;
    };

    struct __declspec(align(8)) ParameterInfo_1__Fields {
        struct Type* ClassImpl;
        struct Object* DefaultValueImpl;
        struct MemberInfo_1* MemberImpl;
        struct String* NameImpl;
        int32_t PositionImpl;
        ParameterAttributes__Enum AttrsImpl;

        struct MarshalAsAttribute* marshalAs;
    };

    struct ParameterInfo_1 {
        struct ParameterInfo_1__Class* klass;
        MonitorData* monitor;
        struct ParameterInfo_1__Fields fields;
    };

    struct Attribute {
        struct Attribute__Class* klass;
        MonitorData* monitor;
    };

    enum class UnmanagedType__Enum : int32_t {
        Bool = 0x00000002,
        I1 = 0x00000003,
        U1 = 0x00000004,
        I2 = 0x00000005,
        U2 = 0x00000006,
        I4 = 0x00000007,
        U4 = 0x00000008,
        I8 = 0x00000009,
        U8 = 0x0000000a,
        R4 = 0x0000000b,
        R8 = 0x0000000c,
        Currency = 0x0000000f,
        BStr = 0x00000013,
        LPStr = 0x00000014,
        LPWStr = 0x00000015,
        LPTStr = 0x00000016,
        ByValTStr = 0x00000017,
        IUnknown = 0x00000019,
        IDispatch = 0x0000001a,
        Struct = 0x0000001b,
        Interface = 0x0000001c,
        SafeArray = 0x0000001d,
        ByValArray = 0x0000001e,
        SysInt = 0x0000001f,
        SysUInt = 0x00000020,
        VBByRefStr = 0x00000022,
        AnsiBStr = 0x00000023,
        TBStr = 0x00000024,
        VariantBool = 0x00000025,
        FunctionPtr = 0x00000026,
        AsAny = 0x00000028,
        LPArray = 0x0000002a,
        LPStruct = 0x0000002b,
        CustomMarshaler = 0x0000002c,
        Error = 0x0000002d,
        IInspectable = 0x0000002e,
        HString = 0x0000002f,
        LPUTF8Str = 0x00000030,
    };

    struct UnmanagedType__Enum__Boxed {
        struct UnmanagedType__Enum__Class* klass;
        MonitorData* monitor;
        UnmanagedType__Enum value;
    };

    enum class VarEnum__Enum : int32_t {
        VT_EMPTY = 0x00000000,
        VT_NULL = 0x00000001,
        VT_I2 = 0x00000002,
        VT_I4 = 0x00000003,
        VT_R4 = 0x00000004,
        VT_R8 = 0x00000005,
        VT_CY = 0x00000006,
        VT_DATE = 0x00000007,
        VT_BSTR = 0x00000008,
        VT_DISPATCH = 0x00000009,
        VT_ERROR = 0x0000000a,
        VT_BOOL = 0x0000000b,
        VT_VARIANT = 0x0000000c,
        VT_UNKNOWN = 0x0000000d,
        VT_DECIMAL = 0x0000000e,
        VT_I1 = 0x00000010,
        VT_UI1 = 0x00000011,
        VT_UI2 = 0x00000012,
        VT_UI4 = 0x00000013,
        VT_I8 = 0x00000014,
        VT_UI8 = 0x00000015,
        VT_INT = 0x00000016,
        VT_UINT = 0x00000017,
        VT_VOID = 0x00000018,
        VT_HRESULT = 0x00000019,
        VT_PTR = 0x0000001a,
        VT_SAFEARRAY = 0x0000001b,
        VT_CARRAY = 0x0000001c,
        VT_USERDEFINED = 0x0000001d,
        VT_LPSTR = 0x0000001e,
        VT_LPWSTR = 0x0000001f,
        VT_RECORD = 0x00000024,
        VT_FILETIME = 0x00000040,
        VT_BLOB = 0x00000041,
        VT_STREAM = 0x00000042,
        VT_STORAGE = 0x00000043,
        VT_STREAMED_OBJECT = 0x00000044,
        VT_STORED_OBJECT = 0x00000045,
        VT_BLOB_OBJECT = 0x00000046,
        VT_CF = 0x00000047,
        VT_CLSID = 0x00000048,
        VT_VECTOR = 0x00001000,
        VT_ARRAY = 0x00002000,
        VT_BYREF = 0x00004000,
    };

    struct VarEnum__Enum__Boxed {
        struct VarEnum__Enum__Class* klass;
        MonitorData* monitor;
        VarEnum__Enum value;
    };

    struct __declspec(align(8)) MarshalAsAttribute__Fields {
        struct String* MarshalCookie;
        struct String* MarshalType;
        struct Type* MarshalTypeRef;
        struct Type* SafeArrayUserDefinedSubType;
        UnmanagedType__Enum utype;

        UnmanagedType__Enum ArraySubType;

        VarEnum__Enum SafeArraySubType;

        int32_t SizeConst;
        int32_t IidParameterIndex;
        int16_t SizeParamIndex;
    };

    struct MarshalAsAttribute {
        struct MarshalAsAttribute__Class* klass;
        MonitorData* monitor;
        struct MarshalAsAttribute__Fields fields;
    };

    struct ParameterInfo_1__Array {
        struct ParameterInfo_1__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ParameterInfo_1* vector[32];
    };

    enum class MethodImplAttributes__Enum : int32_t {
        CodeTypeMask = 0x00000003,
        IL = 0x00000000,
        Native = 0x00000001,
        OPTIL = 0x00000002,
        Runtime = 0x00000003,
        ManagedMask = 0x00000004,
        Unmanaged = 0x00000004,
        Managed = 0x00000000,
        ForwardRef = 0x00000010,
        PreserveSig = 0x00000080,
        InternalCall = 0x00001000,
        Synchronized = 0x00000020,
        NoInlining = 0x00000008,
        AggressiveInlining = 0x00000100,
        NoOptimization = 0x00000040,
        MaxMethodImplVal = 0x0000ffff,
    };

    struct MethodImplAttributes__Enum__Boxed {
        struct MethodImplAttributes__Enum__Class* klass;
        MonitorData* monitor;
        MethodImplAttributes__Enum value;
    };

    struct RuntimeMethodHandle {
        void* value;
    };

    struct RuntimeMethodHandle__Boxed {
        struct RuntimeMethodHandle__Class* klass;
        MonitorData* monitor;
        struct RuntimeMethodHandle fields;
    };

    enum class MethodAttributes__Enum : int32_t {
        MemberAccessMask = 0x00000007,
        PrivateScope = 0x00000000,
        Private = 0x00000001,
        FamANDAssem = 0x00000002,
        Assembly = 0x00000003,
        Family = 0x00000004,
        FamORAssem = 0x00000005,
        Public = 0x00000006,
        Static = 0x00000010,
        Final = 0x00000020,
        Virtual = 0x00000040,
        HideBySig = 0x00000080,
        CheckAccessOnOverride = 0x00000200,
        VtableLayoutMask = 0x00000100,
        ReuseSlot = 0x00000000,
        NewSlot = 0x00000100,
        Abstract = 0x00000400,
        SpecialName = 0x00000800,
        PinvokeImpl = 0x00002000,
        UnmanagedExport = 0x00000008,
        RTSpecialName = 0x00001000,
        ReservedMask = 0x0000d000,
        HasSecurity = 0x00004000,
        RequireSecObject = 0x00008000,
    };

    struct MethodAttributes__Enum__Boxed {
        struct MethodAttributes__Enum__Class* klass;
        MonitorData* monitor;
        MethodAttributes__Enum value;
    };

    enum class BindingFlags__Enum : int32_t {
        Default = 0x00000000,
        IgnoreCase = 0x00000001,
        DeclaredOnly = 0x00000002,
        Instance = 0x00000004,
        Static = 0x00000008,
        Public = 0x00000010,
        NonPublic = 0x00000020,
        FlattenHierarchy = 0x00000040,
        InvokeMethod = 0x00000100,
        CreateInstance = 0x00000200,
        GetField = 0x00000400,
        SetField = 0x00000800,
        GetProperty = 0x00001000,
        SetProperty = 0x00002000,
        PutDispProperty = 0x00004000,
        PutRefDispProperty = 0x00008000,
        ExactBinding = 0x00010000,
        SuppressChangeType = 0x00020000,
        OptionalParamBinding = 0x00040000,
        IgnoreReturn = 0x01000000,
    };

    struct BindingFlags__Enum__Boxed {
        struct BindingFlags__Enum__Class* klass;
        MonitorData* monitor;
        BindingFlags__Enum value;
    };

    struct Binder {
        struct Binder__Class* klass;
        MonitorData* monitor;
    };

    struct DefaultBinder {
        struct DefaultBinder__Class* klass;
        MonitorData* monitor;
    };

    struct MethodBase__Array {
        struct MethodBase__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MethodBase* vector[32];
    };

    struct ParameterModifier {
        struct Boolean__Array* _byRef;
    };

    struct ParameterModifier__Boxed {
        struct ParameterModifier__Class* klass;
        MonitorData* monitor;
        struct ParameterModifier fields;
    };

    struct Boolean__Array {
        struct Boolean__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        bool vector[32];
    };

    struct ParameterModifier__Array {
        struct ParameterModifier__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ParameterModifier vector[32];
    };

    struct __declspec(align(8)) CultureInfo__Fields {
        bool m_isReadOnly;
        int32_t cultureID;
        int32_t parent_lcid;
        int32_t datetime_index;
        int32_t number_index;
        int32_t default_calendar_type;
        bool m_useUserOverride;
        struct NumberFormatInfo* numInfo;
        struct DateTimeFormatInfo* dateTimeInfo;
        struct TextInfo* textInfo;
        struct String* m_name;
        struct String* englishname;
        struct String* nativename;
        struct String* iso3lang;
        struct String* iso2lang;
        struct String* win3lang;
        struct String* territory;
        struct String__Array* native_calendar_names;
        struct CompareInfo* compareInfo;
        struct Void* textinfo_data;
        int32_t m_dataItem;
        struct Calendar* calendar;
        struct CultureInfo* parent_culture;
        bool constructed;
        struct Byte__Array* cached_serialized_form;
        struct CultureData* m_cultureData;
        bool m_isInherited;
    };

    struct CultureInfo {
        struct CultureInfo__Class* klass;
        MonitorData* monitor;
        struct CultureInfo__Fields fields;
    };

    struct __declspec(align(8)) NumberFormatInfo__Fields {
        struct Int32__Array* numberGroupSizes;
        struct Int32__Array* currencyGroupSizes;
        struct Int32__Array* percentGroupSizes;
        struct String* positiveSign;
        struct String* negativeSign;
        struct String* numberDecimalSeparator;
        struct String* numberGroupSeparator;
        struct String* currencyGroupSeparator;
        struct String* currencyDecimalSeparator;
        struct String* currencySymbol;
        struct String* ansiCurrencySymbol;
        struct String* nanSymbol;
        struct String* positiveInfinitySymbol;
        struct String* negativeInfinitySymbol;
        struct String* percentDecimalSeparator;
        struct String* percentGroupSeparator;
        struct String* percentSymbol;
        struct String* perMilleSymbol;
        struct String__Array* nativeDigits;
        int32_t m_dataItem;
        int32_t numberDecimalDigits;
        int32_t currencyDecimalDigits;
        int32_t currencyPositivePattern;
        int32_t currencyNegativePattern;
        int32_t numberNegativePattern;
        int32_t percentPositivePattern;
        int32_t percentNegativePattern;
        int32_t percentDecimalDigits;
        int32_t digitSubstitution;
        bool isReadOnly;
        bool m_useUserOverride;
        bool m_isInvariant;
        bool validForParseAsNumber;
        bool validForParseAsCurrency;
    };

} // namespace app
