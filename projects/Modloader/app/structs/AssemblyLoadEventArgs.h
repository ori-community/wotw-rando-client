#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyLoadEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyLoadEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyLoadEventArgs_DEFINED)
#include <Modloader/app/structs/AssemblyLoadEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyLoadEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyLoadEventArgs_DEFINED
struct AssemblyLoadEventArgs__Class;
struct AssemblyLoadEventArgs {
    struct AssemblyLoadEventArgs__Class* klass;
    MonitorData* monitor;
    struct AssemblyLoadEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyLoadEventArgs_FWDDECL)
#define IL2CPP_STRUCT_AssemblyLoadEventArgs_FWDDECL
#include <Modloader/app/structs/AssemblyLoadEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyLoadEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyLoadEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyLoadEventArgs_FWDDECL)
#include <Modloader/app/structs/AssemblyLoadEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyLoadEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
