#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightCrawlerFightController_IdleState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightCrawlerFightController_IdleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerFightController_IdleState__Fields_DEFINED)
#include <Modloader/app/structs/NightCrawlerFightController_FightState__Fields.h>
#if defined(IL2CPP_STRUCT_NightCrawlerFightController_FightState__Fields_DEFINED)
#define IL2CPP_STRUCT_NightCrawlerFightController_IdleState__Fields_DEFINED
struct MoonTimeline;
struct NightCrawlerFightController_IdleState__Fields {
    struct NightCrawlerFightController_FightState__Fields _;
    struct MoonTimeline* m_idleTimeline;
    float m_timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NightCrawlerFightController_IdleState__Fields_FWDDECL)
#define IL2CPP_STRUCT_NightCrawlerFightController_IdleState__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_NightCrawlerFightController_IdleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerFightController_IdleState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NightCrawlerFightController_IdleState__Fields_FWDDECL)
#include <Modloader/app/structs/NightCrawlerFightController_IdleState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightCrawlerFightController_IdleState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
