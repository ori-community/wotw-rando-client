#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabTelemetryProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabTelemetryProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabTelemetryProvider_DEFINED)
#include <Modloader/app/structs/PlayFabTelemetryProvider__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabTelemetryProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabTelemetryProvider_DEFINED
struct PlayFabTelemetryProvider__Class;
struct PlayFabTelemetryProvider {
    struct PlayFabTelemetryProvider__Class* klass;
    MonitorData* monitor;
    struct PlayFabTelemetryProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabTelemetryProvider_FWDDECL)
#define IL2CPP_STRUCT_PlayFabTelemetryProvider_FWDDECL
#include <Modloader/app/structs/PlayFabTelemetryProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabTelemetryProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabTelemetryProvider_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabTelemetryProvider_FWDDECL)
#include <Modloader/app/structs/PlayFabTelemetryProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabTelemetryProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
