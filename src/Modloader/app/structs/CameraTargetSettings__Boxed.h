#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraTargetSettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraTargetSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTargetSettings__Boxed_DEFINED)
#include <Modloader/app/structs/CameraTargetSettings.h>
#if defined(IL2CPP_STRUCT_CameraTargetSettings_DEFINED)
#define IL2CPP_STRUCT_CameraTargetSettings__Boxed_DEFINED
struct CameraTargetSettings__Class;
struct CameraTargetSettings__Boxed {
    struct CameraTargetSettings__Class* klass;
    MonitorData* monitor;
    struct CameraTargetSettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraTargetSettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CameraTargetSettings__Boxed_FWDDECL
#include <Modloader/app/structs/CameraTargetSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraTargetSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTargetSettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CameraTargetSettings__Boxed_FWDDECL)
#include <Modloader/app/structs/CameraTargetSettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraTargetSettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
