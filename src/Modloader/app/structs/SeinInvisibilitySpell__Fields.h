#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinInvisibilitySpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinInvisibilitySpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInvisibilitySpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinInvisibilitySpell__Fields_DEFINED
struct SoundProvider;
struct LegacyTransparencyAnimator;
struct GameObject;
struct SeinInvisibilitySpell__Fields {
    struct CharacterState__Fields _;
    float EnergyCostPerSecond;
    struct SoundProvider* ActivateSound;
    struct SoundProvider* DeactivateSound;
    bool m_isInvisible;
    struct LegacyTransparencyAnimator* m_transparencyAnimator;
    float m_coolDownTime;
    struct GameObject* ActivateEffect;
    struct GameObject* DeactivateEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinInvisibilitySpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinInvisibilitySpell__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinInvisibilitySpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInvisibilitySpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinInvisibilitySpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinInvisibilitySpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinInvisibilitySpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
