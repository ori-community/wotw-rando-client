#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/ERemoteStoragePlatform__Enum.h>
#include <Modloader/app/structs/ERemoteStoragePublishedFileVisibility__Enum.h>
#include <Modloader/app/structs/EUGCReadAction__Enum.h>
#include <Modloader/app/structs/EWorkshopEnumerationType__Enum.h>
#include <Modloader/app/structs/EWorkshopFileAction__Enum.h>
#include <Modloader/app/structs/EWorkshopFileType__Enum.h>
#include <Modloader/app/structs/EWorkshopVideoProvider__Enum.h>
#include <Modloader/app/structs/IList_1_System_String_.h>
#include <Modloader/app/structs/PublishedFileId_t.h>
#include <Modloader/app/structs/PublishedFileUpdateHandle_t.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UGCFileWriteStreamHandle_t.h>
#include <Modloader/app/structs/UGCHandle_t.h>

namespace app::classes::Steamworks::SteamRemoteStorage {
    IL2CPP_REGISTER_METHOD(0x02790310, bool, FileWrite, app::String* pch_file, app::Byte__Array* pv_data, int32_t cub_data)
    IL2CPP_REGISTER_METHOD(0x02790620, int32_t, FileRead, app::String* pch_file, app::Byte__Array* pv_data, int32_t cub_data_to_read)
    IL2CPP_REGISTER_METHOD(0x02790920, app::SteamAPICall_t, FileWriteAsync, app::String* pch_file, app::Byte__Array* pv_data, uint32_t cub_data)
    IL2CPP_REGISTER_METHOD(0x02790C40, app::SteamAPICall_t, FileReadAsync, app::String* pch_file, uint32_t n_offset, uint32_t cub_to_read)
    IL2CPP_REGISTER_METHOD(0x02790F60, bool, FileReadAsyncComplete, app::SteamAPICall_t h_read_call, app::Byte__Array* pv_buffer, uint32_t cub_to_read)
    IL2CPP_REGISTER_METHOD(0x02791050, bool, FileForget, app::String* pch_file)
    IL2CPP_REGISTER_METHOD(0x02791330, bool, FileDelete, app::String* pch_file)
    IL2CPP_REGISTER_METHOD(0x02791610, app::SteamAPICall_t, FileShare, app::String* pch_file)
    IL2CPP_REGISTER_METHOD(0x02791910, bool, SetSyncPlatforms, app::String* pch_file, app::ERemoteStoragePlatform__Enum e_remote_storage_platform)
    IL2CPP_REGISTER_METHOD(0x02791C00, app::UGCFileWriteStreamHandle_t, FileWriteStreamOpen, app::String* pch_file)
    IL2CPP_REGISTER_METHOD(
        0x02791F00,
        bool,
        FileWriteStreamWriteChunk,
        app::UGCFileWriteStreamHandle_t write_handle,
        app::Byte__Array* pv_data,
        int32_t cub_data
    )
    IL2CPP_REGISTER_METHOD(0x02791FF0, bool, FileWriteStreamClose, app::UGCFileWriteStreamHandle_t write_handle)
    IL2CPP_REGISTER_METHOD(0x027920B0, bool, FileWriteStreamCancel, app::UGCFileWriteStreamHandle_t write_handle)
    IL2CPP_REGISTER_METHOD(0x02792170, bool, FileExists, app::String* pch_file)
    IL2CPP_REGISTER_METHOD(0x02792450, bool, FilePersisted, app::String* pch_file)
    IL2CPP_REGISTER_METHOD(0x02792730, int32_t, GetFileSize, app::String* pch_file)
    IL2CPP_REGISTER_METHOD(0x02792A10, int64_t, GetFileTimestamp, app::String* pch_file)
    IL2CPP_REGISTER_METHOD(0x02792CF0, app::ERemoteStoragePlatform__Enum, GetSyncPlatforms, app::String* pch_file)
    IL2CPP_REGISTER_METHOD(0x02792FD0, int32_t, GetFileCount, )
    IL2CPP_REGISTER_METHOD(0x02793080, app::String*, GetFileNameAndSize, int32_t i_file, int32_t* pn_file_size_in_bytes)
    IL2CPP_REGISTER_METHOD(0x02793150, bool, GetQuota, uint64_t* pn_total_bytes, uint64_t* pu_available_bytes)
    IL2CPP_REGISTER_METHOD(0x02793220, bool, IsCloudEnabledForAccount, )
    IL2CPP_REGISTER_METHOD(0x027932D0, bool, IsCloudEnabledForApp, )
    IL2CPP_REGISTER_METHOD(0x02793380, void, SetCloudEnabledForApp, bool b_enabled)
    IL2CPP_REGISTER_METHOD(0x02793440, app::SteamAPICall_t, UGCDownload, app::UGCHandle_t h_content, uint32_t un_priority)
    IL2CPP_REGISTER_METHOD(0x02793590, bool, GetUGCDownloadProgress, app::UGCHandle_t h_content, int32_t* pn_bytes_downloaded, int32_t* pn_bytes_expected)
    IL2CPP_REGISTER_METHOD(
        0x02793670,
        bool,
        GetUGCDetails,
        app::UGCHandle_t h_content,
        app::AppId_t* pn_app_i_d,
        app::String** ppch_name,
        int32_t* pn_file_size_in_bytes,
        app::CSteamID* p_steam_i_d_owner
    )
    IL2CPP_REGISTER_METHOD(
        0x02793790,
        int32_t,
        UGCRead,
        app::UGCHandle_t h_content,
        app::Byte__Array* pv_data,
        int32_t cub_data_to_read,
        uint32_t c_offset,
        app::EUGCReadAction__Enum e_action
    )
    IL2CPP_REGISTER_METHOD(0x027938A0, int32_t, GetCachedUGCCount, )
    IL2CPP_REGISTER_METHOD(0x02793950, app::UGCHandle_t, GetCachedUGCHandle, int32_t i_cached_content)
    IL2CPP_REGISTER_METHOD(
        0x02793A90,
        app::SteamAPICall_t,
        PublishWorkshopFile,
        app::String* pch_file,
        app::String* pch_preview_file,
        app::AppId_t n_consumer_app_id,
        app::String* pch_title,
        app::String* pch_description,
        app::ERemoteStoragePublishedFileVisibility__Enum e_visibility,
        app::IList_1_System_String_* p_tags,
        app::EWorkshopFileType__Enum e_workshop_file_type
    )
    IL2CPP_REGISTER_METHOD(0x02794170, app::PublishedFileUpdateHandle_t, CreatePublishedFileUpdateRequest, app::PublishedFileId_t un_published_file_id)
    IL2CPP_REGISTER_METHOD(0x027942B0, bool, UpdatePublishedFileFile, app::PublishedFileUpdateHandle_t update_handle, app::String* pch_file)
    IL2CPP_REGISTER_METHOD(0x027945A0, bool, UpdatePublishedFilePreviewFile, app::PublishedFileUpdateHandle_t update_handle, app::String* pch_preview_file)
    IL2CPP_REGISTER_METHOD(0x02794890, bool, UpdatePublishedFileTitle, app::PublishedFileUpdateHandle_t update_handle, app::String* pch_title)
    IL2CPP_REGISTER_METHOD(0x02794B80, bool, UpdatePublishedFileDescription, app::PublishedFileUpdateHandle_t update_handle, app::String* pch_description)
    IL2CPP_REGISTER_METHOD(
        0x02794E70,
        bool,
        UpdatePublishedFileVisibility,
        app::PublishedFileUpdateHandle_t update_handle,
        app::ERemoteStoragePublishedFileVisibility__Enum e_visibility
    )
    IL2CPP_REGISTER_METHOD(0x02794F40, bool, UpdatePublishedFileTags, app::PublishedFileUpdateHandle_t update_handle, app::IList_1_System_String_* p_tags)
    IL2CPP_REGISTER_METHOD(0x02795150, app::SteamAPICall_t, CommitPublishedFileUpdate, app::PublishedFileUpdateHandle_t update_handle)
    IL2CPP_REGISTER_METHOD(0x02795290, app::SteamAPICall_t, GetPublishedFileDetails, app::PublishedFileId_t un_published_file_id, uint32_t un_max_seconds_old)
    IL2CPP_REGISTER_METHOD(0x027953E0, app::SteamAPICall_t, DeletePublishedFile, app::PublishedFileId_t un_published_file_id)
    IL2CPP_REGISTER_METHOD(0x02795520, app::SteamAPICall_t, EnumerateUserPublishedFiles, uint32_t un_start_index)
    IL2CPP_REGISTER_METHOD(0x02795660, app::SteamAPICall_t, SubscribePublishedFile, app::PublishedFileId_t un_published_file_id)
    IL2CPP_REGISTER_METHOD(0x027957A0, app::SteamAPICall_t, EnumerateUserSubscribedFiles, uint32_t un_start_index)
    IL2CPP_REGISTER_METHOD(0x027958E0, app::SteamAPICall_t, UnsubscribePublishedFile, app::PublishedFileId_t un_published_file_id)
    IL2CPP_REGISTER_METHOD(
        0x02795A20,
        bool,
        UpdatePublishedFileSetChangeDescription,
        app::PublishedFileUpdateHandle_t update_handle,
        app::String* pch_change_description
    )
    IL2CPP_REGISTER_METHOD(0x02795D10, app::SteamAPICall_t, GetPublishedItemVoteDetails, app::PublishedFileId_t un_published_file_id)
    IL2CPP_REGISTER_METHOD(0x02795E50, app::SteamAPICall_t, UpdateUserPublishedItemVote, app::PublishedFileId_t un_published_file_id, bool b_vote_up)
    IL2CPP_REGISTER_METHOD(0x02795FA0, app::SteamAPICall_t, GetUserPublishedItemVoteDetails, app::PublishedFileId_t un_published_file_id)
    IL2CPP_REGISTER_METHOD(
        0x027960E0,
        app::SteamAPICall_t,
        EnumerateUserSharedWorkshopFiles,
        app::CSteamID steam_id,
        uint32_t un_start_index,
        app::IList_1_System_String_* p_required_tags,
        app::IList_1_System_String_* p_excluded_tags
    )
    IL2CPP_REGISTER_METHOD(
        0x02796400,
        app::SteamAPICall_t,
        PublishVideo,
        app::EWorkshopVideoProvider__Enum e_video_provider,
        app::String* pch_video_account,
        app::String* pch_video_identifier,
        app::String* pch_preview_file,
        app::AppId_t n_consumer_app_id,
        app::String* pch_title,
        app::String* pch_description,
        app::ERemoteStoragePublishedFileVisibility__Enum e_visibility,
        app::IList_1_System_String_* p_tags
    )
    IL2CPP_REGISTER_METHOD(
        0x02796C30,
        app::SteamAPICall_t,
        SetUserPublishedFileAction,
        app::PublishedFileId_t un_published_file_id,
        app::EWorkshopFileAction__Enum e_action
    )
    IL2CPP_REGISTER_METHOD(
        0x02796D80,
        app::SteamAPICall_t,
        EnumeratePublishedFilesByUserAction,
        app::EWorkshopFileAction__Enum e_action,
        uint32_t un_start_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02796ED0,
        app::SteamAPICall_t,
        EnumeratePublishedWorkshopFiles,
        app::EWorkshopEnumerationType__Enum e_enumeration_type,
        uint32_t un_start_index,
        uint32_t un_count,
        uint32_t un_days,
        app::IList_1_System_String_* p_tags,
        app::IList_1_System_String_* p_user_tags
    )
    IL2CPP_REGISTER_METHOD(0x02797220, app::SteamAPICall_t, UGCDownloadToLocation, app::UGCHandle_t h_content, app::String* pch_location, uint32_t un_priority)
} // namespace app::classes::Steamworks::SteamRemoteStorage
