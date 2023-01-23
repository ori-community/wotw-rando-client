#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeathInformation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeathInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathInformation_DEFINED)
#include <Modloader/app/structs/DeathInformation__Fields.h>
#if defined(IL2CPP_STRUCT_DeathInformation__Fields_DEFINED)
#define IL2CPP_STRUCT_DeathInformation_DEFINED
struct DeathInformation__Class;
struct DeathInformation {
    struct DeathInformation__Class* klass;
    MonitorData* monitor;
    struct DeathInformation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeathInformation_FWDDECL)
#define IL2CPP_STRUCT_DeathInformation_FWDDECL
#include <Modloader/app/structs/DeathInformation__Class.h>
#endif
#undef IL2CPP_STRUCT_DeathInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathInformation_DEFINED) && !defined(IL2CPP_STRUCT_DeathInformation_FWDDECL)
#include <Modloader/app/structs/DeathInformation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeathInformation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
