#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GSClientAchievementStatus_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GSClientAchievementStatus_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GSClientAchievementStatus_t_DEFINED)
#define IL2CPP_STRUCT_GSClientAchievementStatus_t_DEFINED
struct String;
struct GSClientAchievementStatus_t {
    uint64_t m_SteamID;
    struct String* m_pchAchievement;
    bool m_bUnlocked;
};
#endif
#if !defined(IL2CPP_STRUCT_GSClientAchievementStatus_t_FWDDECL)
#define IL2CPP_STRUCT_GSClientAchievementStatus_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GSClientAchievementStatus_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GSClientAchievementStatus_t_DEFINED) && !defined(IL2CPP_STRUCT_GSClientAchievementStatus_t_FWDDECL)
#include <Modloader/app/structs/GSClientAchievementStatus_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GSClientAchievementStatus_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
