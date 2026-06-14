#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxSignInProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxSignInProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxSignInProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxSignInProvider__Fields_DEFINED
struct INetworkConnectivityChecker;
struct XboxUser;
struct String;
struct __declspec(align(8)) XboxSignInProvider__Fields {
    struct INetworkConnectivityChecker* m_networkConnectivityChecker;
    struct XboxUser* m_xboxUser;
    bool m_userPicked;
    float m_tokenTimer;
    struct String* _LinkToken_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxSignInProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxSignInProvider__Fields_FWDDECL
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XboxUser.h>
#endif
#undef IL2CPP_STRUCT_XboxSignInProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxSignInProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxSignInProvider__Fields_FWDDECL)
#include <Modloader/app/structs/XboxSignInProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxSignInProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
