#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpperKickReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpperKickReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpperKickReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UpperKickReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct LegacyTimelineSequence;
struct RootMotionProcessorData;
struct Event_1;
struct Switch_1;
struct Condition_1;
struct Locomotion;
struct UpperKickReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* UpperKickSequenceNew;
    struct MoonTimeline* DownKickSequenceNew;
    struct MoonTimeline* EarlyCollisionGroundNew;
    struct MoonTimeline* EarlyCollisionCeillingNew;
    struct LegacyTimelineSequence* UpperKickSequence;
    struct LegacyTimelineSequence* EarlyCollisionGround;
    struct LegacyTimelineSequence* EarlyCollisionCeilling;
    struct RootMotionProcessorData* RootMotion;
    struct RootMotionProcessorData* EarlyCollisionRootMotion;
    struct Event_1* UpperKickSoundEvent;
    struct Switch_1* UpperKickSoundSwitch;
    struct Condition_1* UpperKickSoundSwitchCondition;
    struct Event_1* DownKickSoundEvent;
    struct Switch_1* DownKickSoundSwitch;
    struct Condition_1* DownKickSoundSwitchCondition;
    struct Locomotion* m_locomotion;
    struct LegacyTimelineSequence* m_runningSequence;
    struct MoonTimeline* m_runningSequenceNew;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpperKickReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpperKickReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/Switch_1.h>
#endif
#undef IL2CPP_STRUCT_UpperKickReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpperKickReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpperKickReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/UpperKickReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpperKickReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
