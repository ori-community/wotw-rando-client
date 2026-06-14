#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxLiveIdentityUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxLiveIdentityUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxLiveIdentityUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxLiveIdentityUI__Fields_DEFINED
struct MessageBox;
struct GameObject;
struct Renderer;
struct String;
struct INetworkConnectivityChecker;
struct XboxLiveIdentityUI__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox* username;
    struct MessageBox* login;
    struct GameObject* userBackground;
    struct Renderer* displayPicture;
    struct GameObject* onlineStatusGroup;
    struct GameObject* offlineHint;
    struct GameObject* onlineHint;
    struct GameObject* onlineGroup;
    struct GameObject* switchProfileTipText;
    struct String* m_username;
    bool m_hasUser;
    bool m_canSendNetCommunications;
    float m_lastNetCheck;
    struct INetworkConnectivityChecker* m_networkConnectivityChecker;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxLiveIdentityUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxLiveIdentityUI__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XboxLiveIdentityUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxLiveIdentityUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxLiveIdentityUI__Fields_FWDDECL)
#include <Modloader/app/structs/XboxLiveIdentityUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxLiveIdentityUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
