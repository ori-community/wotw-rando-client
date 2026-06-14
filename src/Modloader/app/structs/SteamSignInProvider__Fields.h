#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamSignInProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamSignInProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamSignInProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamSignInProvider__Fields_DEFINED
struct INetworkConnectivityChecker;
struct IPlatformUser;
struct String;
struct __declspec(align(8)) SteamSignInProvider__Fields {
    struct INetworkConnectivityChecker* m_netConnectivityChecker;
    bool m_isSignedIn;
    struct IPlatformUser* _User_k__BackingField;
    bool _HasSignInError_k__BackingField;
    struct String* _LinkToken_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_SteamSignInProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_SteamSignInProvider__Fields_FWDDECL
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/IPlatformUser.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SteamSignInProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamSignInProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SteamSignInProvider__Fields_FWDDECL)
#include <Modloader/app/structs/SteamSignInProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamSignInProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
