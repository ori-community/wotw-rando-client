#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserAchievementStored_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserAchievementStored_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAchievementStored_t_DEFINED)
#define IL2CPP_STRUCT_UserAchievementStored_t_DEFINED
struct String;
struct UserAchievementStored_t {
    uint64_t m_nGameID;
    bool m_bGroupAchievement;
    struct String* m_rgchAchievementName;
    uint32_t m_nCurProgress;
    uint32_t m_nMaxProgress;
};
#endif
#if !defined(IL2CPP_STRUCT_UserAchievementStored_t_FWDDECL)
#define IL2CPP_STRUCT_UserAchievementStored_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UserAchievementStored_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAchievementStored_t_DEFINED) && !defined(IL2CPP_STRUCT_UserAchievementStored_t_FWDDECL)
#include <Modloader/app/structs/UserAchievementStored_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserAchievementStored_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
