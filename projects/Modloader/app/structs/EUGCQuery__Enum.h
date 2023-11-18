#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EUGCQuery__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EUGCQuery__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EUGCQuery__Enum_DEFINED)
#define IL2CPP_STRUCT_EUGCQuery__Enum_DEFINED
enum class EUGCQuery__Enum : int32_t {
    k_EUGCQuery_RankedByVote = 0x00000000,
    k_EUGCQuery_RankedByPublicationDate = 0x00000001,
    k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate = 0x00000002,
    k_EUGCQuery_RankedByTrend = 0x00000003,
    k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate = 0x00000004,
    k_EUGCQuery_CreatedByFriendsRankedByPublicationDate = 0x00000005,
    k_EUGCQuery_RankedByNumTimesReported = 0x00000006,
    k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate = 0x00000007,
    k_EUGCQuery_NotYetRated = 0x00000008,
    k_EUGCQuery_RankedByTotalVotesAsc = 0x00000009,
    k_EUGCQuery_RankedByVotesUp = 0x0000000a,
    k_EUGCQuery_RankedByTextSearch = 0x0000000b,
    k_EUGCQuery_RankedByTotalUniqueSubscriptions = 0x0000000c,
    k_EUGCQuery_RankedByPlaytimeTrend = 0x0000000d,
    k_EUGCQuery_RankedByTotalPlaytime = 0x0000000e,
    k_EUGCQuery_RankedByAveragePlaytimeTrend = 0x0000000f,
    k_EUGCQuery_RankedByLifetimeAveragePlaytime = 0x00000010,
    k_EUGCQuery_RankedByPlaytimeSessionsTrend = 0x00000011,
    k_EUGCQuery_RankedByLifetimePlaytimeSessions = 0x00000012,
};
#endif
#if !defined(IL2CPP_STRUCT_EUGCQuery__Enum_FWDDECL)
#define IL2CPP_STRUCT_EUGCQuery__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EUGCQuery__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EUGCQuery__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EUGCQuery__Enum_FWDDECL)
#include <Modloader/app/structs/EUGCQuery__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EUGCQuery__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
