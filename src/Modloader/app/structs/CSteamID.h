#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CSteamID_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CSteamID_INITIALIZING
#if !defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_CSteamID_DEFINED
struct CSteamID {
    uint64_t m_SteamID;
};
#endif
#if !defined(IL2CPP_STRUCT_CSteamID_FWDDECL)
#define IL2CPP_STRUCT_CSteamID_FWDDECL
#endif
#undef IL2CPP_STRUCT_CSteamID_INITIALIZING
#if !defined(IL2CPP_STRUCT_CSteamID_DEFINED) && !defined(IL2CPP_STRUCT_CSteamID_FWDDECL)
#include <Modloader/app/structs/CSteamID.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CSteamID.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
