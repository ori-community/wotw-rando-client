#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboardsController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboardsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsController__Fields_DEFINED)
#include <Modloader/app/structs/DifficultyMode__Enum.h>
#include <Modloader/app/structs/Leaderboard__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Leaderboard__Enum_DEFINED) && defined(IL2CPP_STRUCT_DifficultyMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LeaderboardsController__Fields_DEFINED
struct Dictionary_2_Leaderboard_LeaderboardData_;
struct LeaderboardsController__Fields {
    struct MonoBehaviour__Fields _;
    struct Dictionary_2_Leaderboard_LeaderboardData_* m_data;
    bool m_placeholderGUIVisible;
    Leaderboard__Enum m_currentLeaderboard;

    DifficultyMode__Enum m_currentDifficulty;

    int32_t m_currentRow;
    float m_lastInputTime;
    bool m_previousPlaceholderGUIVisible;
    float m_updateLeaderboardsTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboardsController__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeaderboardsController__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Leaderboard_LeaderboardData_.h>
#endif
#undef IL2CPP_STRUCT_LeaderboardsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboardsController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboardsController__Fields_FWDDECL)
#include <Modloader/app/structs/LeaderboardsController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboardsController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
