#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionExplosionAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionExplosionAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionExplosionAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_UberInteractionExplosionAnimator__Fields_DEFINED
struct AnimationCurve;
struct UberExplosionActor;
struct UberInteractionExplosionAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct AnimationCurve* AnimationCurve;
    struct Vector4 m_originalStrength;
    struct UberExplosionActor* m_actor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionExplosionAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionExplosionAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/UberExplosionActor.h>
#endif
#undef IL2CPP_STRUCT_UberInteractionExplosionAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionExplosionAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionExplosionAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/UberInteractionExplosionAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionExplosionAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
