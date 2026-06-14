#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryCrossAppDomainAssembly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryCrossAppDomainAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryCrossAppDomainAssembly_DEFINED)
#include <Modloader/app/structs/BinaryCrossAppDomainAssembly__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryCrossAppDomainAssembly__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryCrossAppDomainAssembly_DEFINED
struct BinaryCrossAppDomainAssembly__Class;
struct BinaryCrossAppDomainAssembly {
    struct BinaryCrossAppDomainAssembly__Class* klass;
    MonitorData* monitor;
    struct BinaryCrossAppDomainAssembly__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryCrossAppDomainAssembly_FWDDECL)
#define IL2CPP_STRUCT_BinaryCrossAppDomainAssembly_FWDDECL
#include <Modloader/app/structs/BinaryCrossAppDomainAssembly__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryCrossAppDomainAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryCrossAppDomainAssembly_DEFINED) && !defined(IL2CPP_STRUCT_BinaryCrossAppDomainAssembly_FWDDECL)
#include <Modloader/app/structs/BinaryCrossAppDomainAssembly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryCrossAppDomainAssembly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
