#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_DEFINED)
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/EWorkshopFileAction__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_EWorkshopFileAction__Enum_DEFINED)
#define IL2CPP_STRUCT_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_DEFINED
struct PublishedFileId_t__Array;
struct UInt32__Array;
struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t {
    EResult__Enum m_eResult;

    EWorkshopFileAction__Enum m_eAction;

    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    struct PublishedFileId_t__Array* m_rgPublishedFileId;
    struct UInt32__Array* m_rgRTimeUpdated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_FWDDECL)
#define IL2CPP_STRUCT_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_FWDDECL
#include <Modloader/app/structs/PublishedFileId_t__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_DEFINED) && !defined(IL2CPP_STRUCT_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_FWDDECL)
#include <Modloader/app/structs/RemoteStorageEnumeratePublishedFilesByUserActionResult_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteStorageEnumeratePublishedFilesByUserActionResult_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
