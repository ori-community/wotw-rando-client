#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CaptureAgentUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CaptureAgentUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureAgentUtils_DEFINED)
#define IL2CPP_STRUCT_CaptureAgentUtils_DEFINED
struct CaptureAgentUtils__Class;
struct CaptureAgentUtils {
    struct CaptureAgentUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CaptureAgentUtils_FWDDECL)
#define IL2CPP_STRUCT_CaptureAgentUtils_FWDDECL
#include <Modloader/app/structs/CaptureAgentUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_CaptureAgentUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaptureAgentUtils_DEFINED) && !defined(IL2CPP_STRUCT_CaptureAgentUtils_FWDDECL)
#include <Modloader/app/structs/CaptureAgentUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CaptureAgentUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
