#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Task_ContingentProperties__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Task_ContingentProperties__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_ContingentProperties__Fields_DEFINED)
#include <Modloader/app/structs/CancellationToken.h>
#if defined(IL2CPP_STRUCT_CancellationToken_DEFINED)
#define IL2CPP_STRUCT_Task_ContingentProperties__Fields_DEFINED
struct ExecutionContext;
struct ManualResetEventSlim;
struct TaskExceptionHolder;
struct Shared_1_System_Threading_CancellationTokenRegistration_;
struct List_1_System_Threading_Tasks_Task_;
struct __declspec(align(8)) Task_ContingentProperties__Fields {
    struct ExecutionContext* m_capturedContext;
    struct ManualResetEventSlim* m_completionEvent;
    struct TaskExceptionHolder* m_exceptionsHolder;
    struct CancellationToken m_cancellationToken;
    struct Shared_1_System_Threading_CancellationTokenRegistration_* m_cancellationRegistration;
    int32_t m_internalCancellationRequested;
    int32_t m_completionCountdown;
    struct List_1_System_Threading_Tasks_Task_* m_exceptionalChildren;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Task_ContingentProperties__Fields_FWDDECL)
#define IL2CPP_STRUCT_Task_ContingentProperties__Fields_FWDDECL
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/List_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/ManualResetEventSlim.h>
#include <Modloader/app/structs/Shared_1_System_Threading_CancellationTokenRegistration_.h>
#include <Modloader/app/structs/TaskExceptionHolder.h>
#endif
#undef IL2CPP_STRUCT_Task_ContingentProperties__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_ContingentProperties__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Task_ContingentProperties__Fields_FWDDECL)
#include <Modloader/app/structs/Task_ContingentProperties__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Task_ContingentProperties__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
