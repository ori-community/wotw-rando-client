namespace app {
struct SerializationFieldInfo__StaticFields {
};
struct SerializationFieldInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializationFieldInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializationFieldInfo__VTable vtable;
};

struct __declspec(align(8)) SerializationInfoEnumerator__Fields {
  struct String__Array * m_members;
  struct Object__Array * m_data;
  struct Type__Array * m_types;
  int32_t m_numItems;
  int32_t m_currItem;
  bool m_current;
};
struct SerializationInfoEnumerator {
  struct SerializationInfoEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct SerializationInfoEnumerator__Fields fields;
};
struct SerializationInfoEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData Reset;
};
struct SerializationInfoEnumerator__StaticFields {
};
struct SerializationInfoEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializationInfoEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializationInfoEnumerator__VTable vtable;
};

struct SerializationEntry {
  struct Type * m_type;
  struct Object * m_value;
  struct String * m_name;
};
struct SerializationEntry__Boxed {
  struct SerializationEntry__Class *klass;
  struct MonitorData *monitor;
  struct SerializationEntry fields;
};
struct SerializationEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SerializationEntry__StaticFields {
};
struct SerializationEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializationEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializationEntry__VTable vtable;
};

struct __declspec(align(8)) SerializationObjectManager__Fields {
  struct Hashtable * m_objectSeenTable;
  struct SerializationEventHandler * m_onSerializedHandler;
  struct StreamingContext m_context;
};
struct SerializationObjectManager {
  struct SerializationObjectManager__Class *klass;
  struct MonitorData *monitor;
  struct SerializationObjectManager__Fields fields;
};
struct SerializationObjectManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SerializationObjectManager__StaticFields {
};
struct SerializationObjectManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializationObjectManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializationObjectManager__VTable vtable;
};

enum BinaryTypeEnum__Enum : int32_t {
  BinaryTypeEnum__Enum_Primitive = 0,
  BinaryTypeEnum__Enum_String = 1,
  BinaryTypeEnum__Enum_Object = 2,
  BinaryTypeEnum__Enum_ObjectUrt = 3,
  BinaryTypeEnum__Enum_ObjectUser = 4,
  BinaryTypeEnum__Enum_ObjectArray = 5,
  BinaryTypeEnum__Enum_StringArray = 6,
  BinaryTypeEnum__Enum_PrimitiveArray = 7,
};
struct BinaryTypeEnum__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BinaryTypeEnum__Enum value;
};
struct __declspec(align(8)) WriteObjectInfo__Fields {
  int32_t objectInfoId;
  struct Object * obj;
  struct Type * objectType;
  bool isSi;
  bool isNamed;
  bool isTyped;
  bool isArray;
  struct SerializationInfo * si;
  struct SerObjectInfoCache * cache;
  struct Object__Array * memberData;
  struct ISerializationSurrogate * serializationSurrogate;
  struct StreamingContext context;
  struct SerObjectInfoInit * serObjectInfoInit;
  int64_t objectId;
  int64_t assemId;
  struct String * binderTypeName;
  struct String * binderAssemblyString;
};
struct WriteObjectInfo {
  struct WriteObjectInfo__Class *klass;
  struct MonitorData *monitor;
  struct WriteObjectInfo__Fields fields;
};
struct __declspec(align(8)) SerObjectInfoCache__Fields {
  struct String * fullTypeName;
  struct String * assemblyString;
  bool hasTypeForwardedFrom;
  struct MemberInfo_1__Array * memberInfos;
  struct String__Array * memberNames;
  struct Type__Array * memberTypes;
};
struct SerObjectInfoCache {
  struct SerObjectInfoCache__Class *klass;
  struct MonitorData *monitor;
  struct SerObjectInfoCache__Fields fields;
};
struct __declspec(align(8)) SerObjectInfoInit__Fields {
  struct Hashtable * seenBeforeTable;
  int32_t objectInfoIdCount;
  struct SerStack * oiPool;
};
struct SerObjectInfoInit {
  struct SerObjectInfoInit__Class *klass;
  struct MonitorData *monitor;
  struct SerObjectInfoInit__Fields fields;
};
struct __declspec(align(8)) SerStack__Fields {
  struct Object__Array * objects;
  struct String * stackId;
  int32_t top;
};
struct SerStack {
  struct SerStack__Class *klass;
  struct MonitorData *monitor;
  struct SerStack__Fields fields;
};
enum InternalPrimitiveTypeE__Enum : int32_t {
  InternalPrimitiveTypeE__Enum_Invalid = 0,
  InternalPrimitiveTypeE__Enum_Boolean = 1,
  InternalPrimitiveTypeE__Enum_Byte = 2,
  InternalPrimitiveTypeE__Enum_Char = 3,
  InternalPrimitiveTypeE__Enum_Currency = 4,
  InternalPrimitiveTypeE__Enum_Decimal = 5,
  InternalPrimitiveTypeE__Enum_Double = 6,
  InternalPrimitiveTypeE__Enum_Int16 = 7,
  InternalPrimitiveTypeE__Enum_Int32 = 8,
  InternalPrimitiveTypeE__Enum_Int64 = 9,
  InternalPrimitiveTypeE__Enum_SByte = 10,
  InternalPrimitiveTypeE__Enum_Single = 11,
  InternalPrimitiveTypeE__Enum_TimeSpan = 12,
  InternalPrimitiveTypeE__Enum_DateTime = 13,
  InternalPrimitiveTypeE__Enum_UInt16 = 14,
  InternalPrimitiveTypeE__Enum_UInt32 = 15,
  InternalPrimitiveTypeE__Enum_UInt64 = 16,
  InternalPrimitiveTypeE__Enum_Null = 17,
  InternalPrimitiveTypeE__Enum_String = 18,
};
struct InternalPrimitiveTypeE__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InternalPrimitiveTypeE__Enum value;
};
struct __declspec(align(8)) ObjectWriter__Fields {
  struct Queue * m_objectQueue;
  struct ObjectIDGenerator * m_idGenerator;
  int32_t m_currentId;
  struct ISurrogateSelector * m_surrogates;
  struct StreamingContext m_context;
  struct _BinaryWriter * serWriter;
  struct SerializationObjectManager * m_objectManager;
  int64_t topId;
  struct String * topName;
  struct Header__Array * headers;
  struct InternalFE * formatterEnums;
  struct SerializationBinder * m_binder;
  struct SerObjectInfoInit * serObjectInfoInit;
  struct IFormatterConverter * m_formatterConverter;
  struct Object__Array * crossAppDomainArray;
  struct Object * previousObj;
  int64_t previousId;
  struct Type * previousType;
  enum InternalPrimitiveTypeE__Enum previousCode;
  struct Hashtable * assemblyToIdTable;
  struct SerStack * niPool;
};
struct ObjectWriter {
  struct ObjectWriter__Class *klass;
  struct MonitorData *monitor;
  struct ObjectWriter__Fields fields;
};
struct __declspec(align(8)) _BinaryWriter__Fields {
  struct Stream * sout;
  enum FormatterTypeStyle__Enum formatterTypeStyle;
  struct Hashtable * objectMapTable;
  struct ObjectWriter * objectWriter;
  struct BinaryWriter * dataWriter;
  int32_t m_nestedObjectCount;
  int32_t nullCount;
  struct BinaryMethodCall * binaryMethodCall;
  struct BinaryMethodReturn * binaryMethodReturn;
  struct BinaryObject * binaryObject;
  struct BinaryObjectWithMap * binaryObjectWithMap;
  struct BinaryObjectWithMapTyped * binaryObjectWithMapTyped;
  struct BinaryObjectString * binaryObjectString;
  struct BinaryArray * binaryArray;
  struct Byte__Array * byteBuffer;
  int32_t chunkSize;
  struct MemberPrimitiveUnTyped * memberPrimitiveUnTyped;
  struct MemberPrimitiveTyped * memberPrimitiveTyped;
  struct ObjectNull * objectNull;
  struct MemberReference * memberReference;
  struct BinaryAssembly * binaryAssembly;
};
struct _BinaryWriter {
  struct _BinaryWriter__Class *klass;
  struct MonitorData *monitor;
  struct _BinaryWriter__Fields fields;
};
enum MessageEnum__Enum : int32_t {
  MessageEnum__Enum_NoArgs = 1,
  MessageEnum__Enum_ArgsInline = 2,
  MessageEnum__Enum_ArgsIsArray = 4,
  MessageEnum__Enum_ArgsInArray = 8,
  MessageEnum__Enum_NoContext = 16,
  MessageEnum__Enum_ContextInline = 32,
  MessageEnum__Enum_ContextInArray = 64,
  MessageEnum__Enum_MethodSignatureInArray = 128,
  MessageEnum__Enum_PropertyInArray = 256,
  MessageEnum__Enum_NoReturnValue = 512,
  MessageEnum__Enum_ReturnValueVoid = 1024,
  MessageEnum__Enum_ReturnValueInline = 2048,
  MessageEnum__Enum_ReturnValueInArray = 4096,
  MessageEnum__Enum_ExceptionInArray = 8192,
  MessageEnum__Enum_GenericMethod = 32768,
};
struct MessageEnum__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MessageEnum__Enum value;
};
struct __declspec(align(8)) BinaryMethodCall__Fields {
  struct String * methodName;
  struct String * typeName;
  struct Object__Array * args;
  struct Object * callContext;
  struct Type__Array * argTypes;
  bool bArgsPrimitive;
  enum MessageEnum__Enum messageEnum;
};
struct BinaryMethodCall {
  struct BinaryMethodCall__Class *klass;
  struct MonitorData *monitor;
  struct BinaryMethodCall__Fields fields;
};
struct __declspec(align(8)) BinaryMethodReturn__Fields {
  struct Object * returnValue;
  struct Object__Array * args;
  struct Object * callContext;
  struct Type__Array * argTypes;
  bool bArgsPrimitive;
  enum MessageEnum__Enum messageEnum;
  struct Type * returnType;
};
struct BinaryMethodReturn {
  struct BinaryMethodReturn__Class *klass;
  struct MonitorData *monitor;
  struct BinaryMethodReturn__Fields fields;
};
struct __declspec(align(8)) BinaryObject__Fields {
  int32_t objectId;
  int32_t mapId;
};
struct BinaryObject {
  struct BinaryObject__Class *klass;
  struct MonitorData *monitor;
  struct BinaryObject__Fields fields;
};
struct __declspec(align(8)) _BinaryParser__Fields {
  struct ObjectReader * objectReader;
  struct Stream * input;
  int64_t topId;
  int64_t headerId;
  struct SizedArray * objectMapIdTable;
  struct SizedArray * assemIdToAssemblyTable;
  struct SerStack * stack;
  enum BinaryTypeEnum__Enum expectedType;
  struct Object * expectedTypeInformation;
  struct ParseRecord * PRS;
  struct BinaryAssemblyInfo * systemAssemblyInfo;
  struct BinaryReader * dataReader;
  struct SerStack * opPool;
  struct BinaryObject * binaryObject;
  struct BinaryObjectWithMap * bowm;
  struct BinaryObjectWithMapTyped * bowmt;
  struct BinaryObjectString * objectString;
  struct BinaryCrossAppDomainString * crossAppDomainString;
  struct MemberPrimitiveTyped * memberPrimitiveTyped;
  struct Byte__Array * byteBuffer;
  struct MemberPrimitiveUnTyped * memberPrimitiveUnTyped;
  struct MemberReference * memberReference;
  struct ObjectNull * objectNull;
};
struct _BinaryParser {
  struct _BinaryParser__Class *klass;
  struct MonitorData *monitor;
  struct _BinaryParser__Fields fields;
};
struct __declspec(align(8)) ObjectReader__Fields {
  struct Stream * m_stream;
  struct ISurrogateSelector * m_surrogates;
  struct StreamingContext m_context;
  struct ObjectManager * m_objectManager;
  struct InternalFE * formatterEnums;
  struct SerializationBinder * m_binder;
  int64_t topId;
  bool bSimpleAssembly;
  struct Object * handlerObject;
  struct Object * m_topObject;
  struct Header__Array * headers;
  struct HeaderHandler * handler;
  struct SerObjectInfoInit * serObjectInfoInit;
  struct IFormatterConverter * m_formatterConverter;
  struct SerStack * stack;
  struct SerStack * valueFixupStack;
  struct Object__Array * crossAppDomainArray;
  bool bFullDeserialization;
  bool bOldFormatDetected;
  struct IntSizedArray * valTypeObjectIdTable;
  struct NameCache * typeCache;
  struct String * previousAssemblyString;
  struct String * previousName;
  struct Type * previousType;
};
struct ObjectReader {
  struct ObjectReader__Class *klass;
  struct MonitorData *monitor;
  struct ObjectReader__Fields fields;
};
enum InternalSerializerTypeE__Enum : int32_t {
  InternalSerializerTypeE__Enum_Soap = 1,
  InternalSerializerTypeE__Enum_Binary = 2,
};
struct InternalSerializerTypeE__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InternalSerializerTypeE__Enum value;
};
struct __declspec(align(8)) InternalFE__Fields {
  enum FormatterTypeStyle__Enum FEtypeFormat;
  enum FormatterAssemblyStyle__Enum FEassemblyFormat;
  enum TypeFilterLevel__Enum FEsecurityLevel;
  enum InternalSerializerTypeE__Enum FEserializerTypeEnum;
};
struct InternalFE {
  struct InternalFE__Class *klass;
  struct MonitorData *monitor;
  struct InternalFE__Fields fields;
};
struct __declspec(align(8)) IntSizedArray__Fields {
  struct Int32__Array * objects;
  struct Int32__Array * negObjects;
};
struct IntSizedArray {
  struct IntSizedArray__Class *klass;
  struct MonitorData *monitor;
  struct IntSizedArray__Fields fields;
};
struct __declspec(align(8)) NameCache__Fields {
  struct String * name;
};
struct NameCache {
  struct NameCache__Class *klass;
  struct MonitorData *monitor;
  struct NameCache__Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_System_String_System_Object___Fields {
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object_ * _tables;
  struct IEqualityComparer_1_System_String_ * _comparer;
  bool _growLockArray;
  int32_t _budget;
};
struct ConcurrentDictionary_2_System_String_System_Object_ {
  struct ConcurrentDictionary_2_System_String_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_System_String_System_Object___Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object___Fields {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array * _buckets;
  struct Object__Array * _locks;
  struct Int32__Array * _countPerLock;
};
struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object_ {
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object___Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Fields {
  struct String * _key;
  struct Object * _value;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object_ * _next;
  int32_t _hashcode;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object_ {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Fields fields;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object_ * vector[32];
};
struct __declspec(align(8)) SizedArray__Fields {
  struct Object__Array * objects;
  struct Object__Array * negObjects;
};
struct SizedArray {
  struct SizedArray__Class *klass;
  struct MonitorData *monitor;
  struct SizedArray__Fields fields;
};
enum InternalParseTypeE__Enum : int32_t {
  InternalParseTypeE__Enum_Empty = 0,
  InternalParseTypeE__Enum_SerializedStreamHeader = 1,
  InternalParseTypeE__Enum_Object = 2,
  InternalParseTypeE__Enum_Member = 3,
  InternalParseTypeE__Enum_ObjectEnd = 4,
  InternalParseTypeE__Enum_MemberEnd = 5,
  InternalParseTypeE__Enum_Headers = 6,
  InternalParseTypeE__Enum_HeadersEnd = 7,
  InternalParseTypeE__Enum_SerializedStreamHeaderEnd = 8,
  InternalParseTypeE__Enum_Envelope = 9,
  InternalParseTypeE__Enum_EnvelopeEnd = 10,
  InternalParseTypeE__Enum_Body = 11,
  InternalParseTypeE__Enum_BodyEnd = 12,
};
struct InternalParseTypeE__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InternalParseTypeE__Enum value;
};
enum InternalObjectTypeE__Enum : int32_t {
  InternalObjectTypeE__Enum_Empty = 0,
  InternalObjectTypeE__Enum_Object = 1,
  InternalObjectTypeE__Enum_Array = 2,
};
struct InternalObjectTypeE__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InternalObjectTypeE__Enum value;
};
enum InternalArrayTypeE__Enum : int32_t {
  InternalArrayTypeE__Enum_Empty = 0,
  InternalArrayTypeE__Enum_Single = 1,
  InternalArrayTypeE__Enum_Jagged = 2,
  InternalArrayTypeE__Enum_Rectangular = 3,
  InternalArrayTypeE__Enum_Base64 = 4,
};
struct InternalArrayTypeE__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InternalArrayTypeE__Enum value;
};
enum InternalMemberTypeE__Enum : int32_t {
  InternalMemberTypeE__Enum_Empty = 0,
  InternalMemberTypeE__Enum_Header = 1,
  InternalMemberTypeE__Enum_Field = 2,
  InternalMemberTypeE__Enum_Item = 3,
};
struct InternalMemberTypeE__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InternalMemberTypeE__Enum value;
};
enum InternalMemberValueE__Enum : int32_t {
  InternalMemberValueE__Enum_Empty = 0,
  InternalMemberValueE__Enum_InlineValue = 1,
  InternalMemberValueE__Enum_Nested = 2,
  InternalMemberValueE__Enum_Reference = 3,
  InternalMemberValueE__Enum_Null = 4,
};
struct InternalMemberValueE__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InternalMemberValueE__Enum value;
};
enum InternalObjectPositionE__Enum : int32_t {
  InternalObjectPositionE__Enum_Empty = 0,
  InternalObjectPositionE__Enum_Top = 1,
  InternalObjectPositionE__Enum_Child = 2,
  InternalObjectPositionE__Enum_Headers = 3,
};
struct InternalObjectPositionE__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InternalObjectPositionE__Enum value;
};
struct __declspec(align(8)) ParseRecord__Fields {
  enum InternalParseTypeE__Enum PRparseTypeEnum;
  enum InternalObjectTypeE__Enum PRobjectTypeEnum;
  enum InternalArrayTypeE__Enum PRarrayTypeEnum;
  enum InternalMemberTypeE__Enum PRmemberTypeEnum;
  enum InternalMemberValueE__Enum PRmemberValueEnum;
  enum InternalObjectPositionE__Enum PRobjectPositionEnum;
  struct String * PRname;
  struct String * PRvalue;
  struct Object * PRvarValue;
  struct String * PRkeyDt;
  struct Type * PRdtType;
  enum InternalPrimitiveTypeE__Enum PRdtTypeCode;
  bool PRisEnum;
  int64_t PRobjectId;
  int64_t PRidRef;
  struct String * PRarrayElementTypeString;
  struct Type * PRarrayElementType;
  bool PRisArrayVariant;
  enum InternalPrimitiveTypeE__Enum PRarrayElementTypeCode;
  int32_t PRrank;
  struct Int32__Array * PRlengthA;
  struct Int32__Array * PRpositionA;
  struct Int32__Array * PRlowerBoundA;
  struct Int32__Array * PRupperBoundA;
  struct Int32__Array * PRindexMap;
  int32_t PRmemberIndex;
  int32_t PRlinearlength;
  struct Int32__Array * PRrectangularMap;
  bool PRisLowerBound;
  int64_t PRtopId;
  int64_t PRheaderId;
  struct ReadObjectInfo * PRobjectInfo;
  bool PRisValueTypeFixup;
  struct Object * PRnewObj;
  struct Object__Array * PRobjectA;
  struct PrimitiveArray * PRprimitiveArray;
  bool PRisRegistered;
  struct Object__Array * PRmemberData;
  struct SerializationInfo * PRsi;
  int32_t PRnullCount;
};
struct ParseRecord {
  struct ParseRecord__Class *klass;
  struct MonitorData *monitor;
  struct ParseRecord__Fields fields;
};
struct __declspec(align(8)) ReadObjectInfo__Fields {
  int32_t objectInfoId;
  struct Type * objectType;
  struct ObjectManager * objectManager;
  int32_t count;
  bool isSi;
  bool isNamed;
  bool isTyped;
  bool bSimpleAssembly;
  struct SerObjectInfoCache * cache;
  struct String__Array * wireMemberNames;
  struct Type__Array * wireMemberTypes;
  int32_t lastPosition;
  struct ISerializationSurrogate * serializationSurrogate;
  struct StreamingContext context;
  struct List_1_System_Type_ * memberTypesList;
  struct SerObjectInfoInit * serObjectInfoInit;
  struct IFormatterConverter * formatterConverter;
};
struct ReadObjectInfo {
  struct ReadObjectInfo__Class *klass;
  struct MonitorData *monitor;
  struct ReadObjectInfo__Fields fields;
};
struct __declspec(align(8)) List_1_System_Type___Fields {
  struct Type__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Type_ {
  struct List_1_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Type___Fields fields;
};
struct __declspec(align(8)) PrimitiveArray__Fields {
  enum InternalPrimitiveTypeE__Enum code;
  struct Boolean__Array * booleanA;
  struct Char__Array * charA;
  struct Double__Array * doubleA;
  struct Int16__Array * int16A;
  struct Int32__Array * int32A;
  struct Int64__Array * int64A;
  struct SByte__Array * sbyteA;
  struct Single__Array * singleA;
  struct UInt16__Array * uint16A;
  struct UInt32__Array * uint32A;
  struct UInt64__Array * uint64A;
};
struct PrimitiveArray {
  struct PrimitiveArray__Class *klass;
  struct MonitorData *monitor;
  struct PrimitiveArray__Fields fields;
};
struct Double__Array {
  struct Double__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  double vector[32];
};
struct Single__Array {
  struct Single__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  float vector[32];
};
struct __declspec(align(8)) BinaryAssemblyInfo__Fields {
  struct String * assemblyString;
  struct Assembly * assembly;
};
struct BinaryAssemblyInfo {
  struct BinaryAssemblyInfo__Class *klass;
  struct MonitorData *monitor;
  struct BinaryAssemblyInfo__Fields fields;
};
enum BinaryHeaderEnum__Enum : int32_t {
  BinaryHeaderEnum__Enum_SerializedStreamHeader = 0,
  BinaryHeaderEnum__Enum_Object = 1,
  BinaryHeaderEnum__Enum_ObjectWithMap = 2,
  BinaryHeaderEnum__Enum_ObjectWithMapAssemId = 3,
  BinaryHeaderEnum__Enum_ObjectWithMapTyped = 4,
  BinaryHeaderEnum__Enum_ObjectWithMapTypedAssemId = 5,
  BinaryHeaderEnum__Enum_ObjectString = 6,
  BinaryHeaderEnum__Enum_Array = 7,
  BinaryHeaderEnum__Enum_MemberPrimitiveTyped = 8,
  BinaryHeaderEnum__Enum_MemberReference = 9,
  BinaryHeaderEnum__Enum_ObjectNull = 10,
  BinaryHeaderEnum__Enum_MessageEnd = 11,
  BinaryHeaderEnum__Enum_Assembly = 12,
  BinaryHeaderEnum__Enum_ObjectNullMultiple256 = 13,
  BinaryHeaderEnum__Enum_ObjectNullMultiple = 14,
  BinaryHeaderEnum__Enum_ArraySinglePrimitive = 15,
  BinaryHeaderEnum__Enum_ArraySingleObject = 16,
  BinaryHeaderEnum__Enum_ArraySingleString = 17,
  BinaryHeaderEnum__Enum_CrossAppDomainMap = 18,
  BinaryHeaderEnum__Enum_CrossAppDomainString = 19,
  BinaryHeaderEnum__Enum_CrossAppDomainAssembly = 20,
  BinaryHeaderEnum__Enum_MethodCall = 21,
  BinaryHeaderEnum__Enum_MethodReturn = 22,
};
struct BinaryHeaderEnum__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BinaryHeaderEnum__Enum value;
};
struct __declspec(align(8)) BinaryObjectWithMap__Fields {
  enum BinaryHeaderEnum__Enum binaryHeaderEnum;
  int32_t objectId;
  struct String * name;
  int32_t numMembers;
  struct String__Array * memberNames;
  int32_t assemId;
};
struct BinaryObjectWithMap {
  struct BinaryObjectWithMap__Class *klass;
  struct MonitorData *monitor;
  struct BinaryObjectWithMap__Fields fields;
};
struct __declspec(align(8)) BinaryObjectWithMapTyped__Fields {
  enum BinaryHeaderEnum__Enum binaryHeaderEnum;
  int32_t objectId;
  struct String * name;
  int32_t numMembers;
  struct String__Array * memberNames;
  struct BinaryTypeEnum__Enum__Array * binaryTypeEnumA;
  struct Object__Array * typeInformationA;
  struct Int32__Array * memberAssemIds;
  int32_t assemId;
};
struct BinaryObjectWithMapTyped {
  struct BinaryObjectWithMapTyped__Class *klass;
  struct MonitorData *monitor;
  struct BinaryObjectWithMapTyped__Fields fields;
};
struct BinaryTypeEnum__Enum__Array {
  struct BinaryTypeEnum__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum BinaryTypeEnum__Enum vector[32];
};
struct __declspec(align(8)) BinaryObjectString__Fields {
  int32_t objectId;
  struct String * value;
};
struct BinaryObjectString {
  struct BinaryObjectString__Class *klass;
  struct MonitorData *monitor;
  struct BinaryObjectString__Fields fields;
};
struct __declspec(align(8)) BinaryCrossAppDomainString__Fields {
  int32_t objectId;
  int32_t value;
};
struct BinaryCrossAppDomainString {
  struct BinaryCrossAppDomainString__Class *klass;
  struct MonitorData *monitor;
  struct BinaryCrossAppDomainString__Fields fields;
};
struct __declspec(align(8)) MemberPrimitiveTyped__Fields {
  enum InternalPrimitiveTypeE__Enum primitiveTypeEnum;
  struct Object * value;
};
struct MemberPrimitiveTyped {
  struct MemberPrimitiveTyped__Class *klass;
  struct MonitorData *monitor;
  struct MemberPrimitiveTyped__Fields fields;
};
struct __declspec(align(8)) MemberPrimitiveUnTyped__Fields {
  enum InternalPrimitiveTypeE__Enum typeInformation;
  struct Object * value;
};
struct MemberPrimitiveUnTyped {
  struct MemberPrimitiveUnTyped__Class *klass;
  struct MonitorData *monitor;
  struct MemberPrimitiveUnTyped__Fields fields;
};
struct __declspec(align(8)) MemberReference__Fields {
  int32_t idRef;
};
struct MemberReference {
  struct MemberReference__Class *klass;
  struct MonitorData *monitor;
  struct MemberReference__Fields fields;
};
struct __declspec(align(8)) ObjectNull__Fields {
  int32_t nullCount;
};
struct ObjectNull {
  struct ObjectNull__Class *klass;
  struct MonitorData *monitor;
  struct ObjectNull__Fields fields;
};
struct MessageEnd {
  struct MessageEnd__Class *klass;
  struct MonitorData *monitor;
};
enum BinaryArrayTypeEnum__Enum : int32_t {
  BinaryArrayTypeEnum__Enum_Single = 0,
  BinaryArrayTypeEnum__Enum_Jagged = 1,
  BinaryArrayTypeEnum__Enum_Rectangular = 2,
  BinaryArrayTypeEnum__Enum_SingleOffset = 3,
  BinaryArrayTypeEnum__Enum_JaggedOffset = 4,
  BinaryArrayTypeEnum__Enum_RectangularOffset = 5,
};
struct BinaryArrayTypeEnum__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BinaryArrayTypeEnum__Enum value;
};
struct __declspec(align(8)) BinaryArray__Fields {
  int32_t objectId;
  int32_t rank;
  struct Int32__Array * lengthA;
  struct Int32__Array * lowerBoundA;
  enum BinaryTypeEnum__Enum binaryTypeEnum;
  struct Object * typeInformation;
  int32_t assemId;
  enum BinaryHeaderEnum__Enum binaryHeaderEnum;
  enum BinaryArrayTypeEnum__Enum binaryArrayTypeEnum;
};
struct BinaryArray {
  struct BinaryArray__Class *klass;
  struct MonitorData *monitor;
  struct BinaryArray__Fields fields;
};
struct __declspec(align(8)) BinaryAssembly__Fields {
  int32_t assemId;
  struct String * assemblyString;
};
struct BinaryAssembly {
  struct BinaryAssembly__Class *klass;
  struct MonitorData *monitor;
  struct BinaryAssembly__Fields fields;
};
struct SerObjectInfoCache__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SerObjectInfoCache__StaticFields {
};
struct SerObjectInfoCache__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerObjectInfoCache__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerObjectInfoCache__VTable vtable;
};
struct SerStack__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SerStack__StaticFields {
};
struct SerStack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerStack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerStack__VTable vtable;
};
struct SerObjectInfoInit__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SerObjectInfoInit__StaticFields {
};
struct SerObjectInfoInit__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerObjectInfoInit__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerObjectInfoInit__VTable vtable;
};
struct WriteObjectInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WriteObjectInfo__StaticFields {
};
struct WriteObjectInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WriteObjectInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WriteObjectInfo__VTable vtable;
};
struct BinaryMethodCall__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BinaryMethodCall__StaticFields {
};
struct BinaryMethodCall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BinaryMethodCall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BinaryMethodCall__VTable vtable;
};
struct BinaryMethodReturn__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Write;
};
struct BinaryMethodReturn__StaticFields {
  struct Object * instanceOfVoid;
};
struct BinaryMethodReturn__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BinaryMethodReturn__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BinaryMethodReturn__VTable vtable;
};
struct InternalFE__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InternalFE__StaticFields {
};
struct InternalFE__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InternalFE__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InternalFE__VTable vtable;
};
struct IntSizedArray__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
};
struct IntSizedArray__StaticFields {
};
struct IntSizedArray__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntSizedArray__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntSizedArray__VTable vtable;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___StaticFields {
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___VTable vtable;
};
struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object___StaticFields {
};
struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object___VTable vtable;
};
struct ConcurrentDictionary_2_System_String_System_Object___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData get_Keys;
  VirtualInvokeData get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__Add;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
};}