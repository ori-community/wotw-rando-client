#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplayCameraAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplayCameraAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayCameraAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ReplayCameraAnimator__Fields_DEFINED
struct AnimationCurve3D;
struct ReplayCameraAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct AnimationCurve3D* Velocity;
    struct AnimationCurve3D* PuppetPosition;
    struct AnimationCurve3D* BaseCameraPosition;
    bool UseVelocity;
    float TimeOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplayCameraAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReplayCameraAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve3D.h>
#endif
#undef IL2CPP_STRUCT_ReplayCameraAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplayCameraAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReplayCameraAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ReplayCameraAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplayCameraAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
