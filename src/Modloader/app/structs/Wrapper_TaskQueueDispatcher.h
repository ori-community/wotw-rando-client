#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Wrapper_TaskQueueDispatcher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Wrapper_TaskQueueDispatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wrapper_TaskQueueDispatcher_DEFINED)
#define IL2CPP_STRUCT_Wrapper_TaskQueueDispatcher_DEFINED
struct Wrapper_TaskQueueDispatcher__Class;
struct Wrapper_TaskQueueDispatcher {
    struct Wrapper_TaskQueueDispatcher__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Wrapper_TaskQueueDispatcher_FWDDECL)
#define IL2CPP_STRUCT_Wrapper_TaskQueueDispatcher_FWDDECL
#include <Modloader/app/structs/Wrapper_TaskQueueDispatcher__Class.h>
#endif
#undef IL2CPP_STRUCT_Wrapper_TaskQueueDispatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wrapper_TaskQueueDispatcher_DEFINED) && !defined(IL2CPP_STRUCT_Wrapper_TaskQueueDispatcher_FWDDECL)
#include <Modloader/app/structs/Wrapper_TaskQueueDispatcher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Wrapper_TaskQueueDispatcher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
