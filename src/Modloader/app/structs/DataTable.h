#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTable_DEFINED)
#include <Modloader/app/structs/DataTable__Fields.h>
#if defined(IL2CPP_STRUCT_DataTable__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTable_DEFINED
struct DataTable__Class;
struct DataTable {
    struct DataTable__Class* klass;
    MonitorData* monitor;
    struct DataTable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTable_FWDDECL)
#define IL2CPP_STRUCT_DataTable_FWDDECL
#include <Modloader/app/structs/DataTable__Class.h>
#endif
#undef IL2CPP_STRUCT_DataTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTable_DEFINED) && !defined(IL2CPP_STRUCT_DataTable_FWDDECL)
#include <Modloader/app/structs/DataTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
