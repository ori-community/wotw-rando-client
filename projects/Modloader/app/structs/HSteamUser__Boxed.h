#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HSteamUser__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HSteamUser__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HSteamUser__Boxed_DEFINED)
#include <Modloader/app/structs/HSteamUser.h>
#if defined(IL2CPP_STRUCT_HSteamUser_DEFINED)
#define IL2CPP_STRUCT_HSteamUser__Boxed_DEFINED
struct HSteamUser__Class;
struct HSteamUser__Boxed {
    struct HSteamUser__Class* klass;
    MonitorData* monitor;
    struct HSteamUser fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HSteamUser__Boxed_FWDDECL)
#define IL2CPP_STRUCT_HSteamUser__Boxed_FWDDECL
#include <Modloader/app/structs/HSteamUser__Class.h>
#endif
#undef IL2CPP_STRUCT_HSteamUser__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_HSteamUser__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_HSteamUser__Boxed_FWDDECL)
#include <Modloader/app/structs/HSteamUser__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HSteamUser__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
