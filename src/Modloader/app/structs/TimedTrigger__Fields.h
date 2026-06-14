#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimedTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimedTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedTrigger__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_TimedTrigger__Fields_DEFINED
struct MoonTimeline;
struct TimedTrigger__Fields {
    struct Condition_1__Fields _;
    float Duration;
    bool Repeat;
    bool Paused;
    struct MoonTimeline* Timeline;
    float m_time;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimedTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimedTrigger__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_TimedTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimedTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/TimedTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimedTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
