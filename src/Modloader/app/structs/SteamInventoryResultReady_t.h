#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamInventoryResultReady_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamInventoryResultReady_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamInventoryResultReady_t_DEFINED)
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/SteamInventoryResult_t.h>
#if defined(IL2CPP_STRUCT_SteamInventoryResult_t_DEFINED) && defined(IL2CPP_STRUCT_EResult__Enum_DEFINED)
#define IL2CPP_STRUCT_SteamInventoryResultReady_t_DEFINED
struct SteamInventoryResultReady_t {
    struct SteamInventoryResult_t m_handle;
    EResult__Enum m_result;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamInventoryResultReady_t_FWDDECL)
#define IL2CPP_STRUCT_SteamInventoryResultReady_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_SteamInventoryResultReady_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamInventoryResultReady_t_DEFINED) && !defined(IL2CPP_STRUCT_SteamInventoryResultReady_t_FWDDECL)
#include <Modloader/app/structs/SteamInventoryResultReady_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamInventoryResultReady_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
