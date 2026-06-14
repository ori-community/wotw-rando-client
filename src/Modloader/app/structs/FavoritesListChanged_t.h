#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FavoritesListChanged_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FavoritesListChanged_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_FavoritesListChanged_t_DEFINED)
#include <Modloader/app/structs/AccountID_t.h>
#if defined(IL2CPP_STRUCT_AccountID_t_DEFINED)
#define IL2CPP_STRUCT_FavoritesListChanged_t_DEFINED
struct FavoritesListChanged_t {
    uint32_t m_nIP;
    uint32_t m_nQueryPort;
    uint32_t m_nConnPort;
    uint32_t m_nAppID;
    uint32_t m_nFlags;
    bool m_bAdd;
    struct AccountID_t m_unAccountId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FavoritesListChanged_t_FWDDECL)
#define IL2CPP_STRUCT_FavoritesListChanged_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_FavoritesListChanged_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_FavoritesListChanged_t_DEFINED) && !defined(IL2CPP_STRUCT_FavoritesListChanged_t_FWDDECL)
#include <Modloader/app/structs/FavoritesListChanged_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FavoritesListChanged_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
