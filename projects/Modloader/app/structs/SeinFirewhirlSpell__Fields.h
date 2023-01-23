#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFirewhirlSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFirewhirlSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFirewhirlSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinFirewhirlSpell__Fields_DEFINED
struct GameObject;
struct SoundProvider;
struct List_1_FirewhirlBeam_;
struct List_1_UnityEngine_Rect_;
struct DamageOwner;
struct SeinFirewhirlSpell__Fields {
    struct CharacterState__Fields _;
    struct GameObject* BeamPrefab;
    float DistanceBetweenBeams;
    float BeamsPerSecond;
    int32_t BeamCount;
    float HitsPerSecond;
    float DamageAmount;
    float EnergyCost;
    float CooldownDuration;
    float AirBeamSinkDistance;
    struct SoundProvider* StartCastingSound;
    float m_delayTillNextHit;
    float m_spellCoolDown;
    struct List_1_FirewhirlBeam_* m_beams;
    struct List_1_UnityEngine_Rect_* m_beamRectangles;
    struct Vector3 m_burstPosition;
    struct Vector3 m_direction;
    int32_t m_remainingBursts;
    float m_nextBurstRemainingTime;
    struct DamageOwner* m_damageOwner;
    bool m_lastBeamInAir;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFirewhirlSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinFirewhirlSpell__Fields_FWDDECL
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_FirewhirlBeam_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinFirewhirlSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFirewhirlSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinFirewhirlSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinFirewhirlSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFirewhirlSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
