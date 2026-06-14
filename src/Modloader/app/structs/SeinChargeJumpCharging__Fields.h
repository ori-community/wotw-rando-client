#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinChargeJumpCharging__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinChargeJumpCharging__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeJumpCharging__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinChargeJumpCharging_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinChargeJumpCharging_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinChargeJumpCharging__Fields_DEFINED
struct SoundProvider;
struct SoundPlayer;
struct SoundSource;
struct GameObject;
struct SeinChargeJumpCharging__Fields {
    struct CharacterState__Fields _;
    struct SoundProvider* ChargeSound;
    struct SoundPlayer* m_lastChargingSound;
    struct SoundSource* ChargedSound;
    struct SoundProvider* UnChargeSound;
    SeinChargeJumpCharging_State__Enum CurrentState;

    float m_stateCurrentTime;
    float m_wallChargeHeldTime;
    float ChargingTime;
    float UnchargingTime;
    struct GameObject* ChargingEffectToSpawn;
    struct GameObject* UnchargingEffectToSpawn;
    struct GameObject* ChargedEffectToSpawn;
    struct GameObject* ChargeJumpCompleteEffectToSpawn;
    struct GameObject* m_chargingEffect;
    struct GameObject* m_unchargingEffect;
    struct GameObject* m_chargedEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinChargeJumpCharging__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinChargeJumpCharging__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_SeinChargeJumpCharging__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeJumpCharging__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinChargeJumpCharging__Fields_FWDDECL)
#include <Modloader/app/structs/SeinChargeJumpCharging__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinChargeJumpCharging__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
