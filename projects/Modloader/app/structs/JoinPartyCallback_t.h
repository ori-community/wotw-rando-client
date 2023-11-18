#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JoinPartyCallback_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JoinPartyCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_JoinPartyCallback_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/PartyBeaconID_t.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_PartyBeaconID_t_DEFINED) && defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_JoinPartyCallback_t_DEFINED
struct String;
struct JoinPartyCallback_t {
    EResult__Enum m_eResult;

    struct PartyBeaconID_t m_ulBeaconID;
    struct CSteamID m_SteamIDBeaconOwner;
    struct String* m_rgchConnectString;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JoinPartyCallback_t_FWDDECL)
#define IL2CPP_STRUCT_JoinPartyCallback_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_JoinPartyCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_JoinPartyCallback_t_DEFINED) && !defined(IL2CPP_STRUCT_JoinPartyCallback_t_FWDDECL)
#include <Modloader/app/structs/JoinPartyCallback_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JoinPartyCallback_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
