#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterShieldAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterShieldAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterShieldAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields.h>
#include <Modloader/app/structs/LaserShooterShieldAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_LaserShooterShieldAttackBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_LaserShooterShieldAttackBehaviour__Fields_DEFINED
struct MoonTimeline;
struct LaserShooterMinibossEntity;
struct LaserShieldRotationController;
struct LaserShooterShieldAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields _;
    struct MoonTimeline* IdleTimeline;
    struct Vector3 ShieldPieceTargetOffset;
    float AnticTime;
    float OveralAnticTime;
    float AfterShotTime;
    struct Vector2 Amplitude;
    struct Vector2 Frequency;
    struct LaserShooterMinibossEntity* m_minibossEntity;
    struct LaserShieldRotationController* m_shieldController;
    LaserShooterShieldAttackBehaviour_State__Enum m_state;

    float m_timeInState;
    float m_timeInBehaviour;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterShieldAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterShieldAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/LaserShooterMinibossEntity.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterShieldAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterShieldAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterShieldAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterShieldAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterShieldAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
