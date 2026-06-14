#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordManager__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordManager__Fields_DEFINED
struct DataTable;
struct List_1_System_Int32_;
struct DataRow__Array;
struct __declspec(align(8)) RecordManager__Fields {
    struct DataTable* _table;
    int32_t _lastFreeRecord;
    int32_t _minimumCapacity;
    int32_t _recordCapacity;
    struct List_1_System_Int32_* _freeRecordList;
    struct DataRow__Array* _rows;
};
#endif
#if !defined(IL2CPP_STRUCT_RecordManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecordManager__Fields_FWDDECL
#include <Modloader/app/structs/DataRow__Array.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_RecordManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecordManager__Fields_FWDDECL)
#include <Modloader/app/structs/RecordManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
