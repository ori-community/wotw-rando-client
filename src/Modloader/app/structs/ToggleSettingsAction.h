#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToggleSettingsAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToggleSettingsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleSettingsAction_DEFINED)
#include <Modloader/app/structs/ToggleSettingsAction__Fields.h>
#if defined(IL2CPP_STRUCT_ToggleSettingsAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ToggleSettingsAction_DEFINED
struct ToggleSettingsAction__Class;
struct ToggleSettingsAction {
    struct ToggleSettingsAction__Class* klass;
    MonitorData* monitor;
    struct ToggleSettingsAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ToggleSettingsAction_FWDDECL)
#define IL2CPP_STRUCT_ToggleSettingsAction_FWDDECL
#include <Modloader/app/structs/ToggleSettingsAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ToggleSettingsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleSettingsAction_DEFINED) && !defined(IL2CPP_STRUCT_ToggleSettingsAction_FWDDECL)
#include <Modloader/app/structs/ToggleSettingsAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToggleSettingsAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
