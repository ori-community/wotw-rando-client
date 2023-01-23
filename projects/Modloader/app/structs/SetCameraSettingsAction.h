#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetCameraSettingsAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetCameraSettingsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCameraSettingsAction_DEFINED)
#include <Modloader/app/structs/SetCameraSettingsAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetCameraSettingsAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetCameraSettingsAction_DEFINED
struct SetCameraSettingsAction__Class;
struct SetCameraSettingsAction {
    struct SetCameraSettingsAction__Class* klass;
    MonitorData* monitor;
    struct SetCameraSettingsAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetCameraSettingsAction_FWDDECL)
#define IL2CPP_STRUCT_SetCameraSettingsAction_FWDDECL
#include <Modloader/app/structs/SetCameraSettingsAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetCameraSettingsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCameraSettingsAction_DEFINED) && !defined(IL2CPP_STRUCT_SetCameraSettingsAction_FWDDECL)
#include <Modloader/app/structs/SetCameraSettingsAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetCameraSettingsAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
