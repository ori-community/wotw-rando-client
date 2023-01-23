#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementAsset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementAsset_DEFINED)
#include <Modloader/app/structs/AchievementAsset__Fields.h>
#if defined(IL2CPP_STRUCT_AchievementAsset__Fields_DEFINED)
#define IL2CPP_STRUCT_AchievementAsset_DEFINED
struct AchievementAsset__Class;
struct AchievementAsset {
    struct AchievementAsset__Class* klass;
    MonitorData* monitor;
    struct AchievementAsset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementAsset_FWDDECL)
#define IL2CPP_STRUCT_AchievementAsset_FWDDECL
#include <Modloader/app/structs/AchievementAsset__Class.h>
#endif
#undef IL2CPP_STRUCT_AchievementAsset_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementAsset_DEFINED) && !defined(IL2CPP_STRUCT_AchievementAsset_FWDDECL)
#include <Modloader/app/structs/AchievementAsset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementAsset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
