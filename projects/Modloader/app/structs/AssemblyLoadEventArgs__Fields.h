#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyLoadEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyLoadEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyLoadEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyLoadEventArgs__Fields_DEFINED
struct Assembly;
struct __declspec(align(8)) AssemblyLoadEventArgs__Fields {
    struct Assembly* m_loadedAssembly;
};
#endif
#if !defined(IL2CPP_STRUCT_AssemblyLoadEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_AssemblyLoadEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/Assembly.h>
#endif
#undef IL2CPP_STRUCT_AssemblyLoadEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyLoadEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyLoadEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/AssemblyLoadEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyLoadEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
