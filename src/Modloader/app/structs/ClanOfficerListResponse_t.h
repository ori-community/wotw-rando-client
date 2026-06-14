#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClanOfficerListResponse_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClanOfficerListResponse_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClanOfficerListResponse_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_ClanOfficerListResponse_t_DEFINED
struct ClanOfficerListResponse_t {
    struct CSteamID m_steamIDClan;
    int32_t m_cOfficers;
    uint8_t m_bSuccess;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClanOfficerListResponse_t_FWDDECL)
#define IL2CPP_STRUCT_ClanOfficerListResponse_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_ClanOfficerListResponse_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClanOfficerListResponse_t_DEFINED) && !defined(IL2CPP_STRUCT_ClanOfficerListResponse_t_FWDDECL)
#include <Modloader/app/structs/ClanOfficerListResponse_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClanOfficerListResponse_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
