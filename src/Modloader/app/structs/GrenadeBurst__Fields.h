#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrenadeBurst__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrenadeBurst__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrenadeBurst__Fields_DEFINED)
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_GrenadeBurst__Fields_DEFINED
struct GameObject;
struct DamageOwner;
struct HashSet_1_IAttackable_;
struct SoundHost;
struct Damage;
struct GrenadeBurst__Fields {
    struct MonoBehaviour__Fields _;
    float BurstRadius;
    struct LayerMask BurstOverlapMask;
    float DamageAmount;
    struct GameObject* BurstImpactEffectPrefab;
    float DealDamageDuration;
    DamageType__Enum DamageType;

    DamageWeight__Enum DamageWeight;

    struct DamageOwner* DamageOwner;
    DamageLayerMask__Enum _DamageLayerMask_k__BackingField;

    float m_time;
    float m_waitDelay;
    struct HashSet_1_IAttackable_* m_damageAttackables;
    struct SoundHost* m_soundHost;
    struct Damage* m_damage;
    bool m_suspended;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrenadeBurst__Fields_FWDDECL)
#define IL2CPP_STRUCT_GrenadeBurst__Fields_FWDDECL
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_IAttackable_.h>
#include <Modloader/app/structs/SoundHost.h>
#endif
#undef IL2CPP_STRUCT_GrenadeBurst__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrenadeBurst__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GrenadeBurst__Fields_FWDDECL)
#include <Modloader/app/structs/GrenadeBurst__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrenadeBurst__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
