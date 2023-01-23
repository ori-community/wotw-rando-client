#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementMenuItem_DEFINED)
#include <Modloader/app/structs/AchievementMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_AchievementMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_AchievementMenuItem_DEFINED
struct AchievementMenuItem__Class;
struct AchievementMenuItem {
    struct AchievementMenuItem__Class* klass;
    MonitorData* monitor;
    struct AchievementMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementMenuItem_FWDDECL)
#define IL2CPP_STRUCT_AchievementMenuItem_FWDDECL
#include <Modloader/app/structs/AchievementMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_AchievementMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_AchievementMenuItem_FWDDECL)
#include <Modloader/app/structs/AchievementMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
