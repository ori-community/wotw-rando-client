#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EItemStatistic__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EItemStatistic__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EItemStatistic__Enum_DEFINED)
#define IL2CPP_STRUCT_EItemStatistic__Enum_DEFINED
enum class EItemStatistic__Enum : int32_t {
    k_EItemStatistic_NumSubscriptions = 0x00000000,
    k_EItemStatistic_NumFavorites = 0x00000001,
    k_EItemStatistic_NumFollowers = 0x00000002,
    k_EItemStatistic_NumUniqueSubscriptions = 0x00000003,
    k_EItemStatistic_NumUniqueFavorites = 0x00000004,
    k_EItemStatistic_NumUniqueFollowers = 0x00000005,
    k_EItemStatistic_NumUniqueWebsiteViews = 0x00000006,
    k_EItemStatistic_ReportScore = 0x00000007,
    k_EItemStatistic_NumSecondsPlayed = 0x00000008,
    k_EItemStatistic_NumPlaytimeSessions = 0x00000009,
    k_EItemStatistic_NumComments = 0x0000000a,
    k_EItemStatistic_NumSecondsPlayedDuringTimePeriod = 0x0000000b,
    k_EItemStatistic_NumPlaytimeSessionsDuringTimePeriod = 0x0000000c,
};
#endif
#if !defined(IL2CPP_STRUCT_EItemStatistic__Enum_FWDDECL)
#define IL2CPP_STRUCT_EItemStatistic__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EItemStatistic__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EItemStatistic__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EItemStatistic__Enum_FWDDECL)
#include <Modloader/app/structs/EItemStatistic__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EItemStatistic__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
