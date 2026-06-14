#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalAchievementPercentagesReady_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalAchievementPercentagesReady_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalAchievementPercentagesReady_t_DEFINED)
#include <Modloader/app/structs/EResult__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED)
#define IL2CPP_STRUCT_GlobalAchievementPercentagesReady_t_DEFINED
struct GlobalAchievementPercentagesReady_t {
    uint64_t m_nGameID;
    EResult__Enum m_eResult;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalAchievementPercentagesReady_t_FWDDECL)
#define IL2CPP_STRUCT_GlobalAchievementPercentagesReady_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_GlobalAchievementPercentagesReady_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalAchievementPercentagesReady_t_DEFINED) && !defined(IL2CPP_STRUCT_GlobalAchievementPercentagesReady_t_FWDDECL)
#include <Modloader/app/structs/GlobalAchievementPercentagesReady_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalAchievementPercentagesReady_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
