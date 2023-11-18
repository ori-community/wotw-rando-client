#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISteamMatchmakingRulesResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISteamMatchmakingRulesResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingRulesResponse__Fields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_ISteamMatchmakingRulesResponse__Fields_DEFINED
struct ISteamMatchmakingRulesResponse_VTable;
struct ISteamMatchmakingRulesResponse_RulesResponded;
struct ISteamMatchmakingRulesResponse_RulesFailedToRespond;
struct ISteamMatchmakingRulesResponse_RulesRefreshComplete;
struct __declspec(align(8)) ISteamMatchmakingRulesResponse__Fields {
    struct ISteamMatchmakingRulesResponse_VTable* m_VTable;
    void* m_pVTable;
    struct GCHandle m_pGCHandle;
    struct ISteamMatchmakingRulesResponse_RulesResponded* m_RulesResponded;
    struct ISteamMatchmakingRulesResponse_RulesFailedToRespond* m_RulesFailedToRespond;
    struct ISteamMatchmakingRulesResponse_RulesRefreshComplete* m_RulesRefreshComplete;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingRulesResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_ISteamMatchmakingRulesResponse__Fields_FWDDECL
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesRefreshComplete.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_RulesResponded.h>
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse_VTable.h>
#endif
#undef IL2CPP_STRUCT_ISteamMatchmakingRulesResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISteamMatchmakingRulesResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ISteamMatchmakingRulesResponse__Fields_FWDDECL)
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISteamMatchmakingRulesResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
