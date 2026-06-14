#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatProviderZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatProviderZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatProviderZone_DEFINED)
#include <Modloader/app/structs/FloatProviderZone__Fields.h>
#if defined(IL2CPP_STRUCT_FloatProviderZone__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatProviderZone_DEFINED
struct FloatProviderZone__Class;
struct FloatProviderZone {
    struct FloatProviderZone__Class* klass;
    MonitorData* monitor;
    struct FloatProviderZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatProviderZone_FWDDECL)
#define IL2CPP_STRUCT_FloatProviderZone_FWDDECL
#include <Modloader/app/structs/FloatProviderZone__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatProviderZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatProviderZone_DEFINED) && !defined(IL2CPP_STRUCT_FloatProviderZone_FWDDECL)
#include <Modloader/app/structs/FloatProviderZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatProviderZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
