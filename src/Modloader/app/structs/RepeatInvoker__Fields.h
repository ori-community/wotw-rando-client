#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RepeatInvoker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RepeatInvoker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RepeatInvoker__Fields_DEFINED)
#define IL2CPP_STRUCT_RepeatInvoker__Fields_DEFINED
struct Action;
struct __declspec(align(8)) RepeatInvoker__Fields {
    float m_time;
    float m_duration;
    struct Action* m_method;
};
#endif
#if !defined(IL2CPP_STRUCT_RepeatInvoker__Fields_FWDDECL)
#define IL2CPP_STRUCT_RepeatInvoker__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_RepeatInvoker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RepeatInvoker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RepeatInvoker__Fields_FWDDECL)
#include <Modloader/app/structs/RepeatInvoker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RepeatInvoker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
