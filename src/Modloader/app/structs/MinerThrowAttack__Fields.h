#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerThrowAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerThrowAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerThrowAttack__Fields_DEFINED)
#include <Modloader/app/structs/GroundMovementTimelineBehaviourNew__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_GroundMovementTimelineBehaviourNew__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MinerThrowAttack__Fields_DEFINED
struct EventTriggerAnimator;
struct PrefabSpawner;
struct MinerThrowAttackSettings;
struct Transform;
struct MinerThrowAttack_ProjectileInstance;
struct MinerThrowAttack__Fields {
    struct GroundMovementTimelineBehaviourNew__Fields _;
    struct EventTriggerAnimator* ThrowTrigger;
    struct EventTriggerAnimator* AimTrigger;
    struct EventTriggerAnimator* PullOutTrigger;
    struct PrefabSpawner* ProjectileSpawner;
    struct MinerThrowAttackSettings* Settings;
    float m_projectileSpeed;
    float m_projectileGravity;
    float m_projectileDamage;
    bool ShootHighAngle;
    struct Transform* ThrowingHand;
    struct Vector3 shootTargetPos;
    struct MinerThrowAttack_ProjectileInstance* m_projectileInstance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerThrowAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerThrowAttack__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MinerThrowAttackSettings.h>
#include <Modloader/app/structs/MinerThrowAttack_ProjectileInstance.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MinerThrowAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerThrowAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerThrowAttack__Fields_FWDDECL)
#include <Modloader/app/structs/MinerThrowAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerThrowAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
