#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTableConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTableConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableConverter_DEFINED)
#define IL2CPP_STRUCT_DataTableConverter_DEFINED
struct DataTableConverter__Class;
struct DataTableConverter {
    struct DataTableConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DataTableConverter_FWDDECL)
#define IL2CPP_STRUCT_DataTableConverter_FWDDECL
#include <Modloader/app/structs/DataTableConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_DataTableConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableConverter_DEFINED) && !defined(IL2CPP_STRUCT_DataTableConverter_FWDDECL)
#include <Modloader/app/structs/DataTableConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTableConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
