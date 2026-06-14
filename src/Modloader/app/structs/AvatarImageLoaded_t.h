#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AvatarImageLoaded_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AvatarImageLoaded_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_AvatarImageLoaded_t_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_AvatarImageLoaded_t_DEFINED
struct AvatarImageLoaded_t {
    struct CSteamID m_steamID;
    int32_t m_iImage;
    int32_t m_iWide;
    int32_t m_iTall;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AvatarImageLoaded_t_FWDDECL)
#define IL2CPP_STRUCT_AvatarImageLoaded_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_AvatarImageLoaded_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_AvatarImageLoaded_t_DEFINED) && !defined(IL2CPP_STRUCT_AvatarImageLoaded_t_FWDDECL)
#include <Modloader/app/structs/AvatarImageLoaded_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AvatarImageLoaded_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
