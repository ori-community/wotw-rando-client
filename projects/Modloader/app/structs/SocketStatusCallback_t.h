#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketStatusCallback_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketStatusCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketStatusCallback_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/SNetListenSocket_t.h>
#include <Modloader/app/structs/SNetSocket_t.h>
#if defined(IL2CPP_STRUCT_SNetSocket_t_DEFINED) && defined(IL2CPP_STRUCT_SNetListenSocket_t_DEFINED) && defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_SocketStatusCallback_t_DEFINED
struct SocketStatusCallback_t {
    struct SNetSocket_t m_hSocket;
    struct SNetListenSocket_t m_hListenSocket;
    struct CSteamID m_steamIDRemote;
    int32_t m_eSNetSocketState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SocketStatusCallback_t_FWDDECL)
#define IL2CPP_STRUCT_SocketStatusCallback_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_SocketStatusCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketStatusCallback_t_DEFINED) && !defined(IL2CPP_STRUCT_SocketStatusCallback_t_FWDDECL)
#include <Modloader/app/structs/SocketStatusCallback_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketStatusCallback_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
