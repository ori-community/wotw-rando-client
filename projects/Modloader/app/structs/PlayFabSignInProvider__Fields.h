#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabSignInProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabSignInProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSignInProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabSignInProvider__Fields_DEFINED
struct INetworkConnectivityChecker;
struct ISignInProvider;
struct String;
struct Dictionary_2_System_String_System_Boolean_;
struct IPlatformUser;
struct Dictionary_2_System_String_System_Single_;
struct Dictionary_2_System_String_System_Int32_;
struct PlayFabUser;
struct __declspec(align(8)) PlayFabSignInProvider__Fields {
    struct INetworkConnectivityChecker* m_netConnectivityChecker;
    struct ISignInProvider* m_liveSignInProvider;
    struct ISignInProvider* m_nonLiveSignInProvider;
    struct String* m_playFabDesiredDisplayName;
    float m_displayNameCheck;
    struct Dictionary_2_System_String_System_Boolean_* m_contentPolicyError;
    struct IPlatformUser* m_attemptingToSignInAs;
    struct Dictionary_2_System_String_System_Single_* m_platformLinkCheck;
    struct Dictionary_2_System_String_System_Boolean_* m_platformLinked;
    struct Dictionary_2_System_String_System_Int32_* m_linkAttempts;
    struct PlayFabUser* m_playfabUser;
    bool _IsSigningIn_k__BackingField;
    struct String* _EntityId_k__BackingField;
    struct String* _EntityType_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabSignInProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabSignInProvider__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Single_.h>
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/IPlatformUser.h>
#include <Modloader/app/structs/ISignInProvider.h>
#include <Modloader/app/structs/PlayFabUser.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayFabSignInProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSignInProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabSignInProvider__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabSignInProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabSignInProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
