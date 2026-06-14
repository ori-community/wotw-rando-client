#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraOffsetAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraOffsetAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetAnimator_DEFINED)
#include <Modloader/app/structs/CameraOffsetAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_CameraOffsetAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraOffsetAnimator_DEFINED
struct CameraOffsetAnimator__Class;
struct CameraOffsetAnimator {
    struct CameraOffsetAnimator__Class* klass;
    MonitorData* monitor;
    struct CameraOffsetAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraOffsetAnimator_FWDDECL)
#define IL2CPP_STRUCT_CameraOffsetAnimator_FWDDECL
#include <Modloader/app/structs/CameraOffsetAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraOffsetAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetAnimator_DEFINED) && !defined(IL2CPP_STRUCT_CameraOffsetAnimator_FWDDECL)
#include <Modloader/app/structs/CameraOffsetAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraOffsetAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
