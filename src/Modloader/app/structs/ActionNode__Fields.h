#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionNode__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_BehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionNode__Fields_DEFINED
struct Action_1_Moon_BehaviourSystem_Action_;
struct Action;
struct Action_1__Array;
struct List_1_Moon_BehaviourSystem_Action_;
struct ActionNode__Fields {
    struct BehaviourNode__Fields _;
    struct Action_1_Moon_BehaviourSystem_Action_* OnActionAdded;
    struct Action* OnActionRemoved;
    struct Action_1__Array* m_actions;
    struct List_1_Moon_BehaviourSystem_Action_* m_actionsList;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActionNode__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_BehaviourSystem_Action_.h>
#include <Modloader/app/structs/Action_1__Array.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_Action_.h>
#endif
#undef IL2CPP_STRUCT_ActionNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActionNode__Fields_FWDDECL)
#include <Modloader/app/structs/ActionNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
