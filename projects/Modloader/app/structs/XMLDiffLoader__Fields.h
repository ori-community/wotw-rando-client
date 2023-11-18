#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XMLDiffLoader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XMLDiffLoader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XMLDiffLoader__Fields_DEFINED)
#define IL2CPP_STRUCT_XMLDiffLoader__Fields_DEFINED
struct ArrayList;
struct DataSet;
struct DataTable;
struct __declspec(align(8)) XMLDiffLoader__Fields {
    struct ArrayList* _tables;
    struct DataSet* _dataSet;
    struct DataTable* _dataTable;
};
#endif
#if !defined(IL2CPP_STRUCT_XMLDiffLoader__Fields_FWDDECL)
#define IL2CPP_STRUCT_XMLDiffLoader__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#endif
#undef IL2CPP_STRUCT_XMLDiffLoader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XMLDiffLoader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XMLDiffLoader__Fields_FWDDECL)
#include <Modloader/app/structs/XMLDiffLoader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XMLDiffLoader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
