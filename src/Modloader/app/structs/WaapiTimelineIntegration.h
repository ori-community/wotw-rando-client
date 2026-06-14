#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaapiTimelineIntegration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaapiTimelineIntegration_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiTimelineIntegration_DEFINED)
#define IL2CPP_STRUCT_WaapiTimelineIntegration_DEFINED
struct WaapiTimelineIntegration__Class;
struct WaapiTimelineIntegration {
    struct WaapiTimelineIntegration__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WaapiTimelineIntegration_FWDDECL)
#define IL2CPP_STRUCT_WaapiTimelineIntegration_FWDDECL
#include <Modloader/app/structs/WaapiTimelineIntegration__Class.h>
#endif
#undef IL2CPP_STRUCT_WaapiTimelineIntegration_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiTimelineIntegration_DEFINED) && !defined(IL2CPP_STRUCT_WaapiTimelineIntegration_FWDDECL)
#include <Modloader/app/structs/WaapiTimelineIntegration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaapiTimelineIntegration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
