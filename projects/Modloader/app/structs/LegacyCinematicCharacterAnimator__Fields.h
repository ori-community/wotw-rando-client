#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyCinematicCharacterAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyCinematicCharacterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyCinematicCharacterAnimator__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator_Character__Enum.h>
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator_FacingDirection__Enum.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_LegacyCinematicCharacterAnimator_Character__Enum_DEFINED) && defined(IL2CPP_STRUCT_LegacyCinematicCharacterAnimator_FacingDirection__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_LegacyCinematicCharacterAnimator__Fields_DEFINED
struct MoonAnimation;
struct LegacyCinematicCharacterAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct MoonAnimation* Animation;
    bool UseAnimatorAsStartingPoint;
    LegacyCinematicCharacterAnimator_Character__Enum AnimatedCharacter;

    LegacyCinematicCharacterAnimator_FacingDirection__Enum InitialDirection;

    LegacyCinematicCharacterAnimator_FacingDirection__Enum FinalDirection;

    bool DisableColliderWhenPlaying;
    struct ActiveAnimationHandle m_animationState;
    struct MoonAnimation* m_cachedMoonAnimation;
    float m_cachedMoonAnimationDuration;
    bool m_cachedMoonAnimationIsLooping;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyCinematicCharacterAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyCinematicCharacterAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_LegacyCinematicCharacterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyCinematicCharacterAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyCinematicCharacterAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyCinematicCharacterAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
