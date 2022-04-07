namespace app {
struct Constraint_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Constraint_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Constraint_1__VTable vtable;
};

struct ConstraintConverter {
  struct ConstraintConverter__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstraintConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstraintConverter__VTable vtable;
};

struct __declspec(align(8)) ConstraintEnumerator__Fields {
  struct IEnumerator * _tables;
  struct IEnumerator * _constraints;
  struct Constraint_1 * _currentObject;
};
struct ConstraintEnumerator {
  struct ConstraintEnumerator__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstraintEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstraintEnumerator__VTable vtable;
};

struct ForeignKeyConstraintEnumerator__Fields {
  struct ConstraintEnumerator__Fields _;
};
struct ForeignKeyConstraintEnumerator {
  struct ForeignKeyConstraintEnumerator__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ForeignKeyConstraintEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ForeignKeyConstraintEnumerator__VTable vtable;
};

struct ChildForeignKeyConstraintEnumerator__Fields {
  struct ForeignKeyConstraintEnumerator__Fields _;
  struct DataTable * _table;
};
struct ChildForeignKeyConstraintEnumerator {
  struct ChildForeignKeyConstraintEnumerator__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChildForeignKeyConstraintEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChildForeignKeyConstraintEnumerator__VTable vtable;
};

struct ParentForeignKeyConstraintEnumerator__Fields {
  struct ForeignKeyConstraintEnumerator__Fields _;
  struct DataTable * _table;
};
struct ParentForeignKeyConstraintEnumerator {
  struct ParentForeignKeyConstraintEnumerator__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParentForeignKeyConstraintEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParentForeignKeyConstraintEnumerator__VTable vtable;
};

struct AutoIncrementBigInteger__Fields {
  struct AutoIncrementValue__Fields _;
  struct BigInteger_2 _current;
  int64_t _seed;
  struct BigInteger_2 _step;
};
struct AutoIncrementBigInteger {
  struct AutoIncrementBigInteger__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AutoIncrementBigInteger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AutoIncrementBigInteger__VTable vtable;
};

struct DataColumnPropertyDescriptor__Fields {
  struct PropertyDescriptor__Fields _;
  struct DataColumn * _Column_k__BackingField;
};
struct DataColumnPropertyDescriptor {
  struct DataColumnPropertyDescriptor__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataColumnPropertyDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataColumnPropertyDescriptor__VTable vtable;
};

struct DataException__Fields {
  struct SystemException__Fields _;
};
struct DataException {
  struct DataException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataException__VTable vtable;
};

struct ConstraintException__Fields {
  struct DataException__Fields _;
};
struct ConstraintException {
  struct ConstraintException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConstraintException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConstraintException__VTable vtable;
};

struct DeletedRowInaccessibleException__Fields {
  struct DataException__Fields _;
};
struct DeletedRowInaccessibleException {
  struct DeletedRowInaccessibleException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeletedRowInaccessibleException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeletedRowInaccessibleException__VTable vtable;
};

struct DuplicateNameException__Fields {
  struct DataException__Fields _;
};
struct DuplicateNameException {
  struct DuplicateNameException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DuplicateNameException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DuplicateNameException__VTable vtable;
};

struct InRowChangingEventException__Fields {
  struct DataException__Fields _;
};
struct InRowChangingEventException {
  struct InRowChangingEventException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InRowChangingEventException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InRowChangingEventException__VTable vtable;
};

struct InvalidConstraintException__Fields {
  struct DataException__Fields _;
};
struct InvalidConstraintException {
  struct InvalidConstraintException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InvalidConstraintException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InvalidConstraintException__VTable vtable;
};

struct NoNullAllowedException__Fields {
  struct DataException__Fields _;
};
struct NoNullAllowedException {
  struct NoNullAllowedException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NoNullAllowedException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NoNullAllowedException__VTable vtable;
};

struct ReadOnlyException__Fields {
  struct DataException__Fields _;
};
struct ReadOnlyException {
  struct ReadOnlyException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadOnlyException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadOnlyException__VTable vtable;
};

struct RowNotInTableException__Fields {
  struct DataException__Fields _;
};
struct RowNotInTableException {
  struct RowNotInTableException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RowNotInTableException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RowNotInTableException__VTable vtable;
};

struct VersionNotFoundException__Fields {
  struct DataException__Fields _;
};
struct VersionNotFoundException {
  struct VersionNotFoundException__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VersionNotFoundException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VersionNotFoundException__VTable vtable;
};

enum DataRowState__Enum : int32_t {
  DataRowState__Enum_Detached = 1,
  DataRowState__Enum_Unchanged = 2,
  DataRowState__Enum_Added = 4,
  DataRowState__Enum_Deleted = 8,
  DataRowState__Enum_Modified = 16,
};
struct DataRowState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DataRowState__Enum value;
};

enum RBTreeError__Enum : int32_t {
  RBTreeError__Enum_InvalidPageSize = 1,
  RBTreeError__Enum_PagePositionInSlotInUse = 3,
  RBTreeError__Enum_NoFreeSlots = 4,
  RBTreeError__Enum_InvalidStateinInsert = 5,
  RBTreeError__Enum_InvalidNextSizeInDelete = 7,
  RBTreeError__Enum_InvalidStateinDelete = 8,
  RBTreeError__Enum_InvalidNodeSizeinDelete = 9,
  RBTreeError__Enum_InvalidStateinEndDelete = 10,
  RBTreeError__Enum_CannotRotateInvalidsuccessorNodeinDelete = 11,
  RBTreeError__Enum_IndexOutOFRangeinGetNodeByIndex = 13,
  RBTreeError__Enum_RBDeleteFixup = 14,
  RBTreeError__Enum_UnsupportedAccessMethod1 = 15,
  RBTreeError__Enum_UnsupportedAccessMethod2 = 16,
  RBTreeError__Enum_UnsupportedAccessMethodInNonNillRootSubtree = 17,
  RBTreeError__Enum_AttachedNodeWithZerorbTreeNodeId = 18,
  RBTreeError__Enum_CompareNodeInDataRowTree = 19,
  RBTreeError__Enum_CompareSateliteTreeNodeInDataRowTree = 20,
  RBTreeError__Enum_NestedSatelliteTreeEnumerator = 21,
};
struct RBTreeError__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RBTreeError__Enum value;
};

struct DataRelationCollection_DataSetRelationCollection__Fields {
  struct DataRelationCollection__Fields _;
  struct DataSet * _dataSet;
  struct ArrayList * _relations;
  struct DataRelation__Array * _delayLoadingRelations;
};
struct DataRelationCollection_DataSetRelationCollection {
  struct DataRelationCollection_DataSetRelationCollection__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataRelationCollection_DataSetRelationCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataRelationCollection_DataSetRelationCollection__VTable vtable;
};

struct DataRelationPropertyDescriptor__Fields {
  struct PropertyDescriptor__Fields _;
  struct DataRelation * _Relation_k__BackingField;
};
struct DataRelationPropertyDescriptor {
  struct DataRelationPropertyDescriptor__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DataRelationPropertyDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DataRelationPropertyDescriptor__VTable vtable;
};

enum SchemaFormat__Enum : int32_t {
  SchemaFormat__Enum_Public = 1,
  SchemaFormat__Enum_Remoting = 2,
  SchemaFormat__Enum_WebService = 3,
  SchemaFormat__Enum_RemotingSkipSchema = 4,
  SchemaFormat__Enum_WebServiceSkipSchema = 5,
};
struct SchemaFormat__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SchemaFormat__Enum value;
};
struct Converter_2_Type_String___Fields {
  struct MulticastDelegate__Fields _;
};
struct Converter_2_Type_String_ {
  struct Converter_2_Type_String___Class *klass;
  struct MonitorData *monitor;
  struct Converter_2_Type_String___Fields fields;
};
struct Converter_2_Type_String___VTable {
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
struct Converter_2_Type_String___StaticFields {
};
struct Converter_2_Type_String___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Converter_2_Type_String___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Converter_2_Type_String___VTable vtable;
};

enum XmlReadMode__Enum : int32_t {
  XmlReadMode__Enum_Auto = 0,
  XmlReadMode__Enum_ReadSchema = 1,
  XmlReadMode__Enum_IgnoreSchema = 2,
  XmlReadMode__Enum_InferSchema = 3,
  XmlReadMode__Enum_DiffGram = 4,
  XmlReadMode__Enum_Fragment = 5,
  XmlReadMode__Enum_InferTypedSchema = 6,
};
struct XmlReadMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlReadMode__Enum value;
};

enum XmlWriteMode__Enum : int32_t {
  XmlWriteMode__Enum_WriteSchema = 0,
  XmlWriteMode__Enum_IgnoreSchema = 1,
  XmlWriteMode__Enum_DiffGram = 2,
};
struct XmlWriteMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XmlWriteMode__Enum value;
};

enum MissingSchemaAction__Enum : int32_t {
  MissingSchemaAction__Enum_Add = 1,
  MissingSchemaAction__Enum_Ignore = 2,
  MissingSchemaAction__Enum_Error = 3,
  MissingSchemaAction__Enum_AddWithKey = 4,
};
struct MissingSchemaAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MissingSchemaAction__Enum value;
};

struct __declspec(align(8)) List_1_System_Data_DataTable___Fields {
  struct DataTable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Data_DataTable_ {
  struct List_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Data_DataTable___Fields fields;
};
struct IEnumerator_1_System_Data_DataTable_ {
  struct IEnumerator_1_System_Data_DataTable___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Data_DataTable___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Data_DataTable___StaticFields {
};
struct IEnumerator_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Data_DataTable___VTable vtable;
};
struct List_1_System_Data_DataTable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_System_Data_DataTable___StaticFields {
  struct DataTable__Array * _emptyArray;
};
struct List_1_System_Data_DataTable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Data_DataTable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Data_DataTable___VTable vtable;
};

struct __declspec(align(8)) List_1_System_Data_DataRelation___Fields {
  struct DataRelation__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Data_DataRelation_ {
  struct List_1_System_Data_DataRelation___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Data_DataRelation___Fields fields;
};
struct IEnumerator_1_System_Data_DataRelation_ {
  struct IEnumerator_1_System_Data_DataRelation___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Data_DataRelation___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Data_DataRelation___StaticFields {
};
struct IEnumerator_1_System_Data_DataRelation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Data_DataRelation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Data_DataRelation___VTable vtable;
};
struct List_1_System_Data_DataRelation___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_System_Data_DataRelation___StaticFields {
  struct DataRelation__Array * _emptyArray;
};
struct List_1_System_Data_DataRelation___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Data_DataRelation___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Data_DataRelation___VTable vtable;
};

struct __declspec(align(8)) List_1_System_Data_DataRow___Fields {
  struct DataRow__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Data_DataRow_ {
  struct List_1_System_Data_DataRow___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Data_DataRow___Fields fields;
};
struct List_1_System_Data_DataRow___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};}