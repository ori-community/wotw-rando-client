#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GSReputation_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GSReputation_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GSReputation_t_DEFINED)
#include <Modloader/app/structs/EResult__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED)
#define IL2CPP_STRUCT_GSReputation_t_DEFINED
struct GSReputation_t {
    EResult__Enum m_eResult;

    uint32_t m_unReputationScore;
    bool m_bBanned;
    uint32_t m_unBannedIP;
    uint16_t m_usBannedPort;
    uint64_t m_ulBannedGameID;
    uint32_t m_unBanExpires;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GSReputation_t_FWDDECL)
#define IL2CPP_STRUCT_GSReputation_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_GSReputation_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_GSReputation_t_DEFINED) && !defined(IL2CPP_STRUCT_GSReputation_t_FWDDECL)
#include <Modloader/app/structs/GSReputation_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GSReputation_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
