#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamAchievements_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamAchievements_DEFINED)
#include <Modloader/app/structs/SteamAchievements__Fields.h>
#if defined(IL2CPP_STRUCT_SteamAchievements__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamAchievements_DEFINED
struct SteamAchievements__Class;
struct SteamAchievements {
    struct SteamAchievements__Class* klass;
    MonitorData* monitor;
    struct SteamAchievements__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamAchievements_FWDDECL)
#define IL2CPP_STRUCT_SteamAchievements_FWDDECL
#include <Modloader/app/structs/SteamAchievements__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamAchievements_DEFINED) && !defined(IL2CPP_STRUCT_SteamAchievements_FWDDECL)
#include <Modloader/app/structs/SteamAchievements.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamAchievements.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
