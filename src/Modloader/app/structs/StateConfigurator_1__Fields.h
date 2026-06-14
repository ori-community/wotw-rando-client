#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateConfigurator_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateConfigurator_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateConfigurator_1__Fields_DEFINED)
#define IL2CPP_STRUCT_StateConfigurator_1__Fields_DEFINED
struct StateMachine_2;
struct IState_2;
struct __declspec(align(8)) StateConfigurator_1__Fields {
    struct StateMachine_2* m_stateMachine;
    struct IState_2* m_state;
};
#endif
#if !defined(IL2CPP_STRUCT_StateConfigurator_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_StateConfigurator_1__Fields_FWDDECL
#include <Modloader/app/structs/IState_2.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_StateConfigurator_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateConfigurator_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StateConfigurator_1__Fields_FWDDECL)
#include <Modloader/app/structs/StateConfigurator_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateConfigurator_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
