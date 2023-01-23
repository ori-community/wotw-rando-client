#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_State_2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_State_2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_State_2__Fields_DEFINED)
#define IL2CPP_STRUCT_State_2__Fields_DEFINED
struct Action;
struct __declspec(align(8)) State_2__Fields {
    int32_t m_id;
    struct Action* UpdateStateEvent;
    struct Action* OnEnterEvent;
    struct Action* OnExitEvent;
};
#endif
#if !defined(IL2CPP_STRUCT_State_2__Fields_FWDDECL)
#define IL2CPP_STRUCT_State_2__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_State_2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_State_2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_State_2__Fields_FWDDECL)
#include <Modloader/app/structs/State_2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/State_2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
