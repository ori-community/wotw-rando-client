#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayCameraAnimator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayCameraAnimator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayCameraAnimator__StaticFields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ReplayCameraAnimator__StaticFields_DEFINED
struct ReplayCameraAnimator__StaticFields {
    bool _IsControllingCamera_k__BackingField;
    struct Vector3 _CurrentCameraTargetPosition_k__BackingField;
    struct Vector3 _CurrentCameraTargetVelocity_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayCameraAnimator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ReplayCameraAnimator__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ReplayCameraAnimator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayCameraAnimator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ReplayCameraAnimator__StaticFields_FWDDECL)
#include <Modloader/app/structs/ReplayCameraAnimator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayCameraAnimator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
