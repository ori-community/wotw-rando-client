#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_TimerNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_TimerNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_TimerNode_DEFINED)
#include <Modloader/app/structs/TimerThread_TimerNode__Fields.h>
#if defined(IL2CPP_STRUCT_TimerThread_TimerNode__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerThread_TimerNode_DEFINED
struct TimerThread_TimerNode__Class;
struct TimerThread_TimerNode {
    struct TimerThread_TimerNode__Class* klass;
    MonitorData* monitor;
    struct TimerThread_TimerNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_TimerNode_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_TimerNode_FWDDECL
#include <Modloader/app/structs/TimerThread_TimerNode__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerThread_TimerNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_TimerNode_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_TimerNode_FWDDECL)
#include <Modloader/app/structs/TimerThread_TimerNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread_TimerNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
