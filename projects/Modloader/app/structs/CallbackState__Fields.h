#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallbackState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallbackState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackState__Fields_DEFINED)
#define IL2CPP_STRUCT_CallbackState__Fields_DEFINED
struct IState_1;
struct Action;
struct __declspec(align(8)) CallbackState__Fields {
    struct IState_1* m_state;
    struct Action* UpdateStateEvent;
    struct Action* OnEnterEvent;
    struct Action* OnExitEvent;
};
#endif
#if !defined(IL2CPP_STRUCT_CallbackState__Fields_FWDDECL)
#define IL2CPP_STRUCT_CallbackState__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/IState_1.h>
#endif
#undef IL2CPP_STRUCT_CallbackState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallbackState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CallbackState__Fields_FWDDECL)
#include <Modloader/app/structs/CallbackState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallbackState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
