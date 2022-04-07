namespace app {
struct Object {
  struct Object__Class *klass;
  struct MonitorData *monitor;
};
struct ValueType {
  struct ValueType__Class *klass;
  struct MonitorData *monitor;
};
struct Int32 {
  int32_t m_value;
};
struct Int32__Boxed {
  struct Int32__Class *klass;
  struct MonitorData *monitor;
  int32_t fields;
};
struct Char {
  uint16_t m_value;
};
struct Char__Boxed {
  struct Char__Class *klass;
  struct MonitorData *monitor;
  uint16_t fields;
};
struct __declspec(align(8)) String__Fields {
  int32_t m_stringLength;
  uint16_t m_firstChar;
};
struct String {
  struct String__Class *klass;
  struct MonitorData *monitor;
  struct String__Fields fields;
};
struct Boolean {
  bool m_value;
};
struct Boolean__Boxed {
  struct Boolean__Class *klass;
  struct MonitorData *monitor;
  bool fields;
};
struct Void {
};
struct Void__Boxed {
  struct Void__Class *klass;
  struct MonitorData *monitor;
  struct Void fields;
};
struct IFormatProvider {
  struct IFormatProvider__Class *klass;
  struct MonitorData *monitor;
};
struct Enum {
};
struct Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  struct Enum fields;
};
enum TypeCode__Enum : int32_t {
  TypeCode__Enum_Empty = 0,
  TypeCode__Enum_Object = 1,
  TypeCode__Enum_DBNull = 2,
  TypeCode__Enum_Boolean = 3,
  TypeCode__Enum_Char = 4,
  TypeCode__Enum_SByte = 5,
  TypeCode__Enum_Byte = 6,
  TypeCode__Enum_Int16 = 7,
  TypeCode__Enum_UInt16 = 8,
  TypeCode__Enum_Int32 = 9,
  TypeCode__Enum_UInt32 = 10,
  TypeCode__Enum_Int64 = 11,
  TypeCode__Enum_UInt64 = 12,
  TypeCode__Enum_Single = 13,
  TypeCode__Enum_Double = 14,
  TypeCode__Enum_Decimal = 15,
  TypeCode__Enum_DateTime = 16,
  TypeCode__Enum_String = 18,
};
struct TypeCode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TypeCode__Enum value;
};
struct Array {
  struct Object__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  void * vector[32];
};
struct Byte {
  uint8_t m_value;
};
struct Byte__Boxed {
  struct Byte__Class *klass;
  struct MonitorData *monitor;
  uint8_t fields;
};
struct Byte__Array {
  struct Byte__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  uint8_t vector[32];
};
struct SByte {
  int8_t m_value;
};
struct SByte__Boxed {
  struct SByte__Class *klass;
  struct MonitorData *monitor;
  int8_t fields;
};
struct Int16 {
  int16_t m_value;
};
struct Int16__Boxed {
  struct Int16__Class *klass;
  struct MonitorData *monitor;
  int16_t fields;
};
struct UInt16 {
  uint16_t m_value;
};
struct UInt16__Boxed {
  struct UInt16__Class *klass;
  struct MonitorData *monitor;
  uint16_t fields;
};
struct UInt32 {
  uint32_t m_value;
};
struct UInt32__Boxed {
  struct UInt32__Class *klass;
  struct MonitorData *monitor;
  uint32_t fields;
};
struct Int64 {
  int64_t m_value;
};
struct Int64__Boxed {
  struct Int64__Class *klass;
  struct MonitorData *monitor;
  int64_t fields;
};
struct UInt64 {
  uint64_t m_value;
};
struct UInt64__Boxed {
  struct UInt64__Class *klass;
  struct MonitorData *monitor;
  uint64_t fields;
};
struct Single {
  float m_value;
};
struct Single__Boxed {
  struct Single__Class *klass;
  struct MonitorData *monitor;
  float fields;
};
struct Double {
  double m_value;
};
struct Double__Boxed {
  struct Double__Class *klass;
  struct MonitorData *monitor;
  double fields;
};
struct Decimal {
  int32_t flags;
  int32_t hi;
  int32_t lo;
  int32_t mid;
};
struct Decimal__Boxed {
  struct Decimal__Class *klass;
  struct MonitorData *monitor;
  struct Decimal fields;
};
struct UInt32__Array {
  struct UInt32__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  uint32_t vector[32];
};
struct IEnumerator {
  struct IEnumerator__Class *klass;
  struct MonitorData *monitor;
};
struct IComparer {
  struct IComparer__Class *klass;
  struct MonitorData *monitor;
};
struct IEqualityComparer {
  struct IEqualityComparer__Class *klass;
  struct MonitorData *monitor;
};
struct DateTime {
  uint64_t dateData;
};
struct DateTime__Boxed {
  struct DateTime__Class *klass;
  struct MonitorData *monitor;
  struct DateTime fields;
};
struct Int32__Array {
  struct Int32__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  int32_t vector[32];
};
struct MemberInfo_1 {
  struct MemberInfo_1__Class *klass;
  struct MonitorData *monitor;
};
struct IntPtr {
  struct Void * m_value;
};
struct IntPtr__Boxed {
  struct IntPtr__Class *klass;
  struct MonitorData *monitor;
  void * fields;
};
struct RuntimeTypeHandle {
  void * value;
};
struct RuntimeTypeHandle__Boxed {
  struct RuntimeTypeHandle__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeTypeHandle fields;
};
struct __declspec(align(8)) Type__Fields {
  struct RuntimeTypeHandle _impl;
};
struct Type {
  struct Type__Class *klass;
  struct MonitorData *monitor;
  struct Type__Fields fields;
};
struct Object__Array {
  struct Object__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Object * vector[32];
};
struct TypeInfo__Fields {
  struct Type__Fields _;
};
struct TypeInfo {
  struct TypeInfo__Class *klass;
  struct MonitorData *monitor;
  struct TypeInfo__Fields fields;
};
struct RuntimeType__Fields {
  struct TypeInfo__Fields _;
  struct MonoTypeInfo * type_info;
  struct Object * GenericCache;
  struct RuntimeConstructorInfo * m_serializationCtor;
};
struct RuntimeType {
  struct RuntimeType__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeType__Fields fields;
};
enum MemberTypes__Enum : int32_t {
  MemberTypes__Enum_Constructor = 1,
  MemberTypes__Enum_Event = 2,
  MemberTypes__Enum_Field = 4,
  MemberTypes__Enum_Method = 8,
  MemberTypes__Enum_Property = 16,
  MemberTypes__Enum_TypeInfo = 32,
  MemberTypes__Enum_Custom = 64,
  MemberTypes__Enum_NestedType = 128,
  MemberTypes__Enum_All = 191,
};
struct MemberTypes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MemberTypes__Enum value;
};
struct IList_1_System_Reflection_CustomAttributeData_ {
  struct IList_1_System_Reflection_CustomAttributeData___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Module__Fields {
  void * _impl;
  struct Assembly * assembly;
  struct String * fqname;
  struct String * name;
  struct String * scopename;
  bool is_resource;
  int32_t token;
};
struct Module {
  struct Module__Class *klass;
  struct MonitorData *monitor;
  struct Module__Fields fields;
};
struct __declspec(align(8)) Delegate__Fields {
  void * method_ptr;
  void * invoke_impl;
  struct Object * m_target;
  void * method;
  void * delegate_trampoline;
  void * extra_arg;
  void * method_code;
  struct MethodInfo_1 * method_info;
  struct MethodInfo_1 * original_method_info;
  struct DelegateData * data;
  bool method_is_virtual;
};
struct Delegate {
  struct Delegate__Class *klass;
  struct MonitorData *monitor;
  struct Delegate__Fields fields;
};
struct MulticastDelegate__Fields {
  struct Delegate__Fields _;
  struct Delegate__Array * delegates;
};
struct MulticastDelegate {
  struct MulticastDelegate__Class *klass;
  struct MonitorData *monitor;
  struct MulticastDelegate__Fields fields;
};
struct TypeFilter__Fields {
  struct MulticastDelegate__Fields _;
};
struct TypeFilter {
  struct TypeFilter__Class *klass;
  struct MonitorData *monitor;
  struct TypeFilter__Fields fields;
};
struct __declspec(align(8)) SerializationInfo__Fields {
  struct String__Array * m_members;
  struct Object__Array * m_data;
  struct Type__Array * m_types;
  struct Dictionary_2_System_String_System_Int32_ * m_nameToIndex;
  int32_t m_currMember;
  struct IFormatterConverter * m_converter;
  struct String * m_fullTypeName;
  struct String * m_assemName;
  struct Type * objectType;
  bool isFullTypeNameSetExplicit;
  bool isAssemblyNameSetExplicit;
  bool requireSameTokenInPartialTrust;
};
struct SerializationInfo {
  struct SerializationInfo__Class *klass;
  struct MonitorData *monitor;
  struct SerializationInfo__Fields fields;
};
struct String__Array {
  struct String__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct String * vector[32];
};
struct Type__Array {
  struct Type__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Type * vector[32];
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Int32___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Int32_ {
  struct Dictionary_2_System_String_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Int32___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  int32_t value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Int32_ vector[32];
};
struct IEqualityComparer_1_System_String_ {
  struct IEqualityComparer_1_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Fields {
  struct Dictionary_2_System_String_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Int32___Fields fields;
};
struct IEnumerator_1_System_String_ {
  struct IEnumerator_1_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Fields {
  struct Dictionary_2_System_String_System_Int32_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Int32___Fields fields;
};
struct IEnumerator_1_System_Int32_ {
  struct IEnumerator_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_String_ {
  struct ICollection_1_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Int32_ {
  struct ICollection_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_System_Int32_ {
  struct String * key;
  int32_t value;
};
struct KeyValuePair_2_System_String_System_Int32___Boxed {
  struct KeyValuePair_2_System_String_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Int32_ fields;
};
struct KeyValuePair_2_System_String_System_Int32___Array {
  struct KeyValuePair_2_System_String_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Int32_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection {
  struct ICollection__Class *klass;
  struct MonitorData *monitor;
};
struct IDictionaryEnumerator {
  struct IDictionaryEnumerator__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_String_ {
  struct IEnumerable_1_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Int32_ {
  struct IEnumerable_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
};
enum StreamingContextStates__Enum : int32_t {
  StreamingContextStates__Enum_CrossProcess = 1,
  StreamingContextStates__Enum_CrossMachine = 2,
  StreamingContextStates__Enum_File = 4,
  StreamingContextStates__Enum_Persistence = 8,
  StreamingContextStates__Enum_Remoting = 16,
  StreamingContextStates__Enum_Other = 32,
  StreamingContextStates__Enum_Clone = 64,
  StreamingContextStates__Enum_CrossAppDomain = 128,
  StreamingContextStates__Enum_All = 255,
};
struct StreamingContextStates__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StreamingContextStates__Enum value;
};
struct StreamingContext {
  struct Object * m_additionalContext;
  enum StreamingContextStates__Enum m_state;
};
struct StreamingContext__Boxed {
  struct StreamingContext__Class *klass;
  struct MonitorData *monitor;
  struct StreamingContext fields;
};
struct IFormatterConverter {
  struct IFormatterConverter__Class *klass;
  struct MonitorData *monitor;
};
struct MethodBase {
  struct MethodBase__Class *klass;
  struct MonitorData *monitor;
};
struct MethodInfo_1 {
  struct MethodInfo_1__Class *klass;
  struct MonitorData *monitor;
};
struct RuntimeMethodInfo {
  struct RuntimeMethodInfo__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MonoMethod__Fields {
  void * mhandle;
  struct String * name;
  struct Type * reftype;
};
struct MonoMethod {
  struct MonoMethod__Class *klass;
  struct MonitorData *monitor;
  struct MonoMethod__Fields fields;
};
enum ParameterAttributes__Enum : int32_t {
  ParameterAttributes__Enum_None = 0,
  ParameterAttributes__Enum_In = 1,
  ParameterAttributes__Enum_Out = 2,
  ParameterAttributes__Enum_Lcid = 4,
  ParameterAttributes__Enum_Retval = 8,
  ParameterAttributes__Enum_Optional = 16,
  ParameterAttributes__Enum_ReservedMask = 61440,
  ParameterAttributes__Enum_HasDefault = 4096,
  ParameterAttributes__Enum_HasFieldMarshal = 8192,
  ParameterAttributes__Enum_Reserved3 = 16384,
  ParameterAttributes__Enum_Reserved4 = 32768,
};
struct ParameterAttributes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ParameterAttributes__Enum value;
};
struct __declspec(align(8)) ParameterInfo_1__Fields {
  struct Type * ClassImpl;
  struct Object * DefaultValueImpl;
  struct MemberInfo_1 * MemberImpl;
  struct String * NameImpl;
  int32_t PositionImpl;
  enum ParameterAttributes__Enum AttrsImpl;
  struct MarshalAsAttribute * marshalAs;
};
struct ParameterInfo_1 {
  struct ParameterInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct ParameterInfo_1__Fields fields;
};
struct ParameterInfo_1__Array {
  struct ParameterInfo_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ParameterInfo_1 * vector[32];
};
struct Attribute {
  struct Attribute__Class *klass;
  struct MonitorData *monitor;
};
enum UnmanagedType__Enum : int32_t {
  UnmanagedType__Enum_Bool = 2,
  UnmanagedType__Enum_I1 = 3,
  UnmanagedType__Enum_U1 = 4,
  UnmanagedType__Enum_I2 = 5,
  UnmanagedType__Enum_U2 = 6,
  UnmanagedType__Enum_I4 = 7,
  UnmanagedType__Enum_U4 = 8,
  UnmanagedType__Enum_I8 = 9,
  UnmanagedType__Enum_U8 = 10,
  UnmanagedType__Enum_R4 = 11,
  UnmanagedType__Enum_R8 = 12,
  UnmanagedType__Enum_Currency = 15,
  UnmanagedType__Enum_BStr = 19,
  UnmanagedType__Enum_LPStr = 20,
  UnmanagedType__Enum_LPWStr = 21,
  UnmanagedType__Enum_LPTStr = 22,
  UnmanagedType__Enum_ByValTStr = 23,
  UnmanagedType__Enum_IUnknown = 25,
  UnmanagedType__Enum_IDispatch = 26,
  UnmanagedType__Enum_Struct = 27,
  UnmanagedType__Enum_Interface = 28,
  UnmanagedType__Enum_SafeArray = 29,
  UnmanagedType__Enum_ByValArray = 30,
  UnmanagedType__Enum_SysInt = 31,
  UnmanagedType__Enum_SysUInt = 32,
  UnmanagedType__Enum_VBByRefStr = 34,
  UnmanagedType__Enum_AnsiBStr = 35,
  UnmanagedType__Enum_TBStr = 36,
  UnmanagedType__Enum_VariantBool = 37,
  UnmanagedType__Enum_FunctionPtr = 38,
  UnmanagedType__Enum_AsAny = 40,
  UnmanagedType__Enum_LPArray = 42,
  UnmanagedType__Enum_LPStruct = 43,
  UnmanagedType__Enum_CustomMarshaler = 44,
  UnmanagedType__Enum_Error = 45,
  UnmanagedType__Enum_IInspectable = 46,
  UnmanagedType__Enum_HString = 47,
  UnmanagedType__Enum_LPUTF8Str = 48,
};
struct UnmanagedType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UnmanagedType__Enum value;
};
enum VarEnum__Enum : int32_t {
  VarEnum__Enum_VT_EMPTY = 0,
  VarEnum__Enum_VT_NULL = 1,
  VarEnum__Enum_VT_I2 = 2,
  VarEnum__Enum_VT_I4 = 3,
  VarEnum__Enum_VT_R4 = 4,
  VarEnum__Enum_VT_R8 = 5,
  VarEnum__Enum_VT_CY = 6,
  VarEnum__Enum_VT_DATE = 7,
  VarEnum__Enum_VT_BSTR = 8,
  VarEnum__Enum_VT_DISPATCH = 9,
  VarEnum__Enum_VT_ERROR = 10,
  VarEnum__Enum_VT_BOOL = 11,
  VarEnum__Enum_VT_VARIANT = 12,
  VarEnum__Enum_VT_UNKNOWN = 13,
  VarEnum__Enum_VT_DECIMAL = 14,
  VarEnum__Enum_VT_I1 = 16,
  VarEnum__Enum_VT_UI1 = 17,
  VarEnum__Enum_VT_UI2 = 18,
  VarEnum__Enum_VT_UI4 = 19,
  VarEnum__Enum_VT_I8 = 20,
  VarEnum__Enum_VT_UI8 = 21,
  VarEnum__Enum_VT_INT = 22,
  VarEnum__Enum_VT_UINT = 23,
  VarEnum__Enum_VT_VOID = 24,
  VarEnum__Enum_VT_HRESULT = 25,
  VarEnum__Enum_VT_PTR = 26,
  VarEnum__Enum_VT_SAFEARRAY = 27,
  VarEnum__Enum_VT_CARRAY = 28,
  VarEnum__Enum_VT_USERDEFINED = 29,
  VarEnum__Enum_VT_LPSTR = 30,
  VarEnum__Enum_VT_LPWSTR = 31,
  VarEnum__Enum_VT_RECORD = 36,
  VarEnum__Enum_VT_FILETIME = 64,
  VarEnum__Enum_VT_BLOB = 65,
  VarEnum__Enum_VT_STREAM = 66,
  VarEnum__Enum_VT_STORAGE = 67,
  VarEnum__Enum_VT_STREAMED_OBJECT = 68,
  VarEnum__Enum_VT_STORED_OBJECT = 69,
  VarEnum__Enum_VT_BLOB_OBJECT = 70,
  VarEnum__Enum_VT_CF = 71,
  VarEnum__Enum_VT_CLSID = 72,
  VarEnum__Enum_VT_VECTOR = 4096,
  VarEnum__Enum_VT_ARRAY = 8192,
  VarEnum__Enum_VT_BYREF = 16384,
};
struct VarEnum__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum VarEnum__Enum value;
};
struct __declspec(align(8)) MarshalAsAttribute__Fields {
  struct String * MarshalCookie;
  struct String * MarshalType;
  struct Type * MarshalTypeRef;
  struct Type * SafeArrayUserDefinedSubType;
  enum UnmanagedType__Enum utype;
  enum UnmanagedType__Enum ArraySubType;
  enum VarEnum__Enum SafeArraySubType;
  int32_t SizeConst;
  int32_t IidParameterIndex;
  int16_t SizeParamIndex;
};
struct MarshalAsAttribute {
  struct MarshalAsAttribute__Class *klass;
  struct MonitorData *monitor;
  struct MarshalAsAttribute__Fields fields;
};
enum MethodImplAttributes__Enum : int32_t {
  MethodImplAttributes__Enum_CodeTypeMask = 3,
  MethodImplAttributes__Enum_IL = 0,
  MethodImplAttributes__Enum_Native = 1,
  MethodImplAttributes__Enum_OPTIL = 2,
  MethodImplAttributes__Enum_Runtime = 3,
  MethodImplAttributes__Enum_ManagedMask = 4,
  MethodImplAttributes__Enum_Unmanaged = 4,
  MethodImplAttributes__Enum_Managed = 0,
  MethodImplAttributes__Enum_ForwardRef = 16,
  MethodImplAttributes__Enum_PreserveSig = 128,
  MethodImplAttributes__Enum_InternalCall = 4096,
  MethodImplAttributes__Enum_Synchronized = 32,
  MethodImplAttributes__Enum_NoInlining = 8,
  MethodImplAttributes__Enum_AggressiveInlining = 256,
  MethodImplAttributes__Enum_NoOptimization = 64,
  MethodImplAttributes__Enum_MaxMethodImplVal = 65535,
};
struct MethodImplAttributes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MethodImplAttributes__Enum value;
};
struct RuntimeMethodHandle {
  void * value;
};
struct RuntimeMethodHandle__Boxed {
  struct RuntimeMethodHandle__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeMethodHandle fields;
};
enum MethodAttributes__Enum : int32_t {
  MethodAttributes__Enum_MemberAccessMask = 7,
  MethodAttributes__Enum_PrivateScope = 0,
  MethodAttributes__Enum_Private = 1,
  MethodAttributes__Enum_FamANDAssem = 2,
  MethodAttributes__Enum_Assembly = 3,
  MethodAttributes__Enum_Family = 4,
  MethodAttributes__Enum_FamORAssem = 5,
  MethodAttributes__Enum_Public = 6,
  MethodAttributes__Enum_Static = 16,
  MethodAttributes__Enum_Final = 32,
  MethodAttributes__Enum_Virtual = 64,
  MethodAttributes__Enum_HideBySig = 128,
  MethodAttributes__Enum_CheckAccessOnOverride = 512,
  MethodAttributes__Enum_VtableLayoutMask = 256,
  MethodAttributes__Enum_ReuseSlot = 0,
  MethodAttributes__Enum_NewSlot = 256,
  MethodAttributes__Enum_Abstract = 1024,
  MethodAttributes__Enum_SpecialName = 2048,
  MethodAttributes__Enum_PinvokeImpl = 8192,
  MethodAttributes__Enum_UnmanagedExport = 8,
  MethodAttributes__Enum_RTSpecialName = 4096,
  MethodAttributes__Enum_ReservedMask = 53248,
  MethodAttributes__Enum_HasSecurity = 16384,
  MethodAttributes__Enum_RequireSecObject = 32768,
};
struct MethodAttributes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MethodAttributes__Enum value;
};
enum BindingFlags__Enum : int32_t {
  BindingFlags__Enum_Default = 0,
  BindingFlags__Enum_IgnoreCase = 1,
  BindingFlags__Enum_DeclaredOnly = 2,
  BindingFlags__Enum_Instance = 4,
  BindingFlags__Enum_Static = 8,
  BindingFlags__Enum_Public = 16,
  BindingFlags__Enum_NonPublic = 32,
  BindingFlags__Enum_FlattenHierarchy = 64,
  BindingFlags__Enum_InvokeMethod = 256,
  BindingFlags__Enum_CreateInstance = 512,
  BindingFlags__Enum_GetField = 1024,
  BindingFlags__Enum_SetField = 2048,
  BindingFlags__Enum_GetProperty = 4096,
  BindingFlags__Enum_SetProperty = 8192,
  BindingFlags__Enum_PutDispProperty = 16384,
  BindingFlags__Enum_PutRefDispProperty = 32768,
  BindingFlags__Enum_ExactBinding = 65536,
  BindingFlags__Enum_SuppressChangeType = 131072,
  BindingFlags__Enum_OptionalParamBinding = 262144,
  BindingFlags__Enum_IgnoreReturn = 16777216,
};
struct BindingFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BindingFlags__Enum value;
};
struct Binder {
  struct Binder__Class *klass;
  struct MonitorData *monitor;
};
struct DefaultBinder {
  struct DefaultBinder__Class *klass;
  struct MonitorData *monitor;
};
struct MethodBase__Array {
  struct MethodBase__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MethodBase * vector[32];
};
struct ParameterModifier {
  struct Boolean__Array * _byRef;
};
struct ParameterModifier__Boxed {
  struct ParameterModifier__Class *klass;
  struct MonitorData *monitor;
  struct ParameterModifier fields;
};
struct ParameterModifier__Array {
  struct ParameterModifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ParameterModifier vector[32];
};
struct Boolean__Array {
  struct Boolean__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  bool vector[32];
};
struct __declspec(align(8)) CultureInfo__Fields {
  bool m_isReadOnly;
  int32_t cultureID;
  int32_t parent_lcid;
  int32_t datetime_index;
  int32_t number_index;
  int32_t default_calendar_type;
  bool m_useUserOverride;
  struct NumberFormatInfo * numInfo;
  struct DateTimeFormatInfo * dateTimeInfo;
  struct TextInfo * textInfo;
  struct String * m_name;
  struct String * englishname;
  struct String * nativename;
  struct String * iso3lang;
  struct String * iso2lang;
  struct String * win3lang;
  struct String * territory;
  struct String__Array * native_calendar_names;
  struct CompareInfo * compareInfo;
  struct Void * textinfo_data;
  int32_t m_dataItem;
  struct Calendar * calendar;
  struct CultureInfo * parent_culture;
  bool constructed;
  struct Byte__Array * cached_serialized_form;
  struct CultureData * m_cultureData;
  bool m_isInherited;
};
struct CultureInfo {
  struct CultureInfo__Class *klass;
  struct MonitorData *monitor;
  struct CultureInfo__Fields fields;
};
struct __declspec(align(8)) NumberFormatInfo__Fields {
  struct Int32__Array * numberGroupSizes;
  struct Int32__Array * currencyGroupSizes;
  struct Int32__Array * percentGroupSizes;
  struct String * positiveSign;
  struct String * negativeSign;
  struct String * numberDecimalSeparator;
  struct String * numberGroupSeparator;
  struct String * currencyGroupSeparator;
  struct String * currencyDecimalSeparator;
  struct String * currencySymbol;
  struct String * ansiCurrencySymbol;
  struct String * nanSymbol;
  struct String * positiveInfinitySymbol;
  struct String * negativeInfinitySymbol;
  struct String * percentDecimalSeparator;
  struct String * percentGroupSeparator;
  struct String * percentSymbol;
  struct String * perMilleSymbol;
  struct String__Array * nativeDigits;
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
struct NumberFormatInfo {
  struct NumberFormatInfo__Class *klass;
  struct MonitorData *monitor;
  struct NumberFormatInfo__Fields fields;
};
enum NumberStyles__Enum : int32_t {
  NumberStyles__Enum_None = 0,
  NumberStyles__Enum_AllowLeadingWhite = 1,
  NumberStyles__Enum_AllowTrailingWhite = 2,
  NumberStyles__Enum_AllowLeadingSign = 4,
  NumberStyles__Enum_AllowTrailingSign = 8,
  NumberStyles__Enum_AllowParentheses = 16,
  NumberStyles__Enum_AllowDecimalPoint = 32,
  NumberStyles__Enum_AllowThousands = 64,
  NumberStyles__Enum_AllowExponent = 128,
  NumberStyles__Enum_AllowCurrencySymbol = 256,
  NumberStyles__Enum_AllowHexSpecifier = 512,
  NumberStyles__Enum_Integer = 7,
  NumberStyles__Enum_HexNumber = 515,
  NumberStyles__Enum_Number = 111,
  NumberStyles__Enum_Float = 167,
  NumberStyles__Enum_Currency = 383,
  NumberStyles__Enum_Any = 511,
};
struct NumberStyles__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NumberStyles__Enum value;
};
enum DateTimeFormatFlags__Enum : int32_t {
  DateTimeFormatFlags__Enum_None = 0,
  DateTimeFormatFlags__Enum_UseGenitiveMonth = 1,
  DateTimeFormatFlags__Enum_UseLeapYearMonth = 2,
  DateTimeFormatFlags__Enum_UseSpacesInMonthNames = 4,
  DateTimeFormatFlags__Enum_UseHebrewRule = 8,
  DateTimeFormatFlags__Enum_UseSpacesInDayNames = 16,
  DateTimeFormatFlags__Enum_UseDigitPrefixInTokens = 32,
  DateTimeFormatFlags__Enum_NotInitialized = -1,
};
struct DateTimeFormatFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DateTimeFormatFlags__Enum value;
};
struct __declspec(align(8)) DateTimeFormatInfo__Fields {
  struct CultureData * m_cultureData;
  struct String * m_name;
  struct String * m_langName;
  struct CompareInfo * m_compareInfo;
  struct CultureInfo * m_cultureInfo;
  struct String * amDesignator;
  struct String * pmDesignator;
  struct String * dateSeparator;
  struct String * generalShortTimePattern;
  struct String * generalLongTimePattern;
  struct String * timeSeparator;
  struct String * monthDayPattern;
  struct String * dateTimeOffsetPattern;
  struct Calendar * calendar;
  int32_t firstDayOfWeek;
  int32_t calendarWeekRule;
  struct String * fullDateTimePattern;
  struct String__Array * abbreviatedDayNames;
  struct String__Array * m_superShortDayNames;
  struct String__Array * dayNames;
  struct String__Array * abbreviatedMonthNames;
  struct String__Array * monthNames;
  struct String__Array * genitiveMonthNames;
  struct String__Array * m_genitiveAbbreviatedMonthNames;
  struct String__Array * leapYearMonthNames;
  struct String * longDatePattern;
  struct String * shortDatePattern;
  struct String * yearMonthPattern;
  struct String * longTimePattern;
  struct String * shortTimePattern;
  struct String__Array * allYearMonthPatterns;
  struct String__Array * allShortDatePatterns;
  struct String__Array * allLongDatePatterns;
  struct String__Array * allShortTimePatterns;
  struct String__Array * allLongTimePatterns;
  struct String__Array * m_eraNames;
  struct String__Array * m_abbrevEraNames;
  struct String__Array * m_abbrevEnglishEraNames;
  struct Int32__Array * optionalCalendars;
  bool m_isReadOnly;
  enum DateTimeFormatFlags__Enum formatFlags;
  int32_t CultureID;
  bool m_useUserOverride;
  bool bUseCalendarInfo;
  int32_t nDataItem;
  bool m_isDefaultCalendar;
  struct String__Array * m_dateWords;
  struct String * m_fullTimeSpanPositivePattern;
  struct String * m_fullTimeSpanNegativePattern;
  struct TokenHashValue__Array * m_dtfiTokenHash;
};
struct DateTimeFormatInfo {
  struct DateTimeFormatInfo__Class *klass;
  struct MonitorData *monitor;
  struct DateTimeFormatInfo__Fields fields;
};
struct __declspec(align(8)) CultureData__Fields {
  struct String * sAM1159;
  struct String * sPM2359;
  struct String * sTimeSeparator;
  struct String__Array * saLongTimes;
  struct String__Array * saShortTimes;
  int32_t iFirstDayOfWeek;
  int32_t iFirstWeekOfYear;
  struct Int32__Array * waCalendars;
  struct CalendarData__Array * calendars;
  struct String * sISO639Language;
  struct String * sRealName;
  bool bUseOverrides;
  int32_t calendarId;
  int32_t numberIndex;
  int32_t iDefaultAnsiCodePage;
  int32_t iDefaultOemCodePage;
  int32_t iDefaultMacCodePage;
  int32_t iDefaultEbcdicCodePage;
  bool isRightToLeft;
  struct String * sListSeparator;
};
}