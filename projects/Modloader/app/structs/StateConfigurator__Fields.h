#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateConfigurator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateConfigurator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateConfigurator__Fields_DEFINED)
#define IL2CPP_STRUCT_StateConfigurator__Fields_DEFINED
struct StateMachine_1;
struct IState_1;
struct __declspec(align(8)) StateConfigurator__Fields {
    struct StateMachine_1* m_stateMachine;
    struct IState_1* m_state;
};
#endif
#if !defined(IL2CPP_STRUCT_StateConfigurator__Fields_FWDDECL)
#define IL2CPP_STRUCT_StateConfigurator__Fields_FWDDECL
#include <Modloader/app/structs/IState_1.h>
#include <Modloader/app/structs/StateMachine_1.h>
#endif
#undef IL2CPP_STRUCT_StateConfigurator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateConfigurator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StateConfigurator__Fields_FWDDECL)
#include <Modloader/app/structs/StateConfigurator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateConfigurator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
