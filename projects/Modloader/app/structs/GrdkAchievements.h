#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrdkAchievements_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrdkAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkAchievements_DEFINED)
#define IL2CPP_STRUCT_GrdkAchievements_DEFINED
struct GrdkAchievements__Class;
struct GrdkAchievements {
    struct GrdkAchievements__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GrdkAchievements_FWDDECL)
#define IL2CPP_STRUCT_GrdkAchievements_FWDDECL
#include <Modloader/app/structs/GrdkAchievements__Class.h>
#endif
#undef IL2CPP_STRUCT_GrdkAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkAchievements_DEFINED) && !defined(IL2CPP_STRUCT_GrdkAchievements_FWDDECL)
#include <Modloader/app/structs/GrdkAchievements.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrdkAchievements.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
