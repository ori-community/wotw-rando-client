#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraShakeAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraShakeAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeAnimator_DEFINED)
#include <Modloader/app/structs/CameraShakeAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_CameraShakeAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraShakeAnimator_DEFINED
struct CameraShakeAnimator__Class;
struct CameraShakeAnimator {
    struct CameraShakeAnimator__Class* klass;
    MonitorData* monitor;
    struct CameraShakeAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraShakeAnimator_FWDDECL)
#define IL2CPP_STRUCT_CameraShakeAnimator_FWDDECL
#include <Modloader/app/structs/CameraShakeAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraShakeAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraShakeAnimator_DEFINED) && !defined(IL2CPP_STRUCT_CameraShakeAnimator_FWDDECL)
#include <Modloader/app/structs/CameraShakeAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraShakeAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
