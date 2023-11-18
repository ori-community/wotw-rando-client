#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneAchievements_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneAchievements_DEFINED)
#define IL2CPP_STRUCT_XboxOneAchievements_DEFINED
struct XboxOneAchievements__Class;
struct XboxOneAchievements {
    struct XboxOneAchievements__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneAchievements_FWDDECL)
#define IL2CPP_STRUCT_XboxOneAchievements_FWDDECL
#include <Modloader/app/structs/XboxOneAchievements__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneAchievements_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneAchievements_FWDDECL)
#include <Modloader/app/structs/XboxOneAchievements.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneAchievements.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
