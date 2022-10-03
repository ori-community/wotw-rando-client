namespace app {
    struct KeyValuePair_2_System_String_System_Data_DataColumn___Array {
        struct KeyValuePair_2_System_String_System_Data_DataColumn___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_Data_DataColumn_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_DataColumn___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Data_DataColumn_ {
        struct IEnumerable_1_System_Data_DataColumn___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) DataError__Fields {
        struct String* _rowError;
        int32_t _count;
        struct DataError_ColumnError__Array* _errorList;
    };

    struct DataError {
        struct DataError__Class* klass;
        MonitorData* monitor;
        struct DataError__Fields fields;
    };

    struct DataError_ColumnError {
        struct DataColumn* _column;
        struct String* _error;
    };

    struct DataError_ColumnError__Boxed {
        struct DataError_ColumnError__Class* klass;
        MonitorData* monitor;
        struct DataError_ColumnError fields;
    };

    struct DataError_ColumnError__Array {
        struct DataError_ColumnError__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DataError_ColumnError vector[32];
    };

    enum class Rule__Enum : int32_t {
        None = 0x00000000,
        Cascade = 0x00000001,
        SetNull = 0x00000002,
        SetDefault = 0x00000003,
    };

    struct Rule__Enum__Boxed {
        struct Rule__Enum__Class* klass;
        MonitorData* monitor;
        Rule__Enum value;
    };

    enum class AcceptRejectRule__Enum : int32_t {
        None = 0x00000000,
        Cascade = 0x00000001,
    };

    struct AcceptRejectRule__Enum__Boxed {
        struct AcceptRejectRule__Enum__Class* klass;
        MonitorData* monitor;
        AcceptRejectRule__Enum value;
    };

    struct ForeignKeyConstraint__Fields {
        struct Constraint_1__Fields _;
        Rule__Enum _deleteRule;

        Rule__Enum _updateRule;

        AcceptRejectRule__Enum _acceptRejectRule;

        struct DataKey _childKey;
        struct DataKey _parentKey;
        struct String* _constraintName;
        struct String__Array* _parentColumnNames;
        struct String__Array* _childColumnNames;
        struct String* _parentTableName;
        struct String* _parentTableNamespace;
    };

    struct ForeignKeyConstraint {
        struct ForeignKeyConstraint__Class* klass;
        MonitorData* monitor;
        struct ForeignKeyConstraint__Fields fields;
    };

    struct __declspec(align(8)) List_1_System_Data_DataColumn___Fields {
        struct DataColumn__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Data_DataColumn_ {
        struct List_1_System_Data_DataColumn___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Data_DataColumn___Fields fields;
    };

    enum class DataRowVersion__Enum : int32_t {
        Original = 0x00000100,
        Current = 0x00000200,
        Proposed = 0x00000400,
        Default = 0x00000600,
    };

    struct DataRowVersion__Enum__Boxed {
        struct DataRowVersion__Enum__Class* klass;
        MonitorData* monitor;
        DataRowVersion__Enum value;
    };

    struct __declspec(align(8)) DataStorage__Fields {
        struct DataColumn* _column;
        struct DataTable* _table;
        struct Type* _dataType;
        StorageType__Enum _storageTypeCode;

        struct BitArray* _dbNullBits;
        struct Object* _defaultValue;
        struct Object* _nullValue;
        bool _isCloneable;
        bool _isCustomDefinedType;
        bool _isStringType;
        bool _isValueType;
    };

    struct DataStorage {
        struct DataStorage__Class* klass;
        MonitorData* monitor;
        struct DataStorage__Fields fields;
    };

    struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean_ {
        struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_Type_Tuple_4_Boolean_Boolean_Boolean_Boolean___Fields fields;
    };

    struct __declspec(align(8)) Tuple_4_Boolean_Boolean_Boolean_Boolean___Fields {
        bool m_Item1;
        bool m_Item2;
        bool m_Item3;
        bool m_Item4;
    };

    struct Tuple_4_Boolean_Boolean_Boolean_Boolean_ {
        struct Tuple_4_Boolean_Boolean_Boolean_Boolean___Class* klass;
        MonitorData* monitor;
        struct Tuple_4_Boolean_Boolean_Boolean_Boolean___Fields fields;
    };

    struct __declspec(align(8)) ConcurrentDictionary_2_System_Type_System_Tuple_4___Fields {
        struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4_* _tables;
        struct IEqualityComparer_1_System_Type_* _comparer;
        bool _growLockArray;
        int32_t _budget;
    };

    struct ConcurrentDictionary_2_System_Type_System_Tuple_4_ {
        struct ConcurrentDictionary_2_System_Type_System_Tuple_4___Class* klass;
        MonitorData* monitor;
        struct ConcurrentDictionary_2_System_Type_System_Tuple_4___Fields fields;
    };

    struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4___Fields {
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Array* _buckets;
        struct Object__Array* _locks;
        struct Int32__Array* _countPerLock;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4_ {
        struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4___Class* klass;
        MonitorData* monitor;
        struct ConcurrentDictionary_2_TKey_TValue_Tables_System_Type_System_Tuple_4___Fields fields;
    };

    struct __declspec(align(8)) ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Fields {
        struct Type* _key;
        struct Tuple_4_Boolean_Boolean_Boolean_Boolean_* _value;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4_* _next;
        int32_t _hashcode;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4_ {
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Class* klass;
        MonitorData* monitor;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Fields fields;
    };

    struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Array {
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ConcurrentDictionary_2_TKey_TValue_Node_System_Type_System_Tuple_4_* vector[32];
    };

    struct ICollection_1_System_Tuple_4_ {
        struct ICollection_1_System_Tuple_4___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Type_System_Tuple_4_ {
        struct Type* key;
        struct Tuple_4_Boolean_Boolean_Boolean_Boolean_* value;
    };

    struct KeyValuePair_2_System_Type_System_Tuple_4___Boxed {
        struct KeyValuePair_2_System_Type_System_Tuple_4___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Type_System_Tuple_4_ fields;
    };

    struct KeyValuePair_2_System_Type_System_Tuple_4___Array {
        struct KeyValuePair_2_System_Type_System_Tuple_4___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Type_System_Tuple_4_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_System_Tuple_4_ {
        struct IEnumerator_1_KeyValuePair_2_System_Type_System_Tuple_4___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Tuple_4_ {
        struct IEnumerable_1_System_Tuple_4___Class* klass;
        MonitorData* monitor;
    };

    struct BigIntegerStorage__Fields {
        struct DataStorage__Fields _;
        struct BigInteger_2__Array* _values;
    };

    struct BigIntegerStorage {
        struct BigIntegerStorage__Class* klass;
        MonitorData* monitor;
        struct BigIntegerStorage__Fields fields;
    };

    struct BigInteger_2__Array {
        struct BigInteger_2__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct BigInteger_2 vector[32];
    };

    struct __declspec(align(8)) AutoIncrementValue__Fields {
        bool _Auto_k__BackingField;
    };

    struct AutoIncrementValue {
        struct AutoIncrementValue__Class* klass;
        MonitorData* monitor;
        struct AutoIncrementValue__Fields fields;
    };

    struct AutoIncrementInt64__Fields {
        struct AutoIncrementValue__Fields _;
        int64_t _current;
        int64_t _seed;
        int64_t _step;
    };

    struct AutoIncrementInt64 {
        struct AutoIncrementInt64__Class* klass;
        MonitorData* monitor;
        struct AutoIncrementInt64__Fields fields;
    };

    struct __declspec(align(8)) SimpleType__Fields {
        struct String* _baseType;
        struct SimpleType* _baseSimpleType;
        struct XmlQualifiedName* _xmlBaseType;
        struct String* _name;
        int32_t _length;
        int32_t _minLength;
        int32_t _maxLength;
        struct String* _pattern;
        struct String* _ns;
        struct String* _maxExclusive;
        struct String* _maxInclusive;
        struct String* _minExclusive;
        struct String* _minInclusive;
        struct String* _enumeration;
    };

    struct SimpleType {
        struct SimpleType__Class* klass;
        MonitorData* monitor;
        struct SimpleType__Fields fields;
    };

    struct IndexField__Array {
        struct IndexField__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IndexField vector[32];
    };

    struct Comparison_1_System_Data_DataRow___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Comparison_1_System_Data_DataRow_ {
        struct Comparison_1_System_Data_DataRow___Class* klass;
        MonitorData* monitor;
        struct Comparison_1_System_Data_DataRow___Fields fields;
    };

    enum class TreeAccessMethod__Enum : int32_t {
        KEY_SEARCH_AND_INDEX = 0x00000001,
        INDEX_ONLY = 0x00000002,
    };

    struct TreeAccessMethod__Enum__Boxed {
        struct TreeAccessMethod__Enum__Class* klass;
        MonitorData* monitor;
        TreeAccessMethod__Enum value;
    };

    struct __declspec(align(8)) RBTree_1_System_Int32___Fields {
        struct RBTree_1_K_TreePage_System_Int32___Array* _pageTable;
        struct Int32__Array* _pageTableMap;
        int32_t _inUsePageCount;
        int32_t _nextFreePageLine;
        int32_t root;
        int32_t _version;
        int32_t _inUseNodeCount;
        int32_t _inUseSatelliteTreeCount;
        TreeAccessMethod__Enum _accessMethod;
    };

    struct RBTree_1_System_Int32_ {
        struct RBTree_1_System_Int32___Class* klass;
        MonitorData* monitor;
        struct RBTree_1_System_Int32___Fields fields;
    };

    struct Index_IndexTree__Fields {
        struct RBTree_1_System_Int32___Fields _;
        struct Index* _index;
    };

    struct Index_IndexTree {
        struct Index_IndexTree__Class* klass;
        MonitorData* monitor;
        struct Index_IndexTree__Fields fields;
    };

    struct __declspec(align(8)) RBTree_1_K_TreePage_System_Int32___Fields {
        struct RBTree_1_K_Node_System_Int32___Array* _slots;
        struct Int32__Array* _slotMap;
        int32_t _inUseCount;
        int32_t _pageId;
        int32_t _nextFreeSlotLine;
    };

    struct RBTree_1_K_TreePage_System_Int32_ {
        struct RBTree_1_K_TreePage_System_Int32___Class* klass;
        MonitorData* monitor;
        struct RBTree_1_K_TreePage_System_Int32___Fields fields;
    };

    struct RBTree_1_K_Node_System_Int32_ {
        int32_t _selfId;
        int32_t _leftId;
        int32_t _rightId;
        int32_t _parentId;
        int32_t _nextId;
        int32_t _subTreeSize;
        int32_t _keyOfNode;
        struct RBTree_1_K_NodeColor_System_Int32_* _nodeColor;
    };

    struct RBTree_1_K_Node_System_Int32___Boxed {
        struct RBTree_1_K_Node_System_Int32___Class* klass;
        MonitorData* monitor;
        struct RBTree_1_K_Node_System_Int32_ fields;
    };

    struct __declspec(align(8)) RBTree_1_K_NodeColor_System_Int32___Fields {
        int32_t value__;
    };

    struct RBTree_1_K_NodeColor_System_Int32_ {
        struct RBTree_1_K_NodeColor_System_Int32___Class* klass;
        MonitorData* monitor;
        struct RBTree_1_K_NodeColor_System_Int32___Fields fields;
    };

    struct RBTree_1_K_Node_System_Int32___Array {
        struct RBTree_1_K_Node_System_Int32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RBTree_1_K_Node_System_Int32_ vector[32];
    };

    struct RBTree_1_K_TreePage_System_Int32___Array {
        struct RBTree_1_K_TreePage_System_Int32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RBTree_1_K_TreePage_System_Int32_* vector[32];
    };

    struct __declspec(align(8)) Listeners_1_DataViewListener___Fields {
        struct List_1_System_Data_DataViewListener_* _listeners;
        struct Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean_* _filter;
        int32_t _objectID;
        int32_t _listenerReaderCount;
    };

    struct Listeners_1_DataViewListener_ {
        struct Listeners_1_DataViewListener___Class* klass;
        MonitorData* monitor;
        struct Listeners_1_DataViewListener___Fields fields;
    };

    struct __declspec(align(8)) List_1_System_Data_DataViewListener___Fields {
        struct DataViewListener__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Data_DataViewListener_ {
        struct List_1_System_Data_DataViewListener___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Data_DataViewListener___Fields fields;
    };

    struct __declspec(align(8)) DataViewListener__Fields {
        struct WeakReference* _dvWeak;
        struct DataTable* _table;
        struct Index* _index;
        int32_t _objectID;
    };

    struct DataViewListener {
        struct DataViewListener__Class* klass;
        MonitorData* monitor;
        struct DataViewListener__Fields fields;
    };

    struct DataViewListener__Array {
        struct DataViewListener__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DataViewListener* vector[32];
    };

    struct IEnumerator_1_System_Data_DataViewListener_ {
        struct IEnumerator_1_System_Data_DataViewListener___Class* klass;
        MonitorData* monitor;
    };

    struct Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean_ {
        struct Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_System_Data_Index___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_Index_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_Index_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_System_Data_Index_ {
        struct Dictionary_2_System_String_System_Data_Index___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_System_Data_Index___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct Index* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_System_Data_Index_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_Index___Fields {
        struct Dictionary_2_System_String_System_Data_Index_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_Index_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_Index___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Data_Index___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_Index___Fields {
        struct Dictionary_2_System_String_System_Data_Index_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_Index_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_Index___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Data_Index___Fields fields;
    };

    struct Index__Array {
        struct Index__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Index* vector[32];
    };

    struct IEnumerator_1_System_Data_Index_ {
        struct IEnumerator_1_System_Data_Index___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Data_Index_ {
        struct ICollection_1_System_Data_Index___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_System_Data_Index_ {
        struct String* key;
        struct Index* value;
    };

    struct KeyValuePair_2_System_String_System_Data_Index___Boxed {
        struct KeyValuePair_2_System_String_System_Data_Index___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_System_Data_Index_ fields;
    };

    struct KeyValuePair_2_System_String_System_Data_Index___Array {
        struct KeyValuePair_2_System_String_System_Data_Index___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_System_Data_Index_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_Index_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_System_Data_Index___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Data_Index_ {
        struct IEnumerable_1_System_Data_Index___Class* klass;
        MonitorData* monitor;
    };

    struct IFilter {
        struct IFilter__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Data_DataRow_System_Data_DataRowView___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Data_DataRow_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataRow_System_Data_DataRowView_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataRow_System_Data_DataRowView_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView_ {
        struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView_ {
        int32_t hashCode;
        int32_t next;
        struct DataRow* key;
        struct DataRowView* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView_ fields;
    };

    struct __declspec(align(8)) DataRowView__Fields {
        struct DataView* _dataView;
        struct DataRow* _row;
        bool _delayBeginEdit;
        struct PropertyChangedEventHandler* PropertyChanged;
    };

    struct DataRowView {
        struct DataRowView__Class* klass;
        MonitorData* monitor;
        struct DataRowView__Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Data_DataRow_System_Data_DataRowView_ vector[32];
    };

    struct IEqualityComparer_1_System_Data_DataRow_ {
        struct IEqualityComparer_1_System_Data_DataRow___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataRow_System_Data_DataRowView___Fields {
        struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataRow_System_Data_DataRowView_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataRow_System_Data_DataRowView___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Data_DataRow_System_Data_DataRowView___Fields fields;
    };

    struct DataRow__Array {
        struct DataRow__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DataRow* vector[32];
    };

    struct IEnumerator_1_System_Data_DataRow_ {
        struct IEnumerator_1_System_Data_DataRow___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataRow_System_Data_DataRowView___Fields {
        struct Dictionary_2_System_Data_DataRow_System_Data_DataRowView_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataRow_System_Data_DataRowView_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataRow_System_Data_DataRowView___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Data_DataRow_System_Data_DataRowView___Fields fields;
    };

    struct DataRowView__Array {
        struct DataRowView__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DataRowView* vector[32];
    };

    struct IEnumerator_1_System_Data_DataRowView_ {
        struct IEnumerator_1_System_Data_DataRowView___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Data_DataRow_ {
        struct ICollection_1_System_Data_DataRow___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_System_Data_DataRowView_ {
        struct ICollection_1_System_Data_DataRowView___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView_ {
        struct DataRow* key;
        struct DataRowView* value;
    };

    struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView___Boxed {
        struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView_ fields;
    };

    struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView___Array {
        struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView_ {
        struct IEnumerator_1_KeyValuePair_2_System_Data_DataRow_System_Data_DataRowView___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Data_DataRow_ {
        struct IEnumerable_1_System_Data_DataRow___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_System_Data_DataRowView_ {
        struct IEnumerable_1_System_Data_DataRowView___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) DataRowCollection__Fields {
        struct DataTable* _table;
        struct DataRowCollection_DataRowTree* _list;
        int32_t _nullInList;
    };

    struct DataRowCollection {
        struct DataRowCollection__Class* klass;
        MonitorData* monitor;
        struct DataRowCollection__Fields fields;
    };

    struct __declspec(align(8)) RBTree_1_DataRow___Fields {
        struct RBTree_1_K_TreePage_DataRow___Array* _pageTable;
        struct Int32__Array* _pageTableMap;
        int32_t _inUsePageCount;
        int32_t _nextFreePageLine;
        int32_t root;
        int32_t _version;
        int32_t _inUseNodeCount;
        int32_t _inUseSatelliteTreeCount;
        TreeAccessMethod__Enum _accessMethod;
    };

    struct RBTree_1_DataRow_ {
        struct RBTree_1_DataRow___Class* klass;
        MonitorData* monitor;
        struct RBTree_1_DataRow___Fields fields;
    };

    struct DataRowCollection_DataRowTree__Fields {
        struct RBTree_1_DataRow___Fields _;
    };

    struct DataRowCollection_DataRowTree {
        struct DataRowCollection_DataRowTree__Class* klass;
        MonitorData* monitor;
        struct DataRowCollection_DataRowTree__Fields fields;
    };

    struct __declspec(align(8)) RBTree_1_K_TreePage_DataRow___Fields {
        struct RBTree_1_K_Node_DataRow___Array* _slots;
        struct Int32__Array* _slotMap;
        int32_t _inUseCount;
        int32_t _pageId;
        int32_t _nextFreeSlotLine;
    };

    struct RBTree_1_K_TreePage_DataRow_ {
        struct RBTree_1_K_TreePage_DataRow___Class* klass;
        MonitorData* monitor;
        struct RBTree_1_K_TreePage_DataRow___Fields fields;
    };

    struct RBTree_1_K_Node_DataRow_ {
        int32_t _selfId;
        int32_t _leftId;
        int32_t _rightId;
        int32_t _parentId;
        int32_t _nextId;
        int32_t _subTreeSize;
        struct DataRow* _keyOfNode;
        struct RBTree_1_K_NodeColor_DataRow_* _nodeColor;
    };

    struct RBTree_1_K_Node_DataRow___Boxed {
        struct RBTree_1_K_Node_DataRow___Class* klass;
        MonitorData* monitor;
        struct RBTree_1_K_Node_DataRow_ fields;
    };

    struct __declspec(align(8)) RBTree_1_K_NodeColor_DataRow___Fields {
        int32_t value__;
    };

    struct RBTree_1_K_NodeColor_DataRow_ {
        struct RBTree_1_K_NodeColor_DataRow___Class* klass;
        MonitorData* monitor;
        struct RBTree_1_K_NodeColor_DataRow___Fields fields;
    };

    struct RBTree_1_K_Node_DataRow___Array {
        struct RBTree_1_K_Node_DataRow___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RBTree_1_K_Node_DataRow_ vector[32];
    };

    struct RBTree_1_K_TreePage_DataRow___Array {
        struct RBTree_1_K_TreePage_DataRow___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RBTree_1_K_TreePage_DataRow_* vector[32];
    };

    struct __declspec(align(8)) DataRelationCollection__Fields {
        struct DataRelation* _inTransition;
        int32_t _defaultNameIndex;
        struct CollectionChangeEventHandler* _onCollectionChangedDelegate;
        struct CollectionChangeEventHandler* _onCollectionChangingDelegate;
        int32_t _objectID;
    };

    struct DataRelationCollection {
        struct DataRelationCollection__Class* klass;
        MonitorData* monitor;
        struct DataRelationCollection__Fields fields;
    };

    struct DataRelationCollection_DataTableRelationCollection__Fields {
        struct DataRelationCollection__Fields _;
        struct DataTable* _table;
        struct ArrayList* _relations;
        bool _fParentCollection;
        struct CollectionChangeEventHandler* RelationPropertyChanged;
    };

    struct DataRelationCollection_DataTableRelationCollection {
        struct DataRelationCollection_DataTableRelationCollection__Class* klass;
        MonitorData* monitor;
        struct DataRelationCollection_DataTableRelationCollection__Fields fields;
    };

    struct __declspec(align(8)) RecordManager__Fields {
        struct DataTable* _table;
        int32_t _lastFreeRecord;
        int32_t _minimumCapacity;
        int32_t _recordCapacity;
        struct List_1_System_Int32_* _freeRecordList;
        struct DataRow__Array* _rows;
    };

    struct RecordManager {
        struct RecordManager__Class* klass;
        MonitorData* monitor;
        struct RecordManager__Fields fields;
    };

    struct __declspec(align(8)) List_1_System_Data_Index___Fields {
        struct Index__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_System_Data_Index_ {
        struct List_1_System_Data_Index___Class* klass;
        MonitorData* monitor;
        struct List_1_System_Data_Index___Fields fields;
    };

    struct DataRelation__Array {
        struct DataRelation__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DataRelation* vector[32];
    };

    struct DataRowChangeEventHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DataRowChangeEventHandler {
        struct DataRowChangeEventHandler__Class* klass;
        MonitorData* monitor;
        struct DataRowChangeEventHandler__Fields fields;
    };

    struct __declspec(align(8)) DataRowChangeEventArgs__Fields {
        struct DataRow* _Row_k__BackingField;
        DataRowAction__Enum _Action_k__BackingField;
    };

    struct DataRowChangeEventArgs {
        struct DataRowChangeEventArgs__Class* klass;
        MonitorData* monitor;
        struct DataRowChangeEventArgs__Fields fields;
    };

    struct DataColumnChangeEventHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DataColumnChangeEventHandler {
        struct DataColumnChangeEventHandler__Class* klass;
        MonitorData* monitor;
        struct DataColumnChangeEventHandler__Fields fields;
    };

    struct __declspec(align(8)) DataColumnChangeEventArgs__Fields {
        struct DataColumn* _column;
        struct DataRow* _Row_k__BackingField;
        struct Object* _ProposedValue_k__BackingField;
    };

    struct DataColumnChangeEventArgs {
        struct DataColumnChangeEventArgs__Class* klass;
        MonitorData* monitor;
        struct DataColumnChangeEventArgs__Fields fields;
    };

    struct DataTableClearEventHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DataTableClearEventHandler {
        struct DataTableClearEventHandler__Class* klass;
        MonitorData* monitor;
        struct DataTableClearEventHandler__Fields fields;
    };

    struct __declspec(align(8)) DataTableClearEventArgs__Fields {
        struct DataTable* _Table_k__BackingField;
    };

    struct DataTableClearEventArgs {
        struct DataTableClearEventArgs__Class* klass;
        MonitorData* monitor;
        struct DataTableClearEventArgs__Fields fields;
    };

    struct DataTableNewRowEventHandler__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct DataTableNewRowEventHandler {
        struct DataTableNewRowEventHandler__Class* klass;
        MonitorData* monitor;
        struct DataTableNewRowEventHandler__Fields fields;
    };

    struct __declspec(align(8)) DataTableNewRowEventArgs__Fields {
        struct DataRow* _Row_k__BackingField;
    };

    struct DataTableNewRowEventArgs {
        struct DataTableNewRowEventArgs__Class* klass;
        MonitorData* monitor;
        struct DataTableNewRowEventArgs__Fields fields;
    };

    struct __declspec(align(8)) DataRowBuilder__Fields {
        struct DataTable* _table;
        int32_t _record;
    };

} // namespace app
