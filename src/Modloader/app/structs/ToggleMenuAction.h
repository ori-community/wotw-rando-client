#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToggleMenuAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToggleMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleMenuAction_DEFINED)
#include <Modloader/app/structs/ToggleMenuAction__Fields.h>
#if defined(IL2CPP_STRUCT_ToggleMenuAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ToggleMenuAction_DEFINED
struct ToggleMenuAction__Class;
struct ToggleMenuAction {
    struct ToggleMenuAction__Class* klass;
    MonitorData* monitor;
    struct ToggleMenuAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ToggleMenuAction_FWDDECL)
#define IL2CPP_STRUCT_ToggleMenuAction_FWDDECL
#include <Modloader/app/structs/ToggleMenuAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ToggleMenuAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleMenuAction_DEFINED) && !defined(IL2CPP_STRUCT_ToggleMenuAction_FWDDECL)
#include <Modloader/app/structs/ToggleMenuAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToggleMenuAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
