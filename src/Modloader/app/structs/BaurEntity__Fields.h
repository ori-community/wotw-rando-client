#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaurEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaurEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaurEntity__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/NPCEntity__Fields.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_BaurEntity__Fields_DEFINED
struct BlendAnimation;
struct FloatAnimationParameter;
struct MoonTimeline;
struct SerializedIntUberState;
struct SerializedBooleanUberState;
struct String;
struct Transform;
struct CameraOffsetZone;
struct Event_1;
struct SoundHost;
struct EventTriggerAnimator;
struct IUberState__Array;
struct BaurEntity__Fields {
    struct NPCEntity__Fields _;
    struct BlendAnimation* LookAnimationLoop;
    struct FloatAnimationParameter* LookAngleParameter;
    struct MoonTimeline* SleepIdleTimeline;
    struct MoonTimeline* UnblockedSleepIdleTimeline;
    struct MoonTimeline* SitIdleTimeline;
    struct MoonTimeline* UnblockGateTimeline;
    struct MoonTimeline* WakeUpTimeline;
    struct MoonTimeline* SleepTalkTimeline;
    struct MoonTimeline* WiggleTimeline;
    struct MoonTimeline* HitTimeline;
    struct SerializedIntUberState* BaurState;
    float LookOffsetX;
    struct SerializedBooleanUberState* IsWinterForestThawed;
    struct MoonTimeline* m_currentIdleTimeline;
    struct ActiveAnimationHandle m_lookAnim;
    struct String* m_interactionActorName;
    struct Transform* InteractionAnchorLeft;
    struct Transform* InteractionOffsetTransform;
    struct CameraOffsetZone* SleepingCameraOffset;
    struct CameraOffsetZone* AwakeCameraOffset;
    struct Event_1* SnoreLoopSoundEvent;
    struct SoundHost* HeadSoundHost;
    struct EventTriggerAnimator* SnoreSoundEventTrigger;
    struct WwiseEventSystem_SoundHandle m_snoringSoundHandler;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaurEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaurEntity__Fields_FWDDECL
#include <Modloader/app/structs/BlendAnimation.h>
#include <Modloader/app/structs/CameraOffsetZone.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BaurEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaurEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaurEntity__Fields_FWDDECL)
#include <Modloader/app/structs/BaurEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaurEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
