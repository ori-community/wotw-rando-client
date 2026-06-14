#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields.h>
#include <Modloader/app/structs/LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum.h>
#include <Modloader/app/structs/LaserShooterInflateToAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour__Fields_DEFINED
struct LaserShooterInflateToAttackSettings;
struct List_1_Moon_DamageReceiver_;
struct LaserShieldRotationController;
struct MoonTimeline;
struct LaserShooterInflateToAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields _;
    struct LaserShooterInflateToAttackSettings* TimingSetting;
    int32_t ShootCount;
    struct List_1_Moon_DamageReceiver_* InterruptingDamageReceiver;
    struct LaserShieldRotationController* m_shieldController;
    LaserShooterInflateToAttackBehaviour_State__Enum m_state;

    float m_stateTime;
    float m_timeInBehaviour;
    struct MoonTimeline* m_currentTimeline;
    LaserShooterInflateToAttackBehaviour_ShootingPhase__Enum m_shootingPhase;

    int32_t m_shotIterator;
    float m_timeInShootingPhase;
    struct Vector3 m_previousPhasePiecesOffset;
    float m_endResolveTime;
    bool _WasHitDuringAttack_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/LaserShooterInflateToAttackSettings.h>
#include <Modloader/app/structs/List_1_Moon_DamageReceiver_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterInflateToAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterInflateToAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
