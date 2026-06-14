#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightCrawlerChaseController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightCrawlerChaseController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerChaseController__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_NightCrawlerChaseController__Fields_DEFINED
struct SerializedBooleanUberState;
struct PlayerInsideZoneChecker;
struct MoonAnimator;
struct MoonAnimation;
struct MoonTimeline;
struct GameObject;
struct BreakablePhysicalSetup;
struct EventTriggerAnimator;
struct EventTriggerAnimator__Array;
struct BossCameraSetup;
struct NightCrawlerFightController;
struct ClipAnimation;
struct DynamicDataResolver;
struct NightCrawlerChaseController__Fields {
    struct MonoBehaviour__Fields _;
    bool _InvalidateParentTimelineCache_k__BackingField;
    struct SerializedBooleanUberState* ChaseState;
    struct SerializedBooleanUberState* DefeatedState;
    struct PlayerInsideZoneChecker* StartZoneChecker;
    struct MoonAnimator* Animator;
    struct MoonAnimation* AdditiveHitReactionAnimation;
    struct MoonTimeline* Timeline;
    struct MoonTimeline* ChaseTimeline;
    struct MoonTimeline* PushOriTimeline;
    struct GameObject* ChaseCameraZones;
    struct CheckpointFunctionality StartChaseCheckpoint;
    struct BreakablePhysicalSetup* BridgeSetup;
    struct EventTriggerAnimator* GetTorchTrigger;
    struct EventTriggerAnimator__Array* KillPlayerTriggers;
    struct BossCameraSetup* BossCameraSetup;
    struct NightCrawlerFightController* FightController;
    struct ClipAnimation* m_currentAnimation;
    struct ActiveAnimationHandle m_currentActiveAnimation;
    struct DynamicDataResolver* m_dataResolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NightCrawlerChaseController__Fields_FWDDECL)
#define IL2CPP_STRUCT_NightCrawlerChaseController__Fields_FWDDECL
#include <Modloader/app/structs/BossCameraSetup.h>
#include <Modloader/app/structs/BreakablePhysicalSetup.h>
#include <Modloader/app/structs/ClipAnimation.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NightCrawlerFightController.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_NightCrawlerChaseController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerChaseController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NightCrawlerChaseController__Fields_FWDDECL)
#include <Modloader/app/structs/NightCrawlerChaseController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightCrawlerChaseController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
