#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT__AssemblyName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT__AssemblyName_INITIALIZING
#if !defined(IL2CPP_STRUCT__AssemblyName_DEFINED)
#define IL2CPP_STRUCT__AssemblyName_DEFINED
struct _AssemblyName__Class;
struct _AssemblyName {
    struct _AssemblyName__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT__AssemblyName_FWDDECL)
#define IL2CPP_STRUCT__AssemblyName_FWDDECL
#include <Modloader/app/structs/_AssemblyName__Class.h>
#endif
#undef IL2CPP_STRUCT__AssemblyName_INITIALIZING
#if !defined(IL2CPP_STRUCT__AssemblyName_DEFINED) && !defined(IL2CPP_STRUCT__AssemblyName_FWDDECL)
#include <Modloader/app/structs/_AssemblyName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/_AssemblyName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
