#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamInventoryFullUpdate_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamInventoryFullUpdate_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamInventoryFullUpdate_t_DEFINED)
#include <Modloader/app/structs/SteamInventoryResult_t.h>
#if defined(IL2CPP_STRUCT_SteamInventoryResult_t_DEFINED)
#define IL2CPP_STRUCT_SteamInventoryFullUpdate_t_DEFINED
struct SteamInventoryFullUpdate_t {
    struct SteamInventoryResult_t m_handle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamInventoryFullUpdate_t_FWDDECL)
#define IL2CPP_STRUCT_SteamInventoryFullUpdate_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_SteamInventoryFullUpdate_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamInventoryFullUpdate_t_DEFINED) && !defined(IL2CPP_STRUCT_SteamInventoryFullUpdate_t_FWDDECL)
#include <Modloader/app/structs/SteamInventoryFullUpdate_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamInventoryFullUpdate_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
