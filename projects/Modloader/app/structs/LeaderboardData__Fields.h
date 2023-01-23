#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardData__Fields_DEFINED)
#include <Modloader/app/structs/LeaderboardFilter__Enum.h>
#include <Modloader/app/structs/Leaderboard__Enum.h>
#if defined(IL2CPP_STRUCT_Leaderboard__Enum_DEFINED) && defined(IL2CPP_STRUCT_LeaderboardFilter__Enum_DEFINED)
#define IL2CPP_STRUCT_LeaderboardData__Fields_DEFINED
struct String;
struct List_1_LeaderboardData_Entry_;
struct __declspec(align(8)) LeaderboardData__Fields {
    Leaderboard__Enum m_type;

    LeaderboardFilter__Enum m_filter;

    struct String* m_title;
    uint32_t m_totalRowCount;
    struct List_1_LeaderboardData_Entry_* m_entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardData__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardData__Fields_FWDDECL
#include <Modloader/app/structs/List_1_LeaderboardData_Entry_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardData__Fields_FWDDECL)
#include <Modloader/app/structs/LeaderboardData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
