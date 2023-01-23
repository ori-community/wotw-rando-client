#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveHammerStomp__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveHammerStomp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerStomp__Fields_DEFINED)
#include <Modloader/app/structs/MeleeComboMoveHammerBase__Fields.h>
#include <Modloader/app/structs/MeleeComboMoveHammerStomp_State__Enum.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_MeleeComboMoveHammerStomp_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_RaycastHit__DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveHammerStomp__Fields_DEFINED
struct HammerComboMoveStomp_BalancingData;
struct MoonTimeline;
struct GameObject;
struct MoonTrail;
struct List_1_FirewhirlBeamSpawner_;
struct SerializedByteUberState;
struct Event_1;
struct MeleeWeaponHammer;
struct Transform;
struct Collider;
struct MeleeComboMoveHammerStomp__Fields {
    struct MeleeComboMoveHammerBase__Fields _;
    struct HammerComboMoveStomp_BalancingData* Balancing;
    struct MoonTimeline* StartTimeline;
    struct MoonTimeline* LoopTimeline;
    struct MoonTimeline* EndTimeline;
    struct MoonTimeline* StartShortTimeline;
    struct MoonTimeline* EndShortTimeline;
    float Speed;
    float ShortSlamRayLenght;
    float landDynamicPushForce;
    float landDynamicSpeed;
    float LandPredictionTimeAnticipation;
    float FallCancelDistance;
    struct GameObject* LandEffect;
    struct GameObject* PrepareEffect;
    struct MoonTrail* FallingTrail;
    struct List_1_FirewhirlBeamSpawner_* ShockwaveSpawners;
    struct SerializedByteUberState* ShockwaveUpgradeLevel;
    struct Event_1* StartSoundEvent;
    struct Event_1* FallSoundEvent;
    struct Event_1* LandSoundEvent;
    struct Event_1* HammerStompCancelSoundEvent;
    struct MeleeWeaponHammer* m_hammer;
    MeleeComboMoveHammerStomp_State__Enum m_currentState;

    bool m_anticipatingLanding;
    struct Nullable_1_UnityEngine_RaycastHit_ m_predictedLandHit;
    struct Vector3 m_positionPreLand;
    float m_placeOnGroundTimer;
    float m_placeOnGroundDuration;
    bool m_playShortLand;
    struct Vector3 m_fallStartPosition;
    struct Transform* m_landEffect;
    struct Collider* m_shortLandDetectedCollider;
    struct Vector3 m_predictedLandHitPosition;
    float _EffectiveDamage_k__BackingField;
    struct GameObject* m_startEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerStomp__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveHammerStomp__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HammerComboMoveStomp_BalancingData.h>
#include <Modloader/app/structs/List_1_FirewhirlBeamSpawner_.h>
#include <Modloader/app/structs/MeleeWeaponHammer.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonTrail.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveHammerStomp__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerStomp__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveHammerStomp__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveHammerStomp__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveHammerStomp__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
