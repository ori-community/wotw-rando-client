#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SplitTurnAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SplitTurnAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplitTurnAnimation__Fields_DEFINED)
#include <Modloader/app/structs/RangeAnimationEntry__Fields.h>
#include <Modloader/app/structs/SplitTurnAnimation_State__Enum.h>
#if defined(IL2CPP_STRUCT_RangeAnimationEntry__Fields_DEFINED) && defined(IL2CPP_STRUCT_SplitTurnAnimation_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SplitTurnAnimation__Fields_DEFINED
struct MoonTimeline;
struct LegacyTimelineSequence;
struct ILocomotionTurningHandler;
struct SplitTurnAnimation__Fields {
    struct RangeAnimationEntry__Fields _;
    struct MoonTimeline* turningStartNew;
    struct MoonTimeline* turningEndNew;
    struct LegacyTimelineSequence* turningStart;
    struct LegacyTimelineSequence* turningEnd;
    float m_lookDirection;
    SplitTurnAnimation_State__Enum m_state;

    struct ILocomotionTurningHandler* m_locomotion;
    bool m_isDone;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SplitTurnAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_SplitTurnAnimation__Fields_FWDDECL
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SplitTurnAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplitTurnAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SplitTurnAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/SplitTurnAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SplitTurnAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
