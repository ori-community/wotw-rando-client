namespace app {
struct __declspec(align(8)) XboxController__Fields {
  int32_t _playerIndex;
  bool _stopMotorTimerActive;
  struct DateTime _stopMotorTime;
  struct XInputState gamepadStatePrev;
  struct XInputState gamepadStateCurrent;
  struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs_ * StateChanged;
  bool _isConnected;
};
struct XboxController {
  struct XboxController__Class *klass;
  struct MonitorData *monitor;
  struct XboxController__Fields fields;
};
struct XboxController__Array {
  struct XboxController__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XboxController * vector[32];
};
struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs_ {
  struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs___Fields fields;
};
struct __declspec(align(8)) XboxControllerStateChangedEventArgs__Fields {
  struct XInputState _CurrentInputState_k__BackingField;
  struct XInputState _PreviousInputState_k__BackingField;
};
struct XboxControllerStateChangedEventArgs {
  struct XboxControllerStateChangedEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct XboxControllerStateChangedEventArgs__Fields fields;
};
struct XInputGamepad__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XInputGamepad__StaticFields {
};
struct XInputGamepad__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XInputGamepad__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XInputGamepad__VTable vtable;
};
struct XInputState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XInputState__StaticFields {
};
struct XInputState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XInputState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XInputState__VTable vtable;
};
struct XboxControllerStateChangedEventArgs__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XboxControllerStateChangedEventArgs__StaticFields {
};
struct XboxControllerStateChangedEventArgs__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XboxControllerStateChangedEventArgs__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XboxControllerStateChangedEventArgs__VTable vtable;
};
struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs___VTable {
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
struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs___StaticFields {
};
struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs___VTable vtable;
};
struct XboxController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XboxController__StaticFields {
  bool keepRunning;
  int32_t updateFrequency;
  int32_t waitTime;
  bool isRunning;
  struct Object * SyncLock;
  struct Thread * pollingThread;
  struct XboxController__Array * Controllers;
};
struct XboxController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XboxController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XboxController__VTable vtable;
};

struct XInputVibration {
  uint16_t LeftMotorSpeed;
  uint16_t RightMotorSpeed;
};
struct XInputVibration__Boxed {
  struct XInputVibration__Class *klass;
  struct MonitorData *monitor;
  struct XInputVibration fields;
};
struct XInputVibration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XInputVibration__StaticFields {
};
struct XInputVibration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XInputVibration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XInputVibration__VTable vtable;
};

struct EmbeddedAttribute {
  struct EmbeddedAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct EmbeddedAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct EmbeddedAttribute__StaticFields {
};
struct EmbeddedAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EmbeddedAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EmbeddedAttribute__VTable vtable;
};

struct IsReadOnlyAttribute_1 {
  struct IsReadOnlyAttribute_1__Class *klass;
  struct MonitorData *monitor;
};
struct IsReadOnlyAttribute_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct IsReadOnlyAttribute_1__StaticFields {
};
struct IsReadOnlyAttribute_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsReadOnlyAttribute_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsReadOnlyAttribute_1__VTable vtable;
};

struct JsonNameTable {
  struct JsonNameTable__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) DefaultJsonNameTable__Fields {
  int32_t _count;
  struct DefaultJsonNameTable_Entry__Array * _entries;
  int32_t _mask;
};
struct DefaultJsonNameTable {
  struct DefaultJsonNameTable__Class *klass;
  struct MonitorData *monitor;
  struct DefaultJsonNameTable__Fields fields;
};
struct __declspec(align(8)) DefaultJsonNameTable_Entry__Fields {
  struct String * Value;
  int32_t HashCode;
  struct DefaultJsonNameTable_Entry * Next;
};
struct DefaultJsonNameTable_Entry {
  struct DefaultJsonNameTable_Entry__Class *klass;
  struct MonitorData *monitor;
  struct DefaultJsonNameTable_Entry__Fields fields;
};
struct DefaultJsonNameTable_Entry__Array {
  struct DefaultJsonNameTable_Entry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DefaultJsonNameTable_Entry * vector[32];
};
struct JsonNameTable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
};
struct JsonNameTable__StaticFields {
};
struct JsonNameTable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonNameTable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonNameTable__VTable vtable;
};
struct DefaultJsonNameTable_Entry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DefaultJsonNameTable_Entry__StaticFields {
};
struct DefaultJsonNameTable_Entry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultJsonNameTable_Entry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultJsonNameTable_Entry__VTable vtable;
};
struct DefaultJsonNameTable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Get;
};
struct DefaultJsonNameTable__StaticFields {
  int32_t HashCodeRandomizer;
};
struct DefaultJsonNameTable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultJsonNameTable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultJsonNameTable__VTable vtable;
};

enum ReferenceLoopHandling__Enum : int32_t {
  ReferenceLoopHandling__Enum_Error = 0,
  ReferenceLoopHandling__Enum_Ignore = 1,
  ReferenceLoopHandling__Enum_Serialize = 2,
};
struct ReferenceLoopHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ReferenceLoopHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ {
  enum ReferenceLoopHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ fields;
};
enum TypeNameHandling__Enum : int32_t {
  TypeNameHandling__Enum_None = 0,
  TypeNameHandling__Enum_Objects = 1,
  TypeNameHandling__Enum_Arrays = 2,
  TypeNameHandling__Enum_All = 3,
  TypeNameHandling__Enum_Auto = 4,
};
struct TypeNameHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TypeNameHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ {
  enum TypeNameHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_TypeNameHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_TypeNameHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ fields;
};
struct __declspec(align(8)) JsonContainerAttribute__Fields {
  struct Type * _ItemConverterType_k__BackingField;
  struct Object__Array * _ItemConverterParameters_k__BackingField;
  struct NamingStrategy * _NamingStrategyInstance_k__BackingField;
  struct Nullable_1_Boolean_ _isReference;
  struct Nullable_1_Boolean_ _itemIsReference;
  struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _itemReferenceLoopHandling;
  struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _itemTypeNameHandling;
  struct Type * _namingStrategyType;
  struct Object__Array * _namingStrategyParameters;
};
struct JsonContainerAttribute {
  struct JsonContainerAttribute__Class *klass;
  struct MonitorData *monitor;
  struct JsonContainerAttribute__Fields fields;
};
struct __declspec(align(8)) NamingStrategy__Fields {
  bool _ProcessDictionaryKeys_k__BackingField;
  bool _ProcessExtensionDataNames_k__BackingField;
  bool _OverrideSpecifiedNames_k__BackingField;
};
struct NamingStrategy {
  struct NamingStrategy__Class *klass;
  struct MonitorData *monitor;
  struct NamingStrategy__Fields fields;
};
struct CamelCaseNamingStrategy__Fields {
  struct NamingStrategy__Fields _;
};
struct CamelCaseNamingStrategy {
  struct CamelCaseNamingStrategy__Class *klass;
  struct MonitorData *monitor;
  struct CamelCaseNamingStrategy__Fields fields;
};
struct CamelCaseNamingStrategy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetPropertyName;
  VirtualInvokeData GetExtensionDataName;
  VirtualInvokeData GetDictionaryKey;
  VirtualInvokeData ResolvePropertyName;
};
struct CamelCaseNamingStrategy__StaticFields {
};
struct CamelCaseNamingStrategy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CamelCaseNamingStrategy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CamelCaseNamingStrategy__VTable vtable;
};
struct NamingStrategy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetPropertyName;
  VirtualInvokeData GetExtensionDataName;
  VirtualInvokeData GetDictionaryKey;
  VirtualInvokeData __unknown;
};
struct NamingStrategy__StaticFields {
};
struct NamingStrategy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NamingStrategy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NamingStrategy__VTable vtable;
};
struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling___VTable vtable;
};
struct Nullable_1_Newtonsoft_Json_TypeNameHandling___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_TypeNameHandling___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_TypeNameHandling___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_TypeNameHandling___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_TypeNameHandling___VTable vtable;
};
struct JsonContainerAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct JsonContainerAttribute__StaticFields {
};
struct JsonContainerAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JsonContainerAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JsonContainerAttribute__VTable vtable;
};

struct Func_1_Newtonsoft_Json_JsonSerializerSettings___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_Newtonsoft_Json_JsonSerializerSettings_ {
  struct Func_1_Newtonsoft_Json_JsonSerializerSettings___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_Newtonsoft_Json_JsonSerializerSettings___Fields fields;
};
enum Formatting__Enum_1 : int32_t {
  Formatting__Enum_1_None = 0,
  Formatting__Enum_1_Indented = 1,
};
struct Formatting__Enum_1__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Formatting__Enum_1 value;
};
struct Nullable_1_Newtonsoft_Json_Formatting_ {
  enum Formatting__Enum_1 value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_Formatting___Boxed {
  struct Nullable_1_Newtonsoft_Json_Formatting___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_Formatting_ fields;
};
enum DateFormatHandling__Enum : int32_t {
  DateFormatHandling__Enum_IsoDateFormat = 0,
  DateFormatHandling__Enum_MicrosoftDateFormat = 1,
};
struct DateFormatHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DateFormatHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_DateFormatHandling_ {
  enum DateFormatHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_DateFormatHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_DateFormatHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_DateFormatHandling_ fields;
};
enum DateTimeZoneHandling__Enum : int32_t {
  DateTimeZoneHandling__Enum_Local = 0,
  DateTimeZoneHandling__Enum_Utc = 1,
  DateTimeZoneHandling__Enum_Unspecified = 2,
  DateTimeZoneHandling__Enum_RoundtripKind = 3,
};
struct DateTimeZoneHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DateTimeZoneHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ {
  enum DateTimeZoneHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ fields;
};
enum DateParseHandling__Enum : int32_t {
  DateParseHandling__Enum_None = 0,
  DateParseHandling__Enum_DateTime = 1,
  DateParseHandling__Enum_DateTimeOffset = 2,
};
struct DateParseHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DateParseHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_DateParseHandling_ {
  enum DateParseHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_DateParseHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_DateParseHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_DateParseHandling_ fields;
};
enum FloatFormatHandling__Enum : int32_t {
  FloatFormatHandling__Enum_String = 0,
  FloatFormatHandling__Enum_Symbol = 1,
  FloatFormatHandling__Enum_DefaultValue = 2,
};
struct FloatFormatHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FloatFormatHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_FloatFormatHandling_ {
  enum FloatFormatHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_FloatFormatHandling_ fields;
};
enum FloatParseHandling__Enum : int32_t {
  FloatParseHandling__Enum_Double = 0,
  FloatParseHandling__Enum_Decimal = 1,
};
struct FloatParseHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FloatParseHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_FloatParseHandling_ {
  enum FloatParseHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_FloatParseHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_FloatParseHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_FloatParseHandling_ fields;
};
enum StringEscapeHandling__Enum : int32_t {
  StringEscapeHandling__Enum_Default = 0,
  StringEscapeHandling__Enum_EscapeNonAscii = 1,
  StringEscapeHandling__Enum_EscapeHtml = 2,
};
struct StringEscapeHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StringEscapeHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_StringEscapeHandling_ {
  enum StringEscapeHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_StringEscapeHandling_ fields;
};
enum TypeNameAssemblyFormatHandling__Enum : int32_t {
  TypeNameAssemblyFormatHandling__Enum_Simple = 0,
  TypeNameAssemblyFormatHandling__Enum_Full = 1,
};
struct TypeNameAssemblyFormatHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TypeNameAssemblyFormatHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling_ {
  enum TypeNameAssemblyFormatHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling_ fields;
};
enum DefaultValueHandling__Enum : int32_t {
  DefaultValueHandling__Enum_Include = 0,
  DefaultValueHandling__Enum_Ignore = 1,
  DefaultValueHandling__Enum_Populate = 2,
  DefaultValueHandling__Enum_IgnoreAndPopulate = 3,
};
struct DefaultValueHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DefaultValueHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_DefaultValueHandling_ {
  enum DefaultValueHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_DefaultValueHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_DefaultValueHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_DefaultValueHandling_ fields;
};
enum PreserveReferencesHandling__Enum : int32_t {
  PreserveReferencesHandling__Enum_None = 0,
  PreserveReferencesHandling__Enum_Objects = 1,
  PreserveReferencesHandling__Enum_Arrays = 2,
  PreserveReferencesHandling__Enum_All = 3,
};
struct PreserveReferencesHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PreserveReferencesHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling_ {
  enum PreserveReferencesHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling_ fields;
};
enum NullValueHandling__Enum : int32_t {
  NullValueHandling__Enum_Include = 0,
  NullValueHandling__Enum_Ignore = 1,
};
struct NullValueHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NullValueHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_NullValueHandling_ {
  enum NullValueHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_NullValueHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_NullValueHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_NullValueHandling_ fields;
};
enum ObjectCreationHandling__Enum : int32_t {
  ObjectCreationHandling__Enum_Auto = 0,
  ObjectCreationHandling__Enum_Reuse = 1,
  ObjectCreationHandling__Enum_Replace = 2,
};
struct ObjectCreationHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ObjectCreationHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ {
  enum ObjectCreationHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ fields;
};
enum MissingMemberHandling__Enum : int32_t {
  MissingMemberHandling__Enum_Ignore = 0,
  MissingMemberHandling__Enum_Error = 1,
};
struct MissingMemberHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MissingMemberHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_MissingMemberHandling_ {
  enum MissingMemberHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_MissingMemberHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_MissingMemberHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_MissingMemberHandling_ fields;
};
struct Nullable_1_System_Runtime_Serialization_StreamingContext_ {
  struct StreamingContext value;
  bool has_value;
};
struct Nullable_1_System_Runtime_Serialization_StreamingContext___Boxed {
  struct Nullable_1_System_Runtime_Serialization_StreamingContext___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_System_Runtime_Serialization_StreamingContext_ fields;
};
enum ConstructorHandling__Enum : int32_t {
  ConstructorHandling__Enum_Default = 0,
  ConstructorHandling__Enum_AllowNonPublicDefaultConstructor = 1,
};
struct ConstructorHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConstructorHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_ConstructorHandling_ {
  enum ConstructorHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_ConstructorHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_ConstructorHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_ConstructorHandling_ fields;
};
enum MetadataPropertyHandling__Enum : int32_t {
  MetadataPropertyHandling__Enum_Default = 0,
  MetadataPropertyHandling__Enum_ReadAhead = 1,
  MetadataPropertyHandling__Enum_Ignore = 2,
};
struct MetadataPropertyHandling__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MetadataPropertyHandling__Enum value;
};
struct Nullable_1_Newtonsoft_Json_MetadataPropertyHandling_ {
  enum MetadataPropertyHandling__Enum value;
  bool has_value;
};
struct Nullable_1_Newtonsoft_Json_MetadataPropertyHandling___Boxed {
  struct Nullable_1_Newtonsoft_Json_MetadataPropertyHandling___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Newtonsoft_Json_MetadataPropertyHandling_ fields;
};
struct __declspec(align(8)) JsonSerializerSettings__Fields {
  struct Nullable_1_Newtonsoft_Json_Formatting_ _formatting;
  struct Nullable_1_Newtonsoft_Json_DateFormatHandling_ _dateFormatHandling;
  struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling_ _dateTimeZoneHandling;
  struct Nullable_1_Newtonsoft_Json_DateParseHandling_ _dateParseHandling;
  struct Nullable_1_Newtonsoft_Json_FloatFormatHandling_ _floatFormatHandling;
  struct Nullable_1_Newtonsoft_Json_FloatParseHandling_ _floatParseHandling;
  struct Nullable_1_Newtonsoft_Json_StringEscapeHandling_ _stringEscapeHandling;
  struct CultureInfo * _culture;
  struct Nullable_1_Boolean_ _checkAdditionalContent;
  struct Nullable_1_Int32_ _maxDepth;
  bool _maxDepthSet;
  struct String * _dateFormatString;
  bool _dateFormatStringSet;
  struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling_ _typeNameAssemblyFormatHandling;
  struct Nullable_1_Newtonsoft_Json_DefaultValueHandling_ _defaultValueHandling;
  struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling_ _preserveReferencesHandling;
  struct Nullable_1_Newtonsoft_Json_NullValueHandling_ _nullValueHandling;
  struct Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ _objectCreationHandling;
  struct Nullable_1_Newtonsoft_Json_MissingMemberHandling_ _missingMemberHandling;
  struct Nullable_1_Newtonsoft_Json_ReferenceLoopHandling_ _referenceLoopHandling;
  struct Nullable_1_System_Runtime_Serialization_StreamingContext_ _context;
  struct Nullable_1_Newtonsoft_Json_ConstructorHandling_ _constructorHandling;
  struct Nullable_1_Newtonsoft_Json_TypeNameHandling_ _typeNameHandling;
  struct Nullable_1_Newtonsoft_Json_MetadataPropertyHandling_ _metadataPropertyHandling;
  struct IList_1_Newtonsoft_Json_JsonConverter_ * _Converters_k__BackingField;
  struct IContractResolver * _ContractResolver_k__BackingField;
  struct IEqualityComparer * _EqualityComparer_k__BackingField;
  struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver_ * _ReferenceResolverProvider_k__BackingField;
  struct ITraceWriter * _TraceWriter_k__BackingField;
  struct ISerializationBinder * _SerializationBinder_k__BackingField;
  struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ * _Error_k__BackingField;
};
struct JsonSerializerSettings {
  struct JsonSerializerSettings__Class *klass;
  struct MonitorData *monitor;
  struct JsonSerializerSettings__Fields fields;
};
struct IList_1_Newtonsoft_Json_JsonConverter_ {
  struct IList_1_Newtonsoft_Json_JsonConverter___Class *klass;
  struct MonitorData *monitor;
};
struct IContractResolver {
  struct IContractResolver__Class *klass;
  struct MonitorData *monitor;
};
struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver_ {
  struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_Newtonsoft_Json_Serialization_IReferenceResolver___Fields fields;
};
struct IReferenceResolver {
  struct IReferenceResolver__Class *klass;
  struct MonitorData *monitor;
};
struct ITraceWriter {
  struct ITraceWriter__Class *klass;
  struct MonitorData *monitor;
};
struct ISerializationBinder {
  struct ISerializationBinder__Class *klass;
  struct MonitorData *monitor;
};
struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs___Fields {
  struct MulticastDelegate__Fields _;
};
struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs_ {
  struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs___Class *klass;
  struct MonitorData *monitor;
  struct EventHandler_1_Newtonsoft_Json_Serialization_ErrorEventArgs___Fields fields;
};
struct __declspec(align(8)) ErrorEventArgs__Fields {
  struct Object * _CurrentObject_k__BackingField;
  struct ErrorContext * _ErrorContext_k__BackingField;
};
struct ErrorEventArgs {
  struct ErrorEventArgs__Class *klass;
  struct MonitorData *monitor;
  struct ErrorEventArgs__Fields fields;
};
struct __declspec(align(8)) ErrorContext__Fields {
  bool _Traced_k__BackingField;
  struct Exception * _Error_k__BackingField;
  struct Object * _OriginalObject_k__BackingField;
  struct Object * _Member_k__BackingField;
  struct String * _Path_k__BackingField;
  bool _Handled_k__BackingField;
};
struct ErrorContext {
  struct ErrorContext__Class *klass;
  struct MonitorData *monitor;
  struct ErrorContext__Fields fields;
};
struct Nullable_1_Newtonsoft_Json_Formatting___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_Formatting___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_Formatting___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_Formatting___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_Formatting___VTable vtable;
};
struct Nullable_1_Newtonsoft_Json_DateFormatHandling___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_DateFormatHandling___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_DateFormatHandling___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_DateFormatHandling___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_DateFormatHandling___VTable vtable;
};
struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_DateTimeZoneHandling___VTable vtable;
};
struct Nullable_1_Newtonsoft_Json_DateParseHandling___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_DateParseHandling___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_DateParseHandling___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_DateParseHandling___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_DateParseHandling___VTable vtable;
};
struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_FloatFormatHandling___VTable vtable;
};
struct Nullable_1_Newtonsoft_Json_FloatParseHandling___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_FloatParseHandling___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_FloatParseHandling___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_FloatParseHandling___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_FloatParseHandling___VTable vtable;
};
struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_StringEscapeHandling___VTable vtable;
};
struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_TypeNameAssemblyFormatHandling___VTable vtable;
};
struct Nullable_1_Newtonsoft_Json_DefaultValueHandling___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Newtonsoft_Json_DefaultValueHandling___StaticFields {
};
struct Nullable_1_Newtonsoft_Json_DefaultValueHandling___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Newtonsoft_Json_DefaultValueHandling___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Newtonsoft_Json_DefaultValueHandling___VTable vtable;
};
struct Nullable_1_Newtonsoft_Json_PreserveReferencesHandling___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}