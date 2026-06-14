#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrdkSignInProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrdkSignInProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider__Fields_DEFINED)
#include <Modloader/app/structs/GrdkSignInProvider_ProviderFlowState__Enum.h>
#if defined(IL2CPP_STRUCT_GrdkSignInProvider_ProviderFlowState__Enum_DEFINED)
#define IL2CPP_STRUCT_GrdkSignInProvider__Fields_DEFINED
struct INetworkConnectivityChecker;
struct String;
struct IPlatformUser;
struct __declspec(align(8)) GrdkSignInProvider__Fields {
    GrdkSignInProvider_ProviderFlowState__Enum m_status;

    struct INetworkConnectivityChecker* m_netConnectivityChecker;
    float m_tokenTimer;
    struct String* m_previousUid;
    bool m_userChanging;
    struct IPlatformUser* _User_k__BackingField;
    bool _HasSignInError_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_GrdkSignInProvider__Fields_FWDDECL
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/IPlatformUser.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GrdkSignInProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GrdkSignInProvider__Fields_FWDDECL)
#include <Modloader/app/structs/GrdkSignInProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrdkSignInProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
