#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTable__Fields_DEFINED)
#include <Modloader/app/structs/CompareOptions__Enum.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/MarshalByValueComponent__Fields.h>
#include <Modloader/app/structs/SerializationFormat__Enum_1.h>
#if defined(IL2CPP_STRUCT_MarshalByValueComponent__Fields_DEFINED) && defined(IL2CPP_STRUCT_CompareOptions__Enum_DEFINED) && defined(IL2CPP_STRUCT_Decimal_DEFINED) && defined(IL2CPP_STRUCT_SerializationFormat__Enum_1_DEFINED)
#define IL2CPP_STRUCT_DataTable__Fields_DEFINED
struct DataSet;
struct DataView;
struct DataRowCollection;
struct DataColumnCollection;
struct ConstraintCollection;
struct DataRelationCollection;
struct RecordManager;
struct List_1_System_Data_Index_;
struct PropertyCollection;
struct String;
struct DataExpression;
struct CultureInfo;
struct CompareInfo;
struct IFormatProvider;
struct StringComparer;
struct DataColumn;
struct Object;
struct UniqueConstraint;
struct IndexField__Array;
struct DataColumn__Array;
struct Index;
struct DataRow__Array;
struct PropertyDescriptorCollection;
struct DataRelation__Array;
struct List_1_System_Data_DataColumn_;
struct DataRowChangeEventHandler;
struct DataColumnChangeEventHandler;
struct DataTableClearEventHandler;
struct DataTableNewRowEventHandler;
struct PropertyChangedEventHandler;
struct EventHandler;
struct DataRowBuilder;
struct List_1_System_Data_DataView_;
struct List_1_System_Data_DataViewListener_;
struct Hashtable;
struct ReaderWriterLockSlim;
struct DataTable__Fields {
    struct MarshalByValueComponent__Fields _;
    struct DataSet* _dataSet;
    struct DataView* _defaultView;
    int64_t _nextRowID;
    struct DataRowCollection* _rowCollection;
    struct DataColumnCollection* _columnCollection;
    struct ConstraintCollection* _constraintCollection;
    int32_t _elementColumnCount;
    struct DataRelationCollection* _parentRelationsCollection;
    struct DataRelationCollection* _childRelationsCollection;
    struct RecordManager* _recordManager;
    struct List_1_System_Data_Index_* _indexes;
    struct List_1_System_Data_Index_* _shadowIndexes;
    int32_t _shadowCount;
    struct PropertyCollection* _extendedProperties;
    struct String* _tableName;
    struct String* _tableNamespace;
    struct String* _tablePrefix;
    struct DataExpression* _displayExpression;
    bool _fNestedInDataset;
    struct CultureInfo* _culture;
    bool _cultureUserSet;
    struct CompareInfo* _compareInfo;
    CompareOptions__Enum _compareFlags;

    struct IFormatProvider* _formatProvider;
    struct StringComparer* _hashCodeProvider;
    bool _caseSensitive;
    bool _caseSensitiveUserSet;
    struct String* _encodedTableName;
    struct DataColumn* _xmlText;
    struct DataColumn* _colUnique;
    struct Decimal _minOccurs;
    struct Decimal _maxOccurs;
    bool _repeatableElement;
    struct Object* _typeName;
    struct UniqueConstraint* _primaryKey;
    struct IndexField__Array* _primaryIndex;
    struct DataColumn__Array* _delayedSetPrimaryKey;
    struct Index* _loadIndex;
    struct Index* _loadIndexwithOriginalAdded;
    struct Index* _loadIndexwithCurrentDeleted;
    int32_t _suspendIndexEvents;
    bool _inDataLoad;
    bool _schemaLoading;
    bool _enforceConstraints;
    bool _suspendEnforceConstraints;
    bool fInitInProgress;
    bool _inLoad;
    bool _fInLoadDiffgram;
    uint8_t _isTypedDataTable;
    struct DataRow__Array* _emptyDataRowArray;
    struct PropertyDescriptorCollection* _propertyDescriptorCollectionCache;
    struct DataRelation__Array* _nestedParentRelations;
    struct List_1_System_Data_DataColumn_* _dependentColumns;
    bool _mergingData;
    struct DataRowChangeEventHandler* _onRowChangedDelegate;
    struct DataRowChangeEventHandler* _onRowChangingDelegate;
    struct DataRowChangeEventHandler* _onRowDeletingDelegate;
    struct DataRowChangeEventHandler* _onRowDeletedDelegate;
    struct DataColumnChangeEventHandler* _onColumnChangedDelegate;
    struct DataColumnChangeEventHandler* _onColumnChangingDelegate;
    struct DataTableClearEventHandler* _onTableClearingDelegate;
    struct DataTableClearEventHandler* _onTableClearedDelegate;
    struct DataTableNewRowEventHandler* _onTableNewRowDelegate;
    struct PropertyChangedEventHandler* _onPropertyChangingDelegate;
    struct EventHandler* _onInitialized;
    struct DataRowBuilder* _rowBuilder;
    struct List_1_System_Data_DataView_* _delayedViews;
    struct List_1_System_Data_DataViewListener_* _dataViewListeners;
    struct Hashtable* _rowDiffId;
    struct ReaderWriterLockSlim* _indexesLock;
    int32_t _ukColumnPositionForInference;
    SerializationFormat__Enum_1 _remotingFormat;

    int32_t _objectID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTable__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataTable__Fields_FWDDECL
#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/ConstraintCollection.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataColumnChangeEventHandler.h>
#include <Modloader/app/structs/DataColumnCollection.h>
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataExpression.h>
#include <Modloader/app/structs/DataRelationCollection.h>
#include <Modloader/app/structs/DataRelation__Array.h>
#include <Modloader/app/structs/DataRowBuilder.h>
#include <Modloader/app/structs/DataRowChangeEventHandler.h>
#include <Modloader/app/structs/DataRowCollection.h>
#include <Modloader/app/structs/DataRow__Array.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTableClearEventHandler.h>
#include <Modloader/app/structs/DataTableNewRowEventHandler.h>
#include <Modloader/app/structs/DataView.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/IndexField__Array.h>
#include <Modloader/app/structs/List_1_System_Data_DataColumn_.h>
#include <Modloader/app/structs/List_1_System_Data_DataViewListener_.h>
#include <Modloader/app/structs/List_1_System_Data_DataView_.h>
#include <Modloader/app/structs/List_1_System_Data_Index_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#include <Modloader/app/structs/PropertyCollection.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/ReaderWriterLockSlim.h>
#include <Modloader/app/structs/RecordManager.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringComparer.h>
#include <Modloader/app/structs/UniqueConstraint.h>
#endif
#undef IL2CPP_STRUCT_DataTable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataTable__Fields_FWDDECL)
#include <Modloader/app/structs/DataTable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
