#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SearchForGameProgressCallback_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SearchForGameProgressCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SearchForGameProgressCallback_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EResult__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_SearchForGameProgressCallback_t_DEFINED
struct SearchForGameProgressCallback_t {
    uint64_t m_ullSearchID;
    EResult__Enum m_eResult;

    struct CSteamID m_lobbyID;
    struct CSteamID m_steamIDEndedSearch;
    int32_t m_nSecondsRemainingEstimate;
    int32_t m_cPlayersSearching;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SearchForGameProgressCallback_t_FWDDECL)
#define IL2CPP_STRUCT_SearchForGameProgressCallback_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_SearchForGameProgressCallback_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SearchForGameProgressCallback_t_DEFINED) && !defined(IL2CPP_STRUCT_SearchForGameProgressCallback_t_FWDDECL)
#include <Modloader/app/structs/SearchForGameProgressCallback_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SearchForGameProgressCallback_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
