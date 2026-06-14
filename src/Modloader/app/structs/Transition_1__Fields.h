#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Transition_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Transition_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Transition_1__Fields_DEFINED)
#define IL2CPP_STRUCT_Transition_1__Fields_DEFINED
struct IState_2;
struct ICondition;
struct IAction;
struct IContext;
struct __declspec(align(8)) Transition_1__Fields {
    struct IState_2* SourceState;
    struct IState_2* TargetState;
    struct ICondition* Condition;
    struct IAction* Action;
    struct IContext* Context;
};
#endif
#if !defined(IL2CPP_STRUCT_Transition_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Transition_1__Fields_FWDDECL
#include <Modloader/app/structs/IAction.h>
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IState_2.h>
#endif
#undef IL2CPP_STRUCT_Transition_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Transition_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Transition_1__Fields_FWDDECL)
#include <Modloader/app/structs/Transition_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Transition_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
