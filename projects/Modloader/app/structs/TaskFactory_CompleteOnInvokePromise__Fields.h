#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskFactory_CompleteOnInvokePromise__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskFactory_CompleteOnInvokePromise__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskFactory_CompleteOnInvokePromise__Fields_DEFINED)
#include <Modloader/app/structs/Task_1_Task___Fields.h>
#if defined(IL2CPP_STRUCT_Task_1_Task___Fields_DEFINED)
#define IL2CPP_STRUCT_TaskFactory_CompleteOnInvokePromise__Fields_DEFINED
struct IList_1_System_Threading_Tasks_Task_;
struct TaskFactory_CompleteOnInvokePromise__Fields {
    struct Task_1_Task___Fields _;
    struct IList_1_System_Threading_Tasks_Task_* _tasks;
    int32_t m_firstTaskAlreadyCompleted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaskFactory_CompleteOnInvokePromise__Fields_FWDDECL)
#define IL2CPP_STRUCT_TaskFactory_CompleteOnInvokePromise__Fields_FWDDECL
#include <Modloader/app/structs/IList_1_System_Threading_Tasks_Task_.h>
#endif
#undef IL2CPP_STRUCT_TaskFactory_CompleteOnInvokePromise__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskFactory_CompleteOnInvokePromise__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TaskFactory_CompleteOnInvokePromise__Fields_FWDDECL)
#include <Modloader/app/structs/TaskFactory_CompleteOnInvokePromise__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskFactory_CompleteOnInvokePromise__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
