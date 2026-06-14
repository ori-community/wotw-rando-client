#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteStorageGetPublishedFileDetailsResult_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteStorageGetPublishedFileDetailsResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageGetPublishedFileDetailsResult_t_DEFINED)
#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/ERemoteStoragePublishedFileVisibility__Enum.h>
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/EWorkshopFileType__Enum.h>
#include <Modloader/app/structs/PublishedFileId_t.h>
#include <Modloader/app/structs/UGCHandle_t.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_PublishedFileId_t_DEFINED) && defined(IL2CPP_STRUCT_AppId_t_DEFINED) && defined(IL2CPP_STRUCT_UGCHandle_t_DEFINED) && defined(IL2CPP_STRUCT_ERemoteStoragePublishedFileVisibility__Enum_DEFINED) && defined(IL2CPP_STRUCT_EWorkshopFileType__Enum_DEFINED)
#define IL2CPP_STRUCT_RemoteStorageGetPublishedFileDetailsResult_t_DEFINED
struct String;
struct RemoteStorageGetPublishedFileDetailsResult_t {
    EResult__Enum m_eResult;

    struct PublishedFileId_t m_nPublishedFileId;
    struct AppId_t m_nCreatorAppID;
    struct AppId_t m_nConsumerAppID;
    struct String* m_rgchTitle;
    struct String* m_rgchDescription;
    struct UGCHandle_t m_hFile;
    struct UGCHandle_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    ERemoteStoragePublishedFileVisibility__Enum m_eVisibility;

    bool m_bBanned;
    struct String* m_rgchTags;
    bool m_bTagsTruncated;
    struct String* m_pchFileName;
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    struct String* m_rgchURL;
    EWorkshopFileType__Enum m_eFileType;

    bool m_bAcceptedForUse;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteStorageGetPublishedFileDetailsResult_t_FWDDECL)
#define IL2CPP_STRUCT_RemoteStorageGetPublishedFileDetailsResult_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RemoteStorageGetPublishedFileDetailsResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageGetPublishedFileDetailsResult_t_DEFINED) && !defined(IL2CPP_STRUCT_RemoteStorageGetPublishedFileDetailsResult_t_FWDDECL)
#include <Modloader/app/structs/RemoteStorageGetPublishedFileDetailsResult_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteStorageGetPublishedFileDetailsResult_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
