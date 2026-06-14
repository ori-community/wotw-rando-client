#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCaptureAgent_DEFINED)
#define IL2CPP_STRUCT_LightCaptureAgent_DEFINED
struct LightCaptureAgent__Class;
struct LightCaptureAgent {
    struct LightCaptureAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LightCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_LightCaptureAgent_FWDDECL
#include <Modloader/app/structs/LightCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_LightCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_LightCaptureAgent_FWDDECL)
#include <Modloader/app/structs/LightCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
