#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserStatsStoredCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserStatsStoredCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserStatsStoredCallback_DEFINED)
#define IL2CPP_STRUCT_UserStatsStoredCallback_DEFINED
struct UserStatsStoredCallback__Class;
struct UserStatsStoredCallback {
    struct UserStatsStoredCallback__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UserStatsStoredCallback_FWDDECL)
#define IL2CPP_STRUCT_UserStatsStoredCallback_FWDDECL
#include <Modloader/app/structs/UserStatsStoredCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_UserStatsStoredCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserStatsStoredCallback_DEFINED) && !defined(IL2CPP_STRUCT_UserStatsStoredCallback_FWDDECL)
#include <Modloader/app/structs/UserStatsStoredCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserStatsStoredCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
