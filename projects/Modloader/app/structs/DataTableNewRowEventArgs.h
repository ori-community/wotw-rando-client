#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTableNewRowEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTableNewRowEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableNewRowEventArgs_DEFINED)
#include <Modloader/app/structs/DataTableNewRowEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_DataTableNewRowEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTableNewRowEventArgs_DEFINED
struct DataTableNewRowEventArgs__Class;
struct DataTableNewRowEventArgs {
    struct DataTableNewRowEventArgs__Class* klass;
    MonitorData* monitor;
    struct DataTableNewRowEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTableNewRowEventArgs_FWDDECL)
#define IL2CPP_STRUCT_DataTableNewRowEventArgs_FWDDECL
#include <Modloader/app/structs/DataTableNewRowEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_DataTableNewRowEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableNewRowEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_DataTableNewRowEventArgs_FWDDECL)
#include <Modloader/app/structs/DataTableNewRowEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTableNewRowEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
