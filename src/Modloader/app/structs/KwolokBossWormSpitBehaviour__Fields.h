#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossWormSpitBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossWormSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossWormSpitBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour_Direction__Enum.h>
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour_State__Enum.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_KwolokBossWormSpitBehaviour_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_KwolokBossWormSpitBehaviour_Direction__Enum_DEFINED)
#define IL2CPP_STRUCT_KwolokBossWormSpitBehaviour__Fields_DEFINED
struct MoonTimeline;
struct AnimationPlayer;
struct MoonAnimation;
struct Transform;
struct GameObject;
struct EventTriggerAnimator;
struct AnimationCurve;
struct KwolokBossLocomotion_MoveRequest;
struct List_1_KwolokBossWormSpitBehaviour_WormInfo_;
struct KwolokBossWormSpitBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    struct AnimationPlayer* KwolokAnimationPlayer;
    struct MoonAnimation* SpitMid;
    struct MoonAnimation* SpitLeft;
    struct MoonAnimation* SpitRight;
    struct Transform* SpawnPoint;
    struct GameObject* WormPrefab;
    struct EventTriggerAnimator* SpawnTrigger;
    int32_t NumberOfWorms;
    float DelayToEnableCollisionWithKwolok;
    float SpitSpeed;
    float SpitLeftLimit;
    float SpitRightLimit;
    struct AnimationCurve* SpawnSpeedCurve;
    float ChaseTurnSpeed;
    float MoveSpeed;
    float Acceleration;
    KwolokBossWormSpitBehaviour_State__Enum m_currentState;

    struct KwolokBossLocomotion_MoveRequest* m_moveRequest;
    struct List_1_KwolokBossWormSpitBehaviour_WormInfo_* m_spawnedWorms;
    int32_t m_spawnedWormCount;
    KwolokBossWormSpitBehaviour_Direction__Enum m_currentDirection;

    float AngleOffsetForSideSpits;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossWormSpitBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossWormSpitBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest.h>
#include <Modloader/app/structs/List_1_KwolokBossWormSpitBehaviour_WormInfo_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossWormSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossWormSpitBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossWormSpitBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossWormSpitBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
