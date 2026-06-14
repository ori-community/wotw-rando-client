#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Water3Manager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Water3Manager_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3Manager_DEFINED)
#include <Modloader/app/structs/Water3Manager__Fields.h>
#if defined(IL2CPP_STRUCT_Water3Manager__Fields_DEFINED)
#define IL2CPP_STRUCT_Water3Manager_DEFINED
struct Water3Manager__Class;
struct Water3Manager {
    struct Water3Manager__Class* klass;
    MonitorData* monitor;
    struct Water3Manager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Water3Manager_FWDDECL)
#define IL2CPP_STRUCT_Water3Manager_FWDDECL
#include <Modloader/app/structs/Water3Manager__Class.h>
#endif
#undef IL2CPP_STRUCT_Water3Manager_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3Manager_DEFINED) && !defined(IL2CPP_STRUCT_Water3Manager_FWDDECL)
#include <Modloader/app/structs/Water3Manager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Water3Manager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
