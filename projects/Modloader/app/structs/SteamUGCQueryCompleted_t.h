#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamUGCQueryCompleted_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamUGCQueryCompleted_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamUGCQueryCompleted_t_DEFINED)
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/UGCQueryHandle_t.h>
#if defined(IL2CPP_STRUCT_UGCQueryHandle_t_DEFINED) && defined(IL2CPP_STRUCT_EResult__Enum_DEFINED)
#define IL2CPP_STRUCT_SteamUGCQueryCompleted_t_DEFINED
struct String;
struct SteamUGCQueryCompleted_t {
    struct UGCQueryHandle_t m_handle;
    EResult__Enum m_eResult;

    uint32_t m_unNumResultsReturned;
    uint32_t m_unTotalMatchingResults;
    bool m_bCachedData;
    struct String* m_rgchNextCursor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamUGCQueryCompleted_t_FWDDECL)
#define IL2CPP_STRUCT_SteamUGCQueryCompleted_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SteamUGCQueryCompleted_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamUGCQueryCompleted_t_DEFINED) && !defined(IL2CPP_STRUCT_SteamUGCQueryCompleted_t_FWDDECL)
#include <Modloader/app/structs/SteamUGCQueryCompleted_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamUGCQueryCompleted_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
