#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetTitleScreenAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetTitleScreenAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetTitleScreenAction_DEFINED)
#include <Modloader/app/structs/SetTitleScreenAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetTitleScreenAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetTitleScreenAction_DEFINED
struct SetTitleScreenAction__Class;
struct SetTitleScreenAction {
    struct SetTitleScreenAction__Class* klass;
    MonitorData* monitor;
    struct SetTitleScreenAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetTitleScreenAction_FWDDECL)
#define IL2CPP_STRUCT_SetTitleScreenAction_FWDDECL
#include <Modloader/app/structs/SetTitleScreenAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetTitleScreenAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetTitleScreenAction_DEFINED) && !defined(IL2CPP_STRUCT_SetTitleScreenAction_FWDDECL)
#include <Modloader/app/structs/SetTitleScreenAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetTitleScreenAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
