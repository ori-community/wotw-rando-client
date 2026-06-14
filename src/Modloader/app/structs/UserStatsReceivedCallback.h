#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserStatsReceivedCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserStatsReceivedCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserStatsReceivedCallback_DEFINED)
#define IL2CPP_STRUCT_UserStatsReceivedCallback_DEFINED
struct UserStatsReceivedCallback__Class;
struct UserStatsReceivedCallback {
    struct UserStatsReceivedCallback__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UserStatsReceivedCallback_FWDDECL)
#define IL2CPP_STRUCT_UserStatsReceivedCallback_FWDDECL
#include <Modloader/app/structs/UserStatsReceivedCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_UserStatsReceivedCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserStatsReceivedCallback_DEFINED) && !defined(IL2CPP_STRUCT_UserStatsReceivedCallback_FWDDECL)
#include <Modloader/app/structs/UserStatsReceivedCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserStatsReceivedCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
