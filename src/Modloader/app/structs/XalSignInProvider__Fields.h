#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalSignInProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalSignInProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalSignInProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_XalSignInProvider__Fields_DEFINED
struct INetworkConnectivityChecker;
struct XalUser_1;
struct XalBrowserWrapper;
struct IPlatformUser;
struct String;
struct __declspec(align(8)) XalSignInProvider__Fields {
    struct INetworkConnectivityChecker* m_netConnectivityChecker;
    struct XalUser_1* m_xalUser;
    struct XalBrowserWrapper* m_browserWrapper;
    float m_tokenTimer;
    bool _IsSignedIn_k__BackingField;
    bool _IsSigningIn_k__BackingField;
    struct IPlatformUser* _User_k__BackingField;
    struct String* _LinkToken_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_XalSignInProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_XalSignInProvider__Fields_FWDDECL
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/IPlatformUser.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XalBrowserWrapper.h>
#include <Modloader/app/structs/XalUser_1.h>
#endif
#undef IL2CPP_STRUCT_XalSignInProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalSignInProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XalSignInProvider__Fields_FWDDECL)
#include <Modloader/app/structs/XalSignInProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalSignInProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
