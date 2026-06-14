#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourNode__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Nullable_1_Moon_BehaviourSystem_BehaviourStatus_.h>
#include <Modloader/app/structs/TreeBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TreeBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Moon_BehaviourSystem_BehaviourStatus__DEFINED)
#define IL2CPP_STRUCT_BehaviourNode__Fields_DEFINED
struct Action_1_Moon_BehaviourSystem_DecoratorNode_;
struct Action;
struct Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_;
struct List_1_Moon_BehaviourSystem_DecoratorNode_;
struct String;
struct BehaviourNode__Fields {
    struct TreeBehaviour__Fields _;
    BehaviourStatus__Enum m_status;

    struct Action_1_Moon_BehaviourSystem_DecoratorNode_* OnDecoratorAdded;
    struct Action* OnDecoratorRemoved;
    struct Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_* ExceptionThrown;
    struct Action* OnNodeExit;
    struct List_1_Moon_BehaviourSystem_DecoratorNode_* m_decorators;
    int32_t m_enterExecuteCounter;
    bool m_decoratorsNeedToBeSetup;
    struct Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ m_forceReturnStatus;
    struct String* m_profExecute;
    bool m_initialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BehaviourNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_BehaviourNode__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_BehaviourSystem_DecoratorNode_.h>
#include <Modloader/app/structs/Action_2_Moon_BehaviourSystem_TreeBehaviour_Exception_.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_DecoratorNode_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BehaviourNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourNode__Fields_FWDDECL)
#include <Modloader/app/structs/BehaviourNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
