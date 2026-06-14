#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientGameServerDeny_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientGameServerDeny_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientGameServerDeny_t_DEFINED)
#define IL2CPP_STRUCT_ClientGameServerDeny_t_DEFINED
struct ClientGameServerDeny_t {
    uint32_t m_uAppID;
    uint32_t m_unGameServerIP;
    uint16_t m_usGameServerPort;
    uint16_t m_bSecure;
    uint32_t m_uReason;
};
#endif
#if !defined(IL2CPP_STRUCT_ClientGameServerDeny_t_FWDDECL)
#define IL2CPP_STRUCT_ClientGameServerDeny_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_ClientGameServerDeny_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientGameServerDeny_t_DEFINED) && !defined(IL2CPP_STRUCT_ClientGameServerDeny_t_FWDDECL)
#include <Modloader/app/structs/ClientGameServerDeny_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientGameServerDeny_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
