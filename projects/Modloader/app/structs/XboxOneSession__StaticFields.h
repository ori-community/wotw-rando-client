#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneSession__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneSession__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneSession__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XboxOneSession__StaticFields_DEFINED
struct Action;
struct XboxOneSession__StaticFields {
    struct Action* _OnSessionStarted_k__BackingField;
    struct Action* _OnSessionEnded_k__BackingField;
    struct Action* _OnWindowDeactivated_k__BackingField;
    struct Action* _OnWindowActivated_k__BackingField;
    struct Action* _OnSuspend_k__BackingField;
    struct Action* _OnResume_k__BackingField;
    bool m_windowActivated;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneSession__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XboxOneSession__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_XboxOneSession__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneSession__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneSession__StaticFields_FWDDECL)
#include <Modloader/app/structs/XboxOneSession__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneSession__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
