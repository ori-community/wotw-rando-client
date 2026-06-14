#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BinaryCrossAppDomainMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BinaryCrossAppDomainMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryCrossAppDomainMap_DEFINED)
#include <Modloader/app/structs/BinaryCrossAppDomainMap__Fields.h>
#if defined(IL2CPP_STRUCT_BinaryCrossAppDomainMap__Fields_DEFINED)
#define IL2CPP_STRUCT_BinaryCrossAppDomainMap_DEFINED
struct BinaryCrossAppDomainMap__Class;
struct BinaryCrossAppDomainMap {
    struct BinaryCrossAppDomainMap__Class* klass;
    MonitorData* monitor;
    struct BinaryCrossAppDomainMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BinaryCrossAppDomainMap_FWDDECL)
#define IL2CPP_STRUCT_BinaryCrossAppDomainMap_FWDDECL
#include <Modloader/app/structs/BinaryCrossAppDomainMap__Class.h>
#endif
#undef IL2CPP_STRUCT_BinaryCrossAppDomainMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_BinaryCrossAppDomainMap_DEFINED) && !defined(IL2CPP_STRUCT_BinaryCrossAppDomainMap_FWDDECL)
#include <Modloader/app/structs/BinaryCrossAppDomainMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BinaryCrossAppDomainMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
