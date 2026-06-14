#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritTurret__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritTurret__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritTurret__Fields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaycastCommand.h>
#include <Modloader/app/structs/SpiritTurret_AttackableRayHandle.h>
#include <Modloader/app/structs/SpiritTurret_FireState__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED) && defined(IL2CPP_STRUCT_SpiritTurret_FireState__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Guid_DEFINED) && defined(IL2CPP_STRUCT_RaycastCommand_DEFINED) && defined(IL2CPP_STRUCT_SpiritTurret_AttackableRayHandle_DEFINED)
#define IL2CPP_STRUCT_SpiritTurret__Fields_DEFINED
struct SeinTurretSpell_BalancingData;
struct AnimationCurve;
struct ScaleAnimator;
struct LegacyTransparencyAnimator;
struct GameObject;
struct Event_1;
struct Transform;
struct SoundHost;
struct Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_;
struct SpiritTurret__Fields {
    struct MonoBehaviour__Fields _;
    struct SeinTurretSpell_BalancingData* BalancingData;
    struct AnimationCurve* DistanceToSpeedCurve;
    struct ScaleAnimator* TwinkleAnimator;
    struct LegacyTransparencyAnimator* TwinkleAnimator2;
    struct Vector3 TargetOffset;
    float AttackDistance;
    struct GameObject* Projectile;
    struct GameObject* ExplosionPrefab;
    bool TowerMode;
    float _Lifetime_k__BackingField;
    float _ExpirationTwinkleDuration_k__BackingField;
    struct Event_1* ExistLoopSoundEvent;
    struct Event_1* DisableSoundEvent;
    struct Event_1* TwinkleSoundEvent;
    struct Transform* m_transform;
    float m_time;
    float m_cooldown;
    bool m_isTwinkling;
    float m_hoverTime;
    struct Vector3 m_targetPosition;
    float m_gravityAngle;
    struct WwiseEventSystem_SoundHandle m_twinkleSoundHandler;
    struct WwiseEventSystem_SoundHandle m_existLoopSoundHandler;
    struct SoundHost* m_soundHost;
    SpiritTurret_FireState__Enum m_fireState;

    int32_t m_numberOfBurstShots;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct Guid _AttackableConsumerID_k__BackingField;
    struct Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_* m_rays;
    struct RaycastCommand cmd;
    struct SpiritTurret_AttackableRayHandle handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritTurret__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritTurret__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Dictionary_2_IAttackable_SpiritTurret_AttackableRayHandle_.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/ScaleAnimator.h>
#include <Modloader/app/structs/SeinTurretSpell_BalancingData.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritTurret__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritTurret__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritTurret__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritTurret__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritTurret__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
