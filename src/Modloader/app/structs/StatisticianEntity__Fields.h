#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatisticianEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatisticianEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticianEntity__Fields_DEFINED)
#include <Modloader/app/structs/NPCEntity__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_StatisticianEntity__Fields_DEFINED
struct MoonAnimation;
struct MoonTimeline;
struct TimelineEntityTask;
struct StatisticianEntity__Fields {
    struct NPCEntity__Fields _;
    struct MoonAnimation* HiddenAnimationLoop;
    struct MoonTimeline* HideTimeline;
    struct TimelineEntityTask* HideTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatisticianEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_StatisticianEntity__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityTask.h>
#endif
#undef IL2CPP_STRUCT_StatisticianEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatisticianEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StatisticianEntity__Fields_FWDDECL)
#include <Modloader/app/structs/StatisticianEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatisticianEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
