#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyBuilder__Fields_DEFINED)
#include <Modloader/app/structs/Assembly__Fields.h>
#if defined(IL2CPP_STRUCT_Assembly__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyBuilder__Fields_DEFINED
struct AssemblyBuilder__Fields {
    struct Assembly__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_AssemblyBuilder__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AssemblyBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/AssemblyBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
