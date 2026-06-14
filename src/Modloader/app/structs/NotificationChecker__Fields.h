#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotificationChecker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotificationChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotificationChecker__Fields_DEFINED)
#define IL2CPP_STRUCT_NotificationChecker__Fields_DEFINED
struct String;
struct Action_1_Boolean_;
struct RaceSettings;
struct LeaderBoardService;
struct __declspec(align(8)) NotificationChecker__Fields {
    struct String* LeaderBoardsID;
    bool NotificationSeen;
    struct Action_1_Boolean_* ShowNotificationAction;
    struct RaceSettings* m_raceSettings;
    int32_t m_currentLeaderboardsPlace;
    struct LeaderBoardService* m_leaderBoardService;
    bool m_notificationSeen;
    int32_t m_originalRank;
    int32_t m_saveSlotIndex;
    bool m_isSyncing;
    bool m_raceBeaten;
};
#endif
#if !defined(IL2CPP_STRUCT_NotificationChecker__Fields_FWDDECL)
#define IL2CPP_STRUCT_NotificationChecker__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/LeaderBoardService.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NotificationChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotificationChecker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NotificationChecker__Fields_FWDDECL)
#include <Modloader/app/structs/NotificationChecker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotificationChecker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
