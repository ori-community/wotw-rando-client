#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INetworkConnectivityChecker__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INetworkConnectivityChecker__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_INetworkConnectivityChecker__VTable_DEFINED)
#define IL2CPP_STRUCT_INetworkConnectivityChecker__VTable_DEFINED
struct INetworkConnectivityChecker__VTable {
    VirtualInvokeData set_RunningInBackground;
    VirtualInvokeData get_CanSendNetCommunications;
    VirtualInvokeData ResolveNoConnectionIssue;
    VirtualInvokeData IsResolvingIssues;
    VirtualInvokeData get_HasToken;
    VirtualInvokeData get_HasConnection;
};
#endif
#if !defined(IL2CPP_STRUCT_INetworkConnectivityChecker__VTable_FWDDECL)
#define IL2CPP_STRUCT_INetworkConnectivityChecker__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_INetworkConnectivityChecker__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_INetworkConnectivityChecker__VTable_DEFINED) && !defined(IL2CPP_STRUCT_INetworkConnectivityChecker__VTable_FWDDECL)
#include <Modloader/app/structs/INetworkConnectivityChecker__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INetworkConnectivityChecker__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
