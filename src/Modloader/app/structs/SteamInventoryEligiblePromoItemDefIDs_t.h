#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamInventoryEligiblePromoItemDefIDs_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamInventoryEligiblePromoItemDefIDs_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamInventoryEligiblePromoItemDefIDs_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EResult__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_SteamInventoryEligiblePromoItemDefIDs_t_DEFINED
struct SteamInventoryEligiblePromoItemDefIDs_t {
    EResult__Enum m_result;

    struct CSteamID m_steamID;
    int32_t m_numEligiblePromoItemDefs;
    bool m_bCachedData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamInventoryEligiblePromoItemDefIDs_t_FWDDECL)
#define IL2CPP_STRUCT_SteamInventoryEligiblePromoItemDefIDs_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_SteamInventoryEligiblePromoItemDefIDs_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamInventoryEligiblePromoItemDefIDs_t_DEFINED) && !defined(IL2CPP_STRUCT_SteamInventoryEligiblePromoItemDefIDs_t_FWDDECL)
#include <Modloader/app/structs/SteamInventoryEligiblePromoItemDefIDs_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamInventoryEligiblePromoItemDefIDs_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
