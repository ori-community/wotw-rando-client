#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeaponTorch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeaponTorch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponTorch__Fields_DEFINED)
#include <Modloader/app/structs/MeleeWeapon__Fields.h>
#if defined(IL2CPP_STRUCT_MeleeWeapon__Fields_DEFINED)
#define IL2CPP_STRUCT_MeleeWeaponTorch__Fields_DEFINED
struct GameObject;
struct Transform;
struct MeleeWeaponColliderStick;
struct IComboMove;
struct InstantiationRecycleHelper;
struct MeleeWeaponTorch__Fields {
    struct MeleeWeapon__Fields _;
    struct GameObject* Trail;
    struct Transform* TransformTrailOrigin;
    struct Transform* TransformBase;
    struct Transform* Lightholder;
    struct MeleeWeaponColliderStick* WeaponCollider;
    float TorchAttackBlendInSpeed;
    float TorchAttackBlendOutSpeed;
    float AdditionalComboContinuationWindow;
    float TorchDamage;
    float BurnDamageAmount;
    float BurnDamageInterval;
    float BurnDamageDuration;
    struct GameObject* BurnEffectPrefab;
    float m_torchArmTargetWeight;
    float m_timeOfLastComboEnd;
    struct IComboMove* m_lastComboMove;
    struct InstantiationRecycleHelper* m_damageEffectRecycler;
    struct InstantiationRecycleHelper* m_environmentHitEffectRecycler;
    int32_t HitEffectPrewarmAmount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeaponTorch__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeaponTorch__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/InstantiationRecycleHelper.h>
#include <Modloader/app/structs/MeleeWeaponColliderStick.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeaponTorch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponTorch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeaponTorch__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeWeaponTorch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeaponTorch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
