#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlStompBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlStompBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlStompBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BrainBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BrainBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlStompBehaviour__Fields_DEFINED
struct GameObject;
struct PetrifiedOwlStats;
struct BaseAnimator;
struct PlayerStayInsideZoneTrigger;
struct PetrifiedOwlStompBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float StayInsideTriggerScore;
    float GrabInnerStiltScore;
    float ScorePerAgitation;
    float SeinPositionPredictionTime;
    struct GameObject* OwlEntity;
    struct PetrifiedOwlStats* Stats;
    struct BaseAnimator* LeftStompAnimator;
    struct BaseAnimator* RightStompAnimator;
    struct PlayerStayInsideZoneTrigger* LeftStompTrigger;
    struct PlayerStayInsideZoneTrigger* RightStompTrigger;
    struct BaseAnimator* m_currentAnimator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlStompBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlStompBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlStompBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlStompBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlStompBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlStompBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlStompBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
