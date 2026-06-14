#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetCameraTargetAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetCameraTargetAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCameraTargetAction_DEFINED)
#include <Modloader/app/structs/SetCameraTargetAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetCameraTargetAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetCameraTargetAction_DEFINED
struct SetCameraTargetAction__Class;
struct SetCameraTargetAction {
    struct SetCameraTargetAction__Class* klass;
    MonitorData* monitor;
    struct SetCameraTargetAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetCameraTargetAction_FWDDECL)
#define IL2CPP_STRUCT_SetCameraTargetAction_FWDDECL
#include <Modloader/app/structs/SetCameraTargetAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetCameraTargetAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetCameraTargetAction_DEFINED) && !defined(IL2CPP_STRUCT_SetCameraTargetAction_FWDDECL)
#include <Modloader/app/structs/SetCameraTargetAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetCameraTargetAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
