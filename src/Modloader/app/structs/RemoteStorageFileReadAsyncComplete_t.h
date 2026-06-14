#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteStorageFileReadAsyncComplete_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteStorageFileReadAsyncComplete_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageFileReadAsyncComplete_t_DEFINED)
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#if defined(IL2CPP_STRUCT_SteamAPICall_t_DEFINED) && defined(IL2CPP_STRUCT_EResult__Enum_DEFINED)
#define IL2CPP_STRUCT_RemoteStorageFileReadAsyncComplete_t_DEFINED
struct RemoteStorageFileReadAsyncComplete_t {
    struct SteamAPICall_t m_hFileReadAsync;
    EResult__Enum m_eResult;

    uint32_t m_nOffset;
    uint32_t m_cubRead;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteStorageFileReadAsyncComplete_t_FWDDECL)
#define IL2CPP_STRUCT_RemoteStorageFileReadAsyncComplete_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_RemoteStorageFileReadAsyncComplete_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageFileReadAsyncComplete_t_DEFINED) && !defined(IL2CPP_STRUCT_RemoteStorageFileReadAsyncComplete_t_FWDDECL)
#include <Modloader/app/structs/RemoteStorageFileReadAsyncComplete_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteStorageFileReadAsyncComplete_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
