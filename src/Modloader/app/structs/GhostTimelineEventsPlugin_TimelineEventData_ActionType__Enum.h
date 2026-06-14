#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum_DEFINED)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum_DEFINED
enum class GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum : uint8_t {
    TimelineStart = 0x00,
    TimelineStop = 0x01,
    IndeterminateLengthDuration = 0x02,
    Branching_Deprecated = 0x03,
    AnimationNormalizedTime = 0x04,
};
#endif
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum_FWDDECL)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum_FWDDECL)
#include <Modloader/app/structs/GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostTimelineEventsPlugin_TimelineEventData_ActionType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
