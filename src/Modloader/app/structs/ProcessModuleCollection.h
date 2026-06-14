#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProcessModuleCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProcessModuleCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessModuleCollection_DEFINED)
#include <Modloader/app/structs/ProcessModuleCollection__Fields.h>
#if defined(IL2CPP_STRUCT_ProcessModuleCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_ProcessModuleCollection_DEFINED
struct ProcessModuleCollection__Class;
struct ProcessModuleCollection {
    struct ProcessModuleCollection__Class* klass;
    MonitorData* monitor;
    struct ProcessModuleCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProcessModuleCollection_FWDDECL)
#define IL2CPP_STRUCT_ProcessModuleCollection_FWDDECL
#include <Modloader/app/structs/ProcessModuleCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_ProcessModuleCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessModuleCollection_DEFINED) && !defined(IL2CPP_STRUCT_ProcessModuleCollection_FWDDECL)
#include <Modloader/app/structs/ProcessModuleCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProcessModuleCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
