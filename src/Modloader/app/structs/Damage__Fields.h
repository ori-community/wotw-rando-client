#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Damage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Damage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Damage__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/Damage_DamageEffectPositionMode__Enum.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpiritShardType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Damage_DamageEffectPositionMode__Enum_DEFINED)
#define IL2CPP_STRUCT_Damage__Fields_DEFINED
struct HashSet_1_SpiritShardType_;
struct GameObject;
struct DamageOwner;
struct Action_1_DamageResult_;
struct Func_2_DamageResult_EffectSpawn_;
struct AnimationCurve;
struct __declspec(align(8)) Damage__Fields {
    struct HashSet_1_SpiritShardType_* AffectingShards;
    bool _Charged_k__BackingField;
    float m_amount;
    float m_amountBonus;
    struct Vector2 m_force;
    struct Vector2 m_originalForceDirection;
    struct Vector3 m_position;
    DamageType__Enum m_damageType;

    DamageWeight__Enum m_damageWeight;

    float m_speedTransfer;
    AbilityType__Enum m_abilityType;

    struct GameObject* m_sender;
    float m_disableFallingDuration;
    float m_stunDuration;
    bool m_ignored;
    bool m_bypassPlayerInvincibility;
    SpiritShardType__Enum m_spiritShardType;

    int32_t ID;
    float TickRate;
    int32_t NumberOfTicks;
    DamageLayerMask__Enum DamageLayerMask;

    struct DamageOwner* DamageOwner;
    struct Action_1_DamageResult_* DamageTicked;
    struct Func_2_DamageResult_EffectSpawn_* DamageEffectProviderMethod;
    Damage_DamageEffectPositionMode__Enum DamageEffectPosition;

    struct AnimationCurve* KickbackCurve;
    bool StraightDownwardAttack;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Damage__Fields_FWDDECL)
#define IL2CPP_STRUCT_Damage__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_DamageResult_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/Func_2_DamageResult_EffectSpawn_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_SpiritShardType_.h>
#endif
#undef IL2CPP_STRUCT_Damage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Damage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Damage__Fields_FWDDECL)
#include <Modloader/app/structs/Damage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Damage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
