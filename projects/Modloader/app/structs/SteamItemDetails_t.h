#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamItemDetails_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamItemDetails_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamItemDetails_t_DEFINED)
#include <Modloader/app/structs/SteamItemDef_t.h>
#include <Modloader/app/structs/SteamItemInstanceID_t.h>
#if defined(IL2CPP_STRUCT_SteamItemInstanceID_t_DEFINED) && defined(IL2CPP_STRUCT_SteamItemDef_t_DEFINED)
#define IL2CPP_STRUCT_SteamItemDetails_t_DEFINED
struct SteamItemDetails_t {
    struct SteamItemInstanceID_t m_itemId;
    struct SteamItemDef_t m_iDefinition;
    uint16_t m_unQuantity;
    uint16_t m_unFlags;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamItemDetails_t_FWDDECL)
#define IL2CPP_STRUCT_SteamItemDetails_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_SteamItemDetails_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamItemDetails_t_DEFINED) && !defined(IL2CPP_STRUCT_SteamItemDetails_t_FWDDECL)
#include <Modloader/app/structs/SteamItemDetails_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamItemDetails_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
