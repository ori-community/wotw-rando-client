#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISteamMatchmakingServerListResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISteamMatchmakingServerListResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingServerListResponse__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_ISteamMatchmakingServerListResponse__Fields_DEFINED
struct ISteamMatchmakingServerListResponse_VTable;
struct ISteamMatchmakingServerListResponse_ServerResponded;
struct ISteamMatchmakingServerListResponse_ServerFailedToRespond;
struct ISteamMatchmakingServerListResponse_RefreshComplete;
struct __declspec(align(8)) ISteamMatchmakingServerListResponse__Fields {
    struct ISteamMatchmakingServerListResponse_VTable* m_VTable;
    void* m_pVTable;
    struct GCHandle m_pGCHandle;
    struct ISteamMatchmakingServerListResponse_ServerResponded* m_ServerResponded;
    struct ISteamMatchmakingServerListResponse_ServerFailedToRespond* m_ServerFailedToRespond;
    struct ISteamMatchmakingServerListResponse_RefreshComplete* m_RefreshComplete;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingServerListResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_ISteamMatchmakingServerListResponse__Fields_FWDDECL
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_RefreshComplete.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_ServerFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_ServerResponded.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_VTable.h>
#endif
#undef IL2CPP_STRUCT_ISteamMatchmakingServerListResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingServerListResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ISteamMatchmakingServerListResponse__Fields_FWDDECL)
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
