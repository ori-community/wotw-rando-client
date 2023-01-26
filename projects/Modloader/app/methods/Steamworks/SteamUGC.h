#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UGCQueryHandle_t.h>
#include <Modloader/app/structs/AccountID_t.h>
#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/DepotId_t.h>
#include <Modloader/app/structs/EItemPreviewType__Enum.h>
#include <Modloader/app/structs/EItemStatistic__Enum.h>
#include <Modloader/app/structs/EItemUpdateStatus__Enum.h>
#include <Modloader/app/structs/ERemoteStoragePublishedFileVisibility__Enum.h>
#include <Modloader/app/structs/EUGCMatchingUGCType__Enum.h>
#include <Modloader/app/structs/EUGCQuery__Enum.h>
#include <Modloader/app/structs/EUserUGCListSortOrder__Enum.h>
#include <Modloader/app/structs/EUserUGCList__Enum.h>
#include <Modloader/app/structs/EWorkshopFileType__Enum.h>
#include <Modloader/app/structs/IList_1_System_String_.h>
#include <Modloader/app/structs/PublishedFileId_t.h>
#include <Modloader/app/structs/PublishedFileId_t__Array.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/SteamUGCDetails_t.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UGCUpdateHandle_t.h>

namespace app::classes::Steamworks::SteamUGC {
    IL2CPP_REGISTER_METHOD(0x02798650, app::UGCQueryHandle_t, CreateQueryUserUGCRequest, (app::AccountID_t un_account_i_d, app::EUserUGCList__Enum e_list_type, app::EUGCMatchingUGCType__Enum e_matching_u_g_c_type, app::EUserUGCListSortOrder__Enum e_sort_order, app::AppId_t n_creator_app_i_d, app::AppId_t n_consumer_app_i_d, uint32_t un_page))
    IL2CPP_REGISTER_METHOD(0x02798760, app::UGCQueryHandle_t, CreateQueryAllUGCRequest_1, (app::EUGCQuery__Enum e_query_type, app::EUGCMatchingUGCType__Enum e_matchinge_matching_u_g_c_type_file_type, app::AppId_t n_creator_app_i_d, app::AppId_t n_consumer_app_i_d, uint32_t un_page))
    IL2CPP_REGISTER_METHOD(0x02798860, app::UGCQueryHandle_t, CreateQueryAllUGCRequest_2, (app::EUGCQuery__Enum e_query_type, app::EUGCMatchingUGCType__Enum e_matchinge_matching_u_g_c_type_file_type, app::AppId_t n_creator_app_i_d, app::AppId_t n_consumer_app_i_d, app::String* pch_cursor))
    IL2CPP_REGISTER_METHOD(0x02798AC0, app::UGCQueryHandle_t, CreateQueryUGCDetailsRequest, (app::PublishedFileId_t__Array * pvec_published_file_i_d, uint32_t un_num_published_file_i_ds))
    IL2CPP_REGISTER_METHOD(0x02798B90, app::SteamAPICall_t, SendQueryUGCRequest, (app::UGCQueryHandle_t handle))
    IL2CPP_REGISTER_METHOD(0x02798C40, bool, GetQueryUGCResult, (app::UGCQueryHandle_t handle, uint32_t index, app::SteamUGCDetails_t* p_details))
    IL2CPP_REGISTER_METHOD(0x02798C90, bool, GetQueryUGCPreviewURL, (app::UGCQueryHandle_t handle, uint32_t index, app::String** pch_u_r_l, uint32_t cch_u_r_l_size))
    IL2CPP_REGISTER_METHOD(0x02798DC0, bool, GetQueryUGCMetadata, (app::UGCQueryHandle_t handle, uint32_t index, app::String** pch_metadata, uint32_t cch_metadatasize))
    IL2CPP_REGISTER_METHOD(0x02798EF0, bool, GetQueryUGCChildren, (app::UGCQueryHandle_t handle, uint32_t index, app::PublishedFileId_t__Array* pvec_published_file_i_d, uint32_t c_max_entries))
    IL2CPP_REGISTER_METHOD(0x02798F50, bool, GetQueryUGCStatistic, (app::UGCQueryHandle_t handle, uint32_t index, app::EItemStatistic__Enum e_stat_type, uint64_t* p_stat_value))
    IL2CPP_REGISTER_METHOD(0x02798FC0, uint32_t, GetQueryUGCNumAdditionalPreviews, (app::UGCQueryHandle_t handle, uint32_t index))
    IL2CPP_REGISTER_METHOD(0x02799000, bool, GetQueryUGCAdditionalPreview, (app::UGCQueryHandle_t handle, uint32_t index, uint32_t preview_index, app::String** pch_u_r_l_or_video_i_d, uint32_t cch_u_r_l_size, app::String** pch_original_file_name, uint32_t cch_original_file_name_size, app::EItemPreviewType__Enum* p_preview_type))
    IL2CPP_REGISTER_METHOD(0x027991C0, uint32_t, GetQueryUGCNumKeyValueTags, (app::UGCQueryHandle_t handle, uint32_t index))
    IL2CPP_REGISTER_METHOD(0x02799200, bool, GetQueryUGCKeyValueTag_1, (app::UGCQueryHandle_t handle, uint32_t index, uint32_t key_value_tag_index, app::String** pch_key, uint32_t cch_key_size, app::String** pch_value, uint32_t cch_value_size))
    IL2CPP_REGISTER_METHOD(0x027993B0, bool, GetQueryUGCKeyValueTag_2, (app::UGCQueryHandle_t handle, uint32_t index, app::String* pch_key, app::String** pch_value, uint32_t cch_value_size))
    IL2CPP_REGISTER_METHOD(0x02799650, bool, ReleaseQueryUGCRequest, (app::UGCQueryHandle_t handle))
    IL2CPP_REGISTER_METHOD(0x02799680, bool, AddRequiredTag, (app::UGCQueryHandle_t handle, app::String* p_tag_name))
    IL2CPP_REGISTER_METHOD(0x027998A0, bool, AddExcludedTag, (app::UGCQueryHandle_t handle, app::String* p_tag_name))
    IL2CPP_REGISTER_METHOD(0x02799AC0, bool, SetReturnOnlyIDs, (app::UGCQueryHandle_t handle, bool b_return_only_i_ds))
    IL2CPP_REGISTER_METHOD(0x02799B00, bool, SetReturnKeyValueTags, (app::UGCQueryHandle_t handle, bool b_return_key_value_tags))
    IL2CPP_REGISTER_METHOD(0x02799B40, bool, SetReturnLongDescription, (app::UGCQueryHandle_t handle, bool b_return_long_description))
    IL2CPP_REGISTER_METHOD(0x02799B80, bool, SetReturnMetadata, (app::UGCQueryHandle_t handle, bool b_return_metadata))
    IL2CPP_REGISTER_METHOD(0x02799BC0, bool, SetReturnChildren, (app::UGCQueryHandle_t handle, bool b_return_children))
    IL2CPP_REGISTER_METHOD(0x02799C00, bool, SetReturnAdditionalPreviews, (app::UGCQueryHandle_t handle, bool b_return_additional_previews))
    IL2CPP_REGISTER_METHOD(0x02799C40, bool, SetReturnTotalOnly, (app::UGCQueryHandle_t handle, bool b_return_total_only))
    IL2CPP_REGISTER_METHOD(0x02799C80, bool, SetReturnPlaytimeStats, (app::UGCQueryHandle_t handle, uint32_t un_days))
    IL2CPP_REGISTER_METHOD(0x02799CC0, bool, SetLanguage, (app::UGCQueryHandle_t handle, app::String* pch_language))
    IL2CPP_REGISTER_METHOD(0x02799EE0, bool, SetAllowCachedResponse, (app::UGCQueryHandle_t handle, uint32_t un_max_age_seconds))
    IL2CPP_REGISTER_METHOD(0x02799F20, bool, SetCloudFileNameFilter, (app::UGCQueryHandle_t handle, app::String* p_match_cloud_file_name))
    IL2CPP_REGISTER_METHOD(0x0279A140, bool, SetMatchAnyTag, (app::UGCQueryHandle_t handle, bool b_match_any_tag))
    IL2CPP_REGISTER_METHOD(0x0279A180, bool, SetSearchText, (app::UGCQueryHandle_t handle, app::String* p_search_text))
    IL2CPP_REGISTER_METHOD(0x0279A3A0, bool, SetRankedByTrendDays, (app::UGCQueryHandle_t handle, uint32_t un_days))
    IL2CPP_REGISTER_METHOD(0x0279A3E0, bool, AddRequiredKeyValueTag, (app::UGCQueryHandle_t handle, app::String* p_key, app::String* p_value))
    IL2CPP_REGISTER_METHOD(0x0279A720, app::SteamAPICall_t, RequestUGCDetails, (app::PublishedFileId_t n_published_file_i_d, uint32_t un_max_age_seconds))
    IL2CPP_REGISTER_METHOD(0x0279A7E0, app::SteamAPICall_t, CreateItem, (app::AppId_t n_consumer_app_id, app::EWorkshopFileType__Enum e_file_type))
    IL2CPP_REGISTER_METHOD(0x0279A8A0, app::UGCUpdateHandle_t, StartItemUpdate, (app::AppId_t n_consumer_app_id, app::PublishedFileId_t n_published_file_i_d))
    IL2CPP_REGISTER_METHOD(0x0279A960, bool, SetItemTitle, (app::UGCUpdateHandle_t handle, app::String* pch_title))
    IL2CPP_REGISTER_METHOD(0x0279AB80, bool, SetItemDescription, (app::UGCUpdateHandle_t handle, app::String* pch_description))
    IL2CPP_REGISTER_METHOD(0x0279ADA0, bool, SetItemUpdateLanguage, (app::UGCUpdateHandle_t handle, app::String* pch_language))
    IL2CPP_REGISTER_METHOD(0x0279AFC0, bool, SetItemMetadata, (app::UGCUpdateHandle_t handle, app::String* pch_meta_data))
    IL2CPP_REGISTER_METHOD(0x0279B1E0, bool, SetItemVisibility, (app::UGCUpdateHandle_t handle, app::ERemoteStoragePublishedFileVisibility__Enum e_visibility))
    IL2CPP_REGISTER_METHOD(0x0279B220, bool, SetItemTags, (app::UGCUpdateHandle_t update_handle, app::IList_1_System_String_* p_tags))
    IL2CPP_REGISTER_METHOD(0x0279B3A0, bool, SetItemContent, (app::UGCUpdateHandle_t handle, app::String* psz_content_folder))
    IL2CPP_REGISTER_METHOD(0x0279B5C0, bool, SetItemPreview, (app::UGCUpdateHandle_t handle, app::String* psz_preview_file))
    IL2CPP_REGISTER_METHOD(0x0279B7E0, bool, SetAllowLegacyUpload, (app::UGCUpdateHandle_t handle, bool b_allow_legacy_upload))
    IL2CPP_REGISTER_METHOD(0x0279B820, bool, RemoveAllItemKeyValueTags, (app::UGCUpdateHandle_t handle))
    IL2CPP_REGISTER_METHOD(0x0279B850, bool, RemoveItemKeyValueTags, (app::UGCUpdateHandle_t handle, app::String* pch_key))
    IL2CPP_REGISTER_METHOD(0x0279BA70, bool, AddItemKeyValueTag, (app::UGCUpdateHandle_t handle, app::String* pch_key, app::String* pch_value))
    IL2CPP_REGISTER_METHOD(0x0279BDB0, bool, AddItemPreviewFile, (app::UGCUpdateHandle_t handle, app::String* psz_preview_file, app::EItemPreviewType__Enum type))
    IL2CPP_REGISTER_METHOD(0x0279BFE0, bool, AddItemPreviewVideo, (app::UGCUpdateHandle_t handle, app::String* psz_video_i_d))
    IL2CPP_REGISTER_METHOD(0x0279C200, bool, UpdateItemPreviewFile, (app::UGCUpdateHandle_t handle, uint32_t index, app::String* psz_preview_file))
    IL2CPP_REGISTER_METHOD(0x0279C430, bool, UpdateItemPreviewVideo, (app::UGCUpdateHandle_t handle, uint32_t index, app::String* psz_video_i_d))
    IL2CPP_REGISTER_METHOD(0x0279C660, bool, RemoveItemPreview, (app::UGCUpdateHandle_t handle, uint32_t index))
    IL2CPP_REGISTER_METHOD(0x0279C6A0, app::SteamAPICall_t, SubmitItemUpdate, (app::UGCUpdateHandle_t handle, app::String* pch_change_note))
    IL2CPP_REGISTER_METHOD(0x0279C8E0, app::EItemUpdateStatus__Enum, GetItemUpdateProgress, (app::UGCUpdateHandle_t handle, uint64_t* pun_bytes_processed, uint64_t* pun_bytes_total))
    IL2CPP_REGISTER_METHOD(0x0279C930, app::SteamAPICall_t, SetUserItemVote, (app::PublishedFileId_t n_published_file_i_d, bool b_vote_up))
    IL2CPP_REGISTER_METHOD(0x0279CA00, app::SteamAPICall_t, GetUserItemVote, (app::PublishedFileId_t n_published_file_i_d))
    IL2CPP_REGISTER_METHOD(0x0279CAB0, app::SteamAPICall_t, AddItemToFavorites, (app::AppId_t n_app_id, app::PublishedFileId_t n_published_file_i_d))
    IL2CPP_REGISTER_METHOD(0x0279CB70, app::SteamAPICall_t, RemoveItemFromFavorites, (app::AppId_t n_app_id, app::PublishedFileId_t n_published_file_i_d))
    IL2CPP_REGISTER_METHOD(0x0279CC30, app::SteamAPICall_t, SubscribeItem, (app::PublishedFileId_t n_published_file_i_d))
    IL2CPP_REGISTER_METHOD(0x0279CCE0, app::SteamAPICall_t, UnsubscribeItem, (app::PublishedFileId_t n_published_file_i_d))
    IL2CPP_REGISTER_METHOD(0x0279CD90, uint32_t, GetNumSubscribedItems, ())
    IL2CPP_REGISTER_METHOD(0x0279CDB0, uint32_t, GetSubscribedItems, (app::PublishedFileId_t__Array * pvec_published_file_i_d, uint32_t c_max_entries))
    IL2CPP_REGISTER_METHOD(0x0279CDF0, uint32_t, GetItemState, (app::PublishedFileId_t n_published_file_i_d))
    IL2CPP_REGISTER_METHOD(0x0279CE20, bool, GetItemInstallInfo, (app::PublishedFileId_t n_published_file_i_d, uint64_t* pun_size_on_disk, app::String** pch_folder, uint32_t cch_folder_size, uint32_t* pun_time_stamp))
    IL2CPP_REGISTER_METHOD(0x0279CF60, bool, GetItemDownloadInfo, (app::PublishedFileId_t n_published_file_i_d, uint64_t* pun_bytes_downloaded, uint64_t* pun_bytes_total))
    IL2CPP_REGISTER_METHOD(0x0279CFB0, bool, DownloadItem, (app::PublishedFileId_t n_published_file_i_d, bool b_high_priority))
    IL2CPP_REGISTER_METHOD(0x0279CFF0, bool, BInitWorkshopForGameServer, (app::DepotId_t un_workshop_depot_i_d, app::String* psz_folder))
    IL2CPP_REGISTER_METHOD(0x0279D210, void, SuspendDownloads, (bool b_suspend))
    IL2CPP_REGISTER_METHOD(0x0279D240, app::SteamAPICall_t, StartPlaytimeTracking, (app::PublishedFileId_t__Array * pvec_published_file_i_d, uint32_t un_num_published_file_i_ds))
    IL2CPP_REGISTER_METHOD(0x0279D310, app::SteamAPICall_t, StopPlaytimeTracking, (app::PublishedFileId_t__Array * pvec_published_file_i_d, uint32_t un_num_published_file_i_ds))
    IL2CPP_REGISTER_METHOD(0x0279D3E0, app::SteamAPICall_t, StopPlaytimeTrackingForAllItems, ())
    IL2CPP_REGISTER_METHOD(0x0279D490, app::SteamAPICall_t, AddDependency, (app::PublishedFileId_t n_parent_published_file_i_d, app::PublishedFileId_t n_child_published_file_i_d))
    IL2CPP_REGISTER_METHOD(0x0279D550, app::SteamAPICall_t, RemoveDependency, (app::PublishedFileId_t n_parent_published_file_i_d, app::PublishedFileId_t n_child_published_file_i_d))
    IL2CPP_REGISTER_METHOD(0x0279D610, app::SteamAPICall_t, AddAppDependency, (app::PublishedFileId_t n_published_file_i_d, app::AppId_t n_app_i_d))
    IL2CPP_REGISTER_METHOD(0x0279D6D0, app::SteamAPICall_t, RemoveAppDependency, (app::PublishedFileId_t n_published_file_i_d, app::AppId_t n_app_i_d))
    IL2CPP_REGISTER_METHOD(0x0279D790, app::SteamAPICall_t, GetAppDependencies, (app::PublishedFileId_t n_published_file_i_d))
    IL2CPP_REGISTER_METHOD(0x0279D840, app::SteamAPICall_t, DeleteItem, (app::PublishedFileId_t n_published_file_i_d))
} // namespace app::classes::Steamworks::SteamUGC
