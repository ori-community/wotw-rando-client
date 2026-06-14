#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementsUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementsUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsUI_DEFINED)
#include <Modloader/app/structs/AchievementsUI__Fields.h>
#if defined(IL2CPP_STRUCT_AchievementsUI__Fields_DEFINED)
#define IL2CPP_STRUCT_AchievementsUI_DEFINED
struct AchievementsUI__Class;
struct AchievementsUI {
    struct AchievementsUI__Class* klass;
    MonitorData* monitor;
    struct AchievementsUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementsUI_FWDDECL)
#define IL2CPP_STRUCT_AchievementsUI_FWDDECL
#include <Modloader/app/structs/AchievementsUI__Class.h>
#endif
#undef IL2CPP_STRUCT_AchievementsUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsUI_DEFINED) && !defined(IL2CPP_STRUCT_AchievementsUI_FWDDECL)
#include <Modloader/app/structs/AchievementsUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementsUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
