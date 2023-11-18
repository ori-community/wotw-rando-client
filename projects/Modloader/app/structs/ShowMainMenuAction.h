#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowMainMenuAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowMainMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowMainMenuAction_DEFINED)
#include <Modloader/app/structs/ShowMainMenuAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowMainMenuAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowMainMenuAction_DEFINED
struct ShowMainMenuAction__Class;
struct ShowMainMenuAction {
    struct ShowMainMenuAction__Class* klass;
    MonitorData* monitor;
    struct ShowMainMenuAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowMainMenuAction_FWDDECL)
#define IL2CPP_STRUCT_ShowMainMenuAction_FWDDECL
#include <Modloader/app/structs/ShowMainMenuAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowMainMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowMainMenuAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowMainMenuAction_FWDDECL)
#include <Modloader/app/structs/ShowMainMenuAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowMainMenuAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
