#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamUGCRequestUGCDetailsResult_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamUGCRequestUGCDetailsResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamUGCRequestUGCDetailsResult_t_DEFINED)
#include <Modloader/app/structs/SteamUGCDetails_t.h>
#if defined(IL2CPP_STRUCT_SteamUGCDetails_t_DEFINED)
#define IL2CPP_STRUCT_SteamUGCRequestUGCDetailsResult_t_DEFINED
struct SteamUGCRequestUGCDetailsResult_t {
    struct SteamUGCDetails_t m_details;
    bool m_bCachedData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamUGCRequestUGCDetailsResult_t_FWDDECL)
#define IL2CPP_STRUCT_SteamUGCRequestUGCDetailsResult_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_SteamUGCRequestUGCDetailsResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamUGCRequestUGCDetailsResult_t_DEFINED) && !defined(IL2CPP_STRUCT_SteamUGCRequestUGCDetailsResult_t_FWDDECL)
#include <Modloader/app/structs/SteamUGCRequestUGCDetailsResult_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamUGCRequestUGCDetailsResult_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
