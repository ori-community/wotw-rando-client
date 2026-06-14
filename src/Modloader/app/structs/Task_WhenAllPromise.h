#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Task_WhenAllPromise_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Task_WhenAllPromise_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_WhenAllPromise_DEFINED)
#include <Modloader/app/structs/Task_WhenAllPromise__Fields.h>
#if defined(IL2CPP_STRUCT_Task_WhenAllPromise__Fields_DEFINED)
#define IL2CPP_STRUCT_Task_WhenAllPromise_DEFINED
struct Task_WhenAllPromise__Class;
struct Task_WhenAllPromise {
    struct Task_WhenAllPromise__Class* klass;
    MonitorData* monitor;
    struct Task_WhenAllPromise__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Task_WhenAllPromise_FWDDECL)
#define IL2CPP_STRUCT_Task_WhenAllPromise_FWDDECL
#include <Modloader/app/structs/Task_WhenAllPromise__Class.h>
#endif
#undef IL2CPP_STRUCT_Task_WhenAllPromise_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_WhenAllPromise_DEFINED) && !defined(IL2CPP_STRUCT_Task_WhenAllPromise_FWDDECL)
#include <Modloader/app/structs/Task_WhenAllPromise.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Task_WhenAllPromise.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
