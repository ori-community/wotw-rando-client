#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserAchievementIconFetched_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserAchievementIconFetched_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAchievementIconFetched_t_DEFINED)
#include <Modloader/app/structs/CGameID.h>
#if defined(IL2CPP_STRUCT_CGameID_DEFINED)
#define IL2CPP_STRUCT_UserAchievementIconFetched_t_DEFINED
struct String;
struct UserAchievementIconFetched_t {
    struct CGameID m_nGameID;
    struct String* m_rgchAchievementName;
    bool m_bAchieved;
    int32_t m_nIconHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserAchievementIconFetched_t_FWDDECL)
#define IL2CPP_STRUCT_UserAchievementIconFetched_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UserAchievementIconFetched_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAchievementIconFetched_t_DEFINED) && !defined(IL2CPP_STRUCT_UserAchievementIconFetched_t_FWDDECL)
#include <Modloader/app/structs/UserAchievementIconFetched_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserAchievementIconFetched_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
