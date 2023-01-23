#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTableClearEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTableClearEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableClearEventArgs_DEFINED)
#include <Modloader/app/structs/DataTableClearEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_DataTableClearEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTableClearEventArgs_DEFINED
struct DataTableClearEventArgs__Class;
struct DataTableClearEventArgs {
    struct DataTableClearEventArgs__Class* klass;
    MonitorData* monitor;
    struct DataTableClearEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTableClearEventArgs_FWDDECL)
#define IL2CPP_STRUCT_DataTableClearEventArgs_FWDDECL
#include <Modloader/app/structs/DataTableClearEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_DataTableClearEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableClearEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_DataTableClearEventArgs_FWDDECL)
#include <Modloader/app/structs/DataTableClearEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTableClearEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
