#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsNotRunningBehaviourCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsNotRunningBehaviourCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsNotRunningBehaviourCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED)
#define IL2CPP_STRUCT_IsNotRunningBehaviourCondition__Fields_DEFINED
struct List_1_Moon_BehaviourSystem_BehaviourNode_;
struct List_1_Moon_BehaviourSystem_EntityTask_;
struct List_1_Moon_MoonReference_1__7;
struct List_1_Moon_BehaviourSystem_ITask_;
struct IsNotRunningBehaviourCondition__Fields {
    struct Condition_1__Fields _;
    struct List_1_Moon_BehaviourSystem_BehaviourNode_* Behaviours;
    struct List_1_Moon_BehaviourSystem_EntityTask_* EntityBehaviours;
    struct List_1_Moon_MoonReference_1__7* Tasks;
    struct List_1_Moon_BehaviourSystem_ITask_* m_resolvedTasks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsNotRunningBehaviourCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_IsNotRunningBehaviourCondition__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_BehaviourNode_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_EntityTask_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_ITask_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__7.h>
#endif
#undef IL2CPP_STRUCT_IsNotRunningBehaviourCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsNotRunningBehaviourCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IsNotRunningBehaviourCondition__Fields_FWDDECL)
#include <Modloader/app/structs/IsNotRunningBehaviourCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsNotRunningBehaviourCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
