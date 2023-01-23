#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Queue_QueueEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Queue_QueueEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Queue_QueueEnumerator_DEFINED)
#include <Modloader/app/structs/Queue_QueueEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_Queue_QueueEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_Queue_QueueEnumerator_DEFINED
struct Queue_QueueEnumerator__Class;
struct Queue_QueueEnumerator {
    struct Queue_QueueEnumerator__Class* klass;
    MonitorData* monitor;
    struct Queue_QueueEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Queue_QueueEnumerator_FWDDECL)
#define IL2CPP_STRUCT_Queue_QueueEnumerator_FWDDECL
#include <Modloader/app/structs/Queue_QueueEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_Queue_QueueEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_Queue_QueueEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_Queue_QueueEnumerator_FWDDECL)
#include <Modloader/app/structs/Queue_QueueEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Queue_QueueEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
