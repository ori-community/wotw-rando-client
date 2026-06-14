#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserAchievementStoredCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserAchievementStoredCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAchievementStoredCallback_DEFINED)
#define IL2CPP_STRUCT_UserAchievementStoredCallback_DEFINED
struct UserAchievementStoredCallback__Class;
struct UserAchievementStoredCallback {
    struct UserAchievementStoredCallback__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UserAchievementStoredCallback_FWDDECL)
#define IL2CPP_STRUCT_UserAchievementStoredCallback_FWDDECL
#include <Modloader/app/structs/UserAchievementStoredCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_UserAchievementStoredCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAchievementStoredCallback_DEFINED) && !defined(IL2CPP_STRUCT_UserAchievementStoredCallback_FWDDECL)
#include <Modloader/app/structs/UserAchievementStoredCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserAchievementStoredCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
