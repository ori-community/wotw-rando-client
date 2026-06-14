#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenariosParticleSystemAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenariosParticleSystemAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenariosParticleSystemAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenariosParticleSystemAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct AnimationCurve;
struct ScenariosParticleSystemAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* TargetTransform;
    struct AnimationCurve* Curve;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenariosParticleSystemAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScenariosParticleSystemAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#endif
#undef IL2CPP_STRUCT_ScenariosParticleSystemAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenariosParticleSystemAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScenariosParticleSystemAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ScenariosParticleSystemAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenariosParticleSystemAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
