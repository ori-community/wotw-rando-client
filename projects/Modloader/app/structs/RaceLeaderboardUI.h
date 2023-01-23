#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderboardUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderboardUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardUI_DEFINED)
#include <Modloader/app/structs/RaceLeaderboardUI__Fields.h>
#if defined(IL2CPP_STRUCT_RaceLeaderboardUI__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderboardUI_DEFINED
struct RaceLeaderboardUI__Class;
struct RaceLeaderboardUI {
    struct RaceLeaderboardUI__Class* klass;
    MonitorData* monitor;
    struct RaceLeaderboardUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderboardUI_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderboardUI_FWDDECL
#include <Modloader/app/structs/RaceLeaderboardUI__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderboardUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardUI_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderboardUI_FWDDECL)
#include <Modloader/app/structs/RaceLeaderboardUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderboardUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
