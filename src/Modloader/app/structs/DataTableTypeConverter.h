#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTableTypeConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTableTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableTypeConverter_DEFINED)
#include <Modloader/app/structs/DataTableTypeConverter__Fields.h>
#if defined(IL2CPP_STRUCT_DataTableTypeConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTableTypeConverter_DEFINED
struct DataTableTypeConverter__Class;
struct DataTableTypeConverter {
    struct DataTableTypeConverter__Class* klass;
    MonitorData* monitor;
    struct DataTableTypeConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTableTypeConverter_FWDDECL)
#define IL2CPP_STRUCT_DataTableTypeConverter_FWDDECL
#include <Modloader/app/structs/DataTableTypeConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_DataTableTypeConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableTypeConverter_DEFINED) && !defined(IL2CPP_STRUCT_DataTableTypeConverter_FWDDECL)
#include <Modloader/app/structs/DataTableTypeConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTableTypeConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
