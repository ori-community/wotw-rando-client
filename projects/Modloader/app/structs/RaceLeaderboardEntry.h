#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceLeaderboardEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceLeaderboardEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardEntry_DEFINED)
#include <Modloader/app/structs/RaceLeaderboardEntry__Fields.h>
#if defined(IL2CPP_STRUCT_RaceLeaderboardEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceLeaderboardEntry_DEFINED
struct RaceLeaderboardEntry__Class;
struct RaceLeaderboardEntry {
    struct RaceLeaderboardEntry__Class* klass;
    MonitorData* monitor;
    struct RaceLeaderboardEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceLeaderboardEntry_FWDDECL)
#define IL2CPP_STRUCT_RaceLeaderboardEntry_FWDDECL
#include <Modloader/app/structs/RaceLeaderboardEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceLeaderboardEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceLeaderboardEntry_DEFINED) && !defined(IL2CPP_STRUCT_RaceLeaderboardEntry_FWDDECL)
#include <Modloader/app/structs/RaceLeaderboardEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceLeaderboardEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
