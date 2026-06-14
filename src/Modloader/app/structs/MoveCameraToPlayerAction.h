#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveCameraToPlayerAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveCameraToPlayerAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveCameraToPlayerAction_DEFINED)
#include <Modloader/app/structs/MoveCameraToPlayerAction__Fields.h>
#if defined(IL2CPP_STRUCT_MoveCameraToPlayerAction__Fields_DEFINED)
#define IL2CPP_STRUCT_MoveCameraToPlayerAction_DEFINED
struct MoveCameraToPlayerAction__Class;
struct MoveCameraToPlayerAction {
    struct MoveCameraToPlayerAction__Class* klass;
    MonitorData* monitor;
    struct MoveCameraToPlayerAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveCameraToPlayerAction_FWDDECL)
#define IL2CPP_STRUCT_MoveCameraToPlayerAction_FWDDECL
#include <Modloader/app/structs/MoveCameraToPlayerAction__Class.h>
#endif
#undef IL2CPP_STRUCT_MoveCameraToPlayerAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveCameraToPlayerAction_DEFINED) && !defined(IL2CPP_STRUCT_MoveCameraToPlayerAction_FWDDECL)
#include <Modloader/app/structs/MoveCameraToPlayerAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveCameraToPlayerAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
