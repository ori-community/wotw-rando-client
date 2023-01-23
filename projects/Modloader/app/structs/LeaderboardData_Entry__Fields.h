#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardData_Entry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardData_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardData_Entry__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderboardData_Entry__Fields_DEFINED
struct String;
struct __declspec(align(8)) LeaderboardData_Entry__Fields {
    uint32_t _Rank_k__BackingField;
    struct String* _UserID_k__BackingField;
    struct String* _UserHandle_k__BackingField;
    bool _IsSteamEntry_k__BackingField;
    bool _IsLiveEntry_k__BackingField;
    int32_t m_time;
    int32_t m_completionPercentage;
    int32_t m_deathCount;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardData_Entry__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardData_Entry__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardData_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardData_Entry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardData_Entry__Fields_FWDDECL)
#include <Modloader/app/structs/LeaderboardData_Entry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardData_Entry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
