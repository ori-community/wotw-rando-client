#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MeleeComboMove__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MeleeComboMove__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct MeleeWeaponHammer;
struct MeleeComboMoveHammerBase__Fields {
    struct MeleeComboMove__Fields _;
    bool EnableGroundCollision;
    struct MoonTimeline* GroundImpactMiss;
    struct EventTriggerAnimator* GroundMissExitPoint;
    struct EventTriggerAnimator* StillAllowToReactToGroundHit;
    struct EventTriggerAnimator* BlastStartEvent;
    DamageWeight__Enum BlastDamageWeight;

    float BlastRadius;
    float BlastKickbackStrength;
    float KnockbackAddX;
    float KnockbackAddY;
    bool IsKnockbackAdditiveX;
    bool IsKnockbackAdditiveY;
    struct Vector2 OnHitRootMotionMultiplier;
    struct MeleeWeaponHammer* m_hammerWeapon;
    bool m_applyOnHitRootMotionMultiplier;
    bool m_hammerHitGround;
    bool m_moveHasFinished;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MeleeWeaponHammer.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveHammerBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveHammerBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
