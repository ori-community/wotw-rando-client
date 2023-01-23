#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementsUIItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementsUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsUIItem_DEFINED)
#include <Modloader/app/structs/AchievementsUIItem__Fields.h>
#if defined(IL2CPP_STRUCT_AchievementsUIItem__Fields_DEFINED)
#define IL2CPP_STRUCT_AchievementsUIItem_DEFINED
struct AchievementsUIItem__Class;
struct AchievementsUIItem {
    struct AchievementsUIItem__Class* klass;
    MonitorData* monitor;
    struct AchievementsUIItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementsUIItem_FWDDECL)
#define IL2CPP_STRUCT_AchievementsUIItem_FWDDECL
#include <Modloader/app/structs/AchievementsUIItem__Class.h>
#endif
#undef IL2CPP_STRUCT_AchievementsUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsUIItem_DEFINED) && !defined(IL2CPP_STRUCT_AchievementsUIItem_FWDDECL)
#include <Modloader/app/structs/AchievementsUIItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementsUIItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
