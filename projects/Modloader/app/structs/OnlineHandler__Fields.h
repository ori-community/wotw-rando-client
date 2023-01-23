#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnlineHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnlineHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnlineHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/OnlineHandler_OnlineHandlerState__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_OnlineHandler_OnlineHandlerState__Enum_DEFINED)
#define IL2CPP_STRUCT_OnlineHandler__Fields_DEFINED
struct GameObject;
struct LeaderboardsB;
struct INetworkConnectivityChecker;
struct OnlineHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* m_noInternetConnection;
    struct GameObject* m_tryAgain;
    struct GameObject* m_connected;
    struct GameObject* m_connecting;
    struct GameObject* m_noToken;
    struct LeaderboardsB* m_leaderBoards;
    struct INetworkConnectivityChecker* m_netConnectivityChecker;
    OnlineHandler_OnlineHandlerState__Enum m_handlerState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnlineHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_OnlineHandler__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/LeaderboardsB.h>
#endif
#undef IL2CPP_STRUCT_OnlineHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnlineHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OnlineHandler__Fields_FWDDECL)
#include <Modloader/app/structs/OnlineHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnlineHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
