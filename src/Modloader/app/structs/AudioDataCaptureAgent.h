#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioDataCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioDataCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioDataCaptureAgent_DEFINED)
#define IL2CPP_STRUCT_AudioDataCaptureAgent_DEFINED
struct AudioDataCaptureAgent__Class;
struct AudioDataCaptureAgent {
    struct AudioDataCaptureAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AudioDataCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_AudioDataCaptureAgent_FWDDECL
#include <Modloader/app/structs/AudioDataCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioDataCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioDataCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_AudioDataCaptureAgent_FWDDECL)
#include <Modloader/app/structs/AudioDataCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioDataCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
