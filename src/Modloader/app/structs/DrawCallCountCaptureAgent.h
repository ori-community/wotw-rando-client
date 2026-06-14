#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrawCallCountCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrawCallCountCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawCallCountCaptureAgent_DEFINED)
#define IL2CPP_STRUCT_DrawCallCountCaptureAgent_DEFINED
struct DrawCallCountCaptureAgent__Class;
struct DrawCallCountCaptureAgent {
    struct DrawCallCountCaptureAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DrawCallCountCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_DrawCallCountCaptureAgent_FWDDECL
#include <Modloader/app/structs/DrawCallCountCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_DrawCallCountCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawCallCountCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_DrawCallCountCaptureAgent_FWDDECL)
#include <Modloader/app/structs/DrawCallCountCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrawCallCountCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
