#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameStateMachine__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameStateMachine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameStateMachine__Fields_DEFINED)
#include <Modloader/app/structs/GameStateMachine_State__Enum.h>
#if defined(IL2CPP_STRUCT_GameStateMachine_State__Enum_DEFINED)
#define IL2CPP_STRUCT_GameStateMachine__Fields_DEFINED
struct __declspec(align(8)) GameStateMachine__Fields {
    GameStateMachine_State__Enum _CurrentState_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameStateMachine__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameStateMachine__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GameStateMachine__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameStateMachine__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameStateMachine__Fields_FWDDECL)
#include <Modloader/app/structs/GameStateMachine__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameStateMachine__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
