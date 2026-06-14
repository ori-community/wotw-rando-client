#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRowCollection__Fields_DEFINED
struct DataTable;
struct DataRowCollection_DataRowTree;
struct __declspec(align(8)) DataRowCollection__Fields {
    struct DataTable* _table;
    struct DataRowCollection_DataRowTree* _list;
    int32_t _nullInList;
};
#endif
#if !defined(IL2CPP_STRUCT_DataRowCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataRowCollection__Fields_FWDDECL
#include <Modloader/app/structs/DataRowCollection_DataRowTree.h>
#include <Modloader/app/structs/DataTable.h>
#endif
#undef IL2CPP_STRUCT_DataRowCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataRowCollection__Fields_FWDDECL)
#include <Modloader/app/structs/DataRowCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
