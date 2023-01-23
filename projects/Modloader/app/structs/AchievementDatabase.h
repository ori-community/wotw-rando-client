#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementDatabase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementDatabase_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementDatabase_DEFINED)
#include <Modloader/app/structs/AchievementDatabase__Fields.h>
#if defined(IL2CPP_STRUCT_AchievementDatabase__Fields_DEFINED)
#define IL2CPP_STRUCT_AchievementDatabase_DEFINED
struct AchievementDatabase__Class;
struct AchievementDatabase {
    struct AchievementDatabase__Class* klass;
    MonitorData* monitor;
    struct AchievementDatabase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementDatabase_FWDDECL)
#define IL2CPP_STRUCT_AchievementDatabase_FWDDECL
#include <Modloader/app/structs/AchievementDatabase__Class.h>
#endif
#undef IL2CPP_STRUCT_AchievementDatabase_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementDatabase_DEFINED) && !defined(IL2CPP_STRUCT_AchievementDatabase_FWDDECL)
#include <Modloader/app/structs/AchievementDatabase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementDatabase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
