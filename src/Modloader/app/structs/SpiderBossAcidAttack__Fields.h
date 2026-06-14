#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossAcidAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossAcidAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossAcidAttack__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SpiderBossTimelineBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SpiderBossTimelineBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpiderBossAcidAttack__Fields_DEFINED
struct MoonVector3;
struct EventTriggerAnimator;
struct SpiderBossAcidAttack_AttackSettings;
struct Transform;
struct MoonFloat;
struct GameObject;
struct List_1_UnityEngine_Vector3_;
struct PrefabSpawner;
struct SpiderBossAcidAttack__Fields {
    struct SpiderBossTimelineBehaviour__Fields _;
    struct MoonVector3* TargetPosition;
    struct EventTriggerAnimator* StartAttackTrigger;
    struct SpiderBossAcidAttack_AttackSettings* AttackStartSettingsTopToDown;
    struct SpiderBossAcidAttack_AttackSettings* AttackStartSettingsDownToTop;
    struct Transform* AcidSprayTransform;
    struct MoonFloat* SprayDistance;
    struct LayerMask SprayHitMask;
    struct LayerMask SprayHitPlayerMask;
    float SphereCastRadius;
    float DirectHitDamageAmount;
    bool ShouldSpawnCreep;
    float CreepTime;
    float CreepDamage;
    struct GameObject* CreepPrefab;
    float MinDistanceBetweenCreep;
    struct Transform* m_acidSprayTransformOrigin;
    struct Vector3 m_targetPos;
    float m_currentAngle;
    float m_currentAttackTime;
    struct SpiderBossAcidAttack_AttackSettings* m_currentSpraySettings;
    struct List_1_UnityEngine_Vector3_* m_creepPositions;
    struct PrefabSpawner* m_spraySpawner;
    bool UseSprayProjectiles;
    float ProjectileGravity;
    float ProjectileSpeed;
    float TimeBetweenProjectiles;
    float m_projectileTimer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossAcidAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossAcidAttack__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/SpiderBossAcidAttack_AttackSettings.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossAcidAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossAcidAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossAcidAttack__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossAcidAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossAcidAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
