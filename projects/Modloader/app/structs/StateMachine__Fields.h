#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateMachine__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateMachine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachine__Fields_DEFINED)
#define IL2CPP_STRUCT_StateMachine__Fields_DEFINED
struct IState;
struct Stack_1_Moon_FSM_IInterruptState_;
struct __declspec(align(8)) StateMachine__Fields {
    struct IState* _CurrentState_k__BackingField;
    struct Stack_1_Moon_FSM_IInterruptState_* _InterruptStates_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_StateMachine__Fields_FWDDECL)
#define IL2CPP_STRUCT_StateMachine__Fields_FWDDECL
#include <Modloader/app/structs/IState.h>
#include <Modloader/app/structs/Stack_1_Moon_FSM_IInterruptState_.h>
#endif
#undef IL2CPP_STRUCT_StateMachine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateMachine__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StateMachine__Fields_FWDDECL)
#include <Modloader/app/structs/StateMachine__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateMachine__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
