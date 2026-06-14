#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamUser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamUser_DEFINED)
#include <Modloader/app/structs/SteamUser__Fields.h>
#if defined(IL2CPP_STRUCT_SteamUser__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamUser_DEFINED
struct SteamUser__Class;
struct SteamUser {
    struct SteamUser__Class* klass;
    MonitorData* monitor;
    struct SteamUser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamUser_FWDDECL)
#define IL2CPP_STRUCT_SteamUser_FWDDECL
#include <Modloader/app/structs/SteamUser__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamUser_DEFINED) && !defined(IL2CPP_STRUCT_SteamUser_FWDDECL)
#include <Modloader/app/structs/SteamUser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamUser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
