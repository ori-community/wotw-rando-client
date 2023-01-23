#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Queue_QueueDebugView_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Queue_QueueDebugView_INITIALIZING
#if !defined(IL2CPP_STRUCT_Queue_QueueDebugView_DEFINED)
#include <Modloader/app/structs/Queue_QueueDebugView__Fields.h>
#if defined(IL2CPP_STRUCT_Queue_QueueDebugView__Fields_DEFINED)
#define IL2CPP_STRUCT_Queue_QueueDebugView_DEFINED
struct Queue_QueueDebugView__Class;
struct Queue_QueueDebugView {
    struct Queue_QueueDebugView__Class* klass;
    MonitorData* monitor;
    struct Queue_QueueDebugView__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Queue_QueueDebugView_FWDDECL)
#define IL2CPP_STRUCT_Queue_QueueDebugView_FWDDECL
#include <Modloader/app/structs/Queue_QueueDebugView__Class.h>
#endif
#undef IL2CPP_STRUCT_Queue_QueueDebugView_INITIALIZING
#if !defined(IL2CPP_STRUCT_Queue_QueueDebugView_DEFINED) && !defined(IL2CPP_STRUCT_Queue_QueueDebugView_FWDDECL)
#include <Modloader/app/structs/Queue_QueueDebugView.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Queue_QueueDebugView.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
