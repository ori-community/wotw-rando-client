#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuRun__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuRun__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuRun__Fields_DEFINED)
#include <Modloader/app/structs/KuState__Fields.h>
#if defined(IL2CPP_STRUCT_KuState__Fields_DEFINED)
#define IL2CPP_STRUCT_KuRun__Fields_DEFINED
struct MoonAnimation;
struct FloatAnimationParameter;
struct AnimationCurve;
struct CharacterTimelineTurning;
struct SurfaceToSoundProviderMap;
struct KuRun__Fields {
    struct KuState__Fields _;
    struct MoonAnimation* RunAnimation;
    struct FloatAnimationParameter* RunSquashParameter;
    struct FloatAnimationParameter* MoveBlendParameter;
    struct AnimationCurve* SquashCurve;
    float SquashSpeed;
    struct CharacterTimelineTurning* Turning;
    struct AnimationCurve* SoundsPerSecondOverSpeed;
    float MinSpeedForFootsteps;
    struct SurfaceToSoundProviderMap* FootstepSounds;
    float _RunSquashFloat_k__BackingField;
    float _RunSquashAmout_k__BackingField;
    bool m_shouldTriggerAnimation;
    float m_nextStepTime;
    bool _WantsToFaceLeft_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuRun__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuRun__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#undef IL2CPP_STRUCT_KuRun__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuRun__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuRun__Fields_FWDDECL)
#include <Modloader/app/structs/KuRun__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuRun__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
