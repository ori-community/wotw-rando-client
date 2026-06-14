#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompoundState_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompoundState_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundState_1__Fields_DEFINED)
#define IL2CPP_STRUCT_CompoundState_1__Fields_DEFINED
struct IState_2__Array;
struct Action;
struct __declspec(align(8)) CompoundState_1__Fields {
    struct IState_2__Array* m_states;
    struct Action* OnUpdateEvent;
    struct Action* OnEnterEvent;
    struct Action* OnExitEvent;
};
#endif
#if !defined(IL2CPP_STRUCT_CompoundState_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_CompoundState_1__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/IState_2__Array.h>
#endif
#undef IL2CPP_STRUCT_CompoundState_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompoundState_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CompoundState_1__Fields_FWDDECL)
#include <Modloader/app/structs/CompoundState_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompoundState_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
