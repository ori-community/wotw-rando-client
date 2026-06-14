#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTableClearEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTableClearEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableClearEventHandler_DEFINED)
#include <Modloader/app/structs/DataTableClearEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DataTableClearEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTableClearEventHandler_DEFINED
struct DataTableClearEventHandler__Class;
struct DataTableClearEventHandler {
    struct DataTableClearEventHandler__Class* klass;
    MonitorData* monitor;
    struct DataTableClearEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTableClearEventHandler_FWDDECL)
#define IL2CPP_STRUCT_DataTableClearEventHandler_FWDDECL
#include <Modloader/app/structs/DataTableClearEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DataTableClearEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableClearEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_DataTableClearEventHandler_FWDDECL)
#include <Modloader/app/structs/DataTableClearEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTableClearEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
