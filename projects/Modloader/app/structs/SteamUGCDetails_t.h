#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamUGCDetails_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamUGCDetails_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamUGCDetails_t_DEFINED)
#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/ERemoteStoragePublishedFileVisibility__Enum.h>
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/EWorkshopFileType__Enum.h>
#include <Modloader/app/structs/PublishedFileId_t.h>
#include <Modloader/app/structs/UGCHandle_t.h>
#if defined(IL2CPP_STRUCT_PublishedFileId_t_DEFINED) && defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_EWorkshopFileType__Enum_DEFINED) && defined(IL2CPP_STRUCT_AppId_t_DEFINED) && defined(IL2CPP_STRUCT_ERemoteStoragePublishedFileVisibility__Enum_DEFINED) && defined(IL2CPP_STRUCT_UGCHandle_t_DEFINED)
#define IL2CPP_STRUCT_SteamUGCDetails_t_DEFINED
struct String;
struct SteamUGCDetails_t {
    struct PublishedFileId_t m_nPublishedFileId;
    EResult__Enum m_eResult;

    EWorkshopFileType__Enum m_eFileType;

    struct AppId_t m_nCreatorAppID;
    struct AppId_t m_nConsumerAppID;
    struct String* m_rgchTitle;
    struct String* m_rgchDescription;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    ERemoteStoragePublishedFileVisibility__Enum m_eVisibility;

    bool m_bBanned;
    bool m_bAcceptedForUse;
    bool m_bTagsTruncated;
    struct String* m_rgchTags;
    struct UGCHandle_t m_hFile;
    struct UGCHandle_t m_hPreviewFile;
    struct String* m_pchFileName;
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    struct String* m_rgchURL;
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
    uint32_t m_unNumChildren;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamUGCDetails_t_FWDDECL)
#define IL2CPP_STRUCT_SteamUGCDetails_t_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SteamUGCDetails_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamUGCDetails_t_DEFINED) && !defined(IL2CPP_STRUCT_SteamUGCDetails_t_FWDDECL)
#include <Modloader/app/structs/SteamUGCDetails_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamUGCDetails_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
