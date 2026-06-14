#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteeringForcesSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteeringForcesSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForcesSettings_DEFINED)
#include <Modloader/app/structs/SteeringForcesSettings__Fields.h>
#if defined(IL2CPP_STRUCT_SteeringForcesSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SteeringForcesSettings_DEFINED
struct SteeringForcesSettings__Class;
struct SteeringForcesSettings {
    struct SteeringForcesSettings__Class* klass;
    MonitorData* monitor;
    struct SteeringForcesSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteeringForcesSettings_FWDDECL)
#define IL2CPP_STRUCT_SteeringForcesSettings_FWDDECL
#include <Modloader/app/structs/SteeringForcesSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SteeringForcesSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForcesSettings_DEFINED) && !defined(IL2CPP_STRUCT_SteeringForcesSettings_FWDDECL)
#include <Modloader/app/structs/SteeringForcesSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteeringForcesSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
