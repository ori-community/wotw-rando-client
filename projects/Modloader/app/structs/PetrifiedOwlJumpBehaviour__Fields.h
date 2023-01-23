#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlJumpBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlJumpBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlJumpBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BrainBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BrainBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlJumpBehaviour__Fields_DEFINED
struct GameObject;
struct BaseAnimator;
struct TimelineEventTrigger;
struct PetrifiedOwlJumpBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float ScorePerOneMeter;
    float OriPosPredictionTime;
    struct GameObject* OwlEntity;
    struct BaseAnimator* JumpAnimator;
    struct TimelineEventTrigger* BeforeJumpDownEvent;
    struct Vector3 m_posBeforeJump;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlJumpBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlJumpBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/TimelineEventTrigger.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlJumpBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlJumpBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlJumpBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlJumpBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlJumpBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
