namespace app {
    struct __declspec(align(8)) SerializationObjectManager__Fields {
        struct Hashtable* m_objectSeenTable;
        struct SerializationEventHandler* m_onSerializedHandler;
        struct StreamingContext m_context;
    };

    struct SerializationObjectManager {
        struct SerializationObjectManager__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerializationObjectManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SerializationObjectManager__VTable vtable;
    };

    enum class BinaryTypeEnum__Enum : int32_t {
        Primitive = 0x00000000,
        String = 0x00000001,
        Object = 0x00000002,
        ObjectUrt = 0x00000003,
        ObjectUser = 0x00000004,
        ObjectArray = 0x00000005,
        StringArray = 0x00000006,
        PrimitiveArray = 0x00000007,
    };

    struct BinaryTypeEnum__Enum__Boxed {
        struct BinaryTypeEnum__Enum__Class* klass;
        MonitorData* monitor;
        BinaryTypeEnum__Enum value;
    };

    struct __declspec(align(8)) WriteObjectInfo__Fields {
        int32_t objectInfoId;
        struct Object* obj;
        struct Type* objectType;
        bool isSi;
        bool isNamed;
        bool isTyped;
        bool isArray;
        struct SerializationInfo* si;
        struct SerObjectInfoCache* cache;
        struct Object__Array* memberData;
        struct ISerializationSurrogate* serializationSurrogate;
        struct StreamingContext context;
        struct SerObjectInfoInit* serObjectInfoInit;
        int64_t objectId;
        int64_t assemId;
        struct String* binderTypeName;
        struct String* binderAssemblyString;
    };

    struct WriteObjectInfo {
        struct WriteObjectInfo__Class* klass;
        MonitorData* monitor;
        struct WriteObjectInfo__Fields fields;
    };

    struct __declspec(align(8)) SerObjectInfoCache__Fields {
        struct String* fullTypeName;
        struct String* assemblyString;
        bool hasTypeForwardedFrom;
        struct MemberInfo_1__Array* memberInfos;
        struct String__Array* memberNames;
        struct Type__Array* memberTypes;
    };

    struct SerObjectInfoCache {
        struct SerObjectInfoCache__Class* klass;
        MonitorData* monitor;
        struct SerObjectInfoCache__Fields fields;
    };

    struct __declspec(align(8)) SerObjectInfoInit__Fields {
        struct Hashtable* seenBeforeTable;
        int32_t objectInfoIdCount;
        struct SerStack* oiPool;
    };

    struct SerObjectInfoInit {
        struct SerObjectInfoInit__Class* klass;
        MonitorData* monitor;
        struct SerObjectInfoInit__Fields fields;
    };

    struct __declspec(align(8)) SerStack__Fields {
        struct Object__Array* objects;
        struct String* stackId;
        int32_t top;
    };

    struct SerStack {
        struct SerStack__Class* klass;
        MonitorData* monitor;
        struct SerStack__Fields fields;
    };

    enum class InternalPrimitiveTypeE__Enum : int32_t {
        Invalid = 0x00000000,
        Boolean = 0x00000001,
        Byte = 0x00000002,
        Char = 0x00000003,
        Currency = 0x00000004,
        Decimal = 0x00000005,
        Double = 0x00000006,
        Int16 = 0x00000007,
        Int32 = 0x00000008,
        Int64 = 0x00000009,
        SByte = 0x0000000a,
        Single = 0x0000000b,
        TimeSpan = 0x0000000c,
        DateTime = 0x0000000d,
        UInt16 = 0x0000000e,
        UInt32 = 0x0000000f,
        UInt64 = 0x00000010,
        Null = 0x00000011,
        String = 0x00000012,
    };

    struct InternalPrimitiveTypeE__Enum__Boxed {
        struct InternalPrimitiveTypeE__Enum__Class* klass;
        MonitorData* monitor;
        InternalPrimitiveTypeE__Enum value;
    };

    struct __declspec(align(8)) ObjectWriter__Fields {
        struct Queue* m_objectQueue;
        struct ObjectIDGenerator* m_idGenerator;
        int32_t m_currentId;
        struct ISurrogateSelector* m_surrogates;
        struct StreamingContext m_context;
        struct _BinaryWriter* serWriter;
        struct SerializationObjectManager* m_objectManager;
        int64_t topId;
        struct String* topName;
        struct Header__Array* headers;
        struct InternalFE* formatterEnums;
        struct SerializationBinder* m_binder;
        struct SerObjectInfoInit* serObjectInfoInit;
        struct IFormatterConverter* m_formatterConverter;
        struct Object__Array* crossAppDomainArray;
        struct Object* previousObj;
        int64_t previousId;
        struct Type* previousType;
        InternalPrimitiveTypeE__Enum previousCode;

        struct Hashtable* assemblyToIdTable;
        struct SerStack* niPool;
    };

    struct ObjectWriter {
        struct ObjectWriter__Class* klass;
        MonitorData* monitor;
        struct ObjectWriter__Fields fields;
    };

    struct __declspec(align(8)) _BinaryWriter__Fields {
        struct Stream* sout;
        FormatterTypeStyle__Enum formatterTypeStyle;

        struct Hashtable* objectMapTable;
        struct ObjectWriter* objectWriter;
        struct BinaryWriter* dataWriter;
        int32_t m_nestedObjectCount;
        int32_t nullCount;
        struct BinaryMethodCall* binaryMethodCall;
        struct BinaryMethodReturn* binaryMethodReturn;
        struct BinaryObject* binaryObject;
        struct BinaryObjectWithMap* binaryObjectWithMap;
        struct BinaryObjectWithMapTyped* binaryObjectWithMapTyped;
        struct BinaryObjectString* binaryObjectString;
        struct BinaryArray* binaryArray;
        struct Byte__Array* byteBuffer;
        int32_t chunkSize;
        struct MemberPrimitiveUnTyped* memberPrimitiveUnTyped;
        struct MemberPrimitiveTyped* memberPrimitiveTyped;
        struct ObjectNull* objectNull;
        struct MemberReference* memberReference;
        struct BinaryAssembly* binaryAssembly;
    };

    struct _BinaryWriter {
        struct _BinaryWriter__Class* klass;
        MonitorData* monitor;
        struct _BinaryWriter__Fields fields;
    };

    enum class MessageEnum__Enum : int32_t {
        NoArgs = 0x00000001,
        ArgsInline = 0x00000002,
        ArgsIsArray = 0x00000004,
        ArgsInArray = 0x00000008,
        NoContext = 0x00000010,
        ContextInline = 0x00000020,
        ContextInArray = 0x00000040,
        MethodSignatureInArray = 0x00000080,
        PropertyInArray = 0x00000100,
        NoReturnValue = 0x00000200,
        ReturnValueVoid = 0x00000400,
        ReturnValueInline = 0x00000800,
        ReturnValueInArray = 0x00001000,
        ExceptionInArray = 0x00002000,
        GenericMethod = 0x00008000,
    };

    struct MessageEnum__Enum__Boxed {
        struct MessageEnum__Enum__Class* klass;
        MonitorData* monitor;
        MessageEnum__Enum value;
    };

    struct __declspec(align(8)) BinaryMethodCall__Fields {
        struct String* methodName;
        struct String* typeName;
        struct Object__Array* args;
        struct Object* callContext;
        struct Type__Array* argTypes;
        bool bArgsPrimitive;
        MessageEnum__Enum messageEnum;
    };

    struct BinaryMethodCall {
        struct BinaryMethodCall__Class* klass;
        MonitorData* monitor;
        struct BinaryMethodCall__Fields fields;
    };

    struct __declspec(align(8)) BinaryMethodReturn__Fields {
        struct Object* returnValue;
        struct Object__Array* args;
        struct Object* callContext;
        struct Type__Array* argTypes;
        bool bArgsPrimitive;
        MessageEnum__Enum messageEnum;

        struct Type* returnType;
    };

    struct BinaryMethodReturn {
        struct BinaryMethodReturn__Class* klass;
        MonitorData* monitor;
        struct BinaryMethodReturn__Fields fields;
    };

    struct __declspec(align(8)) BinaryObject__Fields {
        int32_t objectId;
        int32_t mapId;
    };

    struct BinaryObject {
        struct BinaryObject__Class* klass;
        MonitorData* monitor;
        struct BinaryObject__Fields fields;
    };

    struct __declspec(align(8)) _BinaryParser__Fields {
        struct ObjectReader* objectReader;
        struct Stream* input;
        int64_t topId;
        int64_t headerId;
        struct SizedArray* objectMapIdTable;
        struct SizedArray* assemIdToAssemblyTable;
        struct SerStack* stack;
        BinaryTypeEnum__Enum expectedType;

        struct Object* expectedTypeInformation;
        struct ParseRecord* PRS;
        struct BinaryAssemblyInfo* systemAssemblyInfo;
        struct BinaryReader* dataReader;
        struct SerStack* opPool;
        struct BinaryObject* binaryObject;
        struct BinaryObjectWithMap* bowm;
        struct BinaryObjectWithMapTyped* bowmt;
        struct BinaryObjectString* objectString;
        struct BinaryCrossAppDomainString* crossAppDomainString;
        struct MemberPrimitiveTyped* memberPrimitiveTyped;
        struct Byte__Array* byteBuffer;
        struct MemberPrimitiveUnTyped* memberPrimitiveUnTyped;
        struct MemberReference* memberReference;
        struct ObjectNull* objectNull;
    };

    struct _BinaryParser {
        struct _BinaryParser__Class* klass;
        MonitorData* monitor;
        struct _BinaryParser__Fields fields;
    };

    struct __declspec(align(8)) ObjectReader__Fields {
        struct Stream* m_stream;
        struct ISurrogateSelector* m_surrogates;
        struct StreamingContext m_context;
        struct ObjectManager* m_objectManager;
        struct InternalFE* formatterEnums;
        struct SerializationBinder* m_binder;
        int64_t topId;
        bool bSimpleAssembly;
        struct Object* handlerObject;
        struct Object* m_topObject;
        struct Header__Array* headers;
        struct HeaderHandler* handler;
        struct SerObjectInfoInit* serObjectInfoInit;
        struct IFormatterConverter* m_formatterConverter;
        struct SerStack* stack;
        struct SerStack* valueFixupStack;
        struct Object__Array* crossAppDomainArray;
        bool bFullDeserialization;
        bool bOldFormatDetected;
        struct IntSizedArray* valTypeObjectIdTable;
        struct NameCache* typeCache;
        struct String* previousAssemblyString;
        struct String* previousName;
        struct Type* previousType;
    };

    struct ObjectReader {
        struct ObjectReader__Class* klass;
        MonitorData* monitor;
        struct ObjectReader__Fields fields;
    };

    enum class InternalSerializerTypeE__Enum : int32_t {
        Soap = 0x00000001,
        Binary = 0x00000002,
    };

    struct InternalSerializerTypeE__Enum__Boxed {
        struct InternalSerializerTypeE__Enum__Class* klass;
        MonitorData* monitor;
        InternalSerializerTypeE__Enum value;
    };

    struct __declspec(align(8)) InternalFE__Fields {
        FormatterTypeStyle__Enum FEtypeFormat;

        FormatterAssemblyStyle__Enum FEassemblyFormat;

        TypeFilterLevel__Enum FEsecurityLevel;

        InternalSerializerTypeE__Enum FEserializerTypeEnum;
    };

    struct InternalFE {
        struct InternalFE__Class* klass;
        MonitorData* monitor;
        struct InternalFE__Fields fields;
    };

    struct __declspec(align(8)) IntSizedArray__Fields {
        struct Int32__Array* objects;
        struct Int32__Array* negObjects;
    };

    struct IntSizedArray {
        struct IntSizedArray__Class* klass;
        MonitorData* monitor;
        struct IntSizedArray__Fields fields;
    };

    struct __declspec(align(8)) NameCache__Fields {
        struct String* name;
    };

    struct NameCache {
        struct NameCache__Class* klass;
        MonitorData* monitor;
        struct NameCache__Fields fields;
    };

    struct __declspec(align(8)) ConcurrentDictionary_2_System_String_System_Object___Fields {
        struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object_* _tables;
        struct IEqualityComparer_1_System_String_* _comparer;
        bool _growLockArray;
        int32_t _budget;
    };

    struct ConcurrentDictionary_2_System_String_System_Object_ {
        struct ConcurrentDictionary_2_System_String_System_Object___Class* klass;
        MonitorData* monitor;
        struct ConcurrentDictionary_2_System_String_System_Object___Fields fields;
    };

    struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object___Fields {
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array* _buckets;
        struct Object__Array* _locks;
        struct Int32__Array* _countPerLock;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object_ {
        struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object___Class* klass;
        MonitorData* monitor;
        struct ConcurrentDictionary_2_TKey_TValue_Tables_System_String_System_Object___Fields fields;
    };

    struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Fields {
        struct String* _key;
        struct Object* _value;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object_* _next;
        int32_t _hashcode;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object_ {
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Class* klass;
        MonitorData* monitor;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Fields fields;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array {
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_String_System_Object_* vector[32];
    };

    struct __declspec(align(8)) SizedArray__Fields {
        struct Object__Array* objects;
        struct Object__Array* negObjects;
    };

    struct SizedArray {
        struct SizedArray__Class* klass;
        MonitorData* monitor;
        struct SizedArray__Fields fields;
    };

    enum class InternalParseTypeE__Enum : int32_t {
        Empty = 0x00000000,
        SerializedStreamHeader = 0x00000001,
        Object = 0x00000002,
        Member = 0x00000003,
        ObjectEnd = 0x00000004,
        MemberEnd = 0x00000005,
        Headers = 0x00000006,
        HeadersEnd = 0x00000007,
        SerializedStreamHeaderEnd = 0x00000008,
        Envelope = 0x00000009,
        EnvelopeEnd = 0x0000000a,
        Body = 0x0000000b,
        BodyEnd = 0x0000000c,
    };

    struct InternalParseTypeE__Enum__Boxed {
        struct InternalParseTypeE__Enum__Class* klass;
        MonitorData* monitor;
        InternalParseTypeE__Enum value;
    };

    enum class InternalObjectTypeE__Enum : int32_t {
        Empty = 0x00000000,
        Object = 0x00000001,
        Array = 0x00000002,
    };

    struct InternalObjectTypeE__Enum__Boxed {
        struct InternalObjectTypeE__Enum__Class* klass;
        MonitorData* monitor;
        InternalObjectTypeE__Enum value;
    };

    enum class InternalArrayTypeE__Enum : int32_t {
        Empty = 0x00000000,
        Single = 0x00000001,
        Jagged = 0x00000002,
        Rectangular = 0x00000003,
        Base64 = 0x00000004,
    };

    struct InternalArrayTypeE__Enum__Boxed {
        struct InternalArrayTypeE__Enum__Class* klass;
        MonitorData* monitor;
        InternalArrayTypeE__Enum value;
    };

    enum class InternalMemberTypeE__Enum : int32_t {
        Empty = 0x00000000,
        Header = 0x00000001,
        Field = 0x00000002,
        Item = 0x00000003,
    };

    struct InternalMemberTypeE__Enum__Boxed {
        struct InternalMemberTypeE__Enum__Class* klass;
        MonitorData* monitor;
        InternalMemberTypeE__Enum value;
    };

    enum class InternalMemberValueE__Enum : int32_t {
        Empty = 0x00000000,
        InlineValue = 0x00000001,
        Nested = 0x00000002,
        Reference = 0x00000003,
        Null = 0x00000004,
    };

    struct InternalMemberValueE__Enum__Boxed {
        struct InternalMemberValueE__Enum__Class* klass;
        MonitorData* monitor;
        InternalMemberValueE__Enum value;
    };

    enum class InternalObjectPositionE__Enum : int32_t {
        Empty = 0x00000000,
        Top = 0x00000001,
        Child = 0x00000002,
        Headers = 0x00000003,
    };

    struct InternalObjectPositionE__Enum__Boxed {
        struct InternalObjectPositionE__Enum__Class* klass;
        MonitorData* monitor;
        InternalObjectPositionE__Enum value;
    };

    struct __declspec(align(8)) ParseRecord__Fields {
        InternalParseTypeE__Enum PRparseTypeEnum;

        InternalObjectTypeE__Enum PRobjectTypeEnum;

        InternalArrayTypeE__Enum PRarrayTypeEnum;

        InternalMemberTypeE__Enum PRmemberTypeEnum;

        InternalMemberValueE__Enum PRmemberValueEnum;

        InternalObjectPositionE__Enum PRobjectPositionEnum;

        struct String* PRname;
        struct String* PRvalue;
        struct Object* PRvarValue;
        struct String* PRkeyDt;
        struct Type* PRdtType;
        InternalPrimitiveTypeE__Enum PRdtTypeCode;

        bool PRisEnum;
        int64_t PRobjectId;
        int64_t PRidRef;
        struct String* PRarrayElementTypeString;
        struct Type* PRarrayElementType;
        bool PRisArrayVariant;
        InternalPrimitiveTypeE__Enum PRarrayElementTypeCode;

        int32_t PRrank;
        struct Int32__Array* PRlengthA;
        struct Int32__Array* PRpositionA;
        struct Int32__Array* PRlowerBoundA;
        struct Int32__Array* PRupperBoundA;
        struct Int32__Array* PRindexMap;
        int32_t PRmemberIndex;
        int32_t PRlinearlength;
        struct Int32__Array* PRrectangularMap;
        bool PRisLowerBound;
        int64_t PRtopId;
        int64_t PRheaderId;
        struct ReadObjectInfo* PRobjectInfo;
        bool PRisValueTypeFixup;
        struct Object* PRnewObj;
        struct Object__Array* PRobjectA;
        struct PrimitiveArray* PRprimitiveArray;
        bool PRisRegistered;
        struct Object__Array* PRmemberData;
        struct SerializationInfo* PRsi;
        int32_t PRnullCount;
    };

    struct ParseRecord {
        struct ParseRecord__Class* klass;
        MonitorData* monitor;
        struct ParseRecord__Fields fields;
    };

    struct __declspec(align(8)) ReadObjectInfo__Fields {
        int32_t objectInfoId;
        struct Type* objectType;
        struct ObjectManager* objectManager;
        int32_t count;
        bool isSi;
        bool isNamed;
        bool isTyped;
        bool bSimpleAssembly;
        struct SerObjectInfoCache* cache;
        struct String__Array* wireMemberNames;
        struct Type__Array* wireMemberTypes;
        int32_t lastPosition;
        struct ISerializationSurrogate* serializationSurrogate;
        struct StreamingContext context;
        struct List_1_System_Type_* memberTypesList;
        struct SerObjectInfoInit* serObjectInfoInit;
        struct IFormatterConverter* formatterConverter;
    };

    struct ReadObjectInfo {
        struct ReadObjectInfo__Class* klass;
        MonitorData* monitor;
        struct ReadObjectInfo__Fields fields;
    };

    struct __declspec(align(8)) List_1_System_Type___Fields {
        struct Type__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Type_ {
        struct List_1_System_Type___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Type___Fields fields;
    };

    struct __declspec(align(8)) PrimitiveArray__Fields {
        InternalPrimitiveTypeE__Enum code;

        struct Boolean__Array* booleanA;
        struct Char__Array* charA;
        struct Double__Array* doubleA;
        struct Int16__Array* int16A;
        struct Int32__Array* int32A;
        struct Int64__Array* int64A;
        struct SByte__Array* sbyteA;
        struct Single__Array* singleA;
        struct UInt16__Array* uint16A;
        struct UInt32__Array* uint32A;
        struct UInt64__Array* uint64A;
    };

    struct PrimitiveArray {
        struct PrimitiveArray__Class* klass;
        MonitorData* monitor;
        struct PrimitiveArray__Fields fields;
    };

    struct Double__Array {
        struct Double__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        double vector[32];
    };

    struct Single__Array {
        struct Single__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        float vector[32];
    };

    struct __declspec(align(8)) BinaryAssemblyInfo__Fields {
        struct String* assemblyString;
        struct Assembly* assembly;
    };

    struct BinaryAssemblyInfo {
        struct BinaryAssemblyInfo__Class* klass;
        MonitorData* monitor;
        struct BinaryAssemblyInfo__Fields fields;
    };

    enum class BinaryHeaderEnum__Enum : int32_t {
        SerializedStreamHeader = 0x00000000,
        Object = 0x00000001,
        ObjectWithMap = 0x00000002,
        ObjectWithMapAssemId = 0x00000003,
        ObjectWithMapTyped = 0x00000004,
        ObjectWithMapTypedAssemId = 0x00000005,
        ObjectString = 0x00000006,
        Array = 0x00000007,
        MemberPrimitiveTyped = 0x00000008,
        MemberReference = 0x00000009,
        ObjectNull = 0x0000000a,
        MessageEnd = 0x0000000b,
        Assembly = 0x0000000c,
        ObjectNullMultiple256 = 0x0000000d,
        ObjectNullMultiple = 0x0000000e,
        ArraySinglePrimitive = 0x0000000f,
        ArraySingleObject = 0x00000010,
        ArraySingleString = 0x00000011,
        CrossAppDomainMap = 0x00000012,
        CrossAppDomainString = 0x00000013,
        CrossAppDomainAssembly = 0x00000014,
        MethodCall = 0x00000015,
        MethodReturn = 0x00000016,
    };

    struct BinaryHeaderEnum__Enum__Boxed {
        struct BinaryHeaderEnum__Enum__Class* klass;
        MonitorData* monitor;
        BinaryHeaderEnum__Enum value;
    };

    struct __declspec(align(8)) BinaryObjectWithMap__Fields {
        BinaryHeaderEnum__Enum binaryHeaderEnum;

        int32_t objectId;
        struct String* name;
        int32_t numMembers;
        struct String__Array* memberNames;
        int32_t assemId;
    };

    struct BinaryObjectWithMap {
        struct BinaryObjectWithMap__Class* klass;
        MonitorData* monitor;
        struct BinaryObjectWithMap__Fields fields;
    };

    struct __declspec(align(8)) BinaryObjectWithMapTyped__Fields {
        BinaryHeaderEnum__Enum binaryHeaderEnum;

        int32_t objectId;
        struct String* name;
        int32_t numMembers;
        struct String__Array* memberNames;
        struct BinaryTypeEnum__Enum__Array* binaryTypeEnumA;
        struct Object__Array* typeInformationA;
        struct Int32__Array* memberAssemIds;
        int32_t assemId;
    };

    struct BinaryObjectWithMapTyped {
        struct BinaryObjectWithMapTyped__Class* klass;
        MonitorData* monitor;
        struct BinaryObjectWithMapTyped__Fields fields;
    };

    struct BinaryTypeEnum__Enum__Array {
        struct BinaryTypeEnum__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        BinaryTypeEnum__Enum vector[32];
    };

    struct __declspec(align(8)) BinaryObjectString__Fields {
        int32_t objectId;
        struct String* value;
    };

    struct BinaryObjectString {
        struct BinaryObjectString__Class* klass;
        MonitorData* monitor;
        struct BinaryObjectString__Fields fields;
    };

    struct __declspec(align(8)) BinaryCrossAppDomainString__Fields {
        int32_t objectId;
        int32_t value;
    };

    struct BinaryCrossAppDomainString {
        struct BinaryCrossAppDomainString__Class* klass;
        MonitorData* monitor;
        struct BinaryCrossAppDomainString__Fields fields;
    };

    struct __declspec(align(8)) MemberPrimitiveTyped__Fields {
        InternalPrimitiveTypeE__Enum primitiveTypeEnum;

        struct Object* value;
    };

    struct MemberPrimitiveTyped {
        struct MemberPrimitiveTyped__Class* klass;
        MonitorData* monitor;
        struct MemberPrimitiveTyped__Fields fields;
    };

    struct __declspec(align(8)) MemberPrimitiveUnTyped__Fields {
        InternalPrimitiveTypeE__Enum typeInformation;

        struct Object* value;
    };

    struct MemberPrimitiveUnTyped {
        struct MemberPrimitiveUnTyped__Class* klass;
        MonitorData* monitor;
        struct MemberPrimitiveUnTyped__Fields fields;
    };

    struct __declspec(align(8)) MemberReference__Fields {
        int32_t idRef;
    };

    struct MemberReference {
        struct MemberReference__Class* klass;
        MonitorData* monitor;
        struct MemberReference__Fields fields;
    };

    struct __declspec(align(8)) ObjectNull__Fields {
        int32_t nullCount;
    };

    struct ObjectNull {
        struct ObjectNull__Class* klass;
        MonitorData* monitor;
        struct ObjectNull__Fields fields;
    };

    struct MessageEnd {
        struct MessageEnd__Class* klass;
        MonitorData* monitor;
    };

    enum class BinaryArrayTypeEnum__Enum : int32_t {
        Single = 0x00000000,
        Jagged = 0x00000001,
        Rectangular = 0x00000002,
        SingleOffset = 0x00000003,
        JaggedOffset = 0x00000004,
        RectangularOffset = 0x00000005,
    };

    struct BinaryArrayTypeEnum__Enum__Boxed {
        struct BinaryArrayTypeEnum__Enum__Class* klass;
        MonitorData* monitor;
        BinaryArrayTypeEnum__Enum value;
    };

    struct __declspec(align(8)) BinaryArray__Fields {
        int32_t objectId;
        int32_t rank;
        struct Int32__Array* lengthA;
        struct Int32__Array* lowerBoundA;
        BinaryTypeEnum__Enum binaryTypeEnum;

        struct Object* typeInformation;
        int32_t assemId;
        BinaryHeaderEnum__Enum binaryHeaderEnum;

        BinaryArrayTypeEnum__Enum binaryArrayTypeEnum;
    };

    struct BinaryArray {
        struct BinaryArray__Class* klass;
        MonitorData* monitor;
        struct BinaryArray__Fields fields;
    };

    struct __declspec(align(8)) BinaryAssembly__Fields {
        int32_t assemId;
        struct String* assemblyString;
    };

    struct BinaryAssembly {
        struct BinaryAssembly__Class* klass;
        MonitorData* monitor;
        struct BinaryAssembly__Fields fields;
    };

    struct BinaryTypeEnum__Enum__VTable {
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

    struct BinaryTypeEnum__Enum__StaticFields {
    };

    struct BinaryTypeEnum__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BinaryTypeEnum__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BinaryTypeEnum__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerObjectInfoCache__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerStack__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SerObjectInfoInit__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WriteObjectInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WriteObjectInfo__VTable vtable;
    };

    struct MessageEnum__Enum__VTable {
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

} // namespace app
