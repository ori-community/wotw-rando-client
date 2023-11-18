#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardEntry_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardEntry_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardEntry_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/UGCHandle_t.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED) && defined(IL2CPP_STRUCT_UGCHandle_t_DEFINED)
#define IL2CPP_STRUCT_LeaderboardEntry_t_DEFINED
struct LeaderboardEntry_t {
    struct CSteamID m_steamIDUser;
    int32_t m_nGlobalRank;
    int32_t m_nScore;
    int32_t m_cDetails;
    struct UGCHandle_t m_hUGC;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardEntry_t_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardEntry_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_LeaderboardEntry_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardEntry_t_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardEntry_t_FWDDECL)
#include <Modloader/app/structs/LeaderboardEntry_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardEntry_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
