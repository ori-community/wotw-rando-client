#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSpeedAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSpeedAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSpeedAnimator_DEFINED)
#include <Modloader/app/structs/CameraSpeedAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_CameraSpeedAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraSpeedAnimator_DEFINED
struct CameraSpeedAnimator__Class;
struct CameraSpeedAnimator {
    struct CameraSpeedAnimator__Class* klass;
    MonitorData* monitor;
    struct CameraSpeedAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSpeedAnimator_FWDDECL)
#define IL2CPP_STRUCT_CameraSpeedAnimator_FWDDECL
#include <Modloader/app/structs/CameraSpeedAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraSpeedAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSpeedAnimator_DEFINED) && !defined(IL2CPP_STRUCT_CameraSpeedAnimator_FWDDECL)
#include <Modloader/app/structs/CameraSpeedAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSpeedAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
