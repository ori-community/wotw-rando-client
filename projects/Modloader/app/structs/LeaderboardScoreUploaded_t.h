#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardScoreUploaded_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardScoreUploaded_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardScoreUploaded_t_DEFINED)
#include <Modloader/app/structs/SteamLeaderboard_t.h>
#if defined(IL2CPP_STRUCT_SteamLeaderboard_t_DEFINED)
#define IL2CPP_STRUCT_LeaderboardScoreUploaded_t_DEFINED
struct LeaderboardScoreUploaded_t {
    uint8_t m_bSuccess;
    struct SteamLeaderboard_t m_hSteamLeaderboard;
    int32_t m_nScore;
    uint8_t m_bScoreChanged;
    int32_t m_nGlobalRankNew;
    int32_t m_nGlobalRankPrevious;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardScoreUploaded_t_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardScoreUploaded_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_LeaderboardScoreUploaded_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardScoreUploaded_t_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardScoreUploaded_t_FWDDECL)
#include <Modloader/app/structs/LeaderboardScoreUploaded_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardScoreUploaded_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
