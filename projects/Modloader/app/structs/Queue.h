#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Queue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Queue_INITIALIZING
#if !defined(IL2CPP_STRUCT_Queue_DEFINED)
#include <Modloader/app/structs/Queue__Fields.h>
#if defined(IL2CPP_STRUCT_Queue__Fields_DEFINED)
#define IL2CPP_STRUCT_Queue_DEFINED
struct Queue__Class;
struct Queue {
    struct Queue__Class* klass;
    MonitorData* monitor;
    struct Queue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Queue_FWDDECL)
#define IL2CPP_STRUCT_Queue_FWDDECL
#include <Modloader/app/structs/Queue__Class.h>
#endif
#undef IL2CPP_STRUCT_Queue_INITIALIZING
#if !defined(IL2CPP_STRUCT_Queue_DEFINED) && !defined(IL2CPP_STRUCT_Queue_FWDDECL)
#include <Modloader/app/structs/Queue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Queue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
