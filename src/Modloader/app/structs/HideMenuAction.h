#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HideMenuAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HideMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideMenuAction_DEFINED)
#include <Modloader/app/structs/HideMenuAction__Fields.h>
#if defined(IL2CPP_STRUCT_HideMenuAction__Fields_DEFINED)
#define IL2CPP_STRUCT_HideMenuAction_DEFINED
struct HideMenuAction__Class;
struct HideMenuAction {
    struct HideMenuAction__Class* klass;
    MonitorData* monitor;
    struct HideMenuAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HideMenuAction_FWDDECL)
#define IL2CPP_STRUCT_HideMenuAction_FWDDECL
#include <Modloader/app/structs/HideMenuAction__Class.h>
#endif
#undef IL2CPP_STRUCT_HideMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_HideMenuAction_DEFINED) && !defined(IL2CPP_STRUCT_HideMenuAction_FWDDECL)
#include <Modloader/app/structs/HideMenuAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HideMenuAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
