#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerConfigurationProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerConfigurationProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfigurationProperties_DEFINED)
#define IL2CPP_STRUCT_ServerConfigurationProperties_DEFINED
struct ServerConfigurationProperties {
    float MaxRecordingTime;
    float MinRecordingTime;
    bool WaitForRigidbodies;
    int32_t SimulationTimeScale;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerConfigurationProperties_FWDDECL)
#define IL2CPP_STRUCT_ServerConfigurationProperties_FWDDECL
#endif
#undef IL2CPP_STRUCT_ServerConfigurationProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerConfigurationProperties_DEFINED) && !defined(IL2CPP_STRUCT_ServerConfigurationProperties_FWDDECL)
#include <Modloader/app/structs/ServerConfigurationProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerConfigurationProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
