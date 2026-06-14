#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberSwarmPOI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberSwarmPOI_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmPOI_DEFINED)
#include <Modloader/app/structs/UberSwarmPOI__Fields.h>
#if defined(IL2CPP_STRUCT_UberSwarmPOI__Fields_DEFINED)
#define IL2CPP_STRUCT_UberSwarmPOI_DEFINED
struct UberSwarmPOI__Class;
struct UberSwarmPOI {
    struct UberSwarmPOI__Class* klass;
    MonitorData* monitor;
    struct UberSwarmPOI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberSwarmPOI_FWDDECL)
#define IL2CPP_STRUCT_UberSwarmPOI_FWDDECL
#include <Modloader/app/structs/UberSwarmPOI__Class.h>
#endif
#undef IL2CPP_STRUCT_UberSwarmPOI_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmPOI_DEFINED) && !defined(IL2CPP_STRUCT_UberSwarmPOI_FWDDECL)
#include <Modloader/app/structs/UberSwarmPOI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberSwarmPOI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
