#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateMenuAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateMenuAction_DEFINED)
#include <Modloader/app/structs/ActivateMenuAction__Fields.h>
#if defined(IL2CPP_STRUCT_ActivateMenuAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateMenuAction_DEFINED
struct ActivateMenuAction__Class;
struct ActivateMenuAction {
    struct ActivateMenuAction__Class* klass;
    MonitorData* monitor;
    struct ActivateMenuAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateMenuAction_FWDDECL)
#define IL2CPP_STRUCT_ActivateMenuAction_FWDDECL
#include <Modloader/app/structs/ActivateMenuAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivateMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateMenuAction_DEFINED) && !defined(IL2CPP_STRUCT_ActivateMenuAction_FWDDECL)
#include <Modloader/app/structs/ActivateMenuAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateMenuAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
