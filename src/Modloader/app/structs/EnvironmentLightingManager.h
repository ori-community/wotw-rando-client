#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnvironmentLightingManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnvironmentLightingManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLightingManager_DEFINED)
#include <Modloader/app/structs/EnvironmentLightingManager__Fields.h>
#if defined(IL2CPP_STRUCT_EnvironmentLightingManager__Fields_DEFINED)
#define IL2CPP_STRUCT_EnvironmentLightingManager_DEFINED
struct EnvironmentLightingManager__Class;
struct EnvironmentLightingManager {
    struct EnvironmentLightingManager__Class* klass;
    MonitorData* monitor;
    struct EnvironmentLightingManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnvironmentLightingManager_FWDDECL)
#define IL2CPP_STRUCT_EnvironmentLightingManager_FWDDECL
#include <Modloader/app/structs/EnvironmentLightingManager__Class.h>
#endif
#undef IL2CPP_STRUCT_EnvironmentLightingManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnvironmentLightingManager_DEFINED) && !defined(IL2CPP_STRUCT_EnvironmentLightingManager_FWDDECL)
#include <Modloader/app/structs/EnvironmentLightingManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnvironmentLightingManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
