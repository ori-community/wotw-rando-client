#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinStandardSpiritFlameAbility__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinStandardSpiritFlameAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStandardSpiritFlameAbility__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinStandardSpiritFlameAbility__Fields_DEFINED
struct ShotCombo;
struct SeinStandardSpiritFlameAbility_PoisonSettings;
struct SpiritFlame__Array;
struct SeinStandardSpiritFlameAbility__Fields {
    struct CharacterState__Fields _;
    struct ShotCombo* StandardSpiritFlameShotCombo;
    struct SeinStandardSpiritFlameAbility_PoisonSettings* Poison;
    struct SpiritFlame__Array* StandardSpiritFlames;
    float SpiritFlameRange;
    bool CanDamageOverTime;
    float m_timeOfLastShot;
    float m_timeOfBeforeLastShot;
    bool m_isSpamming;
    float m_timeOfLastSpam;
    float SpamShotSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinStandardSpiritFlameAbility__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinStandardSpiritFlameAbility__Fields_FWDDECL
#include <Modloader/app/structs/SeinStandardSpiritFlameAbility_PoisonSettings.h>
#include <Modloader/app/structs/ShotCombo.h>
#include <Modloader/app/structs/SpiritFlame__Array.h>
#endif
#undef IL2CPP_STRUCT_SeinStandardSpiritFlameAbility__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStandardSpiritFlameAbility__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinStandardSpiritFlameAbility__Fields_FWDDECL)
#include <Modloader/app/structs/SeinStandardSpiritFlameAbility__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinStandardSpiritFlameAbility__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
