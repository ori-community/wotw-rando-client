#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITelemetryProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITelemetryProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITelemetryProvider_DEFINED)
#define IL2CPP_STRUCT_ITelemetryProvider_DEFINED
struct ITelemetryProvider__Class;
struct ITelemetryProvider {
    struct ITelemetryProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITelemetryProvider_FWDDECL)
#define IL2CPP_STRUCT_ITelemetryProvider_FWDDECL
#include <Modloader/app/structs/ITelemetryProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ITelemetryProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITelemetryProvider_DEFINED) && !defined(IL2CPP_STRUCT_ITelemetryProvider_FWDDECL)
#include <Modloader/app/structs/ITelemetryProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITelemetryProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
