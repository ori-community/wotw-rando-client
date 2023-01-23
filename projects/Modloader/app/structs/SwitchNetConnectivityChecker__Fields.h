#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchNetConnectivityChecker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchNetConnectivityChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchNetConnectivityChecker__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchNetConnectivityChecker__Fields_DEFINED
struct Action_1_Boolean_;
struct Action;
struct __declspec(align(8)) SwitchNetConnectivityChecker__Fields {
    bool m_currentlyConnected;
    bool m_resolvingNoNsaIdIssue;
    int32_t m_resolvingNoNsaIdFailCounter;
    float m_nsaIdCacheCheck;
    bool m_hasNsaId;
    int32_t m_errorHandleCount;
    bool m_runningInBackground;
    struct Action_1_Boolean_* OnNetworkStatusChangedCallback;
    struct Action* OnActuallyOfflineCallback;
};
#endif
#if !defined(IL2CPP_STRUCT_SwitchNetConnectivityChecker__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwitchNetConnectivityChecker__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_SwitchNetConnectivityChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchNetConnectivityChecker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwitchNetConnectivityChecker__Fields_FWDDECL)
#include <Modloader/app/structs/SwitchNetConnectivityChecker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchNetConnectivityChecker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
