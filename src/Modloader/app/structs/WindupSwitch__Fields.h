#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindupSwitch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindupSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindupSwitch__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAttackableSwitch__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAttackableSwitch__Fields_DEFINED)
#define IL2CPP_STRUCT_WindupSwitch__Fields_DEFINED
struct AnimationCurve;
struct SoundProvider;
struct WindupSwitch_DamageMultiplier__Array;
struct List_1_BaseAnimator_;
struct WindupSwitch__Fields {
    struct LegacyAttackableSwitch__Fields _;
    int32_t TargetRotation;
    struct AnimationCurve* DamageToRotationCurve;
    struct AnimationCurve* RotationDistanceToSpeedCurve;
    struct AnimationCurve* WindupDistanceToSpeedCurve;
    bool AccountForHitDirection;
    bool ShouldActivateDeactivate;
    struct SoundProvider* OnHitSoundProvider;
    struct SoundProvider* OnUnwindSoundProvider;
    struct SoundProvider* OnActivateSoundProvider;
    struct WindupSwitch_DamageMultiplier__Array* AttackDamageMultipliers;
    float m_currentTargetRotation;
    float m_actualRotation;
    float m_previousRotation;
    struct List_1_BaseAnimator_* m_animators;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindupSwitch__Fields_FWDDECL)
#define IL2CPP_STRUCT_WindupSwitch__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/List_1_BaseAnimator_.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/WindupSwitch_DamageMultiplier__Array.h>
#endif
#undef IL2CPP_STRUCT_WindupSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindupSwitch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WindupSwitch__Fields_FWDDECL)
#include <Modloader/app/structs/WindupSwitch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindupSwitch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
