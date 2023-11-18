#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveCameraHereAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveCameraHereAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveCameraHereAction_DEFINED)
#include <Modloader/app/structs/MoveCameraHereAction__Fields.h>
#if defined(IL2CPP_STRUCT_MoveCameraHereAction__Fields_DEFINED)
#define IL2CPP_STRUCT_MoveCameraHereAction_DEFINED
struct MoveCameraHereAction__Class;
struct MoveCameraHereAction {
    struct MoveCameraHereAction__Class* klass;
    MonitorData* monitor;
    struct MoveCameraHereAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveCameraHereAction_FWDDECL)
#define IL2CPP_STRUCT_MoveCameraHereAction_FWDDECL
#include <Modloader/app/structs/MoveCameraHereAction__Class.h>
#endif
#undef IL2CPP_STRUCT_MoveCameraHereAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveCameraHereAction_DEFINED) && !defined(IL2CPP_STRUCT_MoveCameraHereAction_FWDDECL)
#include <Modloader/app/structs/MoveCameraHereAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveCameraHereAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
