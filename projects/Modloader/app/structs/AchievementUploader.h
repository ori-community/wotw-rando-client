#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementUploader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementUploader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementUploader_DEFINED)
#define IL2CPP_STRUCT_AchievementUploader_DEFINED
struct AchievementUploader__Class;
struct AchievementUploader {
    struct AchievementUploader__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AchievementUploader_FWDDECL)
#define IL2CPP_STRUCT_AchievementUploader_FWDDECL
#include <Modloader/app/structs/AchievementUploader__Class.h>
#endif
#undef IL2CPP_STRUCT_AchievementUploader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementUploader_DEFINED) && !defined(IL2CPP_STRUCT_AchievementUploader_FWDDECL)
#include <Modloader/app/structs/AchievementUploader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementUploader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
