#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraMotionBlur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraMotionBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraMotionBlur_DEFINED)
#include <Modloader/app/structs/CameraMotionBlur__Fields.h>
#if defined(IL2CPP_STRUCT_CameraMotionBlur__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraMotionBlur_DEFINED
struct CameraMotionBlur__Class;
struct CameraMotionBlur {
    struct CameraMotionBlur__Class* klass;
    MonitorData* monitor;
    struct CameraMotionBlur__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraMotionBlur_FWDDECL)
#define IL2CPP_STRUCT_CameraMotionBlur_FWDDECL
#include <Modloader/app/structs/CameraMotionBlur__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraMotionBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraMotionBlur_DEFINED) && !defined(IL2CPP_STRUCT_CameraMotionBlur_FWDDECL)
#include <Modloader/app/structs/CameraMotionBlur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraMotionBlur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
