#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AwardSteamAchievementItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AwardSteamAchievementItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AwardSteamAchievementItem__Fields_DEFINED)
#define IL2CPP_STRUCT_AwardSteamAchievementItem__Fields_DEFINED
struct String;
struct __declspec(align(8)) AwardSteamAchievementItem__Fields {
    struct String* AchievementName;
    struct String* PlayFabId;
    bool Result;
};
#endif
#if !defined(IL2CPP_STRUCT_AwardSteamAchievementItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_AwardSteamAchievementItem__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AwardSteamAchievementItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AwardSteamAchievementItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AwardSteamAchievementItem__Fields_FWDDECL)
#include <Modloader/app/structs/AwardSteamAchievementItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AwardSteamAchievementItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
