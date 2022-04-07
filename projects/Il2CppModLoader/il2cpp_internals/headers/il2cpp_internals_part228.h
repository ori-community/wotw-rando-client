namespace app {
enum DataSetDateTime__Enum : int32_t {
  DataSetDateTime__Enum_Local = 1,
  DataSetDateTime__Enum_Unspecified = 2,
  DataSetDateTime__Enum_UnspecifiedLocal = 3,
  DataSetDateTime__Enum_Utc = 4,
};
struct DataSetDateTime__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DataSetDateTime__Enum value;
};
enum MappingType__Enum : int32_t {
  MappingType__Enum_Element = 1,
  MappingType__Enum_Attribute = 2,
  MappingType__Enum_SimpleContent = 3,
  MappingType__Enum_Hidden = 4,
};
struct MappingType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MappingType__Enum value;
};
struct DataColumn__Fields {
  struct MarshalByValueComponent__Fields _;
  bool _allowNull;
  struct String * _caption;
  struct String * _columnName;
  struct Type * _dataType;
  enum StorageType__Enum _storageType;
  struct Object * _defaultValue;
  enum DataSetDateTime__Enum _dateTimeMode;
  struct DataExpression * _expression;
  int32_t _maxLength;
  int32_t _ordinal;
  bool _readOnly;
  struct Index * _sortIndex;
  struct DataTable * _table;
  bool _unique;
  enum MappingType__Enum _columnMapping;
  int32_t _hashCode;
  int32_t _errors;
  bool _isSqlType;
  bool _implementsINullable;
  bool _implementsIChangeTracking;
  bool _implementsIRevertibleChangeTracking;
  bool _implementsIXMLSerializable;
  bool _defaultValueIsNull;
  struct List_1_System_Data_DataColumn_ * _dependentColumns;
  struct PropertyCollection * _extendedProperties;
  struct DataStorage * _storage;
  struct AutoIncrementValue * _autoInc;
  struct String * _columnUri;
  struct String * _columnPrefix;
  struct String * _encodedColumnName;
  struct SimpleType * _simpleType;
  int32_t _objectID;
  struct String * _XmlDataType_k__BackingField;
  struct PropertyChangedEventHandler * PropertyChanging;
};
struct DataColumn {
  struct DataColumn__Class *klass;
  struct MonitorData *monitor;
  struct DataColumn__Fields fields;
};
struct __declspec(align(8)) DataExpression__Fields {
  struct String * _originalExpression;
  bool _parsed;
  bool _bound;
  struct ExpressionNode * _expr;
  struct DataTable * _table;
  enum StorageType__Enum _storageType;
  struct Type * _dataType;
  struct DataColumn__Array * _dependency;
};
struct DataExpression {
  struct DataExpression__Class *klass;
  struct MonitorData *monitor;
  struct DataExpression__Fields fields;
};
struct __declspec(align(8)) ExpressionNode__Fields {
  struct DataTable * _table;
};
struct ExpressionNode {
  struct ExpressionNode__Class *klass;
  struct MonitorData *monitor;
  struct ExpressionNode__Fields fields;
};
enum AggregateType__Enum : int32_t {
  AggregateType__Enum_None = 0,
  AggregateType__Enum_Sum = 4,
  AggregateType__Enum_Mean = 5,
  AggregateType__Enum_Min = 6,
  AggregateType__Enum_Max = 7,
  AggregateType__Enum_First = 8,
  AggregateType__Enum_Count = 9,
  AggregateType__Enum_Var = 10,
  AggregateType__Enum_StDev = 11,
};
struct AggregateType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AggregateType__Enum value;
};
enum Aggregate__Enum : int32_t {
  Aggregate__Enum_None = -1,
  Aggregate__Enum_Sum = 30,
  Aggregate__Enum_Avg = 31,
  Aggregate__Enum_Min = 32,
  Aggregate__Enum_Max = 33,
  Aggregate__Enum_Count = 34,
  Aggregate__Enum_StDev = 35,
  Aggregate__Enum_Var = 37,
};
struct Aggregate__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Aggregate__Enum value;
};
struct AggregateNode__Fields {
  struct ExpressionNode__Fields _;
  enum AggregateType__Enum _type;
  enum Aggregate__Enum _aggregate;
  bool _local;
  struct String * _relationName;
  struct String * _columnName;
  struct DataTable * _childTable;
  struct DataColumn * _column;
  struct DataRelation * _relation;
};
struct AggregateNode {
  struct AggregateNode__Class *klass;
  struct MonitorData *monitor;
  struct AggregateNode__Fields fields;
};
struct DataKey {
  struct DataColumn__Array * _columns;
};
struct DataKey__Boxed {
  struct DataKey__Class *klass;
  struct MonitorData *monitor;
  struct DataKey fields;
};
struct __declspec(align(8)) DataRelation__Fields {
  struct DataSet * _dataSet;
  struct PropertyCollection * _extendedProperties;
  struct String * _relationName;
  struct DataKey _childKey;
  struct DataKey _parentKey;
  struct UniqueConstraint * _parentKeyConstraint;
  struct ForeignKeyConstraint * _childKeyConstraint;
  struct String__Array * _parentColumnNames;
  struct String__Array * _childColumnNames;
  struct String * _parentTableName;
  struct String * _childTableName;
  struct String * _parentTableNamespace;
  struct String * _childTableNamespace;
  bool _nested;
  bool _createConstraints;
  bool _checkMultipleNested;
  int32_t _objectID;
  struct PropertyChangedEventHandler * PropertyChanging;
};
struct DataRelation {
  struct DataRelation__Class *klass;
  struct MonitorData *monitor;
  struct DataRelation__Fields fields;
};
struct PropertyCollection__Fields {
  struct Hashtable__Fields _;
};
struct PropertyCollection {
  struct PropertyCollection__Class *klass;
  struct MonitorData *monitor;
  struct PropertyCollection__Fields fields;
};
struct DataColumn__Array {
  struct DataColumn__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DataColumn * vector[32];
};
struct UniqueConstraint__Fields {
  struct Constraint_1__Fields _;
  struct DataKey _key;
  struct Index * _constraintIndex;
  bool _bPrimaryKey;
  struct String * _constraintName;
  struct String__Array * _columnNames;
};
struct UniqueConstraint {
  struct UniqueConstraint__Class *klass;
  struct MonitorData *monitor;
  struct UniqueConstraint__Fields fields;
};
struct __declspec(align(8)) ConstraintCollection__Fields {
  struct DataTable * _table;
  struct ArrayList * _list;
  int32_t _defaultNameIndex;
  struct CollectionChangeEventHandler * _onCollectionChanged;
  struct Constraint_1__Array * _delayLoadingConstraints;
  bool _fLoadForeignKeyConstraintsOnly;
};
struct ConstraintCollection {
  struct ConstraintCollection__Class *klass;
  struct MonitorData *monitor;
  struct ConstraintCollection__Fields fields;
};
struct Constraint_1__Array {
  struct Constraint_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Constraint_1 * vector[32];
};
enum DataRowAction__Enum : int32_t {
  DataRowAction__Enum_Nothing = 0,
  DataRowAction__Enum_Delete = 1,
  DataRowAction__Enum_Change = 2,
  DataRowAction__Enum_Rollback = 4,
  DataRowAction__Enum_Commit = 8,
  DataRowAction__Enum_Add = 16,
  DataRowAction__Enum_ChangeOriginal = 32,
  DataRowAction__Enum_ChangeCurrentAndOriginal = 64,
};
struct DataRowAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DataRowAction__Enum value;
};
struct __declspec(align(8)) DataRow__Fields {
  struct DataTable * _table;
  struct DataColumnCollection * _columns;
  int32_t _oldRecord;
  int32_t _newRecord;
  int32_t _tempRecord;
  int64_t _rowID;
  enum DataRowAction__Enum _action;
  bool _inChangingEvent;
  bool _inDeletingEvent;
  bool _inCascade;
  struct DataColumn * _lastChangedColumn;
  int32_t _countColumnChange;
  struct DataError * _error;
  int32_t _rbTreeNodeId;
  int32_t _objectID;
};
struct DataRow {
  struct DataRow__Class *klass;
  struct MonitorData *monitor;
  struct DataRow__Fields fields;
};
struct __declspec(align(8)) DataColumnCollection__Fields {
  struct DataTable * _table;
  struct ArrayList * _list;
  int32_t _defaultNameIndex;
  struct DataColumn__Array * _delayedAddRangeColumns;
  struct Dictionary_2_System_String_System_Data_DataColumn_ * _columnFromName;
  bool _fInClear;
  struct DataColumn__Array * _columnsImplementingIChangeTracking;
  int32_t _nColumnsImplementingIChangeTracking;
  int32_t _nColumnsImplementingIRevertibleChangeTracking;
  struct CollectionChangeEventHandler * CollectionChanged;
  struct CollectionChangeEventHandler * CollectionChanging;
  struct CollectionChangeEventHandler * ColumnPropertyChanged;
};
struct DataColumnCollection {
  struct DataColumnCollection__Class *klass;
  struct MonitorData *monitor;
  struct DataColumnCollection__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Data_DataColumn___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_DataColumn_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Data_DataColumn_ {
  struct Dictionary_2_System_String_System_Data_DataColumn___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Data_DataColumn___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct DataColumn * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_DataColumn_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn___Fields {
  struct Dictionary_2_System_String_System_Data_DataColumn_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_DataColumn___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_DataColumn___Fields {
  struct Dictionary_2_System_String_System_Data_DataColumn_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_DataColumn_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_DataColumn___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_DataColumn___Fields fields;
};
struct IEnumerator_1_System_Data_DataColumn_ {
  struct IEnumerator_1_System_Data_DataColumn___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Data_DataColumn_ {
  struct ICollection_1_System_Data_DataColumn___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_System_Data_DataColumn_ {
  struct String * key;
  struct DataColumn * value;
};
struct KeyValuePair_2_System_String_System_Data_DataColumn___Boxed {
  struct KeyValuePair_2_System_String_System_Data_DataColumn___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Data_DataColumn_ fields;
};
struct KeyValuePair_2_System_String_System_Data_DataColumn___Array {
  struct KeyValuePair_2_System_String_System_Data_DataColumn___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Data_DataColumn_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Data_DataColumn_ {
  struct IEnumerable_1_System_Data_DataColumn___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) DataError__Fields {
  struct String * _rowError;
  int32_t _count;
  struct DataError_ColumnError__Array * _errorList;
};
struct DataError {
  struct DataError__Class *klass;
  struct MonitorData *monitor;
  struct DataError__Fields fields;
};
struct DataError_ColumnError {
  struct DataColumn * _column;
  struct String * _error;
};
struct DataError_ColumnError__Boxed {
  struct DataError_ColumnError__Class *klass;
  struct MonitorData *monitor;
  struct DataError_ColumnError fields;
};
struct DataError_ColumnError__Array {
  struct DataError_ColumnError__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DataError_ColumnError vector[32];
};
enum Rule__Enum : int32_t {
  Rule__Enum_None = 0,
  Rule__Enum_Cascade = 1,
  Rule__Enum_SetNull = 2,
  Rule__Enum_SetDefault = 3,
};
struct Rule__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Rule__Enum value;
};
enum AcceptRejectRule__Enum : int32_t {
  AcceptRejectRule__Enum_None = 0,
  AcceptRejectRule__Enum_Cascade = 1,
};
struct AcceptRejectRule__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AcceptRejectRule__Enum value;
};
struct ForeignKeyConstraint__Fields {
  struct Constraint_1__Fields _;
  enum Rule__Enum _deleteRule;
  enum Rule__Enum _updateRule;
  enum AcceptRejectRule__Enum _acceptRejectRule;
  struct DataKey _childKey;
  struct DataKey _parentKey;
  struct String * _constraintName;
  struct String__Array * _parentColumnNames;
  struct String__Array * _childColumnNames;
  struct String * _parentTableName;
  struct String * _parentTableNamespace;
};
struct ForeignKeyConstraint {
  struct ForeignKeyConstraint__Class *klass;
  struct MonitorData *monitor;
  struct ForeignKeyConstraint__Fields fields;
};
struct __declspec(align(8)) List_1_System_Data_DataColumn___Fields {
  struct DataColumn__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Data_DataColumn_ {
  struct List_1_System_Data_DataColumn___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Data_DataColumn___Fields fields;
};
enum DataRowVersion__Enum : int32_t {
  DataRowVersion__Enum_Original = 256,
  DataRowVersion__Enum_Current = 512,
  DataRowVersion__Enum_Proposed = 1024,
  DataRowVersion__Enum_Default = 1536,
};
struct DataRowVersion__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DataRowVersion__Enum value;
};
struct __declspec(align(8)) DataStorage__Fields {
  struct DataColumn * _column;
  struct DataTable * _table;
  struct Type * _dataType;
  enum StorageType__Enum _storageTypeCode;
  struct BitArray * _dbNullBits;
  struct Object * _defaultValue;
  struct Object * _nullValue;
  bool _isCloneable;
  bool _isCustomDefinedType;
  bool _isStringType;
  bool _isValueType;
};
struct DataStorage {
  struct DataStorage__Class *klass;
  struct MonitorData *monitor;
  struct DataStorage__Fields fields;
};
struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean_ {
  struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean___Fields fields;
};
struct __declspec(align(8)) Tuple_4_Boolean_Boolean_Boolean_Boolean___Fields {
  bool m_Item1;
  bool m_Item2;
  bool m_Item3;
  bool m_Item4;
};
struct Tuple_4_Boolean_Boolean_Boolean_Boolean_ {
  struct Tuple_4_Boolean_Boolean_Boolean_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Tuple_4_Boolean_Boolean_Boolean_Boolean___Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_System_Type_System_Tuple_4___Fields {
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4_ * _tables;
  struct IEqualityComparer_1_System_Type_ * _comparer;
  bool _growLockArray;
  int32_t _budget;
};
struct ConcurrentDictionary_2_System_Type_System_Tuple_4_ {
  struct ConcurrentDictionary_2_System_Type_System_Tuple_4___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_System_Type_System_Tuple_4___Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4___Fields {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Array * _buckets;
  struct Object__Array * _locks;
  struct Int32__Array * _countPerLock;
};
struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4_ {
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4___Fields fields;
};
struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Fields {
  struct Type * _key;
  struct Tuple_4_Boolean_Boolean_Boolean_Boolean_ * _value;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4_ * _next;
  int32_t _hashcode;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4_ {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Class *klass;
  struct MonitorData *monitor;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Fields fields;
};
struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Array {
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4_ * vector[32];
};
struct ICollection_1_System_Tuple_4_ {
  struct ICollection_1_System_Tuple_4___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Type_System_Tuple_4_ {
  struct Type * key;
  struct Tuple_4_Boolean_Boolean_Boolean_Boolean_ * value;
};
struct KeyValuePair_2_System_Type_System_Tuple_4___Boxed {
  struct KeyValuePair_2_System_Type_System_Tuple_4___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_System_Tuple_4_ fields;
};
struct KeyValuePair_2_System_Type_System_Tuple_4___Array {
  struct KeyValuePair_2_System_Type_System_Tuple_4___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_System_Tuple_4_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Type_System_Tuple_4_ {
  struct IEnumerator_1_KeyValuePair_2_System_Type_System_Tuple_4___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Tuple_4_ {
  struct IEnumerable_1_System_Tuple_4___Class *klass;
  struct MonitorData *monitor;
};
struct BigIntegerStorage__Fields {
  struct DataStorage__Fields _;
  struct BigInteger_2__Array * _values;
};
struct BigIntegerStorage {
  struct BigIntegerStorage__Class *klass;
  struct MonitorData *monitor;
  struct BigIntegerStorage__Fields fields;
};
struct BigInteger_2__Array {
  struct BigInteger_2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BigInteger_2 vector[32];
};
struct __declspec(align(8)) AutoIncrementValue__Fields {
  bool _Auto_k__BackingField;
};
struct AutoIncrementValue {
  struct AutoIncrementValue__Class *klass;
  struct MonitorData *monitor;
  struct AutoIncrementValue__Fields fields;
};
struct AutoIncrementInt64__Fields {
  struct AutoIncrementValue__Fields _;
  int64_t _current;
  int64_t _seed;
  int64_t _step;
};
struct AutoIncrementInt64 {
  struct AutoIncrementInt64__Class *klass;
  struct MonitorData *monitor;
  struct AutoIncrementInt64__Fields fields;
};
struct __declspec(align(8)) SimpleType__Fields {
  struct String * _baseType;
  struct SimpleType * _baseSimpleType;
  struct XmlQualifiedName * _xmlBaseType;
  struct String * _name;
  int32_t _length;
  int32_t _minLength;
  int32_t _maxLength;
  struct String * _pattern;
  struct String * _ns;
  struct String * _maxExclusive;
  struct String * _maxInclusive;
  struct String * _minExclusive;
  struct String * _minInclusive;
  struct String * _enumeration;
};
struct SimpleType {
  struct SimpleType__Class *klass;
  struct MonitorData *monitor;
  struct SimpleType__Fields fields;
};
struct Comparison_1_System_Data_DataRow___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_System_Data_DataRow_ {
  struct Comparison_1_System_Data_DataRow___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_System_Data_DataRow___Fields fields;
};
enum TreeAccessMethod__Enum : int32_t {
  TreeAccessMethod__Enum_KEY_SEARCH_AND_INDEX = 1,
  TreeAccessMethod__Enum_INDEX_ONLY = 2,
};
struct TreeAccessMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TreeAccessMethod__Enum value;
};
struct __declspec(align(8)) RBTree_1_System_Int32___Fields {
  struct RBTree_1_K_TreePage_System_Int32___Array * _pageTable;
  struct Int32__Array * _pageTableMap;
  int32_t _inUsePageCount;
  int32_t _nextFreePageLine;
  int32_t root;
  int32_t _version;
  int32_t _inUseNodeCount;
  int32_t _inUseSatelliteTreeCount;
  enum TreeAccessMethod__Enum _accessMethod;
};
struct RBTree_1_System_Int32_ {
  struct RBTree_1_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_System_Int32___Fields fields;
};
struct Index_IndexTree__Fields {
  struct RBTree_1_System_Int32___Fields _;
  struct Index * _index;
};
struct Index_IndexTree {
  struct Index_IndexTree__Class *klass;
  struct MonitorData *monitor;
  struct Index_IndexTree__Fields fields;
};
struct __declspec(align(8)) RBTree_1_K_TreePage_System_Int32___Fields {
  struct RBTree_1_K_Node_System_Int32___Array * _slots;
  struct Int32__Array * _slotMap;
  int32_t _inUseCount;
  int32_t _pageId;
  int32_t _nextFreeSlotLine;
};
struct RBTree_1_K_TreePage_System_Int32_ {
  struct RBTree_1_K_TreePage_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_TreePage_System_Int32___Fields fields;
};
struct RBTree_1_K_TreePage_System_Int32___Array {
  struct RBTree_1_K_TreePage_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RBTree_1_K_TreePage_System_Int32_ * vector[32];
};
struct RBTree_1_K_Node_System_Int32_ {
  int32_t _selfId;
  int32_t _leftId;
  int32_t _rightId;
  int32_t _parentId;
  int32_t _nextId;
  int32_t _subTreeSize;
  int32_t _keyOfNode;
  struct RBTree_1_K_NodeColor_System_Int32_ * _nodeColor;
};
struct RBTree_1_K_Node_System_Int32___Boxed {
  struct RBTree_1_K_Node_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_Node_System_Int32_ fields;
};
struct RBTree_1_K_Node_System_Int32___Array {
  struct RBTree_1_K_Node_System_Int32___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RBTree_1_K_Node_System_Int32_ vector[32];
};
struct __declspec(align(8)) RBTree_1_K_NodeColor_System_Int32___Fields {
  int32_t value__;
};
struct RBTree_1_K_NodeColor_System_Int32_ {
  struct RBTree_1_K_NodeColor_System_Int32___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_K_NodeColor_System_Int32___Fields fields;
};
struct __declspec(align(8)) Listeners_1_DataViewListener___Fields {
  struct List_1_System_Data_DataViewListener_ * _listeners;
  struct Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean_ * _filter;
  int32_t _objectID;
  int32_t _listenerReaderCount;
};
struct Listeners_1_DataViewListener_ {
  struct Listeners_1_DataViewListener___Class *klass;
  struct MonitorData *monitor;
  struct Listeners_1_DataViewListener___Fields fields;
};
struct __declspec(align(8)) List_1_System_Data_DataViewListener___Fields {
  struct DataViewListener__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Data_DataViewListener_ {
  struct List_1_System_Data_DataViewListener___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Data_DataViewListener___Fields fields;
};
struct __declspec(align(8)) DataViewListener__Fields {
  struct WeakReference * _dvWeak;
  struct DataTable * _table;
  struct Index * _index;
  int32_t _objectID;
};
struct DataViewListener {
  struct DataViewListener__Class *klass;
  struct MonitorData *monitor;
  struct DataViewListener__Fields fields;
};
struct DataViewListener__Array {
  struct DataViewListener__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DataViewListener * vector[32];
};
struct IEnumerator_1_System_Data_DataViewListener_ {
  struct IEnumerator_1_System_Data_DataViewListener___Class *klass;
  struct MonitorData *monitor;
};
struct Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean_ {
  struct Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_System_Data_Index___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_Index_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_Index_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_System_Data_Index_ {
  struct Dictionary_2_System_String_System_Data_Index___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_System_Data_Index___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct Index * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_Index___Fields {
  struct Dictionary_2_System_String_System_Data_Index_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_Index_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_Index___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_Index___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_Index___Fields {
  struct Dictionary_2_System_String_System_Data_Index_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_Index_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_Index___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_Index___Fields fields;
};
struct Index__Array {
  struct Index__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Index * vector[32];
};
struct IEnumerator_1_System_Data_Index_ {
  struct IEnumerator_1_System_Data_Index___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Data_Index_ {
  struct ICollection_1_System_Data_Index___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_System_Data_Index_ {
  struct String * key;
  struct Index * value;
};
struct KeyValuePair_2_System_String_System_Data_Index___Boxed {
  struct KeyValuePair_2_System_String_System_Data_Index___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_System_Data_Index_ fields;
};
struct KeyValuePair_2_System_String_System_Data_Index___Array {
  struct KeyValuePair_2_System_String_System_Data_Index___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_System_Data_Index_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_Index_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_Index___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Data_Index_ {
  struct IEnumerable_1_System_Data_Index___Class *klass;
  struct MonitorData *monitor;
};
struct IFilter {
  struct IFilter__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Data_DataRow_System_Data_DataRowView___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Data_DataRow_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataRow_System_Data_DataRowView_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataRow_System_Data_DataRowView_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ {
  struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView_ {
  int32_t hashCode;
  int32_t next;
  struct DataRow * key;
  struct DataRowView * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView_ vector[32];
};
struct __declspec(align(8)) DataRowView__Fields {
  struct DataView * _dataView;
  struct DataRow * _row;
  bool _delayBeginEdit;
  struct PropertyChangedEventHandler * PropertyChanged;
};
struct DataRowView {
  struct DataRowView__Class *klass;
  struct MonitorData *monitor;
  struct DataRowView__Fields fields;
};
struct IEqualityComparer_1_System_Data_DataRow_ {
  struct IEqualityComparer_1_System_Data_DataRow___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataRow_System_Data_DataRowView___Fields {
  struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataRow_System_Data_DataRowView_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataRow_System_Data_DataRowView___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataRow_System_Data_DataRowView___Fields fields;
};
struct DataRow__Array {
  struct DataRow__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DataRow * vector[32];
};
struct IEnumerator_1_System_Data_DataRow_ {
  struct IEnumerator_1_System_Data_DataRow___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataRow_System_Data_DataRowView___Fields {
  struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataRow_System_Data_DataRowView_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataRow_System_Data_DataRowView___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataRow_System_Data_DataRowView___Fields fields;
};
struct DataRowView__Array {
  struct DataRowView__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DataRowView * vector[32];
};
struct IEnumerator_1_System_Data_DataRowView_ {
  struct IEnumerator_1_System_Data_DataRowView___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Data_DataRow_ {
  struct ICollection_1_System_Data_DataRow___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Data_DataRowView_ {
  struct ICollection_1_System_Data_DataRowView___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView_ {
  struct DataRow * key;
  struct DataRowView * value;
};
struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView___Boxed {
  struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView_ fields;
};
struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView___Array {
  struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView_ {
  struct IEnumerator_1_KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Data_DataRow_ {
  struct IEnumerable_1_System_Data_DataRow___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Data_DataRowView_ {
  struct IEnumerable_1_System_Data_DataRowView___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) DataRowCollection__Fields {
  struct DataTable * _table;
  struct DataRowCollection_DataRowTree * _list;
  int32_t _nullInList;
};
struct DataRowCollection {
  struct DataRowCollection__Class *klass;
  struct MonitorData *monitor;
  struct DataRowCollection__Fields fields;
};
struct __declspec(align(8)) RBTree_1_DataRow___Fields {
  struct RBTree_1_K_TreePage_DataRow___Array * _pageTable;
  struct Int32__Array * _pageTableMap;
  int32_t _inUsePageCount;
  int32_t _nextFreePageLine;
  int32_t root;
  int32_t _version;
  int32_t _inUseNodeCount;
  int32_t _inUseSatelliteTreeCount;
  enum TreeAccessMethod__Enum _accessMethod;
};
struct RBTree_1_DataRow_ {
  struct RBTree_1_DataRow___Class *klass;
  struct MonitorData *monitor;
  struct RBTree_1_DataRow___Fields fields;
};
struct DataRowCollection_DataRowTree__Fields {
  struct RBTree_1_DataRow___Fields _;
};
struct DataRowCollection_DataRowTree {
  struct DataRowCollection_DataRowTree__Class *klass;
  struct MonitorData *monitor;
  struct DataRowCollection_DataRowTree__Fields fields;
};
struct __declspec(align(8)) RBTree_1_K_TreePage_DataRow___Fields {
  struct RBTree_1_K_Node_DataRow___Array * _slots;
  struct Int32__Array * _slotMap;
  int32_t _inUseCount;
  int32_t _pageId;
  int32_t _nextFreeSlotLine;
};}