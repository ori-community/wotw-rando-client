#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamAPICallCompleted_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamAPICallCompleted_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamAPICallCompleted_t_DEFINED)
#include <Modloader/app/structs/SteamAPICall_t.h>
#if defined(IL2CPP_STRUCT_SteamAPICall_t_DEFINED)
#define IL2CPP_STRUCT_SteamAPICallCompleted_t_DEFINED
struct SteamAPICallCompleted_t {
    struct SteamAPICall_t m_hAsyncCall;
    int32_t m_iCallback;
    uint32_t m_cubParam;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamAPICallCompleted_t_FWDDECL)
#define IL2CPP_STRUCT_SteamAPICallCompleted_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_SteamAPICallCompleted_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamAPICallCompleted_t_DEFINED) && !defined(IL2CPP_STRUCT_SteamAPICallCompleted_t_FWDDECL)
#include <Modloader/app/structs/SteamAPICallCompleted_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamAPICallCompleted_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
