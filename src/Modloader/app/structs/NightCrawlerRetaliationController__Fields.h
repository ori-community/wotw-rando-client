#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightCrawlerRetaliationController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightCrawlerRetaliationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerRetaliationController__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED)
#define IL2CPP_STRUCT_NightCrawlerRetaliationController__Fields_DEFINED
struct DamageReceiver;
struct PlayerInsideZoneChecker;
struct Enum__Array;
struct NightCrawlerRetaliationController__Fields {
    struct Condition_1__Fields _;
    float Timeout;
    struct DamageReceiver* DamageReceiver;
    struct PlayerInsideZoneChecker* PlayerKillZone;
    float m_timer;
    bool m_damageTaken;
    bool m_resetDamageTakenFlag;
    struct Enum__Array* m_entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NightCrawlerRetaliationController__Fields_FWDDECL)
#define IL2CPP_STRUCT_NightCrawlerRetaliationController__Fields_FWDDECL
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#endif
#undef IL2CPP_STRUCT_NightCrawlerRetaliationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightCrawlerRetaliationController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NightCrawlerRetaliationController__Fields_FWDDECL)
#include <Modloader/app/structs/NightCrawlerRetaliationController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightCrawlerRetaliationController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
