#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnableMainMenuAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnableMainMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableMainMenuAction_DEFINED)
#include <Modloader/app/structs/EnableMainMenuAction__Fields.h>
#if defined(IL2CPP_STRUCT_EnableMainMenuAction__Fields_DEFINED)
#define IL2CPP_STRUCT_EnableMainMenuAction_DEFINED
struct EnableMainMenuAction__Class;
struct EnableMainMenuAction {
    struct EnableMainMenuAction__Class* klass;
    MonitorData* monitor;
    struct EnableMainMenuAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnableMainMenuAction_FWDDECL)
#define IL2CPP_STRUCT_EnableMainMenuAction_FWDDECL
#include <Modloader/app/structs/EnableMainMenuAction__Class.h>
#endif
#undef IL2CPP_STRUCT_EnableMainMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableMainMenuAction_DEFINED) && !defined(IL2CPP_STRUCT_EnableMainMenuAction_FWDDECL)
#include <Modloader/app/structs/EnableMainMenuAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnableMainMenuAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
