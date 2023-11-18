#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardFindResult_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardFindResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardFindResult_t_DEFINED)
#include <Modloader/app/structs/SteamLeaderboard_t.h>
#if defined(IL2CPP_STRUCT_SteamLeaderboard_t_DEFINED)
#define IL2CPP_STRUCT_LeaderboardFindResult_t_DEFINED
struct LeaderboardFindResult_t {
    struct SteamLeaderboard_t m_hSteamLeaderboard;
    uint8_t m_bLeaderboardFound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardFindResult_t_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardFindResult_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_LeaderboardFindResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardFindResult_t_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardFindResult_t_FWDDECL)
#include <Modloader/app/structs/LeaderboardFindResult_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardFindResult_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
