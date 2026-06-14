#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTablePropertyDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTablePropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTablePropertyDescriptor_DEFINED)
#include <Modloader/app/structs/DataTablePropertyDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_DataTablePropertyDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTablePropertyDescriptor_DEFINED
struct DataTablePropertyDescriptor__Class;
struct DataTablePropertyDescriptor {
    struct DataTablePropertyDescriptor__Class* klass;
    MonitorData* monitor;
    struct DataTablePropertyDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTablePropertyDescriptor_FWDDECL)
#define IL2CPP_STRUCT_DataTablePropertyDescriptor_FWDDECL
#include <Modloader/app/structs/DataTablePropertyDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_DataTablePropertyDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTablePropertyDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_DataTablePropertyDescriptor_FWDDECL)
#include <Modloader/app/structs/DataTablePropertyDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTablePropertyDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
