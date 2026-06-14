#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyName_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyName_DEFINED)
#include <Modloader/app/structs/AssemblyName__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyName__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyName_DEFINED
struct AssemblyName__Class;
struct AssemblyName {
    struct AssemblyName__Class* klass;
    MonitorData* monitor;
    struct AssemblyName__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyName_FWDDECL)
#define IL2CPP_STRUCT_AssemblyName_FWDDECL
#include <Modloader/app/structs/AssemblyName__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyName_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyName_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyName_FWDDECL)
#include <Modloader/app/structs/AssemblyName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
