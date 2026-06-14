#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinHeavySpiritSlash__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinHeavySpiritSlash__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHeavySpiritSlash__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/SeinHeavySpiritSlash_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SeinHeavySpiritSlash_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinHeavySpiritSlash__Fields_DEFINED
struct AnimationCurve;
struct MoonAnimation;
struct SoundProvider;
struct GameObject;
struct List_1_IAttackable_;
struct SeinHeavySpiritSlash__Fields {
    struct CharacterState__Fields _;
    float Deceleration;
    float HorizontalSpeed;
    struct AnimationCurve* HorizontalSpeedCurve;
    float EnergyCost;
    struct MoonAnimation* Charge;
    struct SoundProvider* ChargeSoundProvider;
    struct SoundProvider* SlashSoundProvider;
    struct GameObject* SlashEffect;
    struct GameObject* HitEffect;
    float SlashAngle;
    float ChargeDuration;
    float SlashDuration;
    struct AnimationCurve* SlashRadius;
    DamageType__Enum DamageType;

    float Damage;
    struct AnimationCurve* SlashAngleCurve;
    SeinHeavySpiritSlash_State__Enum m_currentState;

    float m_currentStateTime;
    bool m_spriteMirrorLock;
    struct List_1_IAttackable_* m_haveBeenHit;
    bool m_hasDealtDamage;
    struct GameObject* m_slashEffect;
    struct GameObject* m_hitEffect;
    bool m_slashedMidAir;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinHeavySpiritSlash__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinHeavySpiritSlash__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_IAttackable_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinHeavySpiritSlash__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHeavySpiritSlash__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinHeavySpiritSlash__Fields_FWDDECL)
#include <Modloader/app/structs/SeinHeavySpiritSlash__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinHeavySpiritSlash__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
