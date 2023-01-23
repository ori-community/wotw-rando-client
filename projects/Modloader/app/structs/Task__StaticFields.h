#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Task__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Task__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Task__StaticFields_DEFINED
struct Task;
struct StackGuard;
struct TaskFactory;
struct Object;
struct Dictionary_2_System_Int32_System_Threading_Tasks_Task_;
struct Action_1_Object_;
struct Func_1_System_Threading_Tasks_Task_ContingentProperties_;
struct Predicate_1_System_Threading_Tasks_Task_;
struct ContextCallback;
struct Predicate_1_Object_;
struct Task__StaticFields {
    struct Task* t_currentTask;
    struct StackGuard* t_stackGuard;
    int32_t s_taskIdCounter;
    struct TaskFactory* s_factory;
    struct Object* s_taskCompletionSentinel;
    bool s_asyncDebuggingEnabled;
    struct Dictionary_2_System_Int32_System_Threading_Tasks_Task_* s_currentActiveTasks;
    struct Object* s_activeTasksLock;
    struct Action_1_Object_* s_taskCancelCallback;
    struct Func_1_System_Threading_Tasks_Task_ContingentProperties_* s_createContingentProperties;
    struct Task* s_completedTask;
    struct Predicate_1_System_Threading_Tasks_Task_* s_IsExceptionObservedByParentPredicate;
    struct ContextCallback* s_ecCallback;
    struct Predicate_1_Object_* s_IsTaskContinuationNullPredicate;
};
#endif
#if !defined(IL2CPP_STRUCT_Task__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Task__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/ContextCallback.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/Func_1_System_Threading_Tasks_Task_ContingentProperties_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_Object_.h>
#include <Modloader/app/structs/Predicate_1_System_Threading_Tasks_Task_.h>
#include <Modloader/app/structs/StackGuard.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskFactory.h>
#endif
#undef IL2CPP_STRUCT_Task__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Task__StaticFields_FWDDECL)
#include <Modloader/app/structs/Task__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Task__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
