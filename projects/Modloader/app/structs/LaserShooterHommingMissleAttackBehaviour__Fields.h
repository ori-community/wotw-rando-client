#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterHommingMissleAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterHommingMissleAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterHommingMissleAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/LaserShooterInflateToAttackBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_LaserShooterInflateToAttackBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserShooterHommingMissleAttackBehaviour__Fields_DEFINED
struct LaserShooterHommingMissle;
struct LaserShooterHommingMissleAttackBehaviour__Fields {
    struct LaserShooterInflateToAttackBehaviour__Fields _;
    struct LaserShooterHommingMissle* MisslePrefab;
    float MissleSpeed;
    float ShootRecoilStrength;
    float RotationSpeed;
    float m_shootDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterHommingMissleAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterHommingMissleAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LaserShooterHommingMissle.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterHommingMissleAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterHommingMissleAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterHommingMissleAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterHommingMissleAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterHommingMissleAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
