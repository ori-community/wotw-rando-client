#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Task_DelayPromise_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Task_DelayPromise_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_DelayPromise_DEFINED)
#include <Modloader/app/structs/Task_DelayPromise__Fields.h>
#if defined(IL2CPP_STRUCT_Task_DelayPromise__Fields_DEFINED)
#define IL2CPP_STRUCT_Task_DelayPromise_DEFINED
struct Task_DelayPromise__Class;
struct Task_DelayPromise {
    struct Task_DelayPromise__Class* klass;
    MonitorData* monitor;
    struct Task_DelayPromise__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Task_DelayPromise_FWDDECL)
#define IL2CPP_STRUCT_Task_DelayPromise_FWDDECL
#include <Modloader/app/structs/Task_DelayPromise__Class.h>
#endif
#undef IL2CPP_STRUCT_Task_DelayPromise_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_DelayPromise_DEFINED) && !defined(IL2CPP_STRUCT_Task_DelayPromise_FWDDECL)
#include <Modloader/app/structs/Task_DelayPromise.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Task_DelayPromise.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
