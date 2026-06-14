#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamPartyBeaconLocation_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamPartyBeaconLocation_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamPartyBeaconLocation_t_DEFINED)
#include <Modloader/app/structs/ESteamPartyBeaconLocationType__Enum.h>
#if defined(IL2CPP_STRUCT_ESteamPartyBeaconLocationType__Enum_DEFINED)
#define IL2CPP_STRUCT_SteamPartyBeaconLocation_t_DEFINED
struct SteamPartyBeaconLocation_t {
    ESteamPartyBeaconLocationType__Enum m_eType;

    uint64_t m_ulLocationID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamPartyBeaconLocation_t_FWDDECL)
#define IL2CPP_STRUCT_SteamPartyBeaconLocation_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_SteamPartyBeaconLocation_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamPartyBeaconLocation_t_DEFINED) && !defined(IL2CPP_STRUCT_SteamPartyBeaconLocation_t_FWDDECL)
#include <Modloader/app/structs/SteamPartyBeaconLocation_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamPartyBeaconLocation_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
