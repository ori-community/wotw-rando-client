namespace app {
    struct SchemaSerializationMode__Enum__StaticFields {
    };

    struct SchemaSerializationMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SchemaSerializationMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SchemaSerializationMode__Enum__VTable vtable;
    };

    struct DataSet__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Site;
        VirtualInvokeData set_Site;
        VirtualInvokeData add_Disposed;
        VirtualInvokeData remove_Disposed;
        VirtualInvokeData Dispose;
        VirtualInvokeData GetService;
        VirtualInvokeData get_Site_1;
        VirtualInvokeData set_Site_1;
        VirtualInvokeData Dispose_1;
        VirtualInvokeData get_Container;
        VirtualInvokeData GetService_1;
        VirtualInvokeData get_DesignMode;
        VirtualInvokeData System_ComponentModel_IListSource_get_ContainsListCollection;
        VirtualInvokeData System_ComponentModel_IListSource_GetList;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_GetSchema;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_ReadXml;
        VirtualInvokeData System_Xml_Serialization_IXmlSerializable_WriteXml;
        VirtualInvokeData get_IsInitialized;
        VirtualInvokeData add_Initialized;
        VirtualInvokeData remove_Initialized;
        VirtualInvokeData BeginInit;
        VirtualInvokeData EndInit;
        VirtualInvokeData GetObjectData;
        VirtualInvokeData get_SchemaSerializationMode;
        VirtualInvokeData GetObjectData_1;
        VirtualInvokeData InitializeDerivedDataSet;
        VirtualInvokeData Clone;
        VirtualInvokeData OnPropertyChanging;
        VirtualInvokeData OnRemoveTable;
        VirtualInvokeData OnRemoveRelation;
        VirtualInvokeData Reset;
        VirtualInvokeData ReadXmlSerializable;
    };

    struct DataSet__StaticFields {
        int32_t s_objectTypeCount;
        struct XmlSchemaComplexType* s_schemaTypeForWSDL;
    };

    struct DataSet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DataSet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DataSet__VTable vtable;
    };

    struct Constraint_1__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ConstraintName;
        VirtualInvokeData set_ConstraintName;
        VirtualInvokeData get_InCollection;
        VirtualInvokeData set_InCollection;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData __unknown_3;
        VirtualInvokeData __unknown_4;
        VirtualInvokeData __unknown_5;
        VirtualInvokeData __unknown_6;
        VirtualInvokeData __unknown_7;
        VirtualInvokeData __unknown_8;
        VirtualInvokeData get__DataSet;
        VirtualInvokeData __unknown_9;
    };

    struct Constraint_1__StaticFields {
    };

    struct Constraint_1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Constraint_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Constraint_1__VTable vtable;
    };

    struct ConstraintConverter {
        struct ConstraintConverter__Class* klass;
        MonitorData* monitor;
    };

    struct ConstraintConverter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CanConvertFrom;
        VirtualInvokeData CanConvertTo;
        VirtualInvokeData ConvertFrom;
        VirtualInvokeData ConvertTo;
        VirtualInvokeData CreateInstance;
        VirtualInvokeData GetCreateInstanceSupported;
        VirtualInvokeData GetProperties;
        VirtualInvokeData GetPropertiesSupported;
        VirtualInvokeData GetStandardValues;
        VirtualInvokeData GetStandardValuesExclusive;
        VirtualInvokeData GetStandardValuesSupported;
        VirtualInvokeData IsValid;
    };

    struct ConstraintConverter__StaticFields {
    };

    struct ConstraintConverter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConstraintConverter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConstraintConverter__VTable vtable;
    };

    struct __declspec(align(8)) ConstraintEnumerator__Fields {
        struct IEnumerator* _tables;
        struct IEnumerator* _constraints;
        struct Constraint_1* _currentObject;
    };

    struct ConstraintEnumerator {
        struct ConstraintEnumerator__Class* klass;
        MonitorData* monitor;
        struct ConstraintEnumerator__Fields fields;
    };

    struct ConstraintEnumerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsValidCandidate;
    };

    struct ConstraintEnumerator__StaticFields {
    };

    struct ConstraintEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConstraintEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConstraintEnumerator__VTable vtable;
    };

    struct ForeignKeyConstraintEnumerator__Fields {
        struct ConstraintEnumerator__Fields _;
    };

    struct ForeignKeyConstraintEnumerator {
        struct ForeignKeyConstraintEnumerator__Class* klass;
        MonitorData* monitor;
        struct ForeignKeyConstraintEnumerator__Fields fields;
    };

    struct ForeignKeyConstraintEnumerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsValidCandidate;
    };

    struct ForeignKeyConstraintEnumerator__StaticFields {
    };

    struct ForeignKeyConstraintEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ForeignKeyConstraintEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ForeignKeyConstraintEnumerator__VTable vtable;
    };

    struct ChildForeignKeyConstraintEnumerator__Fields {
        struct ForeignKeyConstraintEnumerator__Fields _;
        struct DataTable* _table;
    };

    struct ChildForeignKeyConstraintEnumerator {
        struct ChildForeignKeyConstraintEnumerator__Class* klass;
        MonitorData* monitor;
        struct ChildForeignKeyConstraintEnumerator__Fields fields;
    };

    struct ChildForeignKeyConstraintEnumerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsValidCandidate;
    };

    struct ChildForeignKeyConstraintEnumerator__StaticFields {
    };

    struct ChildForeignKeyConstraintEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ChildForeignKeyConstraintEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ChildForeignKeyConstraintEnumerator__VTable vtable;
    };

    struct ParentForeignKeyConstraintEnumerator__Fields {
        struct ForeignKeyConstraintEnumerator__Fields _;
        struct DataTable* _table;
    };

    struct ParentForeignKeyConstraintEnumerator {
        struct ParentForeignKeyConstraintEnumerator__Class* klass;
        MonitorData* monitor;
        struct ParentForeignKeyConstraintEnumerator__Fields fields;
    };

    struct ParentForeignKeyConstraintEnumerator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsValidCandidate;
    };

    struct ParentForeignKeyConstraintEnumerator__StaticFields {
    };

    struct ParentForeignKeyConstraintEnumerator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParentForeignKeyConstraintEnumerator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParentForeignKeyConstraintEnumerator__VTable vtable;
    };

    struct AutoIncrementBigInteger__Fields {
        struct AutoIncrementValue__Fields _;
        struct BigInteger_2 _current;
        int64_t _seed;
        struct BigInteger_2 _step;
    };

    struct AutoIncrementBigInteger {
        struct AutoIncrementBigInteger__Class* klass;
        MonitorData* monitor;
        struct AutoIncrementBigInteger__Fields fields;
    };

    struct AutoIncrementBigInteger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Current;
        VirtualInvokeData set_Current;
        VirtualInvokeData get_Seed;
        VirtualInvokeData set_Seed;
        VirtualInvokeData get_Step;
        VirtualInvokeData set_Step;
        VirtualInvokeData get_DataType;
        VirtualInvokeData SetCurrent;
        VirtualInvokeData SetCurrentAndIncrement;
        VirtualInvokeData MoveAfter;
    };

    struct AutoIncrementBigInteger__StaticFields {
    };

    struct AutoIncrementBigInteger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AutoIncrementBigInteger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AutoIncrementBigInteger__VTable vtable;
    };

    struct DataColumnPropertyDescriptor__Fields {
        struct PropertyDescriptor__Fields _;
        struct DataColumn* _Column_k__BackingField;
    };

    struct DataColumnPropertyDescriptor {
        struct DataColumnPropertyDescriptor__Class* klass;
        MonitorData* monitor;
        struct DataColumnPropertyDescriptor__Fields fields;
    };

    struct DataColumnPropertyDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_AttributeArray;
        VirtualInvokeData set_AttributeArray;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_Category;
        VirtualInvokeData get_Description;
        VirtualInvokeData get_IsBrowsable;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_NameHashCode;
        VirtualInvokeData get_DesignTimeOnly;
        VirtualInvokeData get_DisplayName;
        VirtualInvokeData CreateAttributeCollection;
        VirtualInvokeData FillAttributes;
        VirtualInvokeData GetInvocationTarget;
        VirtualInvokeData get_ComponentType;
        VirtualInvokeData get_Converter;
        VirtualInvokeData get_IsLocalizable;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PropertyType;
        VirtualInvokeData AddValueChanged;
        VirtualInvokeData CanResetValue;
        VirtualInvokeData GetChildProperties;
        VirtualInvokeData GetEditor;
        VirtualInvokeData GetValue;
        VirtualInvokeData OnValueChanged;
        VirtualInvokeData RemoveValueChanged;
        VirtualInvokeData ResetValue;
        VirtualInvokeData SetValue;
        VirtualInvokeData ShouldSerializeValue;
        VirtualInvokeData get_SupportsChangeEvents;
    };

    struct DataColumnPropertyDescriptor__StaticFields {
    };

    struct DataColumnPropertyDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DataColumnPropertyDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DataColumnPropertyDescriptor__VTable vtable;
    };

    struct DataException__Fields {
        struct SystemException__Fields _;
    };

    struct DataException {
        struct DataException__Class* klass;
        MonitorData* monitor;
        struct DataException__Fields fields;
    };

    struct DataException__VTable {
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

    struct DataException__StaticFields {
    };

    struct DataException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DataException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DataException__VTable vtable;
    };

    struct ConstraintException__Fields {
        struct DataException__Fields _;
    };

    struct ConstraintException {
        struct ConstraintException__Class* klass;
        MonitorData* monitor;
        struct ConstraintException__Fields fields;
    };

    struct ConstraintException__VTable {
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

    struct ConstraintException__StaticFields {
    };

    struct ConstraintException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConstraintException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConstraintException__VTable vtable;
    };

    struct DeletedRowInaccessibleException__Fields {
        struct DataException__Fields _;
    };

    struct DeletedRowInaccessibleException {
        struct DeletedRowInaccessibleException__Class* klass;
        MonitorData* monitor;
        struct DeletedRowInaccessibleException__Fields fields;
    };

    struct DeletedRowInaccessibleException__VTable {
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

    struct DeletedRowInaccessibleException__StaticFields {
    };

    struct DeletedRowInaccessibleException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DeletedRowInaccessibleException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DeletedRowInaccessibleException__VTable vtable;
    };

    struct DuplicateNameException__Fields {
        struct DataException__Fields _;
    };

    struct DuplicateNameException {
        struct DuplicateNameException__Class* klass;
        MonitorData* monitor;
        struct DuplicateNameException__Fields fields;
    };

    struct DuplicateNameException__VTable {
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

    struct DuplicateNameException__StaticFields {
    };

    struct DuplicateNameException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DuplicateNameException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DuplicateNameException__VTable vtable;
    };

    struct InRowChangingEventException__Fields {
        struct DataException__Fields _;
    };

    struct InRowChangingEventException {
        struct InRowChangingEventException__Class* klass;
        MonitorData* monitor;
        struct InRowChangingEventException__Fields fields;
    };

    struct InRowChangingEventException__VTable {
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

    struct InRowChangingEventException__StaticFields {
    };

    struct InRowChangingEventException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InRowChangingEventException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InRowChangingEventException__VTable vtable;
    };

    struct InvalidConstraintException__Fields {
        struct DataException__Fields _;
    };

    struct InvalidConstraintException {
        struct InvalidConstraintException__Class* klass;
        MonitorData* monitor;
        struct InvalidConstraintException__Fields fields;
    };

    struct InvalidConstraintException__VTable {
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

    struct InvalidConstraintException__StaticFields {
    };

    struct InvalidConstraintException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InvalidConstraintException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InvalidConstraintException__VTable vtable;
    };

    struct NoNullAllowedException__Fields {
        struct DataException__Fields _;
    };

    struct NoNullAllowedException {
        struct NoNullAllowedException__Class* klass;
        MonitorData* monitor;
        struct NoNullAllowedException__Fields fields;
    };

    struct NoNullAllowedException__VTable {
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

    struct NoNullAllowedException__StaticFields {
    };

    struct NoNullAllowedException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NoNullAllowedException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NoNullAllowedException__VTable vtable;
    };

    struct ReadOnlyException__Fields {
        struct DataException__Fields _;
    };

    struct ReadOnlyException {
        struct ReadOnlyException__Class* klass;
        MonitorData* monitor;
        struct ReadOnlyException__Fields fields;
    };

    struct ReadOnlyException__VTable {
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

    struct ReadOnlyException__StaticFields {
    };

    struct ReadOnlyException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReadOnlyException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReadOnlyException__VTable vtable;
    };

    struct RowNotInTableException__Fields {
        struct DataException__Fields _;
    };

    struct RowNotInTableException {
        struct RowNotInTableException__Class* klass;
        MonitorData* monitor;
        struct RowNotInTableException__Fields fields;
    };

    struct RowNotInTableException__VTable {
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

    struct RowNotInTableException__StaticFields {
    };

    struct RowNotInTableException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RowNotInTableException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RowNotInTableException__VTable vtable;
    };

    struct VersionNotFoundException__Fields {
        struct DataException__Fields _;
    };

    struct VersionNotFoundException {
        struct VersionNotFoundException__Class* klass;
        MonitorData* monitor;
        struct VersionNotFoundException__Fields fields;
    };

    struct VersionNotFoundException__VTable {
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

    struct VersionNotFoundException__StaticFields {
    };

    struct VersionNotFoundException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VersionNotFoundException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VersionNotFoundException__VTable vtable;
    };

    enum class DataRowState__Enum : int32_t {
        Detached = 0x00000001,
        Unchanged = 0x00000002,
        Added = 0x00000004,
        Deleted = 0x00000008,
        Modified = 0x00000010,
    };

    struct DataRowState__Enum__Boxed {
        struct DataRowState__Enum__Class* klass;
        MonitorData* monitor;
        DataRowState__Enum value;
    };

    struct DataRowState__Enum__VTable {
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

    struct DataRowState__Enum__StaticFields {
    };

    struct DataRowState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DataRowState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DataRowState__Enum__VTable vtable;
    };

    enum class RBTreeError__Enum : int32_t {
        InvalidPageSize = 0x00000001,
        PagePositionInSlotInUse = 0x00000003,
        NoFreeSlots = 0x00000004,
        InvalidStateinInsert = 0x00000005,
        InvalidNextSizeInDelete = 0x00000007,
        InvalidStateinDelete = 0x00000008,
        InvalidNodeSizeinDelete = 0x00000009,
        InvalidStateinEndDelete = 0x0000000a,
        CannotRotateInvalidsuccessorNodeinDelete = 0x0000000b,
        IndexOutOFRangeinGetNodeByIndex = 0x0000000d,
        RBDeleteFixup = 0x0000000e,
        UnsupportedAccessMethod1 = 0x0000000f,
        UnsupportedAccessMethod2 = 0x00000010,
        UnsupportedAccessMethodInNonNillRootSubtree = 0x00000011,
        AttachedNodeWithZerorbTreeNodeId = 0x00000012,
        CompareNodeInDataRowTree = 0x00000013,
        CompareSateliteTreeNodeInDataRowTree = 0x00000014,
        NestedSatelliteTreeEnumerator = 0x00000015,
    };

    struct RBTreeError__Enum__Boxed {
        struct RBTreeError__Enum__Class* klass;
        MonitorData* monitor;
        RBTreeError__Enum value;
    };

    struct RBTreeError__Enum__VTable {
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

    struct RBTreeError__Enum__StaticFields {
    };

    struct RBTreeError__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RBTreeError__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RBTreeError__Enum__VTable vtable;
    };

    struct DataRelationCollection_DataSetRelationCollection__Fields {
        struct DataRelationCollection__Fields _;
        struct DataSet* _dataSet;
        struct ArrayList* _relations;
        struct DataRelation__Array* _delayLoadingRelations;
    };

    struct DataRelationCollection_DataSetRelationCollection {
        struct DataRelationCollection_DataSetRelationCollection__Class* klass;
        MonitorData* monitor;
        struct DataRelationCollection_DataSetRelationCollection__Fields fields;
    };

    struct DataRelationCollection_DataSetRelationCollection__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CopyTo;
        VirtualInvokeData get_Count;
        VirtualInvokeData get_SyncRoot;
        VirtualInvokeData get_IsSynchronized;
        VirtualInvokeData GetEnumerator;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData CopyTo_1;
        VirtualInvokeData GetEnumerator_1;
        VirtualInvokeData get_List;
        VirtualInvokeData get_Item;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData AddCore;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData GetDataSet;
        VirtualInvokeData OnCollectionChanged;
        VirtualInvokeData OnCollectionChanging;
        VirtualInvokeData RemoveCore;
    };

    struct DataRelationCollection_DataSetRelationCollection__StaticFields {
    };

    struct DataRelationCollection_DataSetRelationCollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DataRelationCollection_DataSetRelationCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DataRelationCollection_DataSetRelationCollection__VTable vtable;
    };

    struct DataRelationPropertyDescriptor__Fields {
        struct PropertyDescriptor__Fields _;
        struct DataRelation* _Relation_k__BackingField;
    };

    struct DataRelationPropertyDescriptor {
        struct DataRelationPropertyDescriptor__Class* klass;
        MonitorData* monitor;
        struct DataRelationPropertyDescriptor__Fields fields;
    };

    struct DataRelationPropertyDescriptor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_AttributeArray;
        VirtualInvokeData set_AttributeArray;
        VirtualInvokeData get_Attributes;
        VirtualInvokeData get_Category;
        VirtualInvokeData get_Description;
        VirtualInvokeData get_IsBrowsable;
        VirtualInvokeData get_Name;
        VirtualInvokeData get_NameHashCode;
        VirtualInvokeData get_DesignTimeOnly;
        VirtualInvokeData get_DisplayName;
        VirtualInvokeData CreateAttributeCollection;
        VirtualInvokeData FillAttributes;
        VirtualInvokeData GetInvocationTarget;
        VirtualInvokeData get_ComponentType;
        VirtualInvokeData get_Converter;
        VirtualInvokeData get_IsLocalizable;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PropertyType;
        VirtualInvokeData AddValueChanged;
        VirtualInvokeData CanResetValue;
        VirtualInvokeData GetChildProperties;
        VirtualInvokeData GetEditor;
        VirtualInvokeData GetValue;
        VirtualInvokeData OnValueChanged;
        VirtualInvokeData RemoveValueChanged;
        VirtualInvokeData ResetValue;
        VirtualInvokeData SetValue;
        VirtualInvokeData ShouldSerializeValue;
        VirtualInvokeData get_SupportsChangeEvents;
    };

    struct DataRelationPropertyDescriptor__StaticFields {
    };

    struct DataRelationPropertyDescriptor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DataRelationPropertyDescriptor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DataRelationPropertyDescriptor__VTable vtable;
    };

    enum class SchemaFormat__Enum : int32_t {
        Public = 0x00000001,
        Remoting = 0x00000002,
        WebService = 0x00000003,
        RemotingSkipSchema = 0x00000004,
        WebServiceSkipSchema = 0x00000005,
    };

    struct SchemaFormat__Enum__Boxed {
        struct SchemaFormat__Enum__Class* klass;
        MonitorData* monitor;
        SchemaFormat__Enum value;
    };

    struct Converter_2_Type_String___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Converter_2_Type_String_ {
        struct Converter_2_Type_String___Class* klass;
        MonitorData* monitor;
        struct Converter_2_Type_String___Fields fields;
    };

    struct SchemaFormat__Enum__VTable {
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
