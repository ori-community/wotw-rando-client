#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderboardScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderboardScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardScreen_DEFINED)
#include <Modloader/app/structs/RaceLeaderboardScreen__Fields.h>
#if defined(IL2CPP_STRUCT_RaceLeaderboardScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderboardScreen_DEFINED
struct RaceLeaderboardScreen__Class;
struct RaceLeaderboardScreen {
    struct RaceLeaderboardScreen__Class* klass;
    MonitorData* monitor;
    struct RaceLeaderboardScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderboardScreen_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderboardScreen_FWDDECL
#include <Modloader/app/structs/RaceLeaderboardScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderboardScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardScreen_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderboardScreen_FWDDECL)
#include <Modloader/app/structs/RaceLeaderboardScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderboardScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
