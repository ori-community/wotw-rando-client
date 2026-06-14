#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DistortionAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DistortionAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortionAnimator_DEFINED)
#include <Modloader/app/structs/DistortionAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_DistortionAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_DistortionAnimator_DEFINED
struct DistortionAnimator__Class;
struct DistortionAnimator {
    struct DistortionAnimator__Class* klass;
    MonitorData* monitor;
    struct DistortionAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DistortionAnimator_FWDDECL)
#define IL2CPP_STRUCT_DistortionAnimator_FWDDECL
#include <Modloader/app/structs/DistortionAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_DistortionAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DistortionAnimator_DEFINED) && !defined(IL2CPP_STRUCT_DistortionAnimator_FWDDECL)
#include <Modloader/app/structs/DistortionAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DistortionAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
