#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritSentry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritSentry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritSentry__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritSentry__Fields_DEFINED
struct AnimationCurve;
struct ScaleAnimator;
struct LegacyTransparencyAnimator;
struct SoundProvider;
struct GameObject;
struct Transform;
struct SoundPlayer;
struct SpiritSentry__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve* DistanceToSpeedCurve;
    struct ScaleAnimator* TwinkleAnimator;
    struct LegacyTransparencyAnimator* TwinkleAnimator2;
    struct SoundProvider* TwinkleSound;
    struct Vector3 TargetOffset;
    float AttackDistance;
    float ShotCooldownMin;
    float ShotCooldownMax;
    float Damage;
    struct GameObject* Projectile;
    struct GameObject* DespawnEffect;
    struct SoundProvider* DisableSound;
    bool TowerMode;
    float _Duration_k__BackingField;
    float _ExpirationTwinkleDuration_k__BackingField;
    struct Transform* m_transform;
    float m_time;
    float m_cooldown;
    bool m_isTwinkling;
    struct SoundPlayer* m_twinkleSoundPlayer;
    float m_hoverTime;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritSentry__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritSentry__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/ScaleAnimator.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritSentry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritSentry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritSentry__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritSentry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritSentry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
