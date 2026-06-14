#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteStorageDownloadUGCResult_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteStorageDownloadUGCResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageDownloadUGCResult_t_DEFINED)
#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/UGCHandle_t.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_UGCHandle_t_DEFINED) && defined(IL2CPP_STRUCT_AppId_t_DEFINED)
#define IL2CPP_STRUCT_RemoteStorageDownloadUGCResult_t_DEFINED
struct String;
struct RemoteStorageDownloadUGCResult_t {
    EResult__Enum m_eResult;

    struct UGCHandle_t m_hFile;
    struct AppId_t m_nAppID;
    int32_t m_nSizeInBytes;
    struct String* m_pchFileName;
    uint64_t m_ulSteamIDOwner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteStorageDownloadUGCResult_t_FWDDECL)
#define IL2CPP_STRUCT_RemoteStorageDownloadUGCResult_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RemoteStorageDownloadUGCResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageDownloadUGCResult_t_DEFINED) && !defined(IL2CPP_STRUCT_RemoteStorageDownloadUGCResult_t_FWDDECL)
#include <Modloader/app/structs/RemoteStorageDownloadUGCResult_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteStorageDownloadUGCResult_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
