#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteStorageEnumerateWorkshopFilesResult_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteStorageEnumerateWorkshopFilesResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageEnumerateWorkshopFilesResult_t_DEFINED)
#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/EResult__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_AppId_t_DEFINED)
#define IL2CPP_STRUCT_RemoteStorageEnumerateWorkshopFilesResult_t_DEFINED
struct PublishedFileId_t__Array;
struct Single__Array;
struct RemoteStorageEnumerateWorkshopFilesResult_t {
    EResult__Enum m_eResult;

    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    struct PublishedFileId_t__Array* m_rgPublishedFileId;
    struct Single__Array* m_rgScore;
    struct AppId_t m_nAppId;
    uint32_t m_unStartIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteStorageEnumerateWorkshopFilesResult_t_FWDDECL)
#define IL2CPP_STRUCT_RemoteStorageEnumerateWorkshopFilesResult_t_FWDDECL
#include <Modloader/app/structs/PublishedFileId_t__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_RemoteStorageEnumerateWorkshopFilesResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageEnumerateWorkshopFilesResult_t_DEFINED) && !defined(IL2CPP_STRUCT_RemoteStorageEnumerateWorkshopFilesResult_t_FWDDECL)
#include <Modloader/app/structs/RemoteStorageEnumerateWorkshopFilesResult_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteStorageEnumerateWorkshopFilesResult_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
