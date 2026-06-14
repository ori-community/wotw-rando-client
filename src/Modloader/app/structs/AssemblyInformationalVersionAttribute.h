#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssemblyInformationalVersionAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssemblyInformationalVersionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyInformationalVersionAttribute_DEFINED)
#include <Modloader/app/structs/AssemblyInformationalVersionAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_AssemblyInformationalVersionAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_AssemblyInformationalVersionAttribute_DEFINED
struct AssemblyInformationalVersionAttribute__Class;
struct AssemblyInformationalVersionAttribute {
    struct AssemblyInformationalVersionAttribute__Class* klass;
    MonitorData* monitor;
    struct AssemblyInformationalVersionAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssemblyInformationalVersionAttribute_FWDDECL)
#define IL2CPP_STRUCT_AssemblyInformationalVersionAttribute_FWDDECL
#include <Modloader/app/structs/AssemblyInformationalVersionAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_AssemblyInformationalVersionAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssemblyInformationalVersionAttribute_DEFINED) && !defined(IL2CPP_STRUCT_AssemblyInformationalVersionAttribute_FWDDECL)
#include <Modloader/app/structs/AssemblyInformationalVersionAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssemblyInformationalVersionAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
