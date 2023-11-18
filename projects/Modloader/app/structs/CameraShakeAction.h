#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraShakeAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraShakeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeAction_DEFINED)
#include <Modloader/app/structs/CameraShakeAction__Fields.h>
#if defined(IL2CPP_STRUCT_CameraShakeAction__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraShakeAction_DEFINED
struct CameraShakeAction__Class;
struct CameraShakeAction {
    struct CameraShakeAction__Class* klass;
    MonitorData* monitor;
    struct CameraShakeAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraShakeAction_FWDDECL)
#define IL2CPP_STRUCT_CameraShakeAction_FWDDECL
#include <Modloader/app/structs/CameraShakeAction__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraShakeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeAction_DEFINED) && !defined(IL2CPP_STRUCT_CameraShakeAction_FWDDECL)
#include <Modloader/app/structs/CameraShakeAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraShakeAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
