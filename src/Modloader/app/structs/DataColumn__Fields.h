#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataColumn__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataColumn__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumn__Fields_DEFINED)
#include <Modloader/app/structs/DataSetDateTime__Enum.h>
#include <Modloader/app/structs/MappingType__Enum.h>
#include <Modloader/app/structs/MarshalByValueComponent__Fields.h>
#include <Modloader/app/structs/StorageType__Enum.h>
#if defined(IL2CPP_STRUCT_MarshalByValueComponent__Fields_DEFINED) && defined(IL2CPP_STRUCT_StorageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DataSetDateTime__Enum_DEFINED) && defined(IL2CPP_STRUCT_MappingType__Enum_DEFINED)
#define IL2CPP_STRUCT_DataColumn__Fields_DEFINED
struct String;
struct Type;
struct Object;
struct DataExpression;
struct Index;
struct DataTable;
struct List_1_System_Data_DataColumn_;
struct PropertyCollection;
struct DataStorage;
struct AutoIncrementValue;
struct SimpleType;
struct PropertyChangedEventHandler;
struct DataColumn__Fields {
    struct MarshalByValueComponent__Fields _;
    bool _allowNull;
    struct String* _caption;
    struct String* _columnName;
    struct Type* _dataType;
    StorageType__Enum _storageType;

    struct Object* _defaultValue;
    DataSetDateTime__Enum _dateTimeMode;

    struct DataExpression* _expression;
    int32_t _maxLength;
    int32_t _ordinal;
    bool _readOnly;
    struct Index* _sortIndex;
    struct DataTable* _table;
    bool _unique;
    MappingType__Enum _columnMapping;

    int32_t _hashCode;
    int32_t _errors;
    bool _isSqlType;
    bool _implementsINullable;
    bool _implementsIChangeTracking;
    bool _implementsIRevertibleChangeTracking;
    bool _implementsIXMLSerializable;
    bool _defaultValueIsNull;
    struct List_1_System_Data_DataColumn_* _dependentColumns;
    struct PropertyCollection* _extendedProperties;
    struct DataStorage* _storage;
    struct AutoIncrementValue* _autoInc;
    struct String* _columnUri;
    struct String* _columnPrefix;
    struct String* _encodedColumnName;
    struct SimpleType* _simpleType;
    int32_t _objectID;
    struct String* _XmlDataType_k__BackingField;
    struct PropertyChangedEventHandler* PropertyChanging;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataColumn__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataColumn__Fields_FWDDECL
#include <Modloader/app/structs/AutoIncrementValue.h>
#include <Modloader/app/structs/DataExpression.h>
#include <Modloader/app/structs/DataStorage.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/List_1_System_Data_DataColumn_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#include <Modloader/app/structs/PropertyCollection.h>
#include <Modloader/app/structs/SimpleType.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_DataColumn__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumn__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataColumn__Fields_FWDDECL)
#include <Modloader/app/structs/DataColumn__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataColumn__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
