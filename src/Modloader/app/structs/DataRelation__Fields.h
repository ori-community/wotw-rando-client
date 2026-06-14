#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRelation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRelation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelation__Fields_DEFINED)
#include <Modloader/app/structs/DataKey.h>
#if defined(IL2CPP_STRUCT_DataKey_DEFINED)
#define IL2CPP_STRUCT_DataRelation__Fields_DEFINED
struct DataSet;
struct PropertyCollection;
struct String;
struct UniqueConstraint;
struct ForeignKeyConstraint;
struct String__Array;
struct PropertyChangedEventHandler;
struct __declspec(align(8)) DataRelation__Fields {
    struct DataSet* _dataSet;
    struct PropertyCollection* _extendedProperties;
    struct String* _relationName;
    struct DataKey _childKey;
    struct DataKey _parentKey;
    struct UniqueConstraint* _parentKeyConstraint;
    struct ForeignKeyConstraint* _childKeyConstraint;
    struct String__Array* _parentColumnNames;
    struct String__Array* _childColumnNames;
    struct String* _parentTableName;
    struct String* _childTableName;
    struct String* _parentTableNamespace;
    struct String* _childTableNamespace;
    bool _nested;
    bool _createConstraints;
    bool _checkMultipleNested;
    int32_t _objectID;
    struct PropertyChangedEventHandler* PropertyChanging;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRelation__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataRelation__Fields_FWDDECL
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/ForeignKeyConstraint.h>
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#include <Modloader/app/structs/PropertyCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UniqueConstraint.h>
#endif
#undef IL2CPP_STRUCT_DataRelation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRelation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataRelation__Fields_FWDDECL)
#include <Modloader/app/structs/DataRelation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRelation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
