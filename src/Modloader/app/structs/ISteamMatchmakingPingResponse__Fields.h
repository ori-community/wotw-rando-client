#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISteamMatchmakingPingResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISteamMatchmakingPingResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingPingResponse__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_ISteamMatchmakingPingResponse__Fields_DEFINED
struct ISteamMatchmakingPingResponse_VTable;
struct ISteamMatchmakingPingResponse_ServerResponded;
struct ISteamMatchmakingPingResponse_ServerFailedToRespond;
struct __declspec(align(8)) ISteamMatchmakingPingResponse__Fields {
    struct ISteamMatchmakingPingResponse_VTable* m_VTable;
    void* m_pVTable;
    struct GCHandle m_pGCHandle;
    struct ISteamMatchmakingPingResponse_ServerResponded* m_ServerResponded;
    struct ISteamMatchmakingPingResponse_ServerFailedToRespond* m_ServerFailedToRespond;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingPingResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_ISteamMatchmakingPingResponse__Fields_FWDDECL
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_ServerFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_ServerResponded.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_VTable.h>
#endif
#undef IL2CPP_STRUCT_ISteamMatchmakingPingResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingPingResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ISteamMatchmakingPingResponse__Fields_FWDDECL)
#include <Modloader/app/structs/ISteamMatchmakingPingResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISteamMatchmakingPingResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
