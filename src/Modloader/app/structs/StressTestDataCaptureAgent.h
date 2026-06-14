#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTestDataCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTestDataCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTestDataCaptureAgent_DEFINED)
#define IL2CPP_STRUCT_StressTestDataCaptureAgent_DEFINED
struct StressTestDataCaptureAgent__Class;
struct StressTestDataCaptureAgent {
    struct StressTestDataCaptureAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_StressTestDataCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_StressTestDataCaptureAgent_FWDDECL
#include <Modloader/app/structs/StressTestDataCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_StressTestDataCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTestDataCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_StressTestDataCaptureAgent_FWDDECL)
#include <Modloader/app/structs/StressTestDataCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTestDataCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
