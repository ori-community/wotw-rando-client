#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataColumn_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataColumn_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumn_DEFINED)
#include <Modloader/app/structs/DataColumn__Fields.h>
#if defined(IL2CPP_STRUCT_DataColumn__Fields_DEFINED)
#define IL2CPP_STRUCT_DataColumn_DEFINED
struct DataColumn__Class;
struct DataColumn {
    struct DataColumn__Class* klass;
    MonitorData* monitor;
    struct DataColumn__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataColumn_FWDDECL)
#define IL2CPP_STRUCT_DataColumn_FWDDECL
#include <Modloader/app/structs/DataColumn__Class.h>
#endif
#undef IL2CPP_STRUCT_DataColumn_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataColumn_DEFINED) && !defined(IL2CPP_STRUCT_DataColumn_FWDDECL)
#include <Modloader/app/structs/DataColumn.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataColumn.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
