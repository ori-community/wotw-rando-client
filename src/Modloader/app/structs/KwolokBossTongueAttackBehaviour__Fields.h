#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossTongueAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossTongueAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossTongueAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_KwolokBossTongueAttackBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct MoonFloat;
struct GameObject;
struct SoundHost;
struct Event_1;
struct KwolokBossTongueAttackBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    struct EventTriggerAnimator* MouthHeightLockEvent;
    struct EventTriggerAnimator* TargetLockEvent;
    struct EventTriggerAnimator* MaxExtentReachedEvent;
    struct MoonFloat* TongueIKWeight;
    float AccelerationMultiplier;
    float DecelerationMultiplier;
    float IKLerpInTime;
    float IKLerpOutTime;
    bool CanHitTerrain;
    bool UseTongueMaxLength;
    float AngleForMaxHeightAnimationBlend;
    struct GameObject* TerrainHitFX;
    float TongueOverlapWithSolidsRadius;
    bool m_tongueHitFXSpawned;
    struct SoundHost* TongueSoundHost;
    struct Event_1* TongueEnterWaterEvent;
    bool m_tongueEnterWaterPlayed;
    struct Vector3 m_lockedMouthPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossTongueAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossTongueAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SoundHost.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossTongueAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossTongueAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossTongueAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossTongueAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossTongueAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
