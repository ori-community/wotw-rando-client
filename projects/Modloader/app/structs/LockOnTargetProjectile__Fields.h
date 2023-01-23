#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LockOnTargetProjectile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LockOnTargetProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockOnTargetProjectile__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LockOnTargetProjectile__Fields_DEFINED
struct LockOnTarget;
struct GameObject;
struct Rigidbody;
struct Transform;
struct LockOnTargetProjectile__Fields {
    struct MonoBehaviour__Fields _;
    struct LockOnTarget* LockOnTarget;
    float StartSpeedMultiplier;
    float Speed;
    float Damage;
    float AccelerationDuration;
    float HomingDuration;
    struct GameObject* ImpactEffect;
    struct Vector3 m_startSpeed;
    float m_currentTime;
    bool m_hasDetonated;
    struct Rigidbody* m_rigidbody;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LockOnTargetProjectile__Fields_FWDDECL)
#define IL2CPP_STRUCT_LockOnTargetProjectile__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LockOnTarget.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LockOnTargetProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LockOnTargetProjectile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LockOnTargetProjectile__Fields_FWDDECL)
#include <Modloader/app/structs/LockOnTargetProjectile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LockOnTargetProjectile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
