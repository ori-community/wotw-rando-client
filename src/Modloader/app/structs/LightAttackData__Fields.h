#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightAttackData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightAttackData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightAttackData__Fields_DEFINED)
#include <Modloader/app/structs/DamageType__Enum.h>
#if defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_LightAttackData__Fields_DEFINED
struct MoonAnimation;
struct GameObject;
struct SoundProvider;
struct __declspec(align(8)) LightAttackData__Fields {
    float Duration;
    float ComboDelay;
    float Cooldown;
    float SlashEffectDelay;
    float DealDamageDelay;
    DamageType__Enum DamageType;

    float Damage;
    struct MoonAnimation* NewAnimation;
    struct GameObject* Effect;
    struct GameObject* SlashEffect;
    struct SoundProvider* HitSound;
    struct SoundProvider* SlashSound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightAttackData__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightAttackData__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_LightAttackData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightAttackData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightAttackData__Fields_FWDDECL)
#include <Modloader/app/structs/LightAttackData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightAttackData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
