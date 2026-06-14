#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionDecorator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionDecorator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionDecorator__Fields_DEFINED)
#include <Modloader/app/structs/DecoratorNode__Fields.h>
#if defined(IL2CPP_STRUCT_DecoratorNode__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionDecorator__Fields_DEFINED
struct Action_1_Moon_BehaviourSystem_Action_;
struct Action;
struct Action_1__Array;
struct List_1_Moon_BehaviourSystem_Action_;
struct ActionDecorator__Fields {
    struct DecoratorNode__Fields _;
    struct Action_1_Moon_BehaviourSystem_Action_* OnActionAdded;
    struct Action* OnActionRemoved;
    struct Action_1__Array* m_Actions;
    struct List_1_Moon_BehaviourSystem_Action_* m_actionsList;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionDecorator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ActionDecorator__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_BehaviourSystem_Action_.h>
#include <Modloader/app/structs/Action_1__Array.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_Action_.h>
#endif
#undef IL2CPP_STRUCT_ActionDecorator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionDecorator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ActionDecorator__Fields_FWDDECL)
#include <Modloader/app/structs/ActionDecorator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionDecorator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
