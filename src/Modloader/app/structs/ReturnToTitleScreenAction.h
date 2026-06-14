#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReturnToTitleScreenAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReturnToTitleScreenAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReturnToTitleScreenAction_DEFINED)
#include <Modloader/app/structs/ReturnToTitleScreenAction__Fields.h>
#if defined(IL2CPP_STRUCT_ReturnToTitleScreenAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ReturnToTitleScreenAction_DEFINED
struct ReturnToTitleScreenAction__Class;
struct ReturnToTitleScreenAction {
    struct ReturnToTitleScreenAction__Class* klass;
    MonitorData* monitor;
    struct ReturnToTitleScreenAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReturnToTitleScreenAction_FWDDECL)
#define IL2CPP_STRUCT_ReturnToTitleScreenAction_FWDDECL
#include <Modloader/app/structs/ReturnToTitleScreenAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ReturnToTitleScreenAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReturnToTitleScreenAction_DEFINED) && !defined(IL2CPP_STRUCT_ReturnToTitleScreenAction_FWDDECL)
#include <Modloader/app/structs/ReturnToTitleScreenAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReturnToTitleScreenAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
