#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpiritCrescentSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpiritCrescentSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritCrescentSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinSpiritCrescentSpell__Fields_DEFINED
struct SeinGrenadeAttack_QuickThrowAnimations;
struct GameObject;
struct SoundProvider;
struct SeinSpiritCrescentSpell__Fields {
    struct CharacterState__Fields _;
    struct SeinGrenadeAttack_QuickThrowAnimations* QuickThrow;
    struct GameObject* Boomerang;
    struct SoundProvider* ThrowSound;
    struct SoundProvider* CatchSound;
    struct SoundProvider* NotEnoughEnergySound;
    float EnergyCost;
    float EnergyRegain;
    float ThrowSpeed;
    bool Upgraded;
    float AimDeadzone;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpiritCrescentSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSpiritCrescentSpell__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SeinGrenadeAttack_QuickThrowAnimations.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinSpiritCrescentSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritCrescentSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpiritCrescentSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSpiritCrescentSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpiritCrescentSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
