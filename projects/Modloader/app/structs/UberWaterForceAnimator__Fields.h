#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterForceAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterForceAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterForceAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterForceAnimator__Fields_DEFINED
struct AnimationCurve;
struct UberWaterForceActor;
struct UberWaterForceAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve* AnimationCurve;
    float m_originalStrength;
    struct UberWaterForceActor* m_actor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterForceAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterForceAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/UberWaterForceActor.h>
#endif
#undef IL2CPP_STRUCT_UberWaterForceAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterForceAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterForceAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterForceAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterForceAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
