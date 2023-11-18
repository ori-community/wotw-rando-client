#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacySinMovementAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacySinMovementAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySinMovementAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#include <Modloader/app/structs/SinMovement_Affect_AffectType__Enum.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_SinMovement_Affect_AffectType__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacySinMovementAnimator__Fields_DEFINED
struct SinMovement;
struct AnimationCurve;
struct SinMovement_Affect;
struct LegacySinMovementAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct SinMovement* Target;
    SinMovement_Affect_AffectType__Enum AffectToTarget;

    struct AnimationCurve* RangeAnimationCurve;
    struct SinMovement_Affect* m_target;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacySinMovementAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacySinMovementAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/SinMovement.h>
#include <Modloader/app/structs/SinMovement_Affect.h>
#endif
#undef IL2CPP_STRUCT_LegacySinMovementAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySinMovementAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacySinMovementAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacySinMovementAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacySinMovementAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
