#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HSteamUser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HSteamUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_HSteamUser_DEFINED)
#define IL2CPP_STRUCT_HSteamUser_DEFINED
struct HSteamUser {
    int32_t m_HSteamUser;
};
#endif
#if !defined(IL2CPP_STRUCT_HSteamUser_FWDDECL)
#define IL2CPP_STRUCT_HSteamUser_FWDDECL
#endif
#undef IL2CPP_STRUCT_HSteamUser_INITIALIZING
#if !defined(IL2CPP_STRUCT_HSteamUser_DEFINED) && !defined(IL2CPP_STRUCT_HSteamUser_FWDDECL)
#include <Modloader/app/structs/HSteamUser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HSteamUser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
