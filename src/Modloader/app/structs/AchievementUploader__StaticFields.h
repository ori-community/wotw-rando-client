#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementUploader__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementUploader__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementUploader__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AchievementUploader__StaticFields_DEFINED
struct XblAchievement__Array;
struct AchievementUploader__StaticFields {
    bool m_isGettingProgress;
    bool m_hasObtainedProgress;
    struct XblAchievement__Array* m_achievements;
};
#endif
#if !defined(IL2CPP_STRUCT_AchievementUploader__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AchievementUploader__StaticFields_FWDDECL
#include <Modloader/app/structs/XblAchievement__Array.h>
#endif
#undef IL2CPP_STRUCT_AchievementUploader__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementUploader__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AchievementUploader__StaticFields_FWDDECL)
#include <Modloader/app/structs/AchievementUploader__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementUploader__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
