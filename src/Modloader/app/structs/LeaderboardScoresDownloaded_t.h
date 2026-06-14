#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardScoresDownloaded_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardScoresDownloaded_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardScoresDownloaded_t_DEFINED)
#include <Modloader/app/structs/SteamLeaderboardEntries_t.h>
#include <Modloader/app/structs/SteamLeaderboard_t.h>
#if defined(IL2CPP_STRUCT_SteamLeaderboard_t_DEFINED) && defined(IL2CPP_STRUCT_SteamLeaderboardEntries_t_DEFINED)
#define IL2CPP_STRUCT_LeaderboardScoresDownloaded_t_DEFINED
struct LeaderboardScoresDownloaded_t {
    struct SteamLeaderboard_t m_hSteamLeaderboard;
    struct SteamLeaderboardEntries_t m_hSteamLeaderboardEntries;
    int32_t m_cEntryCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardScoresDownloaded_t_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardScoresDownloaded_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_LeaderboardScoresDownloaded_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardScoresDownloaded_t_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardScoresDownloaded_t_FWDDECL)
#include <Modloader/app/structs/LeaderboardScoresDownloaded_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardScoresDownloaded_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
