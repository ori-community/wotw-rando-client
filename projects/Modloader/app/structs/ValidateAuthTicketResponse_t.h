#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidateAuthTicketResponse_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidateAuthTicketResponse_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidateAuthTicketResponse_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EAuthSessionResponse__Enum.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED) && defined(IL2CPP_STRUCT_EAuthSessionResponse__Enum_DEFINED)
#define IL2CPP_STRUCT_ValidateAuthTicketResponse_t_DEFINED
struct ValidateAuthTicketResponse_t {
    struct CSteamID m_SteamID;
    EAuthSessionResponse__Enum m_eAuthSessionResponse;

    struct CSteamID m_OwnerSteamID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidateAuthTicketResponse_t_FWDDECL)
#define IL2CPP_STRUCT_ValidateAuthTicketResponse_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_ValidateAuthTicketResponse_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidateAuthTicketResponse_t_DEFINED) && !defined(IL2CPP_STRUCT_ValidateAuthTicketResponse_t_FWDDECL)
#include <Modloader/app/structs/ValidateAuthTicketResponse_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidateAuthTicketResponse_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
