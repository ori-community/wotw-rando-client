#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyPlatformMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyPlatformMovement__Fields_DEFINED)
#include <Modloader/app/structs/CharacterPlatformMovement__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterPlatformMovement__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_EnemyPlatformMovement__Fields_DEFINED
struct EnemyEntity;
struct EnemyPlatformMovement__Fields {
    struct CharacterPlatformMovement__Fields _;
    bool AdjustGravityToGround;
    bool UseOnDemandSnapToGround;
    float SnapToGroundDistance;
    bool CutFallingSpeedOnGround;
    struct EnemyEntity* m_entity;
    struct Vector2 m_prevExternalForce;
    struct Vector3 m_preSleepVelocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyPlatformMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnemyPlatformMovement__Fields_FWDDECL
#include <Modloader/app/structs/EnemyEntity.h>
#endif
#undef IL2CPP_STRUCT_EnemyPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyPlatformMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnemyPlatformMovement__Fields_FWDDECL)
#include <Modloader/app/structs/EnemyPlatformMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyPlatformMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
