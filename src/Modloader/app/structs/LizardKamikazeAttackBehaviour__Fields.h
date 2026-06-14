#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardKamikazeAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardKamikazeAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardKamikazeAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/LizardKamikazeAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_LizardKamikazeAttackBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_LizardKamikazeAttackBehaviour__Fields_DEFINED
struct MoonTimeline;
struct DamageDealer;
struct KamikazeLizardEntity;
struct GroundEntityLocomotion;
struct PlatformMovement;
struct LizardKamikazeAttackBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline* RollStartTimeline;
    struct MoonTimeline* RollTimeline;
    struct MoonTimeline* JumpShakeTimeline;
    struct MoonTimeline* OnBounceTimeline;
    struct Vector2 InitialJump;
    float Bounciness;
    float MinYVelToBounce;
    float TargetOnGroundSpeed;
    float SpeedRubberbandStiffness;
    struct DamageDealer* DamageDealer;
    struct KamikazeLizardEntity* m_kamikazeLizardEntity;
    struct GroundEntityLocomotion* m_locomotion;
    struct PlatformMovement* m_platformMovement;
    LizardKamikazeAttackBehaviour_State__Enum m_state;

    struct Vector2 m_lastFrameVelocity;
    struct MoonTimeline* m_currentTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardKamikazeAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardKamikazeAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/KamikazeLizardEntity.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformMovement.h>
#endif
#undef IL2CPP_STRUCT_LizardKamikazeAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardKamikazeAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardKamikazeAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LizardKamikazeAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardKamikazeAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
