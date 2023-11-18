#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoolCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoolCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolCaptureAgent_DEFINED)
#define IL2CPP_STRUCT_PoolCaptureAgent_DEFINED
struct PoolCaptureAgent__Class;
struct PoolCaptureAgent {
    struct PoolCaptureAgent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PoolCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_PoolCaptureAgent_FWDDECL
#include <Modloader/app/structs/PoolCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_PoolCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_PoolCaptureAgent_FWDDECL)
#include <Modloader/app/structs/PoolCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoolCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
