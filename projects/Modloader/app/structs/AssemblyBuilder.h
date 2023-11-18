#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyBuilder_DEFINED)
#include <Modloader/app/structs/AssemblyBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyBuilder_DEFINED
struct AssemblyBuilder__Class;
struct AssemblyBuilder {
    struct AssemblyBuilder__Class* klass;
    MonitorData* monitor;
    struct AssemblyBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyBuilder_FWDDECL)
#define IL2CPP_STRUCT_AssemblyBuilder_FWDDECL
#include <Modloader/app/structs/AssemblyBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyBuilder_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyBuilder_FWDDECL)
#include <Modloader/app/structs/AssemblyBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
