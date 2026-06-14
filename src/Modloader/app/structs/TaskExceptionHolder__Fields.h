#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskExceptionHolder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskExceptionHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskExceptionHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_TaskExceptionHolder__Fields_DEFINED
struct Task;
struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_;
struct ExceptionDispatchInfo;
struct __declspec(align(8)) TaskExceptionHolder__Fields {
    struct Task* m_task;
    struct List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_* m_faultExceptions;
    struct ExceptionDispatchInfo* m_cancellationException;
    bool m_isHandled;
};
#endif
#if !defined(IL2CPP_STRUCT_TaskExceptionHolder__Fields_FWDDECL)
#define IL2CPP_STRUCT_TaskExceptionHolder__Fields_FWDDECL
#include <Modloader/app/structs/ExceptionDispatchInfo.h>
#include <Modloader/app/structs/List_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_.h>
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_TaskExceptionHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskExceptionHolder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TaskExceptionHolder__Fields_FWDDECL)
#include <Modloader/app/structs/TaskExceptionHolder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskExceptionHolder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
