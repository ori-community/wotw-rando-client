#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserSteamInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserSteamInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserSteamInfo_DEFINED)
#include <Modloader/app/structs/UserSteamInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserSteamInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserSteamInfo_DEFINED
struct UserSteamInfo__Class;
struct UserSteamInfo {
    struct UserSteamInfo__Class* klass;
    MonitorData* monitor;
    struct UserSteamInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserSteamInfo_FWDDECL)
#define IL2CPP_STRUCT_UserSteamInfo_FWDDECL
#include <Modloader/app/structs/UserSteamInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserSteamInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserSteamInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserSteamInfo_FWDDECL)
#include <Modloader/app/structs/UserSteamInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserSteamInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
