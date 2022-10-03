namespace app {
    struct XmlSerializerImplementation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializerImplementation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializerImplementation__VTable vtable;
    };

    struct XmlSerializer_SerializerData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializer_SerializerData__StaticFields {
    };

    struct XmlSerializer_SerializerData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializer_SerializerData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializer_SerializerData__VTable vtable;
    };

    struct XmlSerializer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnUnknownAttribute;
        VirtualInvokeData OnUnknownElement;
        VirtualInvokeData OnUnknownNode;
        VirtualInvokeData OnUnreferencedObject;
        VirtualInvokeData CreateReader;
        VirtualInvokeData CreateWriter;
        VirtualInvokeData Deserialize;
        VirtualInvokeData Serialize;
    };

    struct XmlSerializer__StaticFields {
        int32_t generationThreshold;
        bool backgroundGeneration;
        bool deleteTempFiles;
        bool generatorFallback;
        struct Hashtable* serializerTypes;
        struct Encoding* DefaultEncoding;
    };

    struct XmlSerializer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializer__VTable vtable;
    };

    struct XmlSerializationReaderInterpreter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData InitCallbacks;
        VirtualInvokeData InitIDs;
        VirtualInvokeData ReadMessage;
        VirtualInvokeData ReadObject;
        VirtualInvokeData ReadClassInstance;
        VirtualInvokeData ReadClassInstanceMembers;
        VirtualInvokeData ProcessUnknownAttribute;
        VirtualInvokeData ProcessUnknownElement;
    };

    struct XmlSerializationReaderInterpreter__StaticFields {
        struct XmlQualifiedName* AnyType;
        struct Object__Array* empty_array;
    };

    struct XmlSerializationReaderInterpreter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializationReaderInterpreter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializationReaderInterpreter__VTable vtable;
    };

    struct XmlSerializationReader__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
    };

    struct XmlSerializationReader__StaticFields {
    };

    struct XmlSerializationReader__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializationReader__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializationReader__VTable vtable;
    };

    struct __declspec(align(8)) XmlSerializationReader_CollectionFixup__Fields {
        struct XmlSerializationCollectionFixupCallback* callback;
        struct Object* collection;
        struct Object* collectionItems;
        struct String* id;
    };

    struct XmlSerializationReader_CollectionFixup {
        struct XmlSerializationReader_CollectionFixup__Class* klass;
        MonitorData* monitor;
        struct XmlSerializationReader_CollectionFixup__Fields fields;
    };

    struct XmlSerializationReader_CollectionFixup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializationReader_CollectionFixup__StaticFields {
    };

    struct XmlSerializationReader_CollectionFixup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializationReader_CollectionFixup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializationReader_CollectionFixup__VTable vtable;
    };

    struct __declspec(align(8)) XmlSerializationReader_Fixup__Fields {
        struct Object* source;
        struct String__Array* ids;
        struct XmlSerializationFixupCallback* callback;
    };

    struct XmlSerializationReader_Fixup {
        struct XmlSerializationReader_Fixup__Class* klass;
        MonitorData* monitor;
        struct XmlSerializationReader_Fixup__Fields fields;
    };

    struct XmlSerializationReader_Fixup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializationReader_Fixup__StaticFields {
    };

    struct XmlSerializationReader_Fixup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializationReader_Fixup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializationReader_Fixup__VTable vtable;
    };

    struct __declspec(align(8)) XmlSerializationReader_CollectionItemFixup__Fields {
        struct Array* list;
        int32_t index;
        struct String* id;
    };

    struct XmlSerializationReader_CollectionItemFixup {
        struct XmlSerializationReader_CollectionItemFixup__Class* klass;
        MonitorData* monitor;
        struct XmlSerializationReader_CollectionItemFixup__Fields fields;
    };

    struct XmlSerializationReader_CollectionItemFixup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializationReader_CollectionItemFixup__StaticFields {
    };

    struct XmlSerializationReader_CollectionItemFixup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializationReader_CollectionItemFixup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializationReader_CollectionItemFixup__VTable vtable;
    };

    struct __declspec(align(8)) XmlSerializationReader_WriteCallbackInfo__Fields {
        struct Type* Type;
        struct String* TypeName;
        struct String* TypeNs;
        struct XmlSerializationReadCallback* Callback;
    };

    struct XmlSerializationReader_WriteCallbackInfo {
        struct XmlSerializationReader_WriteCallbackInfo__Class* klass;
        MonitorData* monitor;
        struct XmlSerializationReader_WriteCallbackInfo__Fields fields;
    };

    struct XmlSerializationReader_WriteCallbackInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializationReader_WriteCallbackInfo__StaticFields {
    };

    struct XmlSerializationReader_WriteCallbackInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializationReader_WriteCallbackInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializationReader_WriteCallbackInfo__VTable vtable;
    };

    struct IXmlSerializable {
        struct IXmlSerializable__Class* klass;
        MonitorData* monitor;
    };

    struct IXmlSerializable__VTable {
        VirtualInvokeData GetSchema;
        VirtualInvokeData ReadXml;
        VirtualInvokeData WriteXml;
    };

    struct IXmlSerializable__StaticFields {
    };

    struct IXmlSerializable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IXmlSerializable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IXmlSerializable__VTable vtable;
    };

    struct __declspec(align(8)) ClassMap__Fields {
        struct Hashtable* _elements;
        struct ArrayList* _elementMembers;
        struct Hashtable* _attributeMembers;
        struct XmlTypeMapMemberAttribute__Array* _attributeMembersArray;
        struct ArrayList* _flatLists;
        struct ArrayList* _allMembers;
        struct ArrayList* _membersWithDefault;
        struct ArrayList* _listMembers;
        struct XmlTypeMapMemberAnyElement* _defaultAnyElement;
        struct XmlTypeMapMemberAnyAttribute* _defaultAnyAttribute;
        struct XmlTypeMapMemberNamespaces* _namespaceDeclarations;
        struct XmlTypeMapMember* _xmlTextCollector;
        struct XmlTypeMapMember* _returnMember;
        bool _ignoreMemberNamespace;
        bool _canBeSimpleType;
        struct Nullable_1_Boolean_ _isOrderDependentMap;
    };

    struct ClassMap {
        struct ClassMap__Class* klass;
        MonitorData* monitor;
        struct ClassMap__Fields fields;
    };

    struct XmlTypeMapMemberAttribute__Fields {
        struct XmlTypeMapMember__Fields _;
        struct String* _attributeName;
        struct String* _namespace;
        XmlSchemaForm__Enum _form;

        struct XmlTypeMapping* _mappedType;
    };

    struct XmlTypeMapMemberAttribute {
        struct XmlTypeMapMemberAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlTypeMapMemberAttribute__Fields fields;
    };

    struct XmlTypeMapMemberAttribute__Array {
        struct XmlTypeMapMemberAttribute__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct XmlTypeMapMemberAttribute* vector[32];
    };

    struct XmlTypeMapMemberExpandable__Fields {
        struct XmlTypeMapMemberElement__Fields _;
        int32_t _flatArrayIndex;
    };

    struct XmlTypeMapMemberExpandable {
        struct XmlTypeMapMemberExpandable__Class* klass;
        MonitorData* monitor;
        struct XmlTypeMapMemberExpandable__Fields fields;
    };

    struct XmlTypeMapMemberAnyElement__Fields {
        struct XmlTypeMapMemberExpandable__Fields _;
    };

    struct XmlTypeMapMemberAnyElement {
        struct XmlTypeMapMemberAnyElement__Class* klass;
        MonitorData* monitor;
        struct XmlTypeMapMemberAnyElement__Fields fields;
    };

    struct XmlTypeMapMemberAnyAttribute__Fields {
        struct XmlTypeMapMember__Fields _;
    };

    struct XmlTypeMapMemberAnyAttribute {
        struct XmlTypeMapMemberAnyAttribute__Class* klass;
        MonitorData* monitor;
        struct XmlTypeMapMemberAnyAttribute__Fields fields;
    };

    struct XmlTypeMapMemberNamespaces__Fields {
        struct XmlTypeMapMember__Fields _;
    };

    struct XmlTypeMapMemberNamespaces {
        struct XmlTypeMapMemberNamespaces__Class* klass;
        MonitorData* monitor;
        struct XmlTypeMapMemberNamespaces__Fields fields;
    };

    struct XmlTypeMapMemberAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlTypeMapMemberAttribute__StaticFields {
    };

    struct XmlTypeMapMemberAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeMapMemberAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeMapMemberAttribute__VTable vtable;
    };

    struct XmlTypeMapMemberAttribute__Array__VTable {
    };

    struct XmlTypeMapMemberAttribute__Array__StaticFields {
    };

    struct XmlTypeMapMemberAttribute__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeMapMemberAttribute__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeMapMemberAttribute__Array__VTable vtable;
    };

    struct XmlTypeMapMemberExpandable__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlTypeMapMemberExpandable__StaticFields {
    };

    struct XmlTypeMapMemberExpandable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeMapMemberExpandable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeMapMemberExpandable__VTable vtable;
    };

    struct XmlTypeMapMemberAnyElement__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlTypeMapMemberAnyElement__StaticFields {
    };

    struct XmlTypeMapMemberAnyElement__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeMapMemberAnyElement__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeMapMemberAnyElement__VTable vtable;
    };

    struct XmlTypeMapMemberAnyAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlTypeMapMemberAnyAttribute__StaticFields {
    };

    struct XmlTypeMapMemberAnyAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeMapMemberAnyAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeMapMemberAnyAttribute__VTable vtable;
    };

    struct XmlTypeMapMemberNamespaces__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlTypeMapMemberNamespaces__StaticFields {
    };

    struct XmlTypeMapMemberNamespaces__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeMapMemberNamespaces__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeMapMemberNamespaces__VTable vtable;
    };

    struct ClassMap__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ClassMap__StaticFields {
    };

    struct ClassMap__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ClassMap__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ClassMap__VTable vtable;
    };

    struct __declspec(align(8)) XmlTypeMapElementInfo__Fields {
        struct String* _elementName;
        struct String* _namespace;
        XmlSchemaForm__Enum _form;

        struct XmlTypeMapMember* _member;
        struct Object* _choiceValue;
        bool _isNullable;
        int32_t _nestingLevel;
        struct XmlTypeMapping* _mappedType;
        struct TypeData* _type;
        bool _wrappedElement;
        int32_t _explicitOrder;
    };

    struct XmlTypeMapElementInfo {
        struct XmlTypeMapElementInfo__Class* klass;
        MonitorData* monitor;
        struct XmlTypeMapElementInfo__Fields fields;
    };

    struct XmlTypeMapElementInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlTypeMapElementInfo__StaticFields {
    };

    struct XmlTypeMapElementInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeMapElementInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeMapElementInfo__VTable vtable;
    };

    struct __declspec(align(8)) XmlSerializationReaderInterpreter_FixupCallbackInfo__Fields {
        struct XmlSerializationReaderInterpreter* _sri;
        struct ClassMap* _map;
        bool _isValueList;
    };

    struct XmlSerializationReaderInterpreter_FixupCallbackInfo {
        struct XmlSerializationReaderInterpreter_FixupCallbackInfo__Class* klass;
        MonitorData* monitor;
        struct XmlSerializationReaderInterpreter_FixupCallbackInfo__Fields fields;
    };

    struct XmlSerializationReaderInterpreter_FixupCallbackInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializationReaderInterpreter_FixupCallbackInfo__StaticFields {
    };

    struct XmlSerializationReaderInterpreter_FixupCallbackInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializationReaderInterpreter_FixupCallbackInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializationReaderInterpreter_FixupCallbackInfo__VTable vtable;
    };

    struct __declspec(align(8)) XmlSerializationReaderInterpreter_ReaderCallbackInfo__Fields {
        struct XmlSerializationReaderInterpreter* _sri;
        struct XmlTypeMapping* _typeMap;
    };

    struct XmlSerializationReaderInterpreter_ReaderCallbackInfo {
        struct XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class* klass;
        MonitorData* monitor;
        struct XmlSerializationReaderInterpreter_ReaderCallbackInfo__Fields fields;
    };

    struct XmlSerializationReaderInterpreter_ReaderCallbackInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializationReaderInterpreter_ReaderCallbackInfo__StaticFields {
    };

    struct XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializationReaderInterpreter_ReaderCallbackInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializationReaderInterpreter_ReaderCallbackInfo__VTable vtable;
    };

    struct XmlSerializationWriteCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct XmlSerializationWriteCallback {
        struct XmlSerializationWriteCallback__Class* klass;
        MonitorData* monitor;
        struct XmlSerializationWriteCallback__Fields fields;
    };

    struct XmlSerializationWriteCallback__VTable {
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

    struct XmlSerializationWriteCallback__StaticFields {
    };

    struct XmlSerializationWriteCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializationWriteCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializationWriteCallback__VTable vtable;
    };

    struct __declspec(align(8)) XmlSerializationWriter_WriteCallbackInfo__Fields {
        struct Type* Type;
        struct String* TypeName;
        struct String* TypeNs;
        struct XmlSerializationWriteCallback* Callback;
    };

    struct XmlSerializationWriter_WriteCallbackInfo {
        struct XmlSerializationWriter_WriteCallbackInfo__Class* klass;
        MonitorData* monitor;
        struct XmlSerializationWriter_WriteCallbackInfo__Fields fields;
    };

    struct XmlSerializationWriter_WriteCallbackInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializationWriter_WriteCallbackInfo__StaticFields {
    };

    struct XmlSerializationWriter_WriteCallbackInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializationWriter_WriteCallbackInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializationWriter_WriteCallbackInfo__VTable vtable;
    };

    struct __declspec(align(8)) ListMap__Fields {
        struct XmlTypeMapElementInfoList* _itemInfo;
        struct String* _choiceMember;
    };

    struct ListMap {
        struct ListMap__Class* klass;
        MonitorData* monitor;
        struct ListMap__Fields fields;
    };

    struct ListMap__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ListMap__StaticFields {
    };

    struct ListMap__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ListMap__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ListMap__VTable vtable;
    };

    struct __declspec(align(8)) XmlSerializationWriterInterpreter_CallbackInfo__Fields {
        struct XmlSerializationWriterInterpreter* _swi;
        struct XmlTypeMapping* _typeMap;
    };

    struct XmlSerializationWriterInterpreter_CallbackInfo {
        struct XmlSerializationWriterInterpreter_CallbackInfo__Class* klass;
        MonitorData* monitor;
        struct XmlSerializationWriterInterpreter_CallbackInfo__Fields fields;
    };

    struct XmlSerializationWriterInterpreter_CallbackInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializationWriterInterpreter_CallbackInfo__StaticFields {
    };

    struct XmlSerializationWriterInterpreter_CallbackInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializationWriterInterpreter_CallbackInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializationWriterInterpreter_CallbackInfo__VTable vtable;
    };

    struct XmlSerializerFactory {
        struct XmlSerializerFactory__Class* klass;
        MonitorData* monitor;
    };

    struct XmlSerializerFactory__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializerFactory__StaticFields {
        struct Hashtable* serializersBySource;
    };

    struct XmlSerializerFactory__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializerFactory__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializerFactory__VTable vtable;
    };

    struct XmlTypeMapMemberList__Fields {
        struct XmlTypeMapMemberElement__Fields _;
    };

    struct XmlTypeMapMemberList {
        struct XmlTypeMapMemberList__Class* klass;
        MonitorData* monitor;
        struct XmlTypeMapMemberList__Fields fields;
    };

    struct XmlTypeMapMemberList__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlTypeMapMemberList__StaticFields {
    };

    struct XmlTypeMapMemberList__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeMapMemberList__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeMapMemberList__VTable vtable;
    };

    struct XmlTypeMapMemberFlatList__Fields {
        struct XmlTypeMapMemberExpandable__Fields _;
        struct ListMap* _listMap;
    };

    struct XmlTypeMapMemberFlatList {
        struct XmlTypeMapMemberFlatList__Class* klass;
        MonitorData* monitor;
        struct XmlTypeMapMemberFlatList__Fields fields;
    };

    struct XmlTypeMapMemberFlatList__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlTypeMapMemberFlatList__StaticFields {
    };

    struct XmlTypeMapMemberFlatList__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlTypeMapMemberFlatList__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlTypeMapMemberFlatList__VTable vtable;
    };

    struct XmlSerializableMapping__Fields {
        struct XmlTypeMapping__Fields _;
        struct XmlSchema* _schema;
        struct XmlSchemaComplexType* _schemaType;
        struct XmlQualifiedName* _schemaTypeName;
    };

    struct XmlSerializableMapping {
        struct XmlSerializableMapping__Class* klass;
        MonitorData* monitor;
        struct XmlSerializableMapping__Fields fields;
    };

    struct XmlSchemaComplexType__Fields {
        struct XmlSchemaType__Fields _;
        XmlSchemaDerivationMethod__Enum block;

        struct XmlSchemaContentModel* contentModel;
        struct XmlSchemaParticle* particle;
        struct XmlSchemaObjectCollection* attributes;
        struct XmlSchemaAnyAttribute* anyAttribute;
        struct XmlSchemaParticle* contentTypeParticle;
        XmlSchemaDerivationMethod__Enum blockResolved;

        struct XmlSchemaObjectTable* localElements;
        struct XmlSchemaObjectTable* attributeUses;
        struct XmlSchemaAnyAttribute* attributeWildcard;
        uint8_t pvFlags;
    };

    struct XmlSchemaComplexType {
        struct XmlSchemaComplexType__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaComplexType__Fields fields;
    };

    struct XmlSchemaContentModel__Fields {
        struct XmlSchemaAnnotated__Fields _;
    };

    struct XmlSchemaContentModel {
        struct XmlSchemaContentModel__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaContentModel__Fields fields;
    };

    struct XmlSchemaComplexContent__Fields {
        struct XmlSchemaContentModel__Fields _;
        struct XmlSchemaContent* content;
        bool isMixed;
        bool hasMixedAttribute;
    };

    struct XmlSchemaComplexContent {
        struct XmlSchemaComplexContent__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaComplexContent__Fields fields;
    };

    struct XmlSchemaContent__Fields {
        struct XmlSchemaAnnotated__Fields _;
    };

    struct XmlSchemaContent {
        struct XmlSchemaContent__Class* klass;
        MonitorData* monitor;
        struct XmlSchemaContent__Fields fields;
    };

    struct XmlSchemaContent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnAdd;
        VirtualInvokeData OnRemove;
        VirtualInvokeData OnClear;
        VirtualInvokeData get_IdAttribute;
        VirtualInvokeData set_IdAttribute;
        VirtualInvokeData SetUnhandledAttributes;
        VirtualInvokeData AddAnnotation;
        VirtualInvokeData get_NameAttribute;
        VirtualInvokeData set_NameAttribute;
        VirtualInvokeData Clone;
    };

    struct XmlSchemaContent__StaticFields {
    };

    struct XmlSchemaContent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSchemaContent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSchemaContent__VTable vtable;
    };

    struct XmlSchemaComplexContent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnAdd;
        VirtualInvokeData OnRemove;
        VirtualInvokeData OnClear;
        VirtualInvokeData get_IdAttribute;
        VirtualInvokeData set_IdAttribute;
        VirtualInvokeData SetUnhandledAttributes;
        VirtualInvokeData AddAnnotation;
        VirtualInvokeData get_NameAttribute;
        VirtualInvokeData set_NameAttribute;
        VirtualInvokeData Clone;
        VirtualInvokeData get_Content;
        VirtualInvokeData set_Content;
    };

    struct XmlSchemaComplexContent__StaticFields {
    };

    struct XmlSchemaComplexContent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSchemaComplexContent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSchemaComplexContent__VTable vtable;
    };

    struct XmlSchemaContentModel__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnAdd;
        VirtualInvokeData OnRemove;
        VirtualInvokeData OnClear;
        VirtualInvokeData get_IdAttribute;
        VirtualInvokeData set_IdAttribute;
        VirtualInvokeData SetUnhandledAttributes;
        VirtualInvokeData AddAnnotation;
        VirtualInvokeData get_NameAttribute;
        VirtualInvokeData set_NameAttribute;
        VirtualInvokeData Clone;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
    };

    struct XmlSchemaContentModel__StaticFields {
    };

    struct XmlSchemaContentModel__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSchemaContentModel__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSchemaContentModel__VTable vtable;
    };

    struct XmlSchemaComplexType__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnAdd;
        VirtualInvokeData OnRemove;
        VirtualInvokeData OnClear;
        VirtualInvokeData get_IdAttribute;
        VirtualInvokeData set_IdAttribute;
        VirtualInvokeData SetUnhandledAttributes;
        VirtualInvokeData AddAnnotation;
        VirtualInvokeData get_NameAttribute;
        VirtualInvokeData set_NameAttribute;
        VirtualInvokeData Clone;
        VirtualInvokeData get_IsMixed;
        VirtualInvokeData set_IsMixed;
    };

    struct XmlSchemaComplexType__StaticFields {
        struct XmlSchemaComplexType* anyTypeLax;
        struct XmlSchemaComplexType* anyTypeSkip;
        struct XmlSchemaComplexType* untypedAnyType;
    };

    struct XmlSchemaComplexType__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSchemaComplexType__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSchemaComplexType__VTable vtable;
    };

    struct XmlSerializableMapping__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XmlSerializableMapping__StaticFields {
    };

    struct XmlSerializableMapping__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XmlSerializableMapping__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XmlSerializableMapping__VTable vtable;
    };

} // namespace app
