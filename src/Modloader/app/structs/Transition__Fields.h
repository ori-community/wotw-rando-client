#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Transition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Transition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Transition__Fields_DEFINED)
#define IL2CPP_STRUCT_Transition__Fields_DEFINED
struct IState_1;
struct ICondition;
struct IContext;
struct __declspec(align(8)) Transition__Fields {
    struct IState_1* SourceState;
    struct IState_1* TargetState;
    struct ICondition* Condition;
    struct IContext* Context;
};
#endif
#if !defined(IL2CPP_STRUCT_Transition__Fields_FWDDECL)
#define IL2CPP_STRUCT_Transition__Fields_FWDDECL
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IState_1.h>
#endif
#undef IL2CPP_STRUCT_Transition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Transition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Transition__Fields_FWDDECL)
#include <Modloader/app/structs/Transition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Transition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
