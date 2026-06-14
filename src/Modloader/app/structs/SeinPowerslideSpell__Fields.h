#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPowerslideSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPowerslideSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPowerslideSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SeinPowerslideSpell_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinPowerslideSpell_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_SeinPowerslideSpell__Fields_DEFINED
struct AnimationCurve;
struct SoundProvider;
struct GameObject;
struct MoonAnimation;
struct HashSet_1_IAttackable_;
struct List_1_SeinPowerslideSpell_FireTrailPoint_;
struct DamageOwner;
struct SeinPowerslideSpell__Fields {
    struct CharacterState__Fields _;
    struct AnimationCurve* SpeedOverTime;
    float PowerslideDuration;
    float FireTrailDuration;
    float EnergyCost;
    float Cooldown;
    float KickUpStrength;
    float KickUpDamage;
    float DamagePerSecond;
    float FireDamageRadius;
    struct SoundProvider* PowerslideSound;
    struct SoundProvider* NotEnoughEnergySound;
    struct GameObject* FireSoundLoop;
    struct MoonAnimation* Powerslide;
    struct GameObject* FireEffect;
    float m_fireDamageRadiusSqr;
    float m_distanceBetweenFirePoints;
    SeinPowerslideSpell_State__Enum m_state;

    float m_timeInCurrentState;
    bool m_stopAnimation;
    struct HashSet_1_IAttackable_* m_attackablesIgnore;
    float m_distanceToNextFirePoint;
    struct Vector3 m_lastPostion;
    struct Vector3 m_powerslideStartPosition;
    struct List_1_SeinPowerslideSpell_FireTrailPoint_* m_fireTrail;
    struct LayerMask m_solidsLayer;
    float m_timeOfLastDealDamage;
    float m_dealDamageInterval;
    int32_t m_firePointCountToSoundEffect;
    struct DamageOwner* m_damageOwner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPowerslideSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinPowerslideSpell__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_IAttackable_.h>
#include <Modloader/app/structs/List_1_SeinPowerslideSpell_FireTrailPoint_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinPowerslideSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPowerslideSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinPowerslideSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinPowerslideSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPowerslideSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
