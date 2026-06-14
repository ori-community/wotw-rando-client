#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData__INITIALIZING
#if !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData__DEFINED)
#include <Modloader/app/structs/Leaderboard__Enum.h>
#if defined(IL2CPP_STRUCT_Leaderboard__Enum_DEFINED)
#define IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData__DEFINED
struct LeaderboardData;
struct Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData_ {
    int32_t hashCode;
    int32_t next;
    Leaderboard__Enum key;

    struct LeaderboardData* value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData__FWDDECL)
#define IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData__FWDDECL
#include <Modloader/app/structs/LeaderboardData.h>
#endif
#undef IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData__INITIALIZING
#if !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData__DEFINED) && !defined(IL2CPP_STRUCT_Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData__FWDDECL)
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_Leaderboard_LeaderboardData_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
