#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLifeAbsorbSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLifeAbsorbSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLifeAbsorbSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLifeAbsorbSpell__Fields_DEFINED
struct GameObject;
struct BaseAnimator;
struct List_1_SeinLifeAbsorbArm_;
struct SeinLifeAbsorbSpell__Fields {
    struct CharacterState__Fields _;
    int32_t MaxTargets;
    float DrainDistance;
    struct GameObject* Arm;
    float DelayBetweenHeals;
    float HealthPerHeal;
    float EnergyCostPerHeal;
    struct BaseAnimator* CastingAnimator;
    float m_remainingTimeTillHeal;
    struct List_1_SeinLifeAbsorbArm_* m_arms;
    bool m_isCasting;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLifeAbsorbSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinLifeAbsorbSpell__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_SeinLifeAbsorbArm_.h>
#endif
#undef IL2CPP_STRUCT_SeinLifeAbsorbSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLifeAbsorbSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinLifeAbsorbSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinLifeAbsorbSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLifeAbsorbSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
