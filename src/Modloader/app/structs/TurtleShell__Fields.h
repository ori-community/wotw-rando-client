#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleShell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleShell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShell__Fields_DEFINED)
#include <Modloader/app/structs/LegacyEntity__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_LegacyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_TurtleShell__Fields_DEFINED
struct Transform;
struct LegacyTimelineSequence;
struct MoonTimeline;
struct MoonAnimator;
struct MoonAnimation;
struct SoundProvider;
struct TurtleShell_DamageReactionMultipler__Array;
struct Rigidbody;
struct Collider;
struct IEquipableOwner;
struct IDamageReciever__Array;
struct TurtleShell__Fields {
    struct LegacyEntity__Fields _;
    struct Transform* ShellRig;
    struct LegacyTimelineSequence* ShellAttackTimeline;
    struct LegacyTimelineSequence* ShellEquipByTurtle;
    struct LegacyTimelineSequence* ShellEquipByTurtleFliped;
    struct LegacyTimelineSequence* ShellEquipByTurtleUpsideDown;
    struct LegacyTimelineSequence* ShellEquipByTurtleUpsideDownFliped;
    struct LegacyTimelineSequence* ShellTurn;
    struct LegacyTimelineSequence* ShellTurnA;
    struct LegacyTimelineSequence* ShellFullTurn;
    struct MoonTimeline* ShakeTimeline;
    float MinImpactForceForControllerShake;
    struct MoonAnimator* Animator;
    struct MoonAnimation* DefaultAnimation;
    int32_t AnimationPriority;
    struct SoundProvider* HitSound;
    struct TurtleShell_DamageReactionMultipler__Array* DamageReactionMultipliers;
    bool LimitVelocity;
    float VelocityLimit;
    bool m_equiped;
    struct Rigidbody* m_rigidbody;
    struct Collider* m_collider;
    struct Transform* m_transform;
    bool m_beingPulledByLeash;
    struct Vector3 m_leashTarget;
    float m_timer;
    struct IEquipableOwner* _Owner_k__BackingField;
    bool _IsClaimed_k__BackingField;
    struct Vector2 RootMotionMultiplier;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleShell__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurtleShell__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IEquipableOwner.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TurtleShell_DamageReactionMultipler__Array.h>
#endif
#undef IL2CPP_STRUCT_TurtleShell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurtleShell__Fields_FWDDECL)
#include <Modloader/app/structs/TurtleShell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleShell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
