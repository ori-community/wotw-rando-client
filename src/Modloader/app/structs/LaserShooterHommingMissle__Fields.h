#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterHommingMissle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterHommingMissle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterHommingMissle__Fields_DEFINED)
#include <Modloader/app/structs/Projectile__Fields.h>
#if defined(IL2CPP_STRUCT_Projectile__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserShooterHommingMissle__Fields_DEFINED
struct AnimationCurve;
struct LaserShooterShockwave;
struct Transform;
struct LaserShooterHommingMissle__Fields {
    struct Projectile__Fields _;
    float MoveForwardTime;
    float BendTime;
    struct AnimationCurve* BendCurve;
    float TurningSpeed;
    struct LaserShooterShockwave* ShockwavePrefab;
    struct Transform* m_target;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterHommingMissle__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterHommingMissle__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/LaserShooterShockwave.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterHommingMissle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterHommingMissle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterHommingMissle__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterHommingMissle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterHommingMissle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
