#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyFileVersionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyFileVersionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyFileVersionAttribute_DEFINED)
#include <Modloader/app/structs/AssemblyFileVersionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyFileVersionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyFileVersionAttribute_DEFINED
struct AssemblyFileVersionAttribute__Class;
struct AssemblyFileVersionAttribute {
    struct AssemblyFileVersionAttribute__Class* klass;
    MonitorData* monitor;
    struct AssemblyFileVersionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyFileVersionAttribute_FWDDECL)
#define IL2CPP_STRUCT_AssemblyFileVersionAttribute_FWDDECL
#include <Modloader/app/structs/AssemblyFileVersionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyFileVersionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyFileVersionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyFileVersionAttribute_FWDDECL)
#include <Modloader/app/structs/AssemblyFileVersionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyFileVersionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
