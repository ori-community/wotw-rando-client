#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabAchievements_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabAchievements_DEFINED)
#include <Modloader/app/structs/PlayFabAchievements__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabAchievements__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabAchievements_DEFINED
struct PlayFabAchievements__Class;
struct PlayFabAchievements {
    struct PlayFabAchievements__Class* klass;
    MonitorData* monitor;
    struct PlayFabAchievements__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabAchievements_FWDDECL)
#define IL2CPP_STRUCT_PlayFabAchievements_FWDDECL
#include <Modloader/app/structs/PlayFabAchievements__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabAchievements_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabAchievements_FWDDECL)
#include <Modloader/app/structs/PlayFabAchievements.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabAchievements.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
