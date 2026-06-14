#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataColumnCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataColumnCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DataColumnCollection__Fields_DEFINED
struct DataTable;
struct ArrayList;
struct DataColumn__Array;
struct Dictionary_2_System_String_System_Data_DataColumn_;
struct CollectionChangeEventHandler;
struct __declspec(align(8)) DataColumnCollection__Fields {
    struct DataTable* _table;
    struct ArrayList* _list;
    int32_t _defaultNameIndex;
    struct DataColumn__Array* _delayedAddRangeColumns;
    struct Dictionary_2_System_String_System_Data_DataColumn_* _columnFromName;
    bool _fInClear;
    struct DataColumn__Array* _columnsImplementingIChangeTracking;
    int32_t _nColumnsImplementingIChangeTracking;
    int32_t _nColumnsImplementingIRevertibleChangeTracking;
    struct CollectionChangeEventHandler* CollectionChanged;
    struct CollectionChangeEventHandler* CollectionChanging;
    struct CollectionChangeEventHandler* ColumnPropertyChanged;
};
#endif
#if !defined(IL2CPP_STRUCT_DataColumnCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataColumnCollection__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/CollectionChangeEventHandler.h>
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Data_DataColumn_.h>
#endif
#undef IL2CPP_STRUCT_DataColumnCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumnCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataColumnCollection__Fields_FWDDECL)
#include <Modloader/app/structs/DataColumnCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataColumnCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
