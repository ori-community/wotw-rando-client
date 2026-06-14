#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataTableCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataTableCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableCollection_DEFINED)
#include <Modloader/app/structs/DataTableCollection__Fields.h>
#if defined(IL2CPP_STRUCT_DataTableCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DataTableCollection_DEFINED
struct DataTableCollection__Class;
struct DataTableCollection {
    struct DataTableCollection__Class* klass;
    MonitorData* monitor;
    struct DataTableCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataTableCollection_FWDDECL)
#define IL2CPP_STRUCT_DataTableCollection_FWDDECL
#include <Modloader/app/structs/DataTableCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_DataTableCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataTableCollection_DEFINED) && !defined(IL2CPP_STRUCT_DataTableCollection_FWDDECL)
#include <Modloader/app/structs/DataTableCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataTableCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
