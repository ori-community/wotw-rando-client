#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateMachine_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateMachine_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachine_1__Fields_DEFINED)
#define IL2CPP_STRUCT_StateMachine_1__Fields_DEFINED
struct IState_1;
struct ITrigger;
struct Action_1_Moon_InteractionGraph_StateMachine_;
struct Action_2_Moon_InteractionGraph_StateMachine_Int32_;
struct List_1_Moon_InteractionGraph_IState_;
struct Dictionary_2_System_Type_Moon_InteractionGraph_TransitionManager_;
struct Dictionary_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action_;
struct __declspec(align(8)) StateMachine_1__Fields {
    float _CurrentStateTime_k__BackingField;
    struct IState_1* _CurrentState_k__BackingField;
    struct IState_1* _PreviousState_k__BackingField;
    struct ITrigger* CurrentTrigger;
    struct Action_1_Moon_InteractionGraph_StateMachine_* OnStateChanged;
    struct Action_2_Moon_InteractionGraph_StateMachine_Int32_* OnEventTriggered;
    bool Debug;
    struct List_1_Moon_InteractionGraph_IState_* m_states;
    struct Dictionary_2_System_Type_Moon_InteractionGraph_TransitionManager_* m_triggerToTransitionManagers;
    struct Dictionary_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action_* m_events;
};
#endif
#if !defined(IL2CPP_STRUCT_StateMachine_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_StateMachine_1__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Moon_InteractionGraph_StateMachine_.h>
#include <Modloader/app/structs/Action_2_Moon_InteractionGraph_StateMachine_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_Moon_InteractionGraph_IState_Dictionary_2_System_Int32_System_Action_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_Moon_InteractionGraph_TransitionManager_.h>
#include <Modloader/app/structs/IState_1.h>
#include <Modloader/app/structs/ITrigger.h>
#include <Modloader/app/structs/List_1_Moon_InteractionGraph_IState_.h>
#endif
#undef IL2CPP_STRUCT_StateMachine_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachine_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StateMachine_1__Fields_FWDDECL)
#include <Modloader/app/structs/StateMachine_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateMachine_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
