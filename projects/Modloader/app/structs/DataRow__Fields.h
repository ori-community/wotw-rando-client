#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRow__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRow__Fields_DEFINED)
#include <Modloader/app/structs/DataRowAction__Enum.h>
#if defined(IL2CPP_STRUCT_DataRowAction__Enum_DEFINED)
#define IL2CPP_STRUCT_DataRow__Fields_DEFINED
struct DataTable;
struct DataColumnCollection;
struct DataColumn;
struct DataError;
struct __declspec(align(8)) DataRow__Fields {
    struct DataTable* _table;
    struct DataColumnCollection* _columns;
    int32_t _oldRecord;
    int32_t _newRecord;
    int32_t _tempRecord;
    int64_t _rowID;
    DataRowAction__Enum _action;

    bool _inChangingEvent;
    bool _inDeletingEvent;
    bool _inCascade;
    struct DataColumn* _lastChangedColumn;
    int32_t _countColumnChange;
    struct DataError* _error;
    int32_t _rbTreeNodeId;
    int32_t _objectID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataRow__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataRow__Fields_FWDDECL
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataColumnCollection.h>
#include <Modloader/app/structs/DataError.h>
#include <Modloader/app/structs/DataTable.h>
#endif
#undef IL2CPP_STRUCT_DataRow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRow__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataRow__Fields_FWDDECL)
#include <Modloader/app/structs/DataRow__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRow__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
