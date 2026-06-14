#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FoxEnemy2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FoxEnemy2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxEnemy2__Fields_DEFINED)
#include <Modloader/app/structs/GroundEnemy3D__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_GroundEnemy3D__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_FoxEnemy2__Fields_DEFINED
struct FoxEnemy2_FoxEnemySettings;
struct FoxEnemy2_FoxEnemyJumpAttackSettings;
struct GameObject;
struct IPinnable;
struct FoxEnemy2__Fields {
    struct GroundEnemy3D__Fields _;
    struct FoxEnemy2_FoxEnemySettings* Settings;
    struct FoxEnemy2_FoxEnemyJumpAttackSettings* JumpAttackSettings;
    struct GameObject* Grabber;
    struct Vector3 m_SpawnPoint;
    struct Vector3 m_DesirePoint;
    float m_PatrolDistance;
    bool m_NeedsToTurnAround;
    float m_SpeedDirection;
    float m_SpeedMultiplier;
    struct Vector3 m_JumpAttackTarget;
    bool m_CanJumpAttack;
    bool m_NeedsToJumpAttack;
    struct IPinnable* m_AttackPinnable;
    bool TestEnableJumpAttack;
    bool ViewIsGrounded;
    int32_t kMovingTag;
    int32_t kTurningTag;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FoxEnemy2__Fields_FWDDECL)
#define IL2CPP_STRUCT_FoxEnemy2__Fields_FWDDECL
#include <Modloader/app/structs/FoxEnemy2_FoxEnemyJumpAttackSettings.h>
#include <Modloader/app/structs/FoxEnemy2_FoxEnemySettings.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IPinnable.h>
#endif
#undef IL2CPP_STRUCT_FoxEnemy2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxEnemy2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FoxEnemy2__Fields_FWDDECL)
#include <Modloader/app/structs/FoxEnemy2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FoxEnemy2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
