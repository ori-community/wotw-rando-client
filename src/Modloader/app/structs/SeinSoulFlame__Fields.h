#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSoulFlame__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSoulFlame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSoulFlame__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_SeinSoulFlame__Fields_DEFINED
struct BaseAnimator;
struct GameObject;
struct ActionMethod;
struct AnimationCurve;
struct AchievementAsset;
struct MessageProvider;
struct MessageBox;
struct SoulFlame;
struct SoundProvider;
struct SoundSource;
struct MoonGuid;
struct SeinSoulFlame__Fields {
    struct CharacterState__Fields _;
    struct BaseAnimator* ChargeEffectAnimator;
    struct GameObject* CheckpointMarker;
    struct ActionMethod* CheckpointSequence;
    struct AnimationCurve* ParticleRateOverSpeed;
    struct AchievementAsset* CreateManySoulLinkAchievement;
    struct MessageProvider* SkillTreeRekindleMessage;
    struct MessageProvider* SkillTreeMessage;
    struct MessageProvider* NotSafeZoneMessage;
    struct MessageProvider* NotSafeEnemiesMessage;
    struct MessageProvider* NotSafeGroundMessage;
    struct MessageProvider* SavePedestalZoneMessage;
    struct MessageProvider* NotReadyMessage;
    struct LayerMask UnsafeMask;
    struct MessageBox* m_notSafeHint;
    struct MessageBox* m_notReadyHint;
    struct MessageBox* m_skillTreeHint;
    struct GameObject* m_checkpointMarkerGameObject;
    struct SoulFlame* m_soulFlame;
    int32_t m_numberOfSoulFlamesCast;
    float m_holdDownTime;
    float HoldDownDuration;
    float m_nagTimer;
    float NagDuration;
    bool LockSoulFlame;
    struct SoundProvider* NotSafeSound;
    struct SoundProvider* NotReadySound;
    struct SoundSource* ChargingSound;
    struct SoundSource* AbortChargingSound;
    struct SoundProvider* FullyAbortedSound;
    struct SoundProvider* SoulFlameReadySoundProvider;
    struct GameObject* SoulFlameReadyEffect;
    struct GameObject* SoulFlameReadyText;
    float CooldownDuration;
    float RekindleCooldownDuration;
    float m_cooldownRemaining;
    bool m_readyForReadySequence;
    float m_tapRemainingTime;
    struct MoonGuid* m_sceneCheckpoint;
    bool m_isCasting;
    float m_castingDuration;
    float m_delayOnGround;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSoulFlame__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSoulFlame__Fields_FWDDECL
#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/SoulFlame.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_SeinSoulFlame__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSoulFlame__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSoulFlame__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSoulFlame__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSoulFlame__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
