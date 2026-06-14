#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteStorageAppSyncProgress_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteStorageAppSyncProgress_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageAppSyncProgress_t_DEFINED)
#include <Modloader/app/structs/AppId_t.h>
#if defined(IL2CPP_STRUCT_AppId_t_DEFINED)
#define IL2CPP_STRUCT_RemoteStorageAppSyncProgress_t_DEFINED
struct String;
struct RemoteStorageAppSyncProgress_t {
    struct String* m_rgchCurrentFile;
    struct AppId_t m_nAppID;
    uint32_t m_uBytesTransferredThisChunk;
    double m_dAppPercentComplete;
    bool m_bUploading;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteStorageAppSyncProgress_t_FWDDECL)
#define IL2CPP_STRUCT_RemoteStorageAppSyncProgress_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RemoteStorageAppSyncProgress_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageAppSyncProgress_t_DEFINED) && !defined(IL2CPP_STRUCT_RemoteStorageAppSyncProgress_t_FWDDECL)
#include <Modloader/app/structs/RemoteStorageAppSyncProgress_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteStorageAppSyncProgress_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
