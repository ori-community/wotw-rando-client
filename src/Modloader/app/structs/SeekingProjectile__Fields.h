#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeekingProjectile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeekingProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeekingProjectile__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/Projectile__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Projectile__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeekingProjectile__Fields_DEFINED
struct AnimationCurve;
struct Rigidbody;
struct Transform;
struct IDamageReciever;
struct DamageOwner;
struct SeekingProjectile__Fields {
    struct Projectile__Fields _;
    struct AnimationCurve* SpeedOverTime;
    float SpeedScale;
    struct AnimationCurve* AccelerationOverTime;
    float AccelerationScale;
    struct AnimationCurve* TurningSpeedOverTime;
    float TurningSpeedScale;
    float HomingBoostScale;
    float DistanceToStopHoming;
    float DistanceToBoostHoming;
    float Damage;
    DamageWeight__Enum Weight;

    float NearDistance;
    struct Rigidbody* m_rigidbody;
    struct Transform* m_target;
    struct IDamageReciever* m_targetReceiver;
    struct Vector3 m_desiredDirection;
    float m_fixedTime;
    float m_distanceToTarget;
    struct Vector3 m_zLockPosition;
    bool m_isSeeking;
    float m_homingBoost;
    struct DamageOwner* m_damageOwner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeekingProjectile__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeekingProjectile__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/IDamageReciever.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeekingProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeekingProjectile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeekingProjectile__Fields_FWDDECL)
#include <Modloader/app/structs/SeekingProjectile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeekingProjectile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
