#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlShakeOffBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlShakeOffBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlShakeOffBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BrainBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BrainBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlShakeOffBehaviour__Fields_DEFINED
struct GameObject;
struct PetrifiedOwlStats;
struct Transform;
struct BaseAnimator;
struct Kickback;
struct TimelineEventTrigger__Array;
struct PetrifiedOwlShakeOffBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float AgitationPerShakeOff;
    float GrabbingLegScore;
    float BelowShakeOffHeightScore;
    struct GameObject* OwlEntity;
    struct PetrifiedOwlStats* Stats;
    struct Transform* ShakeOffHeightThreshold;
    struct BaseAnimator* ShakeLeftAnimator;
    struct BaseAnimator* ShakeRightAnimator;
    struct Kickback* PushKickback;
    float PushKickbackStrength;
    struct TimelineEventTrigger__Array* PushEvents;
    struct BaseAnimator* m_currentAnimator;
    bool m_playerStoppedGrabbing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlShakeOffBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlShakeOffBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#include <Modloader/app/structs/TimelineEventTrigger__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlShakeOffBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlShakeOffBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlShakeOffBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlShakeOffBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlShakeOffBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
