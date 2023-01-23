#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLightAffectorIntensityAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLightAffectorIntensityAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLightAffectorIntensityAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritLightAffectorIntensityAnimator__Fields_DEFINED
struct AnimationCurve;
struct SpiritLightRadialVisualAffector;
struct SpiritLightAffectorIntensityAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve* IntensityAnimationCurve;
    float IntensityCurveMagnitude;
    struct SpiritLightRadialVisualAffector* Target;
    float OriginalLightIntensity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritLightAffectorIntensityAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLightAffectorIntensityAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/SpiritLightRadialVisualAffector.h>
#endif
#undef IL2CPP_STRUCT_SpiritLightAffectorIntensityAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLightAffectorIntensityAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLightAffectorIntensityAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritLightAffectorIntensityAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLightAffectorIntensityAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
