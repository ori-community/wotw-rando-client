#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonIntegrationSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonIntegrationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonIntegrationSettings_DEFINED)
#include <Modloader/app/structs/MoonIntegrationSettings__Fields.h>
#if defined(IL2CPP_STRUCT_MoonIntegrationSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonIntegrationSettings_DEFINED
struct MoonIntegrationSettings__Class;
struct MoonIntegrationSettings {
    struct MoonIntegrationSettings__Class* klass;
    MonitorData* monitor;
    struct MoonIntegrationSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonIntegrationSettings_FWDDECL)
#define IL2CPP_STRUCT_MoonIntegrationSettings_FWDDECL
#include <Modloader/app/structs/MoonIntegrationSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonIntegrationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonIntegrationSettings_DEFINED) && !defined(IL2CPP_STRUCT_MoonIntegrationSettings_FWDDECL)
#include <Modloader/app/structs/MoonIntegrationSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonIntegrationSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
