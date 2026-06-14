#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveCameraAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveCameraAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveCameraAction_DEFINED)
#include <Modloader/app/structs/MoveCameraAction__Fields.h>
#if defined(IL2CPP_STRUCT_MoveCameraAction__Fields_DEFINED)
#define IL2CPP_STRUCT_MoveCameraAction_DEFINED
struct MoveCameraAction__Class;
struct MoveCameraAction {
    struct MoveCameraAction__Class* klass;
    MonitorData* monitor;
    struct MoveCameraAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveCameraAction_FWDDECL)
#define IL2CPP_STRUCT_MoveCameraAction_FWDDECL
#include <Modloader/app/structs/MoveCameraAction__Class.h>
#endif
#undef IL2CPP_STRUCT_MoveCameraAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveCameraAction_DEFINED) && !defined(IL2CPP_STRUCT_MoveCameraAction_FWDDECL)
#include <Modloader/app/structs/MoveCameraAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveCameraAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
