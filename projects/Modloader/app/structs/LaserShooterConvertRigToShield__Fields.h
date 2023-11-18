#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterConvertRigToShield__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterConvertRigToShield__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterConvertRigToShield__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserShooterConvertRigToShield__Fields_DEFINED
struct Rigidbody;
struct SphereCollider;
struct DamageDealer;
struct EntityTargetting;
struct LaserShieldDamageReceiver;
struct DamageTextSpawner;
struct List_1_UnityEngine_Transform_;
struct LaserShooterConvertRigToShield__Fields {
    struct MonoBehaviour__Fields _;
    struct Rigidbody* RigidbodyReference;
    struct SphereCollider* ColliderReference;
    struct DamageDealer* DamageDealerReference;
    struct EntityTargetting* TargettingReference;
    struct LaserShieldDamageReceiver* DamageReceiverReference;
    struct DamageTextSpawner* TextSpawnerReference;
    struct List_1_UnityEngine_Transform_* ModelPieces;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterConvertRigToShield__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterConvertRigToShield__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageTextSpawner.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SphereCollider.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterConvertRigToShield__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterConvertRigToShield__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterConvertRigToShield__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterConvertRigToShield__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterConvertRigToShield__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
