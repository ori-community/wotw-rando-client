#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraAnimator_DEFINED)
#include <Modloader/app/structs/CameraAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_CameraAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraAnimator_DEFINED
struct CameraAnimator__Class;
struct CameraAnimator {
    struct CameraAnimator__Class* klass;
    MonitorData* monitor;
    struct CameraAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraAnimator_FWDDECL)
#define IL2CPP_STRUCT_CameraAnimator_FWDDECL
#include <Modloader/app/structs/CameraAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraAnimator_DEFINED) && !defined(IL2CPP_STRUCT_CameraAnimator_FWDDECL)
#include <Modloader/app/structs/CameraAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
