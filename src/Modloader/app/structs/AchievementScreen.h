#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementScreen_DEFINED)
#include <Modloader/app/structs/AchievementScreen__Fields.h>
#if defined(IL2CPP_STRUCT_AchievementScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_AchievementScreen_DEFINED
struct AchievementScreen__Class;
struct AchievementScreen {
    struct AchievementScreen__Class* klass;
    MonitorData* monitor;
    struct AchievementScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementScreen_FWDDECL)
#define IL2CPP_STRUCT_AchievementScreen_FWDDECL
#include <Modloader/app/structs/AchievementScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_AchievementScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementScreen_DEFINED) && !defined(IL2CPP_STRUCT_AchievementScreen_FWDDECL)
#include <Modloader/app/structs/AchievementScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
