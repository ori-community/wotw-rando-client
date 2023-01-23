#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryCrossAppDomainString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryCrossAppDomainString_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryCrossAppDomainString_DEFINED)
#include <Modloader/app/structs/BinaryCrossAppDomainString__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryCrossAppDomainString__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryCrossAppDomainString_DEFINED
struct BinaryCrossAppDomainString__Class;
struct BinaryCrossAppDomainString {
    struct BinaryCrossAppDomainString__Class* klass;
    MonitorData* monitor;
    struct BinaryCrossAppDomainString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryCrossAppDomainString_FWDDECL)
#define IL2CPP_STRUCT_BinaryCrossAppDomainString_FWDDECL
#include <Modloader/app/structs/BinaryCrossAppDomainString__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryCrossAppDomainString_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryCrossAppDomainString_DEFINED) && !defined(IL2CPP_STRUCT_BinaryCrossAppDomainString_FWDDECL)
#include <Modloader/app/structs/BinaryCrossAppDomainString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryCrossAppDomainString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
