#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinTrapSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinTrapSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTrapSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinTrapSpell__Fields_DEFINED
struct GameObject;
struct SoundProvider;
struct Trap;
struct SeinTrapSpell__Fields {
    struct CharacterState__Fields _;
    struct GameObject* Trap;
    float EnergyCost;
    struct SoundProvider* NotEnoughEnergySoundProvider;
    struct Trap* m_currentTrap;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinTrapSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinTrapSpell__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Trap.h>
#endif
#undef IL2CPP_STRUCT_SeinTrapSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTrapSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinTrapSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinTrapSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinTrapSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
