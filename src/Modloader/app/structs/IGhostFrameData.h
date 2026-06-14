#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGhostFrameData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGhostFrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGhostFrameData_DEFINED)
#define IL2CPP_STRUCT_IGhostFrameData_DEFINED
struct IGhostFrameData__Class;
struct IGhostFrameData {
    struct IGhostFrameData__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGhostFrameData_FWDDECL)
#define IL2CPP_STRUCT_IGhostFrameData_FWDDECL
#include <Modloader/app/structs/IGhostFrameData__Class.h>
#endif
#undef IL2CPP_STRUCT_IGhostFrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGhostFrameData_DEFINED) && !defined(IL2CPP_STRUCT_IGhostFrameData_FWDDECL)
#include <Modloader/app/structs/IGhostFrameData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGhostFrameData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
