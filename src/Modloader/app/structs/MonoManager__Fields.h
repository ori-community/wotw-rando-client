#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoManager__Fields_DEFINED
struct Action;
struct Action_1_Boolean_;
struct MonoManager__Fields {
    struct MonoBehaviour__Fields _;
    struct Action* onUpdate;
    struct Action* onLateUpdate;
    struct Action* onFixedUpdate;
    struct Action* onGUI;
    struct Action* onApplicationQuit;
    struct Action_1_Boolean_* onApplicationPause;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_MonoManager__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_MonoManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MonoManager__Fields_FWDDECL)
#include <Modloader/app/structs/MonoManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
