#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlLaserBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlLaserBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlLaserBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BrainBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BrainBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlLaserBehaviour__Fields_DEFINED
struct PetrifiedOwlStats;
struct BaseAnimator;
struct GameObject;
struct Transform__Array;
struct TimelineEventTrigger;
struct GameObject__Array;
struct PetrifiedOwlLaserBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float ScorePerIdleTime;
    struct PetrifiedOwlStats* Stats;
    struct BaseAnimator* LaserAnimator;
    struct GameObject* LaserBeamPrefab;
    struct Transform__Array* EyeSockets;
    struct TimelineEventTrigger* LaserEvent;
    struct TimelineEventTrigger* SampleOriPosition;
    struct GameObject__Array* m_lasers;
    struct Vector3 m_lastOriPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlLaserBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlLaserBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#include <Modloader/app/structs/TimelineEventTrigger.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlLaserBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlLaserBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlLaserBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlLaserBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlLaserBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
