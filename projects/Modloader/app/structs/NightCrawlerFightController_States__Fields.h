#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightCrawlerFightController_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightCrawlerFightController_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerFightController_States__Fields_DEFINED)
#define IL2CPP_STRUCT_NightCrawlerFightController_States__Fields_DEFINED
struct NightCrawlerFightController_FightState;
struct __declspec(align(8)) NightCrawlerFightController_States__Fields {
    struct NightCrawlerFightController_FightState* Idle;
    struct NightCrawlerFightController_FightState* AttackClose;
    struct NightCrawlerFightController_FightState* AttackFar;
    struct NightCrawlerFightController_FightState* FarHold;
    struct NightCrawlerFightController_FightState* FarRetreat;
    struct NightCrawlerFightController_FightState* DefeatRetreat;
};
#endif
#if !defined(IL2CPP_STRUCT_NightCrawlerFightController_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_NightCrawlerFightController_States__Fields_FWDDECL
#include <Modloader/app/structs/NightCrawlerFightController_FightState.h>
#endif
#undef IL2CPP_STRUCT_NightCrawlerFightController_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerFightController_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NightCrawlerFightController_States__Fields_FWDDECL)
#include <Modloader/app/structs/NightCrawlerFightController_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightCrawlerFightController_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
