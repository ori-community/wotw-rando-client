#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskNode__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_BehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_TaskNode__Fields_DEFINED
struct MoonReference_1_Moon_BehaviourSystem_ITask_;
struct ITask;
struct TaskNode__Fields {
    struct BehaviourNode__Fields _;
    struct MoonReference_1_Moon_BehaviourSystem_ITask_* m_task;
    struct ITask* m_resolvedTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaskNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_TaskNode__Fields_FWDDECL
#include <Modloader/app/structs/ITask.h>
#include <Modloader/app/structs/MoonReference_1_Moon_BehaviourSystem_ITask_.h>
#endif
#undef IL2CPP_STRUCT_TaskNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TaskNode__Fields_FWDDECL)
#include <Modloader/app/structs/TaskNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
