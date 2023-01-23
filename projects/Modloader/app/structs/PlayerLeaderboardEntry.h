#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerLeaderboardEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerLeaderboardEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry_DEFINED)
#include <Modloader/app/structs/PlayerLeaderboardEntry__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerLeaderboardEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerLeaderboardEntry_DEFINED
struct PlayerLeaderboardEntry__Class;
struct PlayerLeaderboardEntry {
    struct PlayerLeaderboardEntry__Class* klass;
    MonitorData* monitor;
    struct PlayerLeaderboardEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry_FWDDECL)
#define IL2CPP_STRUCT_PlayerLeaderboardEntry_FWDDECL
#include <Modloader/app/structs/PlayerLeaderboardEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerLeaderboardEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry_DEFINED) && !defined(IL2CPP_STRUCT_PlayerLeaderboardEntry_FWDDECL)
#include <Modloader/app/structs/PlayerLeaderboardEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerLeaderboardEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
