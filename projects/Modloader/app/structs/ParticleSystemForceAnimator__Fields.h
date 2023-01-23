#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleSystemForceAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleSystemForceAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemForceAnimator__Fields_DEFINED)
#include <Modloader/app/structs/ParticleSystemAnimator_1__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_ParticleSystemAnimator_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ParticleSystemForceAnimator__Fields_DEFINED
struct AnimationCurve;
struct ParticleSystemForceAnimator__Fields {
    struct ParticleSystemAnimator_1__Fields _;
    struct AnimationCurve* XCurve;
    struct AnimationCurve* YCurve;
    struct AnimationCurve* ZCurve;
    struct Vector3 m_originalForce;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleSystemForceAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ParticleSystemForceAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_ParticleSystemForceAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleSystemForceAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ParticleSystemForceAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ParticleSystemForceAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleSystemForceAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
