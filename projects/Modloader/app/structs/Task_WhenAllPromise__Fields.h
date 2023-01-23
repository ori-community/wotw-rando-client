#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Task_WhenAllPromise__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Task_WhenAllPromise__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_WhenAllPromise__Fields_DEFINED)
#include <Modloader/app/structs/Task_1_VoidTaskResult___Fields.h>
#if defined(IL2CPP_STRUCT_Task_1_VoidTaskResult___Fields_DEFINED)
#define IL2CPP_STRUCT_Task_WhenAllPromise__Fields_DEFINED
struct Task__Array;
struct Task_WhenAllPromise__Fields {
    struct Task_1_VoidTaskResult___Fields _;
    struct Task__Array* m_tasks;
    int32_t m_count;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Task_WhenAllPromise__Fields_FWDDECL)
#define IL2CPP_STRUCT_Task_WhenAllPromise__Fields_FWDDECL
#include <Modloader/app/structs/Task__Array.h>
#endif
#undef IL2CPP_STRUCT_Task_WhenAllPromise__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_WhenAllPromise__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Task_WhenAllPromise__Fields_FWDDECL)
#include <Modloader/app/structs/Task_WhenAllPromise__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Task_WhenAllPromise__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
