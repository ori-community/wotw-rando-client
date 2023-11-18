#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FeedingGroundsBreakablePlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FeedingGroundsBreakablePlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FeedingGroundsBreakablePlatform__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FeedingGroundsBreakablePlatform__Fields_DEFINED
struct MoonTimeline;
struct FeedingGroundsBreakablePlatform__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* IdleTimeline;
    struct MoonTimeline* ShakeTimeline;
    struct MoonTimeline* BreakTimeline;
    struct MoonTimeline* BrokenIdleTimeline;
    struct MoonTimeline* m_currentTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FeedingGroundsBreakablePlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_FeedingGroundsBreakablePlatform__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_FeedingGroundsBreakablePlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FeedingGroundsBreakablePlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FeedingGroundsBreakablePlatform__Fields_FWDDECL)
#include <Modloader/app/structs/FeedingGroundsBreakablePlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FeedingGroundsBreakablePlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
