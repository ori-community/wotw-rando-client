#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderboardAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderboardAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardAction_DEFINED)
#include <Modloader/app/structs/RaceLeaderboardAction__Fields.h>
#if defined(IL2CPP_STRUCT_RaceLeaderboardAction__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderboardAction_DEFINED
struct RaceLeaderboardAction__Class;
struct RaceLeaderboardAction {
    struct RaceLeaderboardAction__Class* klass;
    MonitorData* monitor;
    struct RaceLeaderboardAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderboardAction_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderboardAction_FWDDECL
#include <Modloader/app/structs/RaceLeaderboardAction__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderboardAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardAction_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderboardAction_FWDDECL)
#include <Modloader/app/structs/RaceLeaderboardAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderboardAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
