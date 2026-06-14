#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AccountID_t.h>
#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/AppId_t__Array.h>
#include <Modloader/app/structs/AudioPlayback_Status__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CGameID.h>
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/CSteamID__Array.h>
#include <Modloader/app/structs/ControllerActionSetHandle_t.h>
#include <Modloader/app/structs/ControllerActionSetHandle_t__Array.h>
#include <Modloader/app/structs/ControllerAnalogActionData_t.h>
#include <Modloader/app/structs/ControllerAnalogActionHandle_t.h>
#include <Modloader/app/structs/ControllerDigitalActionData_t.h>
#include <Modloader/app/structs/ControllerDigitalActionHandle_t.h>
#include <Modloader/app/structs/ControllerHandle_t.h>
#include <Modloader/app/structs/ControllerHandle_t__Array.h>
#include <Modloader/app/structs/ControllerMotionData_t.h>
#include <Modloader/app/structs/DepotId_t.h>
#include <Modloader/app/structs/DepotId_t__Array.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/EAccountType__Enum.h>
#include <Modloader/app/structs/EActivateGameOverlayToWebPageMode__Enum.h>
#include <Modloader/app/structs/EBeginAuthSessionResult__Enum.h>
#include <Modloader/app/structs/EChatEntryType__Enum.h>
#include <Modloader/app/structs/EControllerActionOrigin__Enum.h>
#include <Modloader/app/structs/EControllerActionOrigin__Enum__Array.h>
#include <Modloader/app/structs/EFriendFlags__Enum.h>
#include <Modloader/app/structs/EFriendRelationship__Enum.h>
#include <Modloader/app/structs/EGameSearchErrorCode_t__Enum.h>
#include <Modloader/app/structs/EGamepadTextInputLineMode__Enum.h>
#include <Modloader/app/structs/EGamepadTextInputMode__Enum.h>
#include <Modloader/app/structs/EHTMLKeyModifiers__Enum.h>
#include <Modloader/app/structs/EHTMLMouseButton__Enum.h>
#include <Modloader/app/structs/EHTTPMethod__Enum.h>
#include <Modloader/app/structs/EInputActionOrigin__Enum.h>
#include <Modloader/app/structs/EInputActionOrigin__Enum__Array.h>
#include <Modloader/app/structs/EItemPreviewType__Enum.h>
#include <Modloader/app/structs/EItemStatistic__Enum.h>
#include <Modloader/app/structs/EItemUpdateStatus__Enum.h>
#include <Modloader/app/structs/ELeaderboardDataRequest__Enum.h>
#include <Modloader/app/structs/ELeaderboardDisplayType__Enum.h>
#include <Modloader/app/structs/ELeaderboardSortMethod__Enum.h>
#include <Modloader/app/structs/ELeaderboardUploadScoreMethod__Enum.h>
#include <Modloader/app/structs/ELobbyComparison__Enum.h>
#include <Modloader/app/structs/ELobbyDistanceFilter__Enum.h>
#include <Modloader/app/structs/ELobbyType__Enum.h>
#include <Modloader/app/structs/ENotificationPosition__Enum.h>
#include <Modloader/app/structs/EOverlayToStoreFlag__Enum.h>
#include <Modloader/app/structs/EP2PSend__Enum.h>
#include <Modloader/app/structs/EParentalFeature__Enum.h>
#include <Modloader/app/structs/EPersonaState__Enum.h>
#include <Modloader/app/structs/EPlayerResult_t__Enum.h>
#include <Modloader/app/structs/ERemoteStoragePlatform__Enum.h>
#include <Modloader/app/structs/ERemoteStoragePublishedFileVisibility__Enum.h>
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/ESNetSocketConnectionType__Enum.h>
#include <Modloader/app/structs/EServerMode__Enum.h>
#include <Modloader/app/structs/ESteamAPICallFailure__Enum.h>
#include <Modloader/app/structs/ESteamControllerPad__Enum.h>
#include <Modloader/app/structs/ESteamDeviceFormFactor__Enum.h>
#include <Modloader/app/structs/ESteamInputType__Enum.h>
#include <Modloader/app/structs/ESteamPartyBeaconLocationData__Enum.h>
#include <Modloader/app/structs/EUGCMatchingUGCType__Enum.h>
#include <Modloader/app/structs/EUGCQuery__Enum.h>
#include <Modloader/app/structs/EUGCReadAction__Enum.h>
#include <Modloader/app/structs/EUniverse__Enum.h>
#include <Modloader/app/structs/EUserHasLicenseForAppResult__Enum.h>
#include <Modloader/app/structs/EUserUGCListSortOrder__Enum.h>
#include <Modloader/app/structs/EUserUGCList__Enum.h>
#include <Modloader/app/structs/EVRScreenshotType__Enum_1.h>
#include <Modloader/app/structs/EVoiceResult__Enum.h>
#include <Modloader/app/structs/EWorkshopEnumerationType__Enum.h>
#include <Modloader/app/structs/EWorkshopFileAction__Enum.h>
#include <Modloader/app/structs/EWorkshopFileType__Enum.h>
#include <Modloader/app/structs/EWorkshopVideoProvider__Enum.h>
#include <Modloader/app/structs/EXboxOrigin__Enum.h>
#include <Modloader/app/structs/FriendGameInfo_t.h>
#include <Modloader/app/structs/FriendsGroupID_t.h>
#include <Modloader/app/structs/HAuthTicket.h>
#include <Modloader/app/structs/HHTMLBrowser.h>
#include <Modloader/app/structs/HServerListRequest.h>
#include <Modloader/app/structs/HServerQuery.h>
#include <Modloader/app/structs/HSteamPipe.h>
#include <Modloader/app/structs/HSteamUser.h>
#include <Modloader/app/structs/HTTPCookieContainerHandle.h>
#include <Modloader/app/structs/HTTPRequestHandle.h>
#include <Modloader/app/structs/InputActionSetHandle_t.h>
#include <Modloader/app/structs/InputActionSetHandle_t__Array.h>
#include <Modloader/app/structs/InputAnalogActionData_t.h>
#include <Modloader/app/structs/InputAnalogActionHandle_t.h>
#include <Modloader/app/structs/InputDigitalActionData_t.h>
#include <Modloader/app/structs/InputDigitalActionHandle_t.h>
#include <Modloader/app/structs/InputHandle_t.h>
#include <Modloader/app/structs/InputHandle_t__Array.h>
#include <Modloader/app/structs/InputMotionData_t.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/InteropHelp_UTF8StringHandle.h>
#include <Modloader/app/structs/LeaderboardEntry_t.h>
#include <Modloader/app/structs/P2PSessionState_t.h>
#include <Modloader/app/structs/PartyBeaconID_t.h>
#include <Modloader/app/structs/PublishedFileId_t.h>
#include <Modloader/app/structs/PublishedFileId_t__Array.h>
#include <Modloader/app/structs/PublishedFileUpdateHandle_t.h>
#include <Modloader/app/structs/SNetListenSocket_t.h>
#include <Modloader/app/structs/SNetSocket_t.h>
#include <Modloader/app/structs/ScreenshotHandle.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t.h>
#include <Modloader/app/structs/SteamInventoryResult_t.h>
#include <Modloader/app/structs/SteamInventoryUpdateHandle_t.h>
#include <Modloader/app/structs/SteamItemDef_t.h>
#include <Modloader/app/structs/SteamItemDef_t__Array.h>
#include <Modloader/app/structs/SteamItemDetails_t__Array.h>
#include <Modloader/app/structs/SteamItemInstanceID_t.h>
#include <Modloader/app/structs/SteamItemInstanceID_t__Array.h>
#include <Modloader/app/structs/SteamLeaderboardEntries_t.h>
#include <Modloader/app/structs/SteamLeaderboard_t.h>
#include <Modloader/app/structs/SteamPartyBeaconLocation_t.h>
#include <Modloader/app/structs/SteamPartyBeaconLocation_t__Array.h>
#include <Modloader/app/structs/SteamUGCDetails_t.h>
#include <Modloader/app/structs/UGCFileWriteStreamHandle_t.h>
#include <Modloader/app/structs/UGCHandle_t.h>
#include <Modloader/app/structs/UGCQueryHandle_t.h>
#include <Modloader/app/structs/UGCUpdateHandle_t.h>
#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::Steamworks::NativeMethods {
    IL2CPP_REGISTER_METHOD(0x01600DD0, bool, SteamAPI_Init, )
    IL2CPP_REGISTER_METHOD(0x01600E60, void, SteamAPI_Shutdown, )
    IL2CPP_REGISTER_METHOD(0x01600EF0, bool, SteamAPI_RestartAppIfNecessary, app::AppId_t un_own_app_i_d)
    IL2CPP_REGISTER_METHOD(0x01600F90, void, SteamAPI_ReleaseCurrentThreadMemory, )
    IL2CPP_REGISTER_METHOD(0x01601020, void, SteamAPI_WriteMiniDump, uint32_t u_structured_exception_code, void* pv_exception_info, uint32_t u_build_i_d)
    IL2CPP_REGISTER_METHOD(0x016010D0, void, SteamAPI_SetMiniDumpComment, app::InteropHelp_UTF8StringHandle* pch_msg)
    IL2CPP_REGISTER_METHOD(0x016011C0, void, SteamAPI_RunCallbacks, )
    IL2CPP_REGISTER_METHOD(0x01601250, void, SteamAPI_RegisterCallback, void* p_callback, int32_t i_callback)
    IL2CPP_REGISTER_METHOD(0x01601300, void, SteamAPI_UnregisterCallback, void* p_callback)
    IL2CPP_REGISTER_METHOD(0x016013A0, void, SteamAPI_RegisterCallResult, void* p_callback, uint64_t h_a_p_i_call)
    IL2CPP_REGISTER_METHOD(0x01601450, void, SteamAPI_UnregisterCallResult, void* p_callback, uint64_t h_a_p_i_call)
    IL2CPP_REGISTER_METHOD(0x01601500, bool, SteamAPI_IsSteamRunning, )
    IL2CPP_REGISTER_METHOD(0x01601590, void, Steam_RunCallbacks, app::HSteamPipe h_steam_pipe, bool b_game_server_callbacks)
    IL2CPP_REGISTER_METHOD(0x01601640, void, Steam_RegisterInterfaceFuncs, void* h_module)
    IL2CPP_REGISTER_METHOD(0x016016E0, int32_t, Steam_GetHSteamUserCurrent, )
    IL2CPP_REGISTER_METHOD(0x01601770, int32_t, SteamAPI_GetSteamInstallPath, )
    IL2CPP_REGISTER_METHOD(0x01601800, int32_t, SteamAPI_GetHSteamPipe, )
    IL2CPP_REGISTER_METHOD(0x01601890, void, SteamAPI_SetTryCatchCallbacks, bool b_try_catch_callbacks)
    IL2CPP_REGISTER_METHOD(0x01601930, int32_t, SteamAPI_GetHSteamUser, )
    IL2CPP_REGISTER_METHOD(0x016019C0, void*, SteamInternal_ContextInit, void* p_context_init_data)
    IL2CPP_REGISTER_METHOD(0x01601A60, void*, SteamInternal_CreateInterface, app::InteropHelp_UTF8StringHandle* ver)
    IL2CPP_REGISTER_METHOD(
        0x01601B50,
        void,
        SteamAPI_UseBreakpadCrashHandler,
        app::InteropHelp_UTF8StringHandle* pch_version,
        app::InteropHelp_UTF8StringHandle* pch_date,
        app::InteropHelp_UTF8StringHandle* pch_time,
        bool b_full_memory_dumps,
        void* pv_context,
        void* m_pfn_pre_minidump_callback
    )
    IL2CPP_REGISTER_METHOD(0x01601D40, void, SteamAPI_SetBreakpadAppID, uint32_t un_app_i_d)
    IL2CPP_REGISTER_METHOD(
        0x01601DE0,
        bool,
        SteamGameServer_Init,
        uint32_t un_i_p,
        uint16_t us_steam_port,
        uint16_t us_game_port,
        uint16_t us_query_port,
        app::EServerMode__Enum e_server_mode,
        app::InteropHelp_UTF8StringHandle* pch_version_string
    )
    IL2CPP_REGISTER_METHOD(0x01601F30, void, SteamGameServer_Shutdown, )
    IL2CPP_REGISTER_METHOD(0x015FB390, void, SteamGameServer_RunCallbacks, )
    IL2CPP_REGISTER_METHOD(0x015FB420, void, SteamGameServer_ReleaseCurrentThreadMemory, )
    IL2CPP_REGISTER_METHOD(0x015FB4B0, bool, SteamGameServer_BSecure, )
    IL2CPP_REGISTER_METHOD(0x01601FC0, uint64_t, SteamGameServer_GetSteamID, )
    IL2CPP_REGISTER_METHOD(0x015FB650, int32_t, SteamGameServer_GetHSteamPipe, )
    IL2CPP_REGISTER_METHOD(0x015FB6E0, int32_t, SteamGameServer_GetHSteamUser, )
    IL2CPP_REGISTER_METHOD(
        0x01602050,
        bool,
        SteamInternal_GameServer_Init,
        uint32_t un_i_p,
        uint16_t us_port,
        uint16_t us_game_port,
        uint16_t us_query_port,
        app::EServerMode__Enum e_server_mode,
        app::InteropHelp_UTF8StringHandle* pch_version_string
    )
    IL2CPP_REGISTER_METHOD(0x016021A0, void*, SteamClient, )
    IL2CPP_REGISTER_METHOD(0x01602230, void*, SteamGameServerClient, )
    IL2CPP_REGISTER_METHOD(
        0x016022C0,
        bool,
        SteamEncryptedAppTicket_BDecryptTicket,
        app::Byte__Array* rgub_ticket_encrypted,
        uint32_t cub_ticket_encrypted,
        app::Byte__Array* rgub_ticket_decrypted,
        uint32_t* pcub_ticket_decrypted,
        app::Byte__Array* rgub_key,
        int32_t cub_key
    )
    IL2CPP_REGISTER_METHOD(
        0x016023C0,
        bool,
        SteamEncryptedAppTicket_BIsTicketForApp,
        app::Byte__Array* rgub_ticket_decrypted,
        uint32_t cub_ticket_decrypted,
        app::AppId_t n_app_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x01602480,
        uint32_t,
        SteamEncryptedAppTicket_GetTicketIssueTime,
        app::Byte__Array* rgub_ticket_decrypted,
        uint32_t cub_ticket_decrypted
    )
    IL2CPP_REGISTER_METHOD(
        0x01602530,
        void,
        SteamEncryptedAppTicket_GetTicketSteamID,
        app::Byte__Array* rgub_ticket_decrypted,
        uint32_t cub_ticket_decrypted,
        app::CSteamID* psteam_i_d
    )
    IL2CPP_REGISTER_METHOD(0x016025F0, uint32_t, SteamEncryptedAppTicket_GetTicketAppID, app::Byte__Array* rgub_ticket_decrypted, uint32_t cub_ticket_decrypted)
    IL2CPP_REGISTER_METHOD(
        0x016026A0,
        bool,
        SteamEncryptedAppTicket_BUserOwnsAppInTicket,
        app::Byte__Array* rgub_ticket_decrypted,
        uint32_t cub_ticket_decrypted,
        app::AppId_t n_app_i_d
    )
    IL2CPP_REGISTER_METHOD(0x01602760, bool, SteamEncryptedAppTicket_BUserIsVacBanned, app::Byte__Array* rgub_ticket_decrypted, uint32_t cub_ticket_decrypted)
    IL2CPP_REGISTER_METHOD(
        0x01602820,
        void*,
        SteamEncryptedAppTicket_GetUserVariableData,
        app::Byte__Array* rgub_ticket_decrypted,
        uint32_t cub_ticket_decrypted,
        uint32_t* pcub_user_data
    )
    IL2CPP_REGISTER_METHOD(
        0x016028E0,
        bool,
        SteamEncryptedAppTicket_BIsTicketSigned,
        app::Byte__Array* rgub_ticket_decrypted,
        uint32_t cub_ticket_decrypted,
        app::Byte__Array* pub_r_s_a_key,
        uint32_t cub_r_s_a_key
    )
    IL2CPP_REGISTER_METHOD(0x016029C0, uint32_t, ISteamAppList_GetNumInstalledApps, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01602A60,
        uint32_t,
        ISteamAppList_GetInstalledApps,
        void* instance_ptr,
        app::AppId_t__Array* pvec_app_i_d,
        uint32_t un_max_app_i_ds
    )
    IL2CPP_REGISTER_METHOD(0x01602B20, int32_t, ISteamAppList_GetAppName, void* instance_ptr, app::AppId_t n_app_i_d, void* pch_name, int32_t cch_name_max)
    IL2CPP_REGISTER_METHOD(
        0x01602BE0,
        int32_t,
        ISteamAppList_GetAppInstallDir,
        void* instance_ptr,
        app::AppId_t n_app_i_d,
        void* pch_directory,
        int32_t cch_name_max
    )
    IL2CPP_REGISTER_METHOD(0x01602CA0, int32_t, ISteamAppList_GetAppBuildId, void* instance_ptr, app::AppId_t n_app_i_d)
    IL2CPP_REGISTER_METHOD(0x01602D50, bool, ISteamApps_BIsSubscribed, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01602DF0, bool, ISteamApps_BIsLowViolence, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01602E90, bool, ISteamApps_BIsCybercafe, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01602F30, bool, ISteamApps_BIsVACBanned, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01602FD0, void*, ISteamApps_GetCurrentGameLanguage, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01603070, void*, ISteamApps_GetAvailableGameLanguages, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01603110, bool, ISteamApps_BIsSubscribedApp, void* instance_ptr, app::AppId_t app_i_d)
    IL2CPP_REGISTER_METHOD(0x016031C0, bool, ISteamApps_BIsDlcInstalled, void* instance_ptr, app::AppId_t app_i_d)
    IL2CPP_REGISTER_METHOD(0x01603270, uint32_t, ISteamApps_GetEarliestPurchaseUnixTime, void* instance_ptr, app::AppId_t n_app_i_d)
    IL2CPP_REGISTER_METHOD(0x01603320, bool, ISteamApps_BIsSubscribedFromFreeWeekend, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016033C0, int32_t, ISteamApps_GetDLCCount, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01603460,
        bool,
        ISteamApps_BGetDLCDataByIndex,
        void* instance_ptr,
        int32_t i_d_l_c,
        app::AppId_t* p_app_i_d,
        bool* pb_available,
        void* pch_name,
        int32_t cch_name_buffer_size
    )
    IL2CPP_REGISTER_METHOD(0x01603560, void, ISteamApps_InstallDLC, void* instance_ptr, app::AppId_t n_app_i_d)
    IL2CPP_REGISTER_METHOD(0x01603610, void, ISteamApps_UninstallDLC, void* instance_ptr, app::AppId_t n_app_i_d)
    IL2CPP_REGISTER_METHOD(0x016036C0, void, ISteamApps_RequestAppProofOfPurchaseKey, void* instance_ptr, app::AppId_t n_app_i_d)
    IL2CPP_REGISTER_METHOD(0x01603770, bool, ISteamApps_GetCurrentBetaName, void* instance_ptr, void* pch_name, int32_t cch_name_buffer_size)
    IL2CPP_REGISTER_METHOD(0x01603830, bool, ISteamApps_MarkContentCorrupt, void* instance_ptr, bool b_missing_files_only)
    IL2CPP_REGISTER_METHOD(
        0x016038E0,
        uint32_t,
        ISteamApps_GetInstalledDepots,
        void* instance_ptr,
        app::AppId_t app_i_d,
        app::DepotId_t__Array* pvec_depots,
        uint32_t c_max_depots
    )
    IL2CPP_REGISTER_METHOD(
        0x016039B0,
        uint32_t,
        ISteamApps_GetAppInstallDir,
        void* instance_ptr,
        app::AppId_t app_i_d,
        void* pch_folder,
        uint32_t cch_folder_buffer_size
    )
    IL2CPP_REGISTER_METHOD(0x01603A70, bool, ISteamApps_BIsAppInstalled, void* instance_ptr, app::AppId_t app_i_d)
    IL2CPP_REGISTER_METHOD(0x01603B20, uint64_t, ISteamApps_GetAppOwner, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01603BC0, void*, ISteamApps_GetLaunchQueryParam, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_key)
    IL2CPP_REGISTER_METHOD(
        0x01603CC0,
        bool,
        ISteamApps_GetDlcDownloadProgress,
        void* instance_ptr,
        app::AppId_t n_app_i_d,
        uint64_t* pun_bytes_downloaded,
        uint64_t* pun_bytes_total
    )
    IL2CPP_REGISTER_METHOD(0x01603D90, int32_t, ISteamApps_GetAppBuildId, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01603E30, void, ISteamApps_RequestAllProofOfPurchaseKeys, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01603ED0, uint64_t, ISteamApps_GetFileDetails, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_file_name)
    IL2CPP_REGISTER_METHOD(0x01603FD0, int32_t, ISteamApps_GetLaunchCommandLine, void* instance_ptr, void* psz_command_line, int32_t cub_command_line)
    IL2CPP_REGISTER_METHOD(0x01604080, bool, ISteamApps_BIsSubscribedFromFamilySharing, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01604120, int32_t, ISteamClient_CreateSteamPipe, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016041C0, bool, ISteamClient_BReleaseSteamPipe, void* instance_ptr, app::HSteamPipe h_steam_pipe)
    IL2CPP_REGISTER_METHOD(0x01604270, int32_t, ISteamClient_ConnectToGlobalUser, void* instance_ptr, app::HSteamPipe h_steam_pipe)
    IL2CPP_REGISTER_METHOD(
        0x01604320,
        int32_t,
        ISteamClient_CreateLocalUser,
        void* instance_ptr,
        app::HSteamPipe* ph_steam_pipe,
        app::EAccountType__Enum e_account_type
    )
    IL2CPP_REGISTER_METHOD(0x016043D0, void, ISteamClient_ReleaseUser, void* instance_ptr, app::HSteamPipe h_steam_pipe, app::HSteamUser h_user)
    IL2CPP_REGISTER_METHOD(
        0x01604480,
        void*,
        ISteamClient_GetISteamUser,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01604590,
        void*,
        ISteamClient_GetISteamGameServer,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(0x016046A0, void, ISteamClient_SetLocalIPBinding, void* instance_ptr, uint32_t un_i_p, uint16_t us_port)
    IL2CPP_REGISTER_METHOD(
        0x01604750,
        void*,
        ISteamClient_GetISteamFriends,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01604860,
        void*,
        ISteamClient_GetISteamUtils,
        void* instance_ptr,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01604960,
        void*,
        ISteamClient_GetISteamMatchmaking,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01604A70,
        void*,
        ISteamClient_GetISteamMatchmakingServers,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01604B80,
        void*,
        ISteamClient_GetISteamGenericInterface,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01604C90,
        void*,
        ISteamClient_GetISteamUserStats,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01604DA0,
        void*,
        ISteamClient_GetISteamGameServerStats,
        void* instance_ptr,
        app::HSteamUser h_steamuser,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01604EB0,
        void*,
        ISteamClient_GetISteamApps,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01604FC0,
        void*,
        ISteamClient_GetISteamNetworking,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x016050D0,
        void*,
        ISteamClient_GetISteamRemoteStorage,
        void* instance_ptr,
        app::HSteamUser h_steamuser,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x016051E0,
        void*,
        ISteamClient_GetISteamScreenshots,
        void* instance_ptr,
        app::HSteamUser h_steamuser,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x016052F0,
        void*,
        ISteamClient_GetISteamGameSearch,
        void* instance_ptr,
        app::HSteamUser h_steamuser,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(0x01605400, uint32_t, ISteamClient_GetIPCCallCount, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016054A0, void, ISteamClient_SetWarningMessageHook, void* instance_ptr, app::SteamAPIWarningMessageHook_t* p_function)
    IL2CPP_REGISTER_METHOD(0x01605550, bool, ISteamClient_BShutdownIfAllPipesClosed, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x016055F0,
        void*,
        ISteamClient_GetISteamHTTP,
        void* instance_ptr,
        app::HSteamUser h_steamuser,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01605700,
        void*,
        ISteamClient_GetISteamController,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01605810,
        void*,
        ISteamClient_GetISteamUGC,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01605920,
        void*,
        ISteamClient_GetISteamAppList,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01605A30,
        void*,
        ISteamClient_GetISteamMusic,
        void* instance_ptr,
        app::HSteamUser h_steamuser,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01605B40,
        void*,
        ISteamClient_GetISteamMusicRemote,
        void* instance_ptr,
        app::HSteamUser h_steamuser,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01605C50,
        void*,
        ISteamClient_GetISteamHTMLSurface,
        void* instance_ptr,
        app::HSteamUser h_steamuser,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01605D60,
        void*,
        ISteamClient_GetISteamInventory,
        void* instance_ptr,
        app::HSteamUser h_steamuser,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01605E70,
        void*,
        ISteamClient_GetISteamVideo,
        void* instance_ptr,
        app::HSteamUser h_steamuser,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01605F80,
        void*,
        ISteamClient_GetISteamParentalSettings,
        void* instance_ptr,
        app::HSteamUser h_steamuser,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x01606090,
        void*,
        ISteamClient_GetISteamInput,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x016061A0,
        void*,
        ISteamClient_GetISteamParties,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(
        0x016062B0,
        void*,
        ISteamClient_GetISteamRemotePlay,
        void* instance_ptr,
        app::HSteamUser h_steam_user,
        app::HSteamPipe h_steam_pipe,
        app::InteropHelp_UTF8StringHandle* pch_version
    )
    IL2CPP_REGISTER_METHOD(0x016063C0, bool, ISteamController_Init, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01606460, bool, ISteamController_Shutdown, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01606500, void, ISteamController_RunFrame, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016065A0, int32_t, ISteamController_GetConnectedControllers, void* instance_ptr, app::ControllerHandle_t__Array* handles_out)
    IL2CPP_REGISTER_METHOD(
        0x01606650,
        uint64_t,
        ISteamController_GetActionSetHandle,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* psz_action_set_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01606750,
        void,
        ISteamController_ActivateActionSet,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::ControllerActionSetHandle_t action_set_handle
    )
    IL2CPP_REGISTER_METHOD(0x01606800, uint64_t, ISteamController_GetCurrentActionSet, void* instance_ptr, app::ControllerHandle_t controller_handle)
    IL2CPP_REGISTER_METHOD(
        0x016068B0,
        void,
        ISteamController_ActivateActionSetLayer,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::ControllerActionSetHandle_t action_set_layer_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x01606960,
        void,
        ISteamController_DeactivateActionSetLayer,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::ControllerActionSetHandle_t action_set_layer_handle
    )
    IL2CPP_REGISTER_METHOD(0x01606A10, void, ISteamController_DeactivateAllActionSetLayers, void* instance_ptr, app::ControllerHandle_t controller_handle)
    IL2CPP_REGISTER_METHOD(
        0x01606AC0,
        int32_t,
        ISteamController_GetActiveActionSetLayers,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::ControllerActionSetHandle_t__Array* handles_out
    )
    IL2CPP_REGISTER_METHOD(
        0x01606B80,
        uint64_t,
        ISteamController_GetDigitalActionHandle,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* psz_action_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01606C80,
        app::ControllerDigitalActionData_t,
        ISteamController_GetDigitalActionData,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::ControllerDigitalActionHandle_t digital_action_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x01606D30,
        int32_t,
        ISteamController_GetDigitalActionOrigins,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::ControllerActionSetHandle_t action_set_handle,
        app::ControllerDigitalActionHandle_t digital_action_handle,
        app::EControllerActionOrigin__Enum__Array* origins_out
    )
    IL2CPP_REGISTER_METHOD(0x01606E20, uint64_t, ISteamController_GetAnalogActionHandle, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_action_name)
    IL2CPP_REGISTER_METHOD(
        0x01606F20,
        app::ControllerAnalogActionData_t,
        ISteamController_GetAnalogActionData,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::ControllerAnalogActionHandle_t analog_action_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x01607000,
        int32_t,
        ISteamController_GetAnalogActionOrigins,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::ControllerActionSetHandle_t action_set_handle,
        app::ControllerAnalogActionHandle_t analog_action_handle,
        app::EControllerActionOrigin__Enum__Array* origins_out
    )
    IL2CPP_REGISTER_METHOD(0x016070F0, void*, ISteamController_GetGlyphForActionOrigin, void* instance_ptr, app::EControllerActionOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(0x016071A0, void*, ISteamController_GetStringForActionOrigin, void* instance_ptr, app::EControllerActionOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(
        0x01607250,
        void,
        ISteamController_StopAnalogActionMomentum,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::ControllerAnalogActionHandle_t e_action
    )
    IL2CPP_REGISTER_METHOD(
        0x01607300,
        app::ControllerMotionData_t,
        ISteamController_GetMotionData,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x016073D0,
        void,
        ISteamController_TriggerHapticPulse,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::ESteamControllerPad__Enum e_target_pad,
        uint16_t us_duration_micro_sec
    )
    IL2CPP_REGISTER_METHOD(
        0x016074A0,
        void,
        ISteamController_TriggerRepeatedHapticPulse,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::ESteamControllerPad__Enum e_target_pad,
        uint16_t us_duration_micro_sec,
        uint16_t us_off_micro_sec,
        uint16_t un_repeat,
        uint32_t n_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x01607590,
        void,
        ISteamController_TriggerVibration,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        uint16_t us_left_speed,
        uint16_t us_right_speed
    )
    IL2CPP_REGISTER_METHOD(
        0x01607660,
        void,
        ISteamController_SetLEDColor,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        uint8_t n_color_r,
        uint8_t n_color_g,
        uint8_t n_color_b,
        uint32_t n_flags
    )
    IL2CPP_REGISTER_METHOD(0x01607740, bool, ISteamController_ShowBindingPanel, void* instance_ptr, app::ControllerHandle_t controller_handle)
    IL2CPP_REGISTER_METHOD(
        0x016077F0,
        app::ESteamInputType__Enum,
        ISteamController_GetInputTypeForHandle,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle
    )
    IL2CPP_REGISTER_METHOD(0x016078A0, uint64_t, ISteamController_GetControllerForGamepadIndex, void* instance_ptr, int32_t n_index)
    IL2CPP_REGISTER_METHOD(0x01607950, int32_t, ISteamController_GetGamepadIndexForController, void* instance_ptr, app::ControllerHandle_t ul_controller_handle)
    IL2CPP_REGISTER_METHOD(0x01607A00, void*, ISteamController_GetStringForXboxOrigin, void* instance_ptr, app::EXboxOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(0x01607AB0, void*, ISteamController_GetGlyphForXboxOrigin, void* instance_ptr, app::EXboxOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(
        0x01607B60,
        app::EControllerActionOrigin__Enum,
        ISteamController_GetActionOriginFromXboxOrigin,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        app::EXboxOrigin__Enum e_origin
    )
    IL2CPP_REGISTER_METHOD(
        0x01607C10,
        app::EControllerActionOrigin__Enum,
        ISteamController_TranslateActionOrigin,
        void* instance_ptr,
        app::ESteamInputType__Enum e_destination_input_type,
        app::EControllerActionOrigin__Enum e_source_origin
    )
    IL2CPP_REGISTER_METHOD(
        0x01607CC0,
        bool,
        ISteamController_GetControllerBindingRevision,
        void* instance_ptr,
        app::ControllerHandle_t controller_handle,
        int32_t* p_major,
        int32_t* p_minor
    )
    IL2CPP_REGISTER_METHOD(0x01607D90, void*, ISteamFriends_GetPersonaName, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01607E30, uint64_t, ISteamFriends_SetPersonaName, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_persona_name)
    IL2CPP_REGISTER_METHOD(0x01607F30, app::EPersonaState__Enum, ISteamFriends_GetPersonaState, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01607FD0, int32_t, ISteamFriends_GetFriendCount, void* instance_ptr, app::EFriendFlags__Enum i_friend_flags)
    IL2CPP_REGISTER_METHOD(0x01608080, uint64_t, ISteamFriends_GetFriendByIndex, void* instance_ptr, int32_t i_friend, app::EFriendFlags__Enum i_friend_flags)
    IL2CPP_REGISTER_METHOD(0x01608130, app::EFriendRelationship__Enum, ISteamFriends_GetFriendRelationship, void* instance_ptr, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x016081E0, app::EPersonaState__Enum, ISteamFriends_GetFriendPersonaState, void* instance_ptr, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x01608290, void*, ISteamFriends_GetFriendPersonaName, void* instance_ptr, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(
        0x01608340,
        bool,
        ISteamFriends_GetFriendGamePlayed,
        void* instance_ptr,
        app::CSteamID steam_i_d_friend,
        app::FriendGameInfo_t* p_friend_game_info
    )
    IL2CPP_REGISTER_METHOD(
        0x01608400,
        void*,
        ISteamFriends_GetFriendPersonaNameHistory,
        void* instance_ptr,
        app::CSteamID steam_i_d_friend,
        int32_t i_persona_name
    )
    IL2CPP_REGISTER_METHOD(0x016084B0, int32_t, ISteamFriends_GetFriendSteamLevel, void* instance_ptr, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x01608560, void*, ISteamFriends_GetPlayerNickname, void* instance_ptr, app::CSteamID steam_i_d_player)
    IL2CPP_REGISTER_METHOD(0x01608610, int32_t, ISteamFriends_GetFriendsGroupCount, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016086B0, int16_t, ISteamFriends_GetFriendsGroupIDByIndex, void* instance_ptr, int32_t i_f_g)
    IL2CPP_REGISTER_METHOD(0x01608760, void*, ISteamFriends_GetFriendsGroupName, void* instance_ptr, app::FriendsGroupID_t friends_group_i_d)
    IL2CPP_REGISTER_METHOD(0x01608810, int32_t, ISteamFriends_GetFriendsGroupMembersCount, void* instance_ptr, app::FriendsGroupID_t friends_group_i_d)
    IL2CPP_REGISTER_METHOD(
        0x016088C0,
        void,
        ISteamFriends_GetFriendsGroupMembersList,
        void* instance_ptr,
        app::FriendsGroupID_t friends_group_i_d,
        app::CSteamID__Array* p_out_steam_i_d_members,
        int32_t n_members_count
    )
    IL2CPP_REGISTER_METHOD(
        0x01608990,
        bool,
        ISteamFriends_HasFriend,
        void* instance_ptr,
        app::CSteamID steam_i_d_friend,
        app::EFriendFlags__Enum i_friend_flags
    )
    IL2CPP_REGISTER_METHOD(0x01608A50, int32_t, ISteamFriends_GetClanCount, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01608AF0, uint64_t, ISteamFriends_GetClanByIndex, void* instance_ptr, int32_t i_clan)
    IL2CPP_REGISTER_METHOD(0x01608BA0, void*, ISteamFriends_GetClanName, void* instance_ptr, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x01608C50, void*, ISteamFriends_GetClanTag, void* instance_ptr, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(
        0x01608D00,
        bool,
        ISteamFriends_GetClanActivityCounts,
        void* instance_ptr,
        app::CSteamID steam_i_d_clan,
        int32_t* pn_online,
        int32_t* pn_in_game,
        int32_t* pn_chatting
    )
    IL2CPP_REGISTER_METHOD(
        0x01608DE0,
        uint64_t,
        ISteamFriends_DownloadClanActivityCounts,
        void* instance_ptr,
        app::CSteamID__Array* psteam_i_d_clans,
        int32_t c_clans_to_request
    )
    IL2CPP_REGISTER_METHOD(0x01608EA0, int32_t, ISteamFriends_GetFriendCountFromSource, void* instance_ptr, app::CSteamID steam_i_d_source)
    IL2CPP_REGISTER_METHOD(0x01608F50, uint64_t, ISteamFriends_GetFriendFromSourceByIndex, void* instance_ptr, app::CSteamID steam_i_d_source, int32_t i_friend)
    IL2CPP_REGISTER_METHOD(0x01609000, bool, ISteamFriends_IsUserInSource, void* instance_ptr, app::CSteamID steam_i_d_user, app::CSteamID steam_i_d_source)
    IL2CPP_REGISTER_METHOD(0x016090C0, void, ISteamFriends_SetInGameVoiceSpeaking, void* instance_ptr, app::CSteamID steam_i_d_user, bool b_speaking)
    IL2CPP_REGISTER_METHOD(0x01609180, void, ISteamFriends_ActivateGameOverlay, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_dialog)
    IL2CPP_REGISTER_METHOD(
        0x01609270,
        void,
        ISteamFriends_ActivateGameOverlayToUser,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_dialog,
        app::CSteamID steam_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x01609370,
        void,
        ISteamFriends_ActivateGameOverlayToWebPage,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_u_r_l,
        app::EActivateGameOverlayToWebPageMode__Enum e_mode
    )
    IL2CPP_REGISTER_METHOD(
        0x01609470,
        void,
        ISteamFriends_ActivateGameOverlayToStore,
        void* instance_ptr,
        app::AppId_t n_app_i_d,
        app::EOverlayToStoreFlag__Enum e_flag
    )
    IL2CPP_REGISTER_METHOD(0x01609520, void, ISteamFriends_SetPlayedWith, void* instance_ptr, app::CSteamID steam_i_d_user_played_with)
    IL2CPP_REGISTER_METHOD(0x016095D0, void, ISteamFriends_ActivateGameOverlayInviteDialog, void* instance_ptr, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(0x01609680, int32_t, ISteamFriends_GetSmallFriendAvatar, void* instance_ptr, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x01609730, int32_t, ISteamFriends_GetMediumFriendAvatar, void* instance_ptr, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x016097E0, int32_t, ISteamFriends_GetLargeFriendAvatar, void* instance_ptr, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x01609890, bool, ISteamFriends_RequestUserInformation, void* instance_ptr, app::CSteamID steam_i_d_user, bool b_require_name_only)
    IL2CPP_REGISTER_METHOD(0x01609950, uint64_t, ISteamFriends_RequestClanOfficerList, void* instance_ptr, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x01609A00, uint64_t, ISteamFriends_GetClanOwner, void* instance_ptr, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x01609AB0, int32_t, ISteamFriends_GetClanOfficerCount, void* instance_ptr, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x01609B60, uint64_t, ISteamFriends_GetClanOfficerByIndex, void* instance_ptr, app::CSteamID steam_i_d_clan, int32_t i_officer)
    IL2CPP_REGISTER_METHOD(0x01609C10, uint32_t, ISteamFriends_GetUserRestrictions, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01609CB0,
        bool,
        ISteamFriends_SetRichPresence,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_key,
        app::InteropHelp_UTF8StringHandle* pch_value
    )
    IL2CPP_REGISTER_METHOD(0x01609E20, void, ISteamFriends_ClearRichPresence, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01609EC0,
        void*,
        ISteamFriends_GetFriendRichPresence,
        void* instance_ptr,
        app::CSteamID steam_i_d_friend,
        app::InteropHelp_UTF8StringHandle* pch_key
    )
    IL2CPP_REGISTER_METHOD(0x01609FC0, int32_t, ISteamFriends_GetFriendRichPresenceKeyCount, void* instance_ptr, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x0160A070, void*, ISteamFriends_GetFriendRichPresenceKeyByIndex, void* instance_ptr, app::CSteamID steam_i_d_friend, int32_t i_key)
    IL2CPP_REGISTER_METHOD(0x0160A120, void, ISteamFriends_RequestFriendRichPresence, void* instance_ptr, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(
        0x0160A1D0,
        bool,
        ISteamFriends_InviteUserToGame,
        void* instance_ptr,
        app::CSteamID steam_i_d_friend,
        app::InteropHelp_UTF8StringHandle* pch_connect_string
    )
    IL2CPP_REGISTER_METHOD(0x0160A2E0, int32_t, ISteamFriends_GetCoplayFriendCount, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160A380, uint64_t, ISteamFriends_GetCoplayFriend, void* instance_ptr, int32_t i_coplay_friend)
    IL2CPP_REGISTER_METHOD(0x0160A430, int32_t, ISteamFriends_GetFriendCoplayTime, void* instance_ptr, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x0160A4E0, uint32_t, ISteamFriends_GetFriendCoplayGame, void* instance_ptr, app::CSteamID steam_i_d_friend)
    IL2CPP_REGISTER_METHOD(0x0160A590, uint64_t, ISteamFriends_JoinClanChatRoom, void* instance_ptr, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x0160A640, bool, ISteamFriends_LeaveClanChatRoom, void* instance_ptr, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x0160A6F0, int32_t, ISteamFriends_GetClanChatMemberCount, void* instance_ptr, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x0160A7A0, uint64_t, ISteamFriends_GetChatMemberByIndex, void* instance_ptr, app::CSteamID steam_i_d_clan, int32_t i_user)
    IL2CPP_REGISTER_METHOD(
        0x0160A850,
        bool,
        ISteamFriends_SendClanChatMessage,
        void* instance_ptr,
        app::CSteamID steam_i_d_clan_chat,
        app::InteropHelp_UTF8StringHandle* pch_text
    )
    IL2CPP_REGISTER_METHOD(
        0x0160A960,
        int32_t,
        ISteamFriends_GetClanChatMessage,
        void* instance_ptr,
        app::CSteamID steam_i_d_clan_chat,
        int32_t i_message,
        void* prgch_text,
        int32_t cch_text_max,
        app::EChatEntryType__Enum* pe_chat_entry_type,
        app::CSteamID* psteamid_chatter
    )
    IL2CPP_REGISTER_METHOD(0x0160AA30, bool, ISteamFriends_IsClanChatAdmin, void* instance_ptr, app::CSteamID steam_i_d_clan_chat, app::CSteamID steam_i_d_user)
    IL2CPP_REGISTER_METHOD(0x0160AAF0, bool, ISteamFriends_IsClanChatWindowOpenInSteam, void* instance_ptr, app::CSteamID steam_i_d_clan_chat)
    IL2CPP_REGISTER_METHOD(0x0160ABA0, bool, ISteamFriends_OpenClanChatWindowInSteam, void* instance_ptr, app::CSteamID steam_i_d_clan_chat)
    IL2CPP_REGISTER_METHOD(0x0160AC50, bool, ISteamFriends_CloseClanChatWindowInSteam, void* instance_ptr, app::CSteamID steam_i_d_clan_chat)
    IL2CPP_REGISTER_METHOD(0x0160AD00, bool, ISteamFriends_SetListenForFriendsMessages, void* instance_ptr, bool b_intercept_enabled)
    IL2CPP_REGISTER_METHOD(
        0x0160ADB0,
        bool,
        ISteamFriends_ReplyToFriendMessage,
        void* instance_ptr,
        app::CSteamID steam_i_d_friend,
        app::InteropHelp_UTF8StringHandle* pch_msg_to_send
    )
    IL2CPP_REGISTER_METHOD(
        0x0160AEC0,
        int32_t,
        ISteamFriends_GetFriendMessage,
        void* instance_ptr,
        app::CSteamID steam_i_d_friend,
        int32_t i_message_i_d,
        void* pv_data,
        int32_t cub_data,
        app::EChatEntryType__Enum* pe_chat_entry_type
    )
    IL2CPP_REGISTER_METHOD(0x0160AF90, uint64_t, ISteamFriends_GetFollowerCount, void* instance_ptr, app::CSteamID steam_i_d)
    IL2CPP_REGISTER_METHOD(0x0160B040, uint64_t, ISteamFriends_IsFollowing, void* instance_ptr, app::CSteamID steam_i_d)
    IL2CPP_REGISTER_METHOD(0x0160B0F0, uint64_t, ISteamFriends_EnumerateFollowingList, void* instance_ptr, uint32_t un_start_index)
    IL2CPP_REGISTER_METHOD(0x0160B1A0, bool, ISteamFriends_IsClanPublic, void* instance_ptr, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x0160B250, bool, ISteamFriends_IsClanOfficialGameGroup, void* instance_ptr, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x0160B300, int32_t, ISteamFriends_GetNumChatsWithUnreadPriorityMessages, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0160B3A0,
        bool,
        ISteamGameServer_InitGameServer,
        void* instance_ptr,
        uint32_t un_i_p,
        uint16_t us_game_port,
        uint16_t us_query_port,
        uint32_t un_flags,
        app::AppId_t n_game_app_id,
        app::InteropHelp_UTF8StringHandle* pch_version_string
    )
    IL2CPP_REGISTER_METHOD(0x0160B500, void, ISteamGameServer_SetProduct, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_product)
    IL2CPP_REGISTER_METHOD(0x0160B5F0, void, ISteamGameServer_SetGameDescription, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_game_description)
    IL2CPP_REGISTER_METHOD(0x0160B6E0, void, ISteamGameServer_SetModDir, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_mod_dir)
    IL2CPP_REGISTER_METHOD(0x0160B7D0, void, ISteamGameServer_SetDedicatedServer, void* instance_ptr, bool b_dedicated)
    IL2CPP_REGISTER_METHOD(0x0160B880, void, ISteamGameServer_LogOn, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_token)
    IL2CPP_REGISTER_METHOD(0x0160B970, void, ISteamGameServer_LogOnAnonymous, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160BA10, void, ISteamGameServer_LogOff, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160BAB0, bool, ISteamGameServer_BLoggedOn, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160BB50, bool, ISteamGameServer_BSecure, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160BBF0, uint64_t, ISteamGameServer_GetSteamID, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160BC90, bool, ISteamGameServer_WasRestartRequested, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160BD30, void, ISteamGameServer_SetMaxPlayerCount, void* instance_ptr, int32_t c_players_max)
    IL2CPP_REGISTER_METHOD(0x0160BDE0, void, ISteamGameServer_SetBotPlayerCount, void* instance_ptr, int32_t c_botplayers)
    IL2CPP_REGISTER_METHOD(0x0160BE90, void, ISteamGameServer_SetServerName, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_server_name)
    IL2CPP_REGISTER_METHOD(0x0160BF80, void, ISteamGameServer_SetMapName, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_map_name)
    IL2CPP_REGISTER_METHOD(0x0160C070, void, ISteamGameServer_SetPasswordProtected, void* instance_ptr, bool b_password_protected)
    IL2CPP_REGISTER_METHOD(0x0160C120, void, ISteamGameServer_SetSpectatorPort, void* instance_ptr, uint16_t un_spectator_port)
    IL2CPP_REGISTER_METHOD(
        0x0160C1D0,
        void,
        ISteamGameServer_SetSpectatorServerName,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* psz_spectator_server_name
    )
    IL2CPP_REGISTER_METHOD(0x0160C2C0, void, ISteamGameServer_ClearAllKeyValues, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0160C360,
        void,
        ISteamGameServer_SetKeyValue,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* p_key,
        app::InteropHelp_UTF8StringHandle* p_value
    )
    IL2CPP_REGISTER_METHOD(0x0160C4C0, void, ISteamGameServer_SetGameTags, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_game_tags)
    IL2CPP_REGISTER_METHOD(0x0160C5B0, void, ISteamGameServer_SetGameData, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_game_data)
    IL2CPP_REGISTER_METHOD(0x0160C6A0, void, ISteamGameServer_SetRegion, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_region)
    IL2CPP_REGISTER_METHOD(
        0x0160C790,
        bool,
        ISteamGameServer_SendUserConnectAndAuthenticate,
        void* instance_ptr,
        uint32_t un_i_p_client,
        app::Byte__Array* pv_auth_blob,
        uint32_t cub_auth_blob_size,
        app::CSteamID* p_steam_i_d_user
    )
    IL2CPP_REGISTER_METHOD(0x0160C870, uint64_t, ISteamGameServer_CreateUnauthenticatedUserConnection, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160C910, void, ISteamGameServer_SendUserDisconnect, void* instance_ptr, app::CSteamID steam_i_d_user)
    IL2CPP_REGISTER_METHOD(
        0x0160C9C0,
        bool,
        ISteamGameServer_BUpdateUserData,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_player_name,
        uint32_t u_score
    )
    IL2CPP_REGISTER_METHOD(
        0x0160CAE0,
        uint32_t,
        ISteamGameServer_GetAuthSessionTicket,
        void* instance_ptr,
        app::Byte__Array* p_ticket,
        int32_t cb_max_ticket,
        uint32_t* pcb_ticket
    )
    IL2CPP_REGISTER_METHOD(
        0x0160CBB0,
        app::EBeginAuthSessionResult__Enum,
        ISteamGameServer_BeginAuthSession,
        void* instance_ptr,
        app::Byte__Array* p_auth_ticket,
        int32_t cb_auth_ticket,
        app::CSteamID steam_i_d
    )
    IL2CPP_REGISTER_METHOD(0x0160CC80, void, ISteamGameServer_EndAuthSession, void* instance_ptr, app::CSteamID steam_i_d)
    IL2CPP_REGISTER_METHOD(0x0160CD30, void, ISteamGameServer_CancelAuthTicket, void* instance_ptr, app::HAuthTicket h_auth_ticket)
    IL2CPP_REGISTER_METHOD(
        0x0160CDE0,
        app::EUserHasLicenseForAppResult__Enum,
        ISteamGameServer_UserHasLicenseForApp,
        void* instance_ptr,
        app::CSteamID steam_i_d,
        app::AppId_t app_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0160CE90,
        bool,
        ISteamGameServer_RequestUserGroupStatus,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::CSteamID steam_i_d_group
    )
    IL2CPP_REGISTER_METHOD(0x0160CF50, void, ISteamGameServer_GetGameplayStats, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160CFF0, uint64_t, ISteamGameServer_GetServerReputation, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160D090, uint32_t, ISteamGameServer_GetPublicIP, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0160D130,
        bool,
        ISteamGameServer_HandleIncomingPacket,
        void* instance_ptr,
        app::Byte__Array* p_data,
        int32_t cb_data,
        uint32_t src_i_p,
        uint16_t src_port
    )
    IL2CPP_REGISTER_METHOD(
        0x0160D220,
        int32_t,
        ISteamGameServer_GetNextOutgoingPacket,
        void* instance_ptr,
        app::Byte__Array* p_out,
        int32_t cb_max_out,
        uint32_t* p_net_adr,
        uint16_t* p_port
    )
    IL2CPP_REGISTER_METHOD(0x0160D2F0, void, ISteamGameServer_EnableHeartbeats, void* instance_ptr, bool b_active)
    IL2CPP_REGISTER_METHOD(0x0160D3A0, void, ISteamGameServer_SetHeartbeatInterval, void* instance_ptr, int32_t i_heartbeat_interval)
    IL2CPP_REGISTER_METHOD(0x0160D450, void, ISteamGameServer_ForceHeartbeat, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160D4F0, uint64_t, ISteamGameServer_AssociateWithClan, void* instance_ptr, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x0160D5A0, uint64_t, ISteamGameServer_ComputeNewPlayerCompatibility, void* instance_ptr, app::CSteamID steam_i_d_new_player)
    IL2CPP_REGISTER_METHOD(0x0160D650, uint64_t, ISteamGameServerStats_RequestUserStats, void* instance_ptr, app::CSteamID steam_i_d_user)
    IL2CPP_REGISTER_METHOD(
        0x0160D700,
        bool,
        ISteamGameServerStats_GetUserStat,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name,
        int32_t* p_data
    )
    IL2CPP_REGISTER_METHOD(
        0x0160D820,
        bool,
        ISteamGameServerStats_GetUserStat0,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name,
        float* p_data
    )
    IL2CPP_REGISTER_METHOD(
        0x0160D940,
        bool,
        ISteamGameServerStats_GetUserAchievement,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name,
        bool* pb_achieved
    )
    IL2CPP_REGISTER_METHOD(
        0x0160DA70,
        bool,
        ISteamGameServerStats_SetUserStat,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name,
        int32_t n_data
    )
    IL2CPP_REGISTER_METHOD(
        0x0160DB90,
        bool,
        ISteamGameServerStats_SetUserStat0,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name,
        float f_data
    )
    IL2CPP_REGISTER_METHOD(
        0x0160DCB0,
        bool,
        ISteamGameServerStats_UpdateUserAvgRateStat,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name,
        float fl_count_this_session,
        double d_session_length
    )
    IL2CPP_REGISTER_METHOD(
        0x0160DDE0,
        bool,
        ISteamGameServerStats_SetUserAchievement,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name
    )
    IL2CPP_REGISTER_METHOD(
        0x0160DEF0,
        bool,
        ISteamGameServerStats_ClearUserAchievement,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name
    )
    IL2CPP_REGISTER_METHOD(0x0160E000, uint64_t, ISteamGameServerStats_StoreUserStats, void* instance_ptr, app::CSteamID steam_i_d_user)
    IL2CPP_REGISTER_METHOD(0x0160E0B0, bool, ISteamHTMLSurface_Init, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0160E150, bool, ISteamHTMLSurface_Shutdown, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0160E1F0,
        uint64_t,
        ISteamHTMLSurface_CreateBrowser,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_user_agent,
        app::InteropHelp_UTF8StringHandle* pch_user_c_s_s
    )
    IL2CPP_REGISTER_METHOD(0x0160E360, void, ISteamHTMLSurface_RemoveBrowser, void* instance_ptr, app::HHTMLBrowser un_browser_handle)
    IL2CPP_REGISTER_METHOD(
        0x0160E410,
        void,
        ISteamHTMLSurface_LoadURL,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        app::InteropHelp_UTF8StringHandle* pch_u_r_l,
        app::InteropHelp_UTF8StringHandle* pch_post_data
    )
    IL2CPP_REGISTER_METHOD(
        0x0160E580,
        void,
        ISteamHTMLSurface_SetSize,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        uint32_t un_width,
        uint32_t un_height
    )
    IL2CPP_REGISTER_METHOD(0x0160E640, void, ISteamHTMLSurface_StopLoad, void* instance_ptr, app::HHTMLBrowser un_browser_handle)
    IL2CPP_REGISTER_METHOD(0x0160E6F0, void, ISteamHTMLSurface_Reload, void* instance_ptr, app::HHTMLBrowser un_browser_handle)
    IL2CPP_REGISTER_METHOD(0x0160E7A0, void, ISteamHTMLSurface_GoBack, void* instance_ptr, app::HHTMLBrowser un_browser_handle)
    IL2CPP_REGISTER_METHOD(0x0160E850, void, ISteamHTMLSurface_GoForward, void* instance_ptr, app::HHTMLBrowser un_browser_handle)
    IL2CPP_REGISTER_METHOD(
        0x0160E900,
        void,
        ISteamHTMLSurface_AddHeader,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        app::InteropHelp_UTF8StringHandle* pch_key,
        app::InteropHelp_UTF8StringHandle* pch_value
    )
    IL2CPP_REGISTER_METHOD(
        0x0160EA70,
        void,
        ISteamHTMLSurface_ExecuteJavascript,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        app::InteropHelp_UTF8StringHandle* pch_script
    )
    IL2CPP_REGISTER_METHOD(
        0x0160EB70,
        void,
        ISteamHTMLSurface_MouseUp,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        app::EHTMLMouseButton__Enum e_mouse_button
    )
    IL2CPP_REGISTER_METHOD(
        0x0160EC20,
        void,
        ISteamHTMLSurface_MouseDown,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        app::EHTMLMouseButton__Enum e_mouse_button
    )
    IL2CPP_REGISTER_METHOD(
        0x0160ECD0,
        void,
        ISteamHTMLSurface_MouseDoubleClick,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        app::EHTMLMouseButton__Enum e_mouse_button
    )
    IL2CPP_REGISTER_METHOD(0x0160ED80, void, ISteamHTMLSurface_MouseMove, void* instance_ptr, app::HHTMLBrowser un_browser_handle, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x0160EE40, void, ISteamHTMLSurface_MouseWheel, void* instance_ptr, app::HHTMLBrowser un_browser_handle, int32_t n_delta)
    IL2CPP_REGISTER_METHOD(
        0x0160EEF0,
        void,
        ISteamHTMLSurface_KeyDown,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        uint32_t n_native_key_code,
        app::EHTMLKeyModifiers__Enum e_h_t_m_l_key_modifiers,
        bool b_is_system_key
    )
    IL2CPP_REGISTER_METHOD(
        0x0160EFD0,
        void,
        ISteamHTMLSurface_KeyUp,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        uint32_t n_native_key_code,
        app::EHTMLKeyModifiers__Enum e_h_t_m_l_key_modifiers
    )
    IL2CPP_REGISTER_METHOD(
        0x0160F090,
        void,
        ISteamHTMLSurface_KeyChar,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        uint32_t c_unicode_char,
        app::EHTMLKeyModifiers__Enum e_h_t_m_l_key_modifiers
    )
    IL2CPP_REGISTER_METHOD(
        0x0160F150,
        void,
        ISteamHTMLSurface_SetHorizontalScroll,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        uint32_t n_absolute_pixel_scroll
    )
    IL2CPP_REGISTER_METHOD(
        0x0160F200,
        void,
        ISteamHTMLSurface_SetVerticalScroll,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        uint32_t n_absolute_pixel_scroll
    )
    IL2CPP_REGISTER_METHOD(0x0160F2B0, void, ISteamHTMLSurface_SetKeyFocus, void* instance_ptr, app::HHTMLBrowser un_browser_handle, bool b_has_key_focus)
    IL2CPP_REGISTER_METHOD(0x0160F360, void, ISteamHTMLSurface_ViewSource, void* instance_ptr, app::HHTMLBrowser un_browser_handle)
    IL2CPP_REGISTER_METHOD(0x0160F410, void, ISteamHTMLSurface_CopyToClipboard, void* instance_ptr, app::HHTMLBrowser un_browser_handle)
    IL2CPP_REGISTER_METHOD(0x0160F4C0, void, ISteamHTMLSurface_PasteFromClipboard, void* instance_ptr, app::HHTMLBrowser un_browser_handle)
    IL2CPP_REGISTER_METHOD(
        0x0160F570,
        void,
        ISteamHTMLSurface_Find,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        app::InteropHelp_UTF8StringHandle* pch_search_str,
        bool b_currently_in_find,
        bool b_reverse
    )
    IL2CPP_REGISTER_METHOD(0x0160F690, void, ISteamHTMLSurface_StopFind, void* instance_ptr, app::HHTMLBrowser un_browser_handle)
    IL2CPP_REGISTER_METHOD(0x0160F740, void, ISteamHTMLSurface_GetLinkAtPosition, void* instance_ptr, app::HHTMLBrowser un_browser_handle, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(
        0x0160F800,
        void,
        ISteamHTMLSurface_SetCookie,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_hostname,
        app::InteropHelp_UTF8StringHandle* pch_key,
        app::InteropHelp_UTF8StringHandle* pch_value,
        app::InteropHelp_UTF8StringHandle* pch_path,
        uint32_t n_expires,
        bool b_secure,
        bool b_h_t_t_p_only
    )
    IL2CPP_REGISTER_METHOD(
        0x0160FA70,
        void,
        ISteamHTMLSurface_SetPageScaleFactor,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        float fl_zoom,
        int32_t n_point_x,
        int32_t n_point_y
    )
    IL2CPP_REGISTER_METHOD(
        0x0160FB40,
        void,
        ISteamHTMLSurface_SetBackgroundMode,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        bool b_background_mode
    )
    IL2CPP_REGISTER_METHOD(
        0x0160FBF0,
        void,
        ISteamHTMLSurface_SetDPIScalingFactor,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        float fl_d_p_i_scaling
    )
    IL2CPP_REGISTER_METHOD(0x0160FCB0, void, ISteamHTMLSurface_OpenDeveloperTools, void* instance_ptr, app::HHTMLBrowser un_browser_handle)
    IL2CPP_REGISTER_METHOD(0x0160FD60, void, ISteamHTMLSurface_AllowStartRequest, void* instance_ptr, app::HHTMLBrowser un_browser_handle, bool b_allowed)
    IL2CPP_REGISTER_METHOD(0x0160FE10, void, ISteamHTMLSurface_JSDialogResponse, void* instance_ptr, app::HHTMLBrowser un_browser_handle, bool b_result)
    IL2CPP_REGISTER_METHOD(
        0x0160FEC0,
        void,
        ISteamHTMLSurface_FileLoadDialogResponse,
        void* instance_ptr,
        app::HHTMLBrowser un_browser_handle,
        void* pch_selected_files
    )
    IL2CPP_REGISTER_METHOD(
        0x0160FF70,
        uint32_t,
        ISteamHTTP_CreateHTTPRequest,
        void* instance_ptr,
        app::EHTTPMethod__Enum e_h_t_t_p_request_method,
        app::InteropHelp_UTF8StringHandle* pch_absolute_u_r_l
    )
    IL2CPP_REGISTER_METHOD(
        0x01610070,
        bool,
        ISteamHTTP_SetHTTPRequestContextValue,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        uint64_t ul_context_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01610130,
        bool,
        ISteamHTTP_SetHTTPRequestNetworkActivityTimeout,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        uint32_t un_timeout_seconds
    )
    IL2CPP_REGISTER_METHOD(
        0x016101F0,
        bool,
        ISteamHTTP_SetHTTPRequestHeaderValue,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        app::InteropHelp_UTF8StringHandle* pch_header_name,
        app::InteropHelp_UTF8StringHandle* pch_header_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01610370,
        bool,
        ISteamHTTP_SetHTTPRequestGetOrPostParameter,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        app::InteropHelp_UTF8StringHandle* pch_param_name,
        app::InteropHelp_UTF8StringHandle* pch_param_value
    )
    IL2CPP_REGISTER_METHOD(
        0x016104F0,
        bool,
        ISteamHTTP_SendHTTPRequest,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        app::SteamAPICall_t* p_call_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x016105B0,
        bool,
        ISteamHTTP_SendHTTPRequestAndStreamResponse,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        app::SteamAPICall_t* p_call_handle
    )
    IL2CPP_REGISTER_METHOD(0x01610670, bool, ISteamHTTP_DeferHTTPRequest, void* instance_ptr, app::HTTPRequestHandle h_request)
    IL2CPP_REGISTER_METHOD(0x01610720, bool, ISteamHTTP_PrioritizeHTTPRequest, void* instance_ptr, app::HTTPRequestHandle h_request)
    IL2CPP_REGISTER_METHOD(
        0x016107D0,
        bool,
        ISteamHTTP_GetHTTPResponseHeaderSize,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        app::InteropHelp_UTF8StringHandle* pch_header_name,
        uint32_t* un_response_header_size
    )
    IL2CPP_REGISTER_METHOD(
        0x016108F0,
        bool,
        ISteamHTTP_GetHTTPResponseHeaderValue,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        app::InteropHelp_UTF8StringHandle* pch_header_name,
        app::Byte__Array* p_header_value_buffer,
        uint32_t un_buffer_size
    )
    IL2CPP_REGISTER_METHOD(0x01610A20, bool, ISteamHTTP_GetHTTPResponseBodySize, void* instance_ptr, app::HTTPRequestHandle h_request, uint32_t* un_body_size)
    IL2CPP_REGISTER_METHOD(
        0x01610AE0,
        bool,
        ISteamHTTP_GetHTTPResponseBodyData,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        app::Byte__Array* p_body_data_buffer,
        uint32_t un_buffer_size
    )
    IL2CPP_REGISTER_METHOD(
        0x01610BB0,
        bool,
        ISteamHTTP_GetHTTPStreamingResponseBodyData,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        uint32_t c_offset,
        app::Byte__Array* p_body_data_buffer,
        uint32_t un_buffer_size
    )
    IL2CPP_REGISTER_METHOD(0x01610C90, bool, ISteamHTTP_ReleaseHTTPRequest, void* instance_ptr, app::HTTPRequestHandle h_request)
    IL2CPP_REGISTER_METHOD(
        0x01610D40,
        bool,
        ISteamHTTP_GetHTTPDownloadProgressPct,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        float* pfl_percent_out
    )
    IL2CPP_REGISTER_METHOD(
        0x01610E00,
        bool,
        ISteamHTTP_SetHTTPRequestRawPostBody,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        app::InteropHelp_UTF8StringHandle* pch_content_type,
        app::Byte__Array* pub_body,
        uint32_t un_body_len
    )
    IL2CPP_REGISTER_METHOD(0x01610F30, uint32_t, ISteamHTTP_CreateCookieContainer, void* instance_ptr, bool b_allow_responses_to_modify)
    IL2CPP_REGISTER_METHOD(0x01610FE0, bool, ISteamHTTP_ReleaseCookieContainer, void* instance_ptr, app::HTTPCookieContainerHandle h_cookie_container)
    IL2CPP_REGISTER_METHOD(
        0x01611090,
        bool,
        ISteamHTTP_SetCookie,
        void* instance_ptr,
        app::HTTPCookieContainerHandle h_cookie_container,
        app::InteropHelp_UTF8StringHandle* pch_host,
        app::InteropHelp_UTF8StringHandle* pch_url,
        app::InteropHelp_UTF8StringHandle* pch_cookie
    )
    IL2CPP_REGISTER_METHOD(
        0x01611280,
        bool,
        ISteamHTTP_SetHTTPRequestCookieContainer,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        app::HTTPCookieContainerHandle h_cookie_container
    )
    IL2CPP_REGISTER_METHOD(
        0x01611340,
        bool,
        ISteamHTTP_SetHTTPRequestUserAgentInfo,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        app::InteropHelp_UTF8StringHandle* pch_user_agent_info
    )
    IL2CPP_REGISTER_METHOD(
        0x01611440,
        bool,
        ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        bool b_require_verified_certificate
    )
    IL2CPP_REGISTER_METHOD(
        0x01611500,
        bool,
        ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS,
        void* instance_ptr,
        app::HTTPRequestHandle h_request,
        uint32_t un_milliseconds
    )
    IL2CPP_REGISTER_METHOD(0x016115C0, bool, ISteamHTTP_GetHTTPRequestWasTimedOut, void* instance_ptr, app::HTTPRequestHandle h_request, bool* pb_was_timed_out)
    IL2CPP_REGISTER_METHOD(0x01611690, bool, ISteamInput_Init, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01611730, bool, ISteamInput_Shutdown, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016117D0, void, ISteamInput_RunFrame, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01611870, int32_t, ISteamInput_GetConnectedControllers, void* instance_ptr, app::InputHandle_t__Array* handles_out)
    IL2CPP_REGISTER_METHOD(0x01611920, uint64_t, ISteamInput_GetActionSetHandle, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_action_set_name)
    IL2CPP_REGISTER_METHOD(
        0x01611A20,
        void,
        ISteamInput_ActivateActionSet,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::InputActionSetHandle_t action_set_handle
    )
    IL2CPP_REGISTER_METHOD(0x01611AD0, uint64_t, ISteamInput_GetCurrentActionSet, void* instance_ptr, app::InputHandle_t input_handle)
    IL2CPP_REGISTER_METHOD(
        0x01611B80,
        void,
        ISteamInput_ActivateActionSetLayer,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::InputActionSetHandle_t action_set_layer_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x01611C30,
        void,
        ISteamInput_DeactivateActionSetLayer,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::InputActionSetHandle_t action_set_layer_handle
    )
    IL2CPP_REGISTER_METHOD(0x01611CE0, void, ISteamInput_DeactivateAllActionSetLayers, void* instance_ptr, app::InputHandle_t input_handle)
    IL2CPP_REGISTER_METHOD(
        0x01611D90,
        int32_t,
        ISteamInput_GetActiveActionSetLayers,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::InputActionSetHandle_t__Array* handles_out
    )
    IL2CPP_REGISTER_METHOD(0x01611E50, uint64_t, ISteamInput_GetDigitalActionHandle, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_action_name)
    IL2CPP_REGISTER_METHOD(
        0x01611F50,
        app::InputDigitalActionData_t,
        ISteamInput_GetDigitalActionData,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::InputDigitalActionHandle_t digital_action_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x01612000,
        int32_t,
        ISteamInput_GetDigitalActionOrigins,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::InputActionSetHandle_t action_set_handle,
        app::InputDigitalActionHandle_t digital_action_handle,
        app::EInputActionOrigin__Enum__Array* origins_out
    )
    IL2CPP_REGISTER_METHOD(0x016120F0, uint64_t, ISteamInput_GetAnalogActionHandle, void* instance_ptr, app::InteropHelp_UTF8StringHandle* psz_action_name)
    IL2CPP_REGISTER_METHOD(
        0x016121F0,
        app::InputAnalogActionData_t,
        ISteamInput_GetAnalogActionData,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::InputAnalogActionHandle_t analog_action_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x016122D0,
        int32_t,
        ISteamInput_GetAnalogActionOrigins,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::InputActionSetHandle_t action_set_handle,
        app::InputAnalogActionHandle_t analog_action_handle,
        app::EInputActionOrigin__Enum__Array* origins_out
    )
    IL2CPP_REGISTER_METHOD(0x016123C0, void*, ISteamInput_GetGlyphForActionOrigin, void* instance_ptr, app::EInputActionOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(0x01612470, void*, ISteamInput_GetStringForActionOrigin, void* instance_ptr, app::EInputActionOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(
        0x01612520,
        void,
        ISteamInput_StopAnalogActionMomentum,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::InputAnalogActionHandle_t e_action
    )
    IL2CPP_REGISTER_METHOD(0x016125D0, app::InputMotionData_t, ISteamInput_GetMotionData, void* instance_ptr, app::InputHandle_t input_handle)
    IL2CPP_REGISTER_METHOD(
        0x016126A0,
        void,
        ISteamInput_TriggerVibration,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        uint16_t us_left_speed,
        uint16_t us_right_speed
    )
    IL2CPP_REGISTER_METHOD(
        0x01612770,
        void,
        ISteamInput_SetLEDColor,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        uint8_t n_color_r,
        uint8_t n_color_g,
        uint8_t n_color_b,
        uint32_t n_flags
    )
    IL2CPP_REGISTER_METHOD(
        0x01612850,
        void,
        ISteamInput_TriggerHapticPulse,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::ESteamControllerPad__Enum e_target_pad,
        uint16_t us_duration_micro_sec
    )
    IL2CPP_REGISTER_METHOD(
        0x01612920,
        void,
        ISteamInput_TriggerRepeatedHapticPulse,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::ESteamControllerPad__Enum e_target_pad,
        uint16_t us_duration_micro_sec,
        uint16_t us_off_micro_sec,
        uint16_t un_repeat,
        uint32_t n_flags
    )
    IL2CPP_REGISTER_METHOD(0x01612A10, bool, ISteamInput_ShowBindingPanel, void* instance_ptr, app::InputHandle_t input_handle)
    IL2CPP_REGISTER_METHOD(0x01612AC0, app::ESteamInputType__Enum, ISteamInput_GetInputTypeForHandle, void* instance_ptr, app::InputHandle_t input_handle)
    IL2CPP_REGISTER_METHOD(0x01612B70, uint64_t, ISteamInput_GetControllerForGamepadIndex, void* instance_ptr, int32_t n_index)
    IL2CPP_REGISTER_METHOD(0x01612C20, int32_t, ISteamInput_GetGamepadIndexForController, void* instance_ptr, app::InputHandle_t ulinput_handle)
    IL2CPP_REGISTER_METHOD(0x01612CD0, void*, ISteamInput_GetStringForXboxOrigin, void* instance_ptr, app::EXboxOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(0x01612D80, void*, ISteamInput_GetGlyphForXboxOrigin, void* instance_ptr, app::EXboxOrigin__Enum e_origin)
    IL2CPP_REGISTER_METHOD(
        0x01612E30,
        app::EInputActionOrigin__Enum,
        ISteamInput_GetActionOriginFromXboxOrigin,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        app::EXboxOrigin__Enum e_origin
    )
    IL2CPP_REGISTER_METHOD(
        0x01612EE0,
        app::EInputActionOrigin__Enum,
        ISteamInput_TranslateActionOrigin,
        void* instance_ptr,
        app::ESteamInputType__Enum e_destination_input_type,
        app::EInputActionOrigin__Enum e_source_origin
    )
    IL2CPP_REGISTER_METHOD(
        0x01612F90,
        bool,
        ISteamInput_GetDeviceBindingRevision,
        void* instance_ptr,
        app::InputHandle_t input_handle,
        int32_t* p_major,
        int32_t* p_minor
    )
    IL2CPP_REGISTER_METHOD(0x01613060, uint32_t, ISteamInput_GetRemotePlaySessionID, void* instance_ptr, app::InputHandle_t input_handle)
    IL2CPP_REGISTER_METHOD(0x01613110, app::EResult__Enum, ISteamInventory_GetResultStatus, void* instance_ptr, app::SteamInventoryResult_t result_handle)
    IL2CPP_REGISTER_METHOD(
        0x016131C0,
        bool,
        ISteamInventory_GetResultItems,
        void* instance_ptr,
        app::SteamInventoryResult_t result_handle,
        app::SteamItemDetails_t__Array* p_out_items_array,
        uint32_t* pun_out_items_array_size
    )
    IL2CPP_REGISTER_METHOD(
        0x01613290,
        bool,
        ISteamInventory_GetResultItemProperty,
        void* instance_ptr,
        app::SteamInventoryResult_t result_handle,
        uint32_t un_item_index,
        app::InteropHelp_UTF8StringHandle* pch_property_name,
        void* pch_value_buffer,
        uint32_t* pun_value_buffer_size_out
    )
    IL2CPP_REGISTER_METHOD(0x016133C0, uint32_t, ISteamInventory_GetResultTimestamp, void* instance_ptr, app::SteamInventoryResult_t result_handle)
    IL2CPP_REGISTER_METHOD(
        0x01613470,
        bool,
        ISteamInventory_CheckResultSteamID,
        void* instance_ptr,
        app::SteamInventoryResult_t result_handle,
        app::CSteamID steam_i_d_expected
    )
    IL2CPP_REGISTER_METHOD(0x01613530, void, ISteamInventory_DestroyResult, void* instance_ptr, app::SteamInventoryResult_t result_handle)
    IL2CPP_REGISTER_METHOD(0x016135E0, bool, ISteamInventory_GetAllItems, void* instance_ptr, app::SteamInventoryResult_t* p_result_handle)
    IL2CPP_REGISTER_METHOD(
        0x01613690,
        bool,
        ISteamInventory_GetItemsByID,
        void* instance_ptr,
        app::SteamInventoryResult_t* p_result_handle,
        app::SteamItemInstanceID_t__Array* p_instance_i_ds,
        uint32_t un_count_instance_i_ds
    )
    IL2CPP_REGISTER_METHOD(
        0x01613760,
        bool,
        ISteamInventory_SerializeResult,
        void* instance_ptr,
        app::SteamInventoryResult_t result_handle,
        app::Byte__Array* p_out_buffer,
        uint32_t* pun_out_buffer_size
    )
    IL2CPP_REGISTER_METHOD(
        0x01613830,
        bool,
        ISteamInventory_DeserializeResult,
        void* instance_ptr,
        app::SteamInventoryResult_t* p_out_result_handle,
        app::Byte__Array* p_buffer,
        uint32_t un_buffer_size,
        bool b_r_e_s_e_r_v_e_d__m_u_s_t__b_e__f_a_l_s_e
    )
    IL2CPP_REGISTER_METHOD(
        0x01613920,
        bool,
        ISteamInventory_GenerateItems,
        void* instance_ptr,
        app::SteamInventoryResult_t* p_result_handle,
        app::SteamItemDef_t__Array* p_array_item_defs,
        app::UInt32__Array* pun_array_quantity,
        uint32_t un_array_length
    )
    IL2CPP_REGISTER_METHOD(0x01613A10, bool, ISteamInventory_GrantPromoItems, void* instance_ptr, app::SteamInventoryResult_t* p_result_handle)
    IL2CPP_REGISTER_METHOD(
        0x01613AC0,
        bool,
        ISteamInventory_AddPromoItem,
        void* instance_ptr,
        app::SteamInventoryResult_t* p_result_handle,
        app::SteamItemDef_t item_def
    )
    IL2CPP_REGISTER_METHOD(
        0x01613B80,
        bool,
        ISteamInventory_AddPromoItems,
        void* instance_ptr,
        app::SteamInventoryResult_t* p_result_handle,
        app::SteamItemDef_t__Array* p_array_item_defs,
        uint32_t un_array_length
    )
    IL2CPP_REGISTER_METHOD(
        0x01613C50,
        bool,
        ISteamInventory_ConsumeItem,
        void* instance_ptr,
        app::SteamInventoryResult_t* p_result_handle,
        app::SteamItemInstanceID_t item_consume,
        uint32_t un_quantity
    )
    IL2CPP_REGISTER_METHOD(
        0x01613D20,
        bool,
        ISteamInventory_ExchangeItems,
        void* instance_ptr,
        app::SteamInventoryResult_t* p_result_handle,
        app::SteamItemDef_t__Array* p_array_generate,
        app::UInt32__Array* pun_array_generate_quantity,
        uint32_t un_array_generate_length,
        app::SteamItemInstanceID_t__Array* p_array_destroy,
        app::UInt32__Array* pun_array_destroy_quantity,
        uint32_t un_array_destroy_length
    )
    IL2CPP_REGISTER_METHOD(
        0x01613E50,
        bool,
        ISteamInventory_TransferItemQuantity,
        void* instance_ptr,
        app::SteamInventoryResult_t* p_result_handle,
        app::SteamItemInstanceID_t item_id_source,
        uint32_t un_quantity,
        app::SteamItemInstanceID_t item_id_dest
    )
    IL2CPP_REGISTER_METHOD(0x01613F30, void, ISteamInventory_SendItemDropHeartbeat, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01613FD0,
        bool,
        ISteamInventory_TriggerItemDrop,
        void* instance_ptr,
        app::SteamInventoryResult_t* p_result_handle,
        app::SteamItemDef_t drop_list_definition
    )
    IL2CPP_REGISTER_METHOD(
        0x01614090,
        bool,
        ISteamInventory_TradeItems,
        void* instance_ptr,
        app::SteamInventoryResult_t* p_result_handle,
        app::CSteamID steam_i_d_trade_partner,
        app::SteamItemInstanceID_t__Array* p_array_give,
        app::UInt32__Array* p_array_give_quantity,
        uint32_t n_array_give_length,
        app::SteamItemInstanceID_t__Array* p_array_get,
        app::UInt32__Array* p_array_get_quantity,
        uint32_t n_array_get_length
    )
    IL2CPP_REGISTER_METHOD(0x016141D0, bool, ISteamInventory_LoadItemDefinitions, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01614270,
        bool,
        ISteamInventory_GetItemDefinitionIDs,
        void* instance_ptr,
        app::SteamItemDef_t__Array* p_item_def_i_ds,
        uint32_t* pun_item_def_i_ds_array_size
    )
    IL2CPP_REGISTER_METHOD(
        0x01614330,
        bool,
        ISteamInventory_GetItemDefinitionProperty,
        void* instance_ptr,
        app::SteamItemDef_t i_definition,
        app::InteropHelp_UTF8StringHandle* pch_property_name,
        void* pch_value_buffer,
        uint32_t* pun_value_buffer_size_out
    )
    IL2CPP_REGISTER_METHOD(0x01614450, uint64_t, ISteamInventory_RequestEligiblePromoItemDefinitionsIDs, void* instance_ptr, app::CSteamID steam_i_d)
    IL2CPP_REGISTER_METHOD(
        0x01614500,
        bool,
        ISteamInventory_GetEligiblePromoItemDefinitionIDs,
        void* instance_ptr,
        app::CSteamID steam_i_d,
        app::SteamItemDef_t__Array* p_item_def_i_ds,
        uint32_t* pun_item_def_i_ds_array_size
    )
    IL2CPP_REGISTER_METHOD(
        0x016145D0,
        uint64_t,
        ISteamInventory_StartPurchase,
        void* instance_ptr,
        app::SteamItemDef_t__Array* p_array_item_defs,
        app::UInt32__Array* pun_array_quantity,
        uint32_t un_array_length
    )
    IL2CPP_REGISTER_METHOD(0x016146B0, uint64_t, ISteamInventory_RequestPrices, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01614750, uint32_t, ISteamInventory_GetNumItemsWithPrices, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x016147F0,
        bool,
        ISteamInventory_GetItemsWithPrices,
        void* instance_ptr,
        app::SteamItemDef_t__Array* p_array_item_defs,
        app::UInt64__Array* p_current_prices,
        app::UInt64__Array* p_base_prices,
        uint32_t un_array_length
    )
    IL2CPP_REGISTER_METHOD(
        0x016148E0,
        bool,
        ISteamInventory_GetItemPrice,
        void* instance_ptr,
        app::SteamItemDef_t i_definition,
        uint64_t* p_current_price,
        uint64_t* p_base_price
    )
    IL2CPP_REGISTER_METHOD(0x016149B0, uint64_t, ISteamInventory_StartUpdateProperties, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01614A50,
        bool,
        ISteamInventory_RemoveProperty,
        void* instance_ptr,
        app::SteamInventoryUpdateHandle_t handle,
        app::SteamItemInstanceID_t n_item_i_d,
        app::InteropHelp_UTF8StringHandle* pch_property_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01614B70,
        bool,
        ISteamInventory_SetProperty,
        void* instance_ptr,
        app::SteamInventoryUpdateHandle_t handle,
        app::SteamItemInstanceID_t n_item_i_d,
        app::InteropHelp_UTF8StringHandle* pch_property_name,
        app::InteropHelp_UTF8StringHandle* pch_property_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01614D00,
        bool,
        ISteamInventory_SetProperty0,
        void* instance_ptr,
        app::SteamInventoryUpdateHandle_t handle,
        app::SteamItemInstanceID_t n_item_i_d,
        app::InteropHelp_UTF8StringHandle* pch_property_name,
        bool b_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01614E20,
        bool,
        ISteamInventory_SetProperty1,
        void* instance_ptr,
        app::SteamInventoryUpdateHandle_t handle,
        app::SteamItemInstanceID_t n_item_i_d,
        app::InteropHelp_UTF8StringHandle* pch_property_name,
        int64_t n_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01614F40,
        bool,
        ISteamInventory_SetProperty2,
        void* instance_ptr,
        app::SteamInventoryUpdateHandle_t handle,
        app::SteamItemInstanceID_t n_item_i_d,
        app::InteropHelp_UTF8StringHandle* pch_property_name,
        float fl_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01615070,
        bool,
        ISteamInventory_SubmitUpdateProperties,
        void* instance_ptr,
        app::SteamInventoryUpdateHandle_t handle,
        app::SteamInventoryResult_t* p_result_handle
    )
    IL2CPP_REGISTER_METHOD(0x01615130, int32_t, ISteamMatchmaking_GetFavoriteGameCount, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x016151D0,
        bool,
        ISteamMatchmaking_GetFavoriteGame,
        void* instance_ptr,
        int32_t i_game,
        app::AppId_t* pn_app_i_d,
        uint32_t* pn_i_p,
        uint16_t* pn_conn_port,
        uint16_t* pn_query_port,
        uint32_t* pun_flags,
        uint32_t* p_r_time32_last_played_on_server
    )
    IL2CPP_REGISTER_METHOD(
        0x016152D0,
        int32_t,
        ISteamMatchmaking_AddFavoriteGame,
        void* instance_ptr,
        app::AppId_t n_app_i_d,
        uint32_t n_i_p,
        uint16_t n_conn_port,
        uint16_t n_query_port,
        uint32_t un_flags,
        uint32_t r_time32_last_played_on_server
    )
    IL2CPP_REGISTER_METHOD(
        0x016153B0,
        bool,
        ISteamMatchmaking_RemoveFavoriteGame,
        void* instance_ptr,
        app::AppId_t n_app_i_d,
        uint32_t n_i_p,
        uint16_t n_conn_port,
        uint16_t n_query_port,
        uint32_t un_flags
    )
    IL2CPP_REGISTER_METHOD(0x016154A0, uint64_t, ISteamMatchmaking_RequestLobbyList, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01615540,
        void,
        ISteamMatchmaking_AddRequestLobbyListStringFilter,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_key_to_match,
        app::InteropHelp_UTF8StringHandle* pch_value_to_match,
        app::ELobbyComparison__Enum e_comparison_type
    )
    IL2CPP_REGISTER_METHOD(
        0x016156B0,
        void,
        ISteamMatchmaking_AddRequestLobbyListNumericalFilter,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_key_to_match,
        int32_t n_value_to_match,
        app::ELobbyComparison__Enum e_comparison_type
    )
    IL2CPP_REGISTER_METHOD(
        0x016157C0,
        void,
        ISteamMatchmaking_AddRequestLobbyListNearValueFilter,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_key_to_match,
        int32_t n_value_to_be_close_to
    )
    IL2CPP_REGISTER_METHOD(0x016158C0, void, ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable, void* instance_ptr, int32_t n_slots_available)
    IL2CPP_REGISTER_METHOD(
        0x01615970,
        void,
        ISteamMatchmaking_AddRequestLobbyListDistanceFilter,
        void* instance_ptr,
        app::ELobbyDistanceFilter__Enum e_lobby_distance_filter
    )
    IL2CPP_REGISTER_METHOD(0x01615A20, void, ISteamMatchmaking_AddRequestLobbyListResultCountFilter, void* instance_ptr, int32_t c_max_results)
    IL2CPP_REGISTER_METHOD(0x01615AD0, void, ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter, void* instance_ptr, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(0x01615B80, uint64_t, ISteamMatchmaking_GetLobbyByIndex, void* instance_ptr, int32_t i_lobby)
    IL2CPP_REGISTER_METHOD(0x01615C30, uint64_t, ISteamMatchmaking_CreateLobby, void* instance_ptr, app::ELobbyType__Enum e_lobby_type, int32_t c_max_members)
    IL2CPP_REGISTER_METHOD(0x01615CE0, uint64_t, ISteamMatchmaking_JoinLobby, void* instance_ptr, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(0x01615D90, void, ISteamMatchmaking_LeaveLobby, void* instance_ptr, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(
        0x01615E40,
        bool,
        ISteamMatchmaking_InviteUserToLobby,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        app::CSteamID steam_i_d_invitee
    )
    IL2CPP_REGISTER_METHOD(0x01615F00, int32_t, ISteamMatchmaking_GetNumLobbyMembers, void* instance_ptr, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(0x01615FB0, uint64_t, ISteamMatchmaking_GetLobbyMemberByIndex, void* instance_ptr, app::CSteamID steam_i_d_lobby, int32_t i_member)
    IL2CPP_REGISTER_METHOD(
        0x01616060,
        void*,
        ISteamMatchmaking_GetLobbyData,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        app::InteropHelp_UTF8StringHandle* pch_key
    )
    IL2CPP_REGISTER_METHOD(
        0x01616160,
        bool,
        ISteamMatchmaking_SetLobbyData,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        app::InteropHelp_UTF8StringHandle* pch_key,
        app::InteropHelp_UTF8StringHandle* pch_value
    )
    IL2CPP_REGISTER_METHOD(0x016162E0, int32_t, ISteamMatchmaking_GetLobbyDataCount, void* instance_ptr, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(
        0x01616390,
        bool,
        ISteamMatchmaking_GetLobbyDataByIndex,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        int32_t i_lobby_data,
        void* pch_key,
        int32_t cch_key_buffer_size,
        void* pch_value,
        int32_t cch_value_buffer_size
    )
    IL2CPP_REGISTER_METHOD(
        0x01616480,
        bool,
        ISteamMatchmaking_DeleteLobbyData,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        app::InteropHelp_UTF8StringHandle* pch_key
    )
    IL2CPP_REGISTER_METHOD(
        0x01616590,
        void*,
        ISteamMatchmaking_GetLobbyMemberData,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_key
    )
    IL2CPP_REGISTER_METHOD(
        0x016166B0,
        void,
        ISteamMatchmaking_SetLobbyMemberData,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        app::InteropHelp_UTF8StringHandle* pch_key,
        app::InteropHelp_UTF8StringHandle* pch_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01616820,
        bool,
        ISteamMatchmaking_SendLobbyChatMsg,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        app::Byte__Array* pv_msg_body,
        int32_t cub_msg_body
    )
    IL2CPP_REGISTER_METHOD(
        0x016168F0,
        int32_t,
        ISteamMatchmaking_GetLobbyChatEntry,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        int32_t i_chat_i_d,
        app::CSteamID* p_steam_i_d_user,
        app::Byte__Array* pv_data,
        int32_t cub_data,
        app::EChatEntryType__Enum* pe_chat_entry_type
    )
    IL2CPP_REGISTER_METHOD(0x016169D0, bool, ISteamMatchmaking_RequestLobbyData, void* instance_ptr, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(
        0x01616A80,
        void,
        ISteamMatchmaking_SetLobbyGameServer,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        uint32_t un_game_server_i_p,
        uint16_t un_game_server_port,
        app::CSteamID steam_i_d_game_server
    )
    IL2CPP_REGISTER_METHOD(
        0x01616B50,
        bool,
        ISteamMatchmaking_GetLobbyGameServer,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        uint32_t* pun_game_server_i_p,
        uint16_t* pun_game_server_port,
        app::CSteamID* psteam_i_d_game_server
    )
    IL2CPP_REGISTER_METHOD(0x01616C30, bool, ISteamMatchmaking_SetLobbyMemberLimit, void* instance_ptr, app::CSteamID steam_i_d_lobby, int32_t c_max_members)
    IL2CPP_REGISTER_METHOD(0x01616CF0, int32_t, ISteamMatchmaking_GetLobbyMemberLimit, void* instance_ptr, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(
        0x01616DA0,
        bool,
        ISteamMatchmaking_SetLobbyType,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        app::ELobbyType__Enum e_lobby_type
    )
    IL2CPP_REGISTER_METHOD(0x01616E60, bool, ISteamMatchmaking_SetLobbyJoinable, void* instance_ptr, app::CSteamID steam_i_d_lobby, bool b_lobby_joinable)
    IL2CPP_REGISTER_METHOD(0x01616F20, uint64_t, ISteamMatchmaking_GetLobbyOwner, void* instance_ptr, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(
        0x01616FD0,
        bool,
        ISteamMatchmaking_SetLobbyOwner,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        app::CSteamID steam_i_d_new_owner
    )
    IL2CPP_REGISTER_METHOD(
        0x01617090,
        bool,
        ISteamMatchmaking_SetLinkedLobby,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        app::CSteamID steam_i_d_lobby_dependent
    )
    IL2CPP_REGISTER_METHOD(
        0x01617150,
        void*,
        ISteamMatchmakingServers_RequestInternetServerList,
        void* instance_ptr,
        app::AppId_t i_app,
        void* ppch_filters,
        uint32_t n_filters,
        void* p_request_servers_response
    )
    IL2CPP_REGISTER_METHOD(
        0x01617220,
        void*,
        ISteamMatchmakingServers_RequestLANServerList,
        void* instance_ptr,
        app::AppId_t i_app,
        void* p_request_servers_response
    )
    IL2CPP_REGISTER_METHOD(
        0x016172D0,
        void*,
        ISteamMatchmakingServers_RequestFriendsServerList,
        void* instance_ptr,
        app::AppId_t i_app,
        void* ppch_filters,
        uint32_t n_filters,
        void* p_request_servers_response
    )
    IL2CPP_REGISTER_METHOD(
        0x016173A0,
        void*,
        ISteamMatchmakingServers_RequestFavoritesServerList,
        void* instance_ptr,
        app::AppId_t i_app,
        void* ppch_filters,
        uint32_t n_filters,
        void* p_request_servers_response
    )
    IL2CPP_REGISTER_METHOD(
        0x01617470,
        void*,
        ISteamMatchmakingServers_RequestHistoryServerList,
        void* instance_ptr,
        app::AppId_t i_app,
        void* ppch_filters,
        uint32_t n_filters,
        void* p_request_servers_response
    )
    IL2CPP_REGISTER_METHOD(
        0x01617540,
        void*,
        ISteamMatchmakingServers_RequestSpectatorServerList,
        void* instance_ptr,
        app::AppId_t i_app,
        void* ppch_filters,
        uint32_t n_filters,
        void* p_request_servers_response
    )
    IL2CPP_REGISTER_METHOD(0x01617610, void, ISteamMatchmakingServers_ReleaseRequest, void* instance_ptr, app::HServerListRequest h_server_list_request)
    IL2CPP_REGISTER_METHOD(
        0x016176C0,
        void*,
        ISteamMatchmakingServers_GetServerDetails,
        void* instance_ptr,
        app::HServerListRequest h_request,
        int32_t i_server
    )
    IL2CPP_REGISTER_METHOD(0x01617770, void, ISteamMatchmakingServers_CancelQuery, void* instance_ptr, app::HServerListRequest h_request)
    IL2CPP_REGISTER_METHOD(0x01617820, void, ISteamMatchmakingServers_RefreshQuery, void* instance_ptr, app::HServerListRequest h_request)
    IL2CPP_REGISTER_METHOD(0x016178D0, bool, ISteamMatchmakingServers_IsRefreshing, void* instance_ptr, app::HServerListRequest h_request)
    IL2CPP_REGISTER_METHOD(0x01617980, int32_t, ISteamMatchmakingServers_GetServerCount, void* instance_ptr, app::HServerListRequest h_request)
    IL2CPP_REGISTER_METHOD(0x01617A30, void, ISteamMatchmakingServers_RefreshServer, void* instance_ptr, app::HServerListRequest h_request, int32_t i_server)
    IL2CPP_REGISTER_METHOD(
        0x01617AE0,
        int32_t,
        ISteamMatchmakingServers_PingServer,
        void* instance_ptr,
        uint32_t un_i_p,
        uint16_t us_port,
        void* p_request_servers_response
    )
    IL2CPP_REGISTER_METHOD(
        0x01617BA0,
        int32_t,
        ISteamMatchmakingServers_PlayerDetails,
        void* instance_ptr,
        uint32_t un_i_p,
        uint16_t us_port,
        void* p_request_servers_response
    )
    IL2CPP_REGISTER_METHOD(
        0x01617C60,
        int32_t,
        ISteamMatchmakingServers_ServerRules,
        void* instance_ptr,
        uint32_t un_i_p,
        uint16_t us_port,
        void* p_request_servers_response
    )
    IL2CPP_REGISTER_METHOD(0x01617D20, void, ISteamMatchmakingServers_CancelServerQuery, void* instance_ptr, app::HServerQuery h_server_query)
    IL2CPP_REGISTER_METHOD(
        0x01617DD0,
        app::EGameSearchErrorCode_t__Enum,
        ISteamGameSearch_AddGameSearchParams,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_key_to_find,
        app::InteropHelp_UTF8StringHandle* pch_values_to_find
    )
    IL2CPP_REGISTER_METHOD(
        0x01617F30,
        app::EGameSearchErrorCode_t__Enum,
        ISteamGameSearch_SearchForGameWithLobby,
        void* instance_ptr,
        app::CSteamID steam_i_d_lobby,
        int32_t n_player_min,
        int32_t n_player_max
    )
    IL2CPP_REGISTER_METHOD(
        0x01617FF0,
        app::EGameSearchErrorCode_t__Enum,
        ISteamGameSearch_SearchForGameSolo,
        void* instance_ptr,
        int32_t n_player_min,
        int32_t n_player_max
    )
    IL2CPP_REGISTER_METHOD(0x016180A0, app::EGameSearchErrorCode_t__Enum, ISteamGameSearch_AcceptGame, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01618140, app::EGameSearchErrorCode_t__Enum, ISteamGameSearch_DeclineGame, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x016181E0,
        app::EGameSearchErrorCode_t__Enum,
        ISteamGameSearch_RetrieveConnectionDetails,
        void* instance_ptr,
        app::CSteamID steam_i_d_host,
        void* pch_connection_details,
        int32_t cub_connection_details
    )
    IL2CPP_REGISTER_METHOD(0x016182A0, app::EGameSearchErrorCode_t__Enum, ISteamGameSearch_EndGameSearch, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01618340,
        app::EGameSearchErrorCode_t__Enum,
        ISteamGameSearch_SetGameHostParams,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_key,
        app::InteropHelp_UTF8StringHandle* pch_value
    )
    IL2CPP_REGISTER_METHOD(
        0x016184A0,
        app::EGameSearchErrorCode_t__Enum,
        ISteamGameSearch_SetConnectionDetails,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_connection_details,
        int32_t cub_connection_details
    )
    IL2CPP_REGISTER_METHOD(
        0x016185A0,
        app::EGameSearchErrorCode_t__Enum,
        ISteamGameSearch_RequestPlayersForGame,
        void* instance_ptr,
        int32_t n_player_min,
        int32_t n_player_max,
        int32_t n_max_team_size
    )
    IL2CPP_REGISTER_METHOD(
        0x01618660,
        app::EGameSearchErrorCode_t__Enum,
        ISteamGameSearch_HostConfirmGameStart,
        void* instance_ptr,
        uint64_t ull_unique_game_i_d
    )
    IL2CPP_REGISTER_METHOD(0x01618710, app::EGameSearchErrorCode_t__Enum, ISteamGameSearch_CancelRequestPlayersForGame, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x016187B0,
        app::EGameSearchErrorCode_t__Enum,
        ISteamGameSearch_SubmitPlayerResult,
        void* instance_ptr,
        uint64_t ull_unique_game_i_d,
        app::CSteamID steam_i_d_player,
        app::EPlayerResult_t__Enum e_player_result
    )
    IL2CPP_REGISTER_METHOD(0x01618870, app::EGameSearchErrorCode_t__Enum, ISteamGameSearch_EndGame, void* instance_ptr, uint64_t ull_unique_game_i_d)
    IL2CPP_REGISTER_METHOD(0x01618920, uint32_t, ISteamParties_GetNumActiveBeacons, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016189C0, uint64_t, ISteamParties_GetBeaconByIndex, void* instance_ptr, uint32_t un_index)
    IL2CPP_REGISTER_METHOD(
        0x01618A70,
        bool,
        ISteamParties_GetBeaconDetails,
        void* instance_ptr,
        app::PartyBeaconID_t ul_beacon_i_d,
        app::CSteamID* p_steam_i_d_beacon_owner,
        app::SteamPartyBeaconLocation_t* p_location,
        void* pch_metadata,
        int32_t cch_metadata
    )
    IL2CPP_REGISTER_METHOD(0x01618B60, uint64_t, ISteamParties_JoinParty, void* instance_ptr, app::PartyBeaconID_t ul_beacon_i_d)
    IL2CPP_REGISTER_METHOD(0x01618C10, bool, ISteamParties_GetNumAvailableBeaconLocations, void* instance_ptr, uint32_t* pu_num_locations)
    IL2CPP_REGISTER_METHOD(
        0x01618CC0,
        bool,
        ISteamParties_GetAvailableBeaconLocations,
        void* instance_ptr,
        app::SteamPartyBeaconLocation_t__Array* p_location_list,
        uint32_t u_max_num_locations
    )
    IL2CPP_REGISTER_METHOD(
        0x01618D80,
        uint64_t,
        ISteamParties_CreateBeacon,
        void* instance_ptr,
        uint32_t un_open_slots,
        app::SteamPartyBeaconLocation_t* p_beacon_location,
        app::InteropHelp_UTF8StringHandle* pch_connect_string,
        app::InteropHelp_UTF8StringHandle* pch_metadata
    )
    IL2CPP_REGISTER_METHOD(
        0x01618F10,
        void,
        ISteamParties_OnReservationCompleted,
        void* instance_ptr,
        app::PartyBeaconID_t ul_beacon,
        app::CSteamID steam_i_d_user
    )
    IL2CPP_REGISTER_METHOD(0x01618FC0, void, ISteamParties_CancelReservation, void* instance_ptr, app::PartyBeaconID_t ul_beacon, app::CSteamID steam_i_d_user)
    IL2CPP_REGISTER_METHOD(0x01619070, uint64_t, ISteamParties_ChangeNumOpenSlots, void* instance_ptr, app::PartyBeaconID_t ul_beacon, uint32_t un_open_slots)
    IL2CPP_REGISTER_METHOD(0x01619120, bool, ISteamParties_DestroyBeacon, void* instance_ptr, app::PartyBeaconID_t ul_beacon)
    IL2CPP_REGISTER_METHOD(
        0x016191D0,
        bool,
        ISteamParties_GetBeaconLocationData,
        void* instance_ptr,
        app::SteamPartyBeaconLocation_t beacon_location,
        app::ESteamPartyBeaconLocationData__Enum e_data,
        void* pch_data_string_out,
        int32_t cch_data_string_out
    )
    IL2CPP_REGISTER_METHOD(0x016192B0, bool, ISteamMusic_BIsEnabled, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01619350, bool, ISteamMusic_BIsPlaying, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016193F0, app::AudioPlayback_Status__Enum, ISteamMusic_GetPlaybackStatus, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01619490, void, ISteamMusic_Play, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01619530, void, ISteamMusic_Pause, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016195D0, void, ISteamMusic_PlayPrevious, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01619670, void, ISteamMusic_PlayNext, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01619710, void, ISteamMusic_SetVolume, void* instance_ptr, float fl_volume)
    IL2CPP_REGISTER_METHOD(0x016197C0, float, ISteamMusic_GetVolume, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01619860, bool, ISteamMusicRemote_RegisterSteamMusicRemote, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_name)
    IL2CPP_REGISTER_METHOD(0x01619960, bool, ISteamMusicRemote_DeregisterSteamMusicRemote, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01619A00, bool, ISteamMusicRemote_BIsCurrentMusicRemote, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01619AA0, bool, ISteamMusicRemote_BActivationSuccess, void* instance_ptr, bool b_value)
    IL2CPP_REGISTER_METHOD(0x01619B50, bool, ISteamMusicRemote_SetDisplayName, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_display_name)
    IL2CPP_REGISTER_METHOD(0x01619C50, bool, ISteamMusicRemote_SetPNGIcon_64x64, void* instance_ptr, app::Byte__Array* pv_buffer, uint32_t cb_buffer_length)
    IL2CPP_REGISTER_METHOD(0x01619D10, bool, ISteamMusicRemote_EnablePlayPrevious, void* instance_ptr, bool b_value)
    IL2CPP_REGISTER_METHOD(0x01619DC0, bool, ISteamMusicRemote_EnablePlayNext, void* instance_ptr, bool b_value)
    IL2CPP_REGISTER_METHOD(0x01619E70, bool, ISteamMusicRemote_EnableShuffled, void* instance_ptr, bool b_value)
    IL2CPP_REGISTER_METHOD(0x01619F20, bool, ISteamMusicRemote_EnableLooped, void* instance_ptr, bool b_value)
    IL2CPP_REGISTER_METHOD(0x01619FD0, bool, ISteamMusicRemote_EnableQueue, void* instance_ptr, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0161A080, bool, ISteamMusicRemote_EnablePlaylists, void* instance_ptr, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0161A130, bool, ISteamMusicRemote_UpdatePlaybackStatus, void* instance_ptr, app::AudioPlayback_Status__Enum n_status)
    IL2CPP_REGISTER_METHOD(0x0161A1E0, bool, ISteamMusicRemote_UpdateShuffled, void* instance_ptr, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0161A290, bool, ISteamMusicRemote_UpdateLooped, void* instance_ptr, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0161A340, bool, ISteamMusicRemote_UpdateVolume, void* instance_ptr, float fl_value)
    IL2CPP_REGISTER_METHOD(0x0161A3F0, bool, ISteamMusicRemote_CurrentEntryWillChange, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161A490, bool, ISteamMusicRemote_CurrentEntryIsAvailable, void* instance_ptr, bool b_available)
    IL2CPP_REGISTER_METHOD(0x0161A540, bool, ISteamMusicRemote_UpdateCurrentEntryText, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_text)
    IL2CPP_REGISTER_METHOD(0x0161A640, bool, ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds, void* instance_ptr, int32_t n_value)
    IL2CPP_REGISTER_METHOD(
        0x0161A6F0,
        bool,
        ISteamMusicRemote_UpdateCurrentEntryCoverArt,
        void* instance_ptr,
        app::Byte__Array* pv_buffer,
        uint32_t cb_buffer_length
    )
    IL2CPP_REGISTER_METHOD(0x0161A7B0, bool, ISteamMusicRemote_CurrentEntryDidChange, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161A850, bool, ISteamMusicRemote_QueueWillChange, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161A8F0, bool, ISteamMusicRemote_ResetQueueEntries, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0161A990,
        bool,
        ISteamMusicRemote_SetQueueEntry,
        void* instance_ptr,
        int32_t n_i_d,
        int32_t n_position,
        app::InteropHelp_UTF8StringHandle* pch_entry_text
    )
    IL2CPP_REGISTER_METHOD(0x0161AAB0, bool, ISteamMusicRemote_SetCurrentQueueEntry, void* instance_ptr, int32_t n_i_d)
    IL2CPP_REGISTER_METHOD(0x0161AB60, bool, ISteamMusicRemote_QueueDidChange, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161AC00, bool, ISteamMusicRemote_PlaylistWillChange, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161ACA0, bool, ISteamMusicRemote_ResetPlaylistEntries, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0161AD40,
        bool,
        ISteamMusicRemote_SetPlaylistEntry,
        void* instance_ptr,
        int32_t n_i_d,
        int32_t n_position,
        app::InteropHelp_UTF8StringHandle* pch_entry_text
    )
    IL2CPP_REGISTER_METHOD(0x0161AE60, bool, ISteamMusicRemote_SetCurrentPlaylistEntry, void* instance_ptr, int32_t n_i_d)
    IL2CPP_REGISTER_METHOD(0x0161AF10, bool, ISteamMusicRemote_PlaylistDidChange, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0161AFB0,
        bool,
        ISteamNetworking_SendP2PPacket,
        void* instance_ptr,
        app::CSteamID steam_i_d_remote,
        app::Byte__Array* pub_data,
        uint32_t cub_data,
        app::EP2PSend__Enum e_p2_p_send_type,
        int32_t n_channel
    )
    IL2CPP_REGISTER_METHOD(0x0161B0A0, bool, ISteamNetworking_IsP2PPacketAvailable, void* instance_ptr, uint32_t* pcub_msg_size, int32_t n_channel)
    IL2CPP_REGISTER_METHOD(
        0x0161B160,
        bool,
        ISteamNetworking_ReadP2PPacket,
        void* instance_ptr,
        app::Byte__Array* pub_dest,
        uint32_t cub_dest,
        uint32_t* pcub_msg_size,
        app::CSteamID* psteam_i_d_remote,
        int32_t n_channel
    )
    IL2CPP_REGISTER_METHOD(0x0161B250, bool, ISteamNetworking_AcceptP2PSessionWithUser, void* instance_ptr, app::CSteamID steam_i_d_remote)
    IL2CPP_REGISTER_METHOD(0x0161B300, bool, ISteamNetworking_CloseP2PSessionWithUser, void* instance_ptr, app::CSteamID steam_i_d_remote)
    IL2CPP_REGISTER_METHOD(0x0161B3B0, bool, ISteamNetworking_CloseP2PChannelWithUser, void* instance_ptr, app::CSteamID steam_i_d_remote, int32_t n_channel)
    IL2CPP_REGISTER_METHOD(
        0x0161B470,
        bool,
        ISteamNetworking_GetP2PSessionState,
        void* instance_ptr,
        app::CSteamID steam_i_d_remote,
        app::P2PSessionState_t* p_connection_state
    )
    IL2CPP_REGISTER_METHOD(0x0161B530, bool, ISteamNetworking_AllowP2PPacketRelay, void* instance_ptr, bool b_allow)
    IL2CPP_REGISTER_METHOD(
        0x0161B5E0,
        uint32_t,
        ISteamNetworking_CreateListenSocket,
        void* instance_ptr,
        int32_t n_virtual_p2_p_port,
        uint32_t n_i_p,
        uint16_t n_port,
        bool b_allow_use_of_packet_relay
    )
    IL2CPP_REGISTER_METHOD(
        0x0161B6C0,
        uint32_t,
        ISteamNetworking_CreateP2PConnectionSocket,
        void* instance_ptr,
        app::CSteamID steam_i_d_target,
        int32_t n_virtual_port,
        int32_t n_timeout_sec,
        bool b_allow_use_of_packet_relay
    )
    IL2CPP_REGISTER_METHOD(
        0x0161B7A0,
        uint32_t,
        ISteamNetworking_CreateConnectionSocket,
        void* instance_ptr,
        uint32_t n_i_p,
        uint16_t n_port,
        int32_t n_timeout_sec
    )
    IL2CPP_REGISTER_METHOD(0x0161B860, bool, ISteamNetworking_DestroySocket, void* instance_ptr, app::SNetSocket_t h_socket, bool b_notify_remote_end)
    IL2CPP_REGISTER_METHOD(
        0x0161B920,
        bool,
        ISteamNetworking_DestroyListenSocket,
        void* instance_ptr,
        app::SNetListenSocket_t h_socket,
        bool b_notify_remote_end
    )
    IL2CPP_REGISTER_METHOD(
        0x0161B9E0,
        bool,
        ISteamNetworking_SendDataOnSocket,
        void* instance_ptr,
        app::SNetSocket_t h_socket,
        app::Byte__Array* pub_data,
        uint32_t cub_data,
        bool b_reliable
    )
    IL2CPP_REGISTER_METHOD(0x0161BAC0, bool, ISteamNetworking_IsDataAvailableOnSocket, void* instance_ptr, app::SNetSocket_t h_socket, uint32_t* pcub_msg_size)
    IL2CPP_REGISTER_METHOD(
        0x0161BB80,
        bool,
        ISteamNetworking_RetrieveDataFromSocket,
        void* instance_ptr,
        app::SNetSocket_t h_socket,
        app::Byte__Array* pub_dest,
        uint32_t cub_dest,
        uint32_t* pcub_msg_size
    )
    IL2CPP_REGISTER_METHOD(
        0x0161BC60,
        bool,
        ISteamNetworking_IsDataAvailable,
        void* instance_ptr,
        app::SNetListenSocket_t h_listen_socket,
        uint32_t* pcub_msg_size,
        app::SNetSocket_t* ph_socket
    )
    IL2CPP_REGISTER_METHOD(
        0x0161BD30,
        bool,
        ISteamNetworking_RetrieveData,
        void* instance_ptr,
        app::SNetListenSocket_t h_listen_socket,
        app::Byte__Array* pub_dest,
        uint32_t cub_dest,
        uint32_t* pcub_msg_size,
        app::SNetSocket_t* ph_socket
    )
    IL2CPP_REGISTER_METHOD(
        0x0161BE20,
        bool,
        ISteamNetworking_GetSocketInfo,
        void* instance_ptr,
        app::SNetSocket_t h_socket,
        app::CSteamID* p_steam_i_d_remote,
        int32_t* pe_socket_status,
        uint32_t* pun_i_p_remote,
        uint16_t* pun_port_remote
    )
    IL2CPP_REGISTER_METHOD(
        0x0161BF10,
        bool,
        ISteamNetworking_GetListenSocketInfo,
        void* instance_ptr,
        app::SNetListenSocket_t h_listen_socket,
        uint32_t* pn_i_p,
        uint16_t* pn_port
    )
    IL2CPP_REGISTER_METHOD(
        0x0161BFE0,
        app::ESNetSocketConnectionType__Enum,
        ISteamNetworking_GetSocketConnectionType,
        void* instance_ptr,
        app::SNetSocket_t h_socket
    )
    IL2CPP_REGISTER_METHOD(0x0161C090, int32_t, ISteamNetworking_GetMaxPacketSize, void* instance_ptr, app::SNetSocket_t h_socket)
    IL2CPP_REGISTER_METHOD(0x0161C140, bool, ISteamParentalSettings_BIsParentalLockEnabled, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161C1E0, bool, ISteamParentalSettings_BIsParentalLockLocked, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161C280, bool, ISteamParentalSettings_BIsAppBlocked, void* instance_ptr, app::AppId_t n_app_i_d)
    IL2CPP_REGISTER_METHOD(0x0161C330, bool, ISteamParentalSettings_BIsAppInBlockList, void* instance_ptr, app::AppId_t n_app_i_d)
    IL2CPP_REGISTER_METHOD(0x0161C3E0, bool, ISteamParentalSettings_BIsFeatureBlocked, void* instance_ptr, app::EParentalFeature__Enum e_feature)
    IL2CPP_REGISTER_METHOD(0x0161C490, bool, ISteamParentalSettings_BIsFeatureInBlockList, void* instance_ptr, app::EParentalFeature__Enum e_feature)
    IL2CPP_REGISTER_METHOD(0x0161C540, uint32_t, ISteamRemotePlay_GetSessionCount, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161C5E0, uint32_t, ISteamRemotePlay_GetSessionID, void* instance_ptr, int32_t i_session_index)
    IL2CPP_REGISTER_METHOD(0x0161C690, uint64_t, ISteamRemotePlay_GetSessionSteamID, void* instance_ptr, uint32_t un_session_i_d)
    IL2CPP_REGISTER_METHOD(0x0161C740, void*, ISteamRemotePlay_GetSessionClientName, void* instance_ptr, uint32_t un_session_i_d)
    IL2CPP_REGISTER_METHOD(
        0x0161C7F0,
        app::ESteamDeviceFormFactor__Enum,
        ISteamRemotePlay_GetSessionClientFormFactor,
        void* instance_ptr,
        uint32_t un_session_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0161C8A0,
        bool,
        ISteamRemotePlay_BGetSessionClientResolution,
        void* instance_ptr,
        uint32_t un_session_i_d,
        int32_t* pn_resolution_x,
        int32_t* pn_resolution_y
    )
    IL2CPP_REGISTER_METHOD(
        0x0161C970,
        bool,
        ISteamRemoteStorage_FileWrite,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_file,
        app::Byte__Array* pv_data,
        int32_t cub_data
    )
    IL2CPP_REGISTER_METHOD(
        0x0161CA90,
        int32_t,
        ISteamRemoteStorage_FileRead,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_file,
        app::Byte__Array* pv_data,
        int32_t cub_data_to_read
    )
    IL2CPP_REGISTER_METHOD(
        0x0161CBB0,
        uint64_t,
        ISteamRemoteStorage_FileWriteAsync,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_file,
        app::Byte__Array* pv_data,
        uint32_t cub_data
    )
    IL2CPP_REGISTER_METHOD(
        0x0161CCD0,
        uint64_t,
        ISteamRemoteStorage_FileReadAsync,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_file,
        uint32_t n_offset,
        uint32_t cub_to_read
    )
    IL2CPP_REGISTER_METHOD(
        0x0161CDF0,
        bool,
        ISteamRemoteStorage_FileReadAsyncComplete,
        void* instance_ptr,
        app::SteamAPICall_t h_read_call,
        app::Byte__Array* pv_buffer,
        uint32_t cub_to_read
    )
    IL2CPP_REGISTER_METHOD(0x0161CEC0, bool, ISteamRemoteStorage_FileForget, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_file)
    IL2CPP_REGISTER_METHOD(0x0161CFC0, bool, ISteamRemoteStorage_FileDelete, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_file)
    IL2CPP_REGISTER_METHOD(0x0161D0C0, uint64_t, ISteamRemoteStorage_FileShare, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_file)
    IL2CPP_REGISTER_METHOD(
        0x0161D1C0,
        bool,
        ISteamRemoteStorage_SetSyncPlatforms,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_file,
        app::ERemoteStoragePlatform__Enum e_remote_storage_platform
    )
    IL2CPP_REGISTER_METHOD(0x0161D2D0, uint64_t, ISteamRemoteStorage_FileWriteStreamOpen, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_file)
    IL2CPP_REGISTER_METHOD(
        0x0161D3D0,
        bool,
        ISteamRemoteStorage_FileWriteStreamWriteChunk,
        void* instance_ptr,
        app::UGCFileWriteStreamHandle_t write_handle,
        app::Byte__Array* pv_data,
        int32_t cub_data
    )
    IL2CPP_REGISTER_METHOD(0x0161D4A0, bool, ISteamRemoteStorage_FileWriteStreamClose, void* instance_ptr, app::UGCFileWriteStreamHandle_t write_handle)
    IL2CPP_REGISTER_METHOD(0x0161D550, bool, ISteamRemoteStorage_FileWriteStreamCancel, void* instance_ptr, app::UGCFileWriteStreamHandle_t write_handle)
    IL2CPP_REGISTER_METHOD(0x0161D600, bool, ISteamRemoteStorage_FileExists, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_file)
    IL2CPP_REGISTER_METHOD(0x0161D700, bool, ISteamRemoteStorage_FilePersisted, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_file)
    IL2CPP_REGISTER_METHOD(0x0161D800, int32_t, ISteamRemoteStorage_GetFileSize, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_file)
    IL2CPP_REGISTER_METHOD(0x0161D900, int64_t, ISteamRemoteStorage_GetFileTimestamp, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_file)
    IL2CPP_REGISTER_METHOD(
        0x0161DA00,
        app::ERemoteStoragePlatform__Enum,
        ISteamRemoteStorage_GetSyncPlatforms,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_file
    )
    IL2CPP_REGISTER_METHOD(0x0161DB00, int32_t, ISteamRemoteStorage_GetFileCount, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161DBA0, void*, ISteamRemoteStorage_GetFileNameAndSize, void* instance_ptr, int32_t i_file, int32_t* pn_file_size_in_bytes)
    IL2CPP_REGISTER_METHOD(0x0161DC50, bool, ISteamRemoteStorage_GetQuota, void* instance_ptr, uint64_t* pn_total_bytes, uint64_t* pu_available_bytes)
    IL2CPP_REGISTER_METHOD(0x0161DD10, bool, ISteamRemoteStorage_IsCloudEnabledForAccount, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161DDB0, bool, ISteamRemoteStorage_IsCloudEnabledForApp, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161DE50, void, ISteamRemoteStorage_SetCloudEnabledForApp, void* instance_ptr, bool b_enabled)
    IL2CPP_REGISTER_METHOD(0x0161DF00, uint64_t, ISteamRemoteStorage_UGCDownload, void* instance_ptr, app::UGCHandle_t h_content, uint32_t un_priority)
    IL2CPP_REGISTER_METHOD(
        0x0161DFB0,
        bool,
        ISteamRemoteStorage_GetUGCDownloadProgress,
        void* instance_ptr,
        app::UGCHandle_t h_content,
        int32_t* pn_bytes_downloaded,
        int32_t* pn_bytes_expected
    )
    IL2CPP_REGISTER_METHOD(
        0x0161E080,
        bool,
        ISteamRemoteStorage_GetUGCDetails,
        void* instance_ptr,
        app::UGCHandle_t h_content,
        app::AppId_t* pn_app_i_d,
        void** ppch_name,
        int32_t* pn_file_size_in_bytes,
        app::CSteamID* p_steam_i_d_owner
    )
    IL2CPP_REGISTER_METHOD(
        0x0161E170,
        int32_t,
        ISteamRemoteStorage_UGCRead,
        void* instance_ptr,
        app::UGCHandle_t h_content,
        app::Byte__Array* pv_data,
        int32_t cub_data_to_read,
        uint32_t c_offset,
        app::EUGCReadAction__Enum e_action
    )
    IL2CPP_REGISTER_METHOD(0x0161E240, int32_t, ISteamRemoteStorage_GetCachedUGCCount, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161E2E0, uint64_t, ISteamRemoteStorage_GetCachedUGCHandle, void* instance_ptr, int32_t i_cached_content)
    IL2CPP_REGISTER_METHOD(
        0x0161E390,
        uint64_t,
        ISteamRemoteStorage_PublishWorkshopFile,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_file,
        app::InteropHelp_UTF8StringHandle* pch_preview_file,
        app::AppId_t n_consumer_app_id,
        app::InteropHelp_UTF8StringHandle* pch_title,
        app::InteropHelp_UTF8StringHandle* pch_description,
        app::ERemoteStoragePublishedFileVisibility__Enum e_visibility,
        void* p_tags,
        app::EWorkshopFileType__Enum e_workshop_file_type
    )
    IL2CPP_REGISTER_METHOD(
        0x0161E620,
        uint64_t,
        ISteamRemoteStorage_CreatePublishedFileUpdateRequest,
        void* instance_ptr,
        app::PublishedFileId_t un_published_file_id
    )
    IL2CPP_REGISTER_METHOD(
        0x0161E6D0,
        bool,
        ISteamRemoteStorage_UpdatePublishedFileFile,
        void* instance_ptr,
        app::PublishedFileUpdateHandle_t update_handle,
        app::InteropHelp_UTF8StringHandle* pch_file
    )
    IL2CPP_REGISTER_METHOD(
        0x0161E7E0,
        bool,
        ISteamRemoteStorage_UpdatePublishedFilePreviewFile,
        void* instance_ptr,
        app::PublishedFileUpdateHandle_t update_handle,
        app::InteropHelp_UTF8StringHandle* pch_preview_file
    )
    IL2CPP_REGISTER_METHOD(
        0x0161E8F0,
        bool,
        ISteamRemoteStorage_UpdatePublishedFileTitle,
        void* instance_ptr,
        app::PublishedFileUpdateHandle_t update_handle,
        app::InteropHelp_UTF8StringHandle* pch_title
    )
    IL2CPP_REGISTER_METHOD(
        0x0161EA00,
        bool,
        ISteamRemoteStorage_UpdatePublishedFileDescription,
        void* instance_ptr,
        app::PublishedFileUpdateHandle_t update_handle,
        app::InteropHelp_UTF8StringHandle* pch_description
    )
    IL2CPP_REGISTER_METHOD(
        0x0161EB10,
        bool,
        ISteamRemoteStorage_UpdatePublishedFileVisibility,
        void* instance_ptr,
        app::PublishedFileUpdateHandle_t update_handle,
        app::ERemoteStoragePublishedFileVisibility__Enum e_visibility
    )
    IL2CPP_REGISTER_METHOD(
        0x0161EBD0,
        bool,
        ISteamRemoteStorage_UpdatePublishedFileTags,
        void* instance_ptr,
        app::PublishedFileUpdateHandle_t update_handle,
        void* p_tags
    )
    IL2CPP_REGISTER_METHOD(
        0x0161EC90,
        uint64_t,
        ISteamRemoteStorage_CommitPublishedFileUpdate,
        void* instance_ptr,
        app::PublishedFileUpdateHandle_t update_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x0161ED40,
        uint64_t,
        ISteamRemoteStorage_GetPublishedFileDetails,
        void* instance_ptr,
        app::PublishedFileId_t un_published_file_id,
        uint32_t un_max_seconds_old
    )
    IL2CPP_REGISTER_METHOD(0x0161EDF0, uint64_t, ISteamRemoteStorage_DeletePublishedFile, void* instance_ptr, app::PublishedFileId_t un_published_file_id)
    IL2CPP_REGISTER_METHOD(0x0161EEA0, uint64_t, ISteamRemoteStorage_EnumerateUserPublishedFiles, void* instance_ptr, uint32_t un_start_index)
    IL2CPP_REGISTER_METHOD(0x0161EF50, uint64_t, ISteamRemoteStorage_SubscribePublishedFile, void* instance_ptr, app::PublishedFileId_t un_published_file_id)
    IL2CPP_REGISTER_METHOD(0x0161F000, uint64_t, ISteamRemoteStorage_EnumerateUserSubscribedFiles, void* instance_ptr, uint32_t un_start_index)
    IL2CPP_REGISTER_METHOD(0x0161F0B0, uint64_t, ISteamRemoteStorage_UnsubscribePublishedFile, void* instance_ptr, app::PublishedFileId_t un_published_file_id)
    IL2CPP_REGISTER_METHOD(
        0x0161F160,
        bool,
        ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription,
        void* instance_ptr,
        app::PublishedFileUpdateHandle_t update_handle,
        app::InteropHelp_UTF8StringHandle* pch_change_description
    )
    IL2CPP_REGISTER_METHOD(
        0x0161F270,
        uint64_t,
        ISteamRemoteStorage_GetPublishedItemVoteDetails,
        void* instance_ptr,
        app::PublishedFileId_t un_published_file_id
    )
    IL2CPP_REGISTER_METHOD(
        0x0161F320,
        uint64_t,
        ISteamRemoteStorage_UpdateUserPublishedItemVote,
        void* instance_ptr,
        app::PublishedFileId_t un_published_file_id,
        bool b_vote_up
    )
    IL2CPP_REGISTER_METHOD(
        0x0161F3E0,
        uint64_t,
        ISteamRemoteStorage_GetUserPublishedItemVoteDetails,
        void* instance_ptr,
        app::PublishedFileId_t un_published_file_id
    )
    IL2CPP_REGISTER_METHOD(
        0x0161F490,
        uint64_t,
        ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles,
        void* instance_ptr,
        app::CSteamID steam_id,
        uint32_t un_start_index,
        void* p_required_tags,
        void* p_excluded_tags
    )
    IL2CPP_REGISTER_METHOD(
        0x0161F560,
        uint64_t,
        ISteamRemoteStorage_PublishVideo,
        void* instance_ptr,
        app::EWorkshopVideoProvider__Enum e_video_provider,
        app::InteropHelp_UTF8StringHandle* pch_video_account,
        app::InteropHelp_UTF8StringHandle* pch_video_identifier,
        app::InteropHelp_UTF8StringHandle* pch_preview_file,
        app::AppId_t n_consumer_app_id,
        app::InteropHelp_UTF8StringHandle* pch_title,
        app::InteropHelp_UTF8StringHandle* pch_description,
        app::ERemoteStoragePublishedFileVisibility__Enum e_visibility,
        void* p_tags
    )
    IL2CPP_REGISTER_METHOD(
        0x0161F830,
        uint64_t,
        ISteamRemoteStorage_SetUserPublishedFileAction,
        void* instance_ptr,
        app::PublishedFileId_t un_published_file_id,
        app::EWorkshopFileAction__Enum e_action
    )
    IL2CPP_REGISTER_METHOD(
        0x0161F8E0,
        uint64_t,
        ISteamRemoteStorage_EnumeratePublishedFilesByUserAction,
        void* instance_ptr,
        app::EWorkshopFileAction__Enum e_action,
        uint32_t un_start_index
    )
    IL2CPP_REGISTER_METHOD(
        0x0161F990,
        uint64_t,
        ISteamRemoteStorage_EnumeratePublishedWorkshopFiles,
        void* instance_ptr,
        app::EWorkshopEnumerationType__Enum e_enumeration_type,
        uint32_t un_start_index,
        uint32_t un_count,
        uint32_t un_days,
        void* p_tags,
        void* p_user_tags
    )
    IL2CPP_REGISTER_METHOD(
        0x0161FA60,
        uint64_t,
        ISteamRemoteStorage_UGCDownloadToLocation,
        void* instance_ptr,
        app::UGCHandle_t h_content,
        app::InteropHelp_UTF8StringHandle* pch_location,
        uint32_t un_priority
    )
    IL2CPP_REGISTER_METHOD(
        0x0161FB80,
        uint32_t,
        ISteamScreenshots_WriteScreenshot,
        void* instance_ptr,
        app::Byte__Array* pub_r_g_b,
        uint32_t cub_r_g_b,
        int32_t n_width,
        int32_t n_height
    )
    IL2CPP_REGISTER_METHOD(
        0x0161FC50,
        uint32_t,
        ISteamScreenshots_AddScreenshotToLibrary,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_filename,
        app::InteropHelp_UTF8StringHandle* pch_thumbnail_filename,
        int32_t n_width,
        int32_t n_height
    )
    IL2CPP_REGISTER_METHOD(0x0161FDD0, void, ISteamScreenshots_TriggerScreenshot, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x0161FE70, void, ISteamScreenshots_HookScreenshots, void* instance_ptr, bool b_hook)
    IL2CPP_REGISTER_METHOD(
        0x0161FF20,
        bool,
        ISteamScreenshots_SetLocation,
        void* instance_ptr,
        app::ScreenshotHandle h_screenshot,
        app::InteropHelp_UTF8StringHandle* pch_location
    )
    IL2CPP_REGISTER_METHOD(0x01620020, bool, ISteamScreenshots_TagUser, void* instance_ptr, app::ScreenshotHandle h_screenshot, app::CSteamID steam_i_d)
    IL2CPP_REGISTER_METHOD(
        0x016200E0,
        bool,
        ISteamScreenshots_TagPublishedFile,
        void* instance_ptr,
        app::ScreenshotHandle h_screenshot,
        app::PublishedFileId_t un_published_file_i_d
    )
    IL2CPP_REGISTER_METHOD(0x016201A0, bool, ISteamScreenshots_IsScreenshotsHooked, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01620240,
        uint32_t,
        ISteamScreenshots_AddVRScreenshotToLibrary,
        void* instance_ptr,
        app::EVRScreenshotType__Enum_1 e_type,
        app::InteropHelp_UTF8StringHandle* pch_filename,
        app::InteropHelp_UTF8StringHandle* pch_v_r_filename
    )
    IL2CPP_REGISTER_METHOD(
        0x016203B0,
        uint64_t,
        ISteamUGC_CreateQueryUserUGCRequest,
        void* instance_ptr,
        app::AccountID_t un_account_i_d,
        app::EUserUGCList__Enum e_list_type,
        app::EUGCMatchingUGCType__Enum e_matching_u_g_c_type,
        app::EUserUGCListSortOrder__Enum e_sort_order,
        app::AppId_t n_creator_app_i_d,
        app::AppId_t n_consumer_app_i_d,
        uint32_t un_page
    )
    IL2CPP_REGISTER_METHOD(
        0x01620480,
        uint64_t,
        ISteamUGC_CreateQueryAllUGCRequest,
        void* instance_ptr,
        app::EUGCQuery__Enum e_query_type,
        app::EUGCMatchingUGCType__Enum e_matchinge_matching_u_g_c_type_file_type,
        app::AppId_t n_creator_app_i_d,
        app::AppId_t n_consumer_app_i_d,
        uint32_t un_page
    )
    IL2CPP_REGISTER_METHOD(
        0x01620550,
        uint64_t,
        ISteamUGC_CreateQueryAllUGCRequest0,
        void* instance_ptr,
        app::EUGCQuery__Enum e_query_type,
        app::EUGCMatchingUGCType__Enum e_matchinge_matching_u_g_c_type_file_type,
        app::AppId_t n_creator_app_i_d,
        app::AppId_t n_consumer_app_i_d,
        app::InteropHelp_UTF8StringHandle* pch_cursor
    )
    IL2CPP_REGISTER_METHOD(
        0x016206A0,
        uint64_t,
        ISteamUGC_CreateQueryUGCDetailsRequest,
        void* instance_ptr,
        app::PublishedFileId_t__Array* pvec_published_file_i_d,
        uint32_t un_num_published_file_i_ds
    )
    IL2CPP_REGISTER_METHOD(0x01620760, uint64_t, ISteamUGC_SendQueryUGCRequest, void* instance_ptr, app::UGCQueryHandle_t handle)
    IL2CPP_REGISTER_METHOD(
        0x01620810,
        bool,
        ISteamUGC_GetQueryUGCResult,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        uint32_t index,
        app::SteamUGCDetails_t* p_details
    )
    IL2CPP_REGISTER_METHOD(
        0x016209A0,
        bool,
        ISteamUGC_GetQueryUGCPreviewURL,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        uint32_t index,
        void* pch_u_r_l,
        uint32_t cch_u_r_l_size
    )
    IL2CPP_REGISTER_METHOD(
        0x01620A80,
        bool,
        ISteamUGC_GetQueryUGCMetadata,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        uint32_t index,
        void* pch_metadata,
        uint32_t cch_metadatasize
    )
    IL2CPP_REGISTER_METHOD(
        0x01620B60,
        bool,
        ISteamUGC_GetQueryUGCChildren,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        uint32_t index,
        app::PublishedFileId_t__Array* pvec_published_file_i_d,
        uint32_t c_max_entries
    )
    IL2CPP_REGISTER_METHOD(
        0x01620C40,
        bool,
        ISteamUGC_GetQueryUGCStatistic,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        uint32_t index,
        app::EItemStatistic__Enum e_stat_type,
        uint64_t* p_stat_value
    )
    IL2CPP_REGISTER_METHOD(0x01620D20, uint32_t, ISteamUGC_GetQueryUGCNumAdditionalPreviews, void* instance_ptr, app::UGCQueryHandle_t handle, uint32_t index)
    IL2CPP_REGISTER_METHOD(
        0x01620DD0,
        bool,
        ISteamUGC_GetQueryUGCAdditionalPreview,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        uint32_t index,
        uint32_t preview_index,
        void* pch_u_r_l_or_video_i_d,
        uint32_t cch_u_r_l_size,
        void* pch_original_file_name,
        uint32_t cch_original_file_name_size,
        app::EItemPreviewType__Enum* p_preview_type
    )
    IL2CPP_REGISTER_METHOD(0x01620EE0, uint32_t, ISteamUGC_GetQueryUGCNumKeyValueTags, void* instance_ptr, app::UGCQueryHandle_t handle, uint32_t index)
    IL2CPP_REGISTER_METHOD(
        0x01620F90,
        bool,
        ISteamUGC_GetQueryUGCKeyValueTag,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        uint32_t index,
        uint32_t key_value_tag_index,
        void* pch_key,
        uint32_t cch_key_size,
        void* pch_value,
        uint32_t cch_value_size
    )
    IL2CPP_REGISTER_METHOD(
        0x01621090,
        bool,
        ISteamUGC_GetQueryUGCKeyValueTag0,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        uint32_t index,
        app::InteropHelp_UTF8StringHandle* pch_key,
        void* pch_value,
        uint32_t cch_value_size
    )
    IL2CPP_REGISTER_METHOD(0x016211C0, bool, ISteamUGC_ReleaseQueryUGCRequest, void* instance_ptr, app::UGCQueryHandle_t handle)
    IL2CPP_REGISTER_METHOD(
        0x01621270,
        bool,
        ISteamUGC_AddRequiredTag,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        app::InteropHelp_UTF8StringHandle* p_tag_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01621380,
        bool,
        ISteamUGC_AddExcludedTag,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        app::InteropHelp_UTF8StringHandle* p_tag_name
    )
    IL2CPP_REGISTER_METHOD(0x01621490, bool, ISteamUGC_SetReturnOnlyIDs, void* instance_ptr, app::UGCQueryHandle_t handle, bool b_return_only_i_ds)
    IL2CPP_REGISTER_METHOD(0x01621550, bool, ISteamUGC_SetReturnKeyValueTags, void* instance_ptr, app::UGCQueryHandle_t handle, bool b_return_key_value_tags)
    IL2CPP_REGISTER_METHOD(
        0x01621610,
        bool,
        ISteamUGC_SetReturnLongDescription,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        bool b_return_long_description
    )
    IL2CPP_REGISTER_METHOD(0x016216D0, bool, ISteamUGC_SetReturnMetadata, void* instance_ptr, app::UGCQueryHandle_t handle, bool b_return_metadata)
    IL2CPP_REGISTER_METHOD(0x01621790, bool, ISteamUGC_SetReturnChildren, void* instance_ptr, app::UGCQueryHandle_t handle, bool b_return_children)
    IL2CPP_REGISTER_METHOD(
        0x01621850,
        bool,
        ISteamUGC_SetReturnAdditionalPreviews,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        bool b_return_additional_previews
    )
    IL2CPP_REGISTER_METHOD(0x01621910, bool, ISteamUGC_SetReturnTotalOnly, void* instance_ptr, app::UGCQueryHandle_t handle, bool b_return_total_only)
    IL2CPP_REGISTER_METHOD(0x016219D0, bool, ISteamUGC_SetReturnPlaytimeStats, void* instance_ptr, app::UGCQueryHandle_t handle, uint32_t un_days)
    IL2CPP_REGISTER_METHOD(
        0x01621A90,
        bool,
        ISteamUGC_SetLanguage,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        app::InteropHelp_UTF8StringHandle* pch_language
    )
    IL2CPP_REGISTER_METHOD(0x01621BA0, bool, ISteamUGC_SetAllowCachedResponse, void* instance_ptr, app::UGCQueryHandle_t handle, uint32_t un_max_age_seconds)
    IL2CPP_REGISTER_METHOD(
        0x01621C60,
        bool,
        ISteamUGC_SetCloudFileNameFilter,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        app::InteropHelp_UTF8StringHandle* p_match_cloud_file_name
    )
    IL2CPP_REGISTER_METHOD(0x01621D70, bool, ISteamUGC_SetMatchAnyTag, void* instance_ptr, app::UGCQueryHandle_t handle, bool b_match_any_tag)
    IL2CPP_REGISTER_METHOD(
        0x01621E30,
        bool,
        ISteamUGC_SetSearchText,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        app::InteropHelp_UTF8StringHandle* p_search_text
    )
    IL2CPP_REGISTER_METHOD(0x01621F40, bool, ISteamUGC_SetRankedByTrendDays, void* instance_ptr, app::UGCQueryHandle_t handle, uint32_t un_days)
    IL2CPP_REGISTER_METHOD(
        0x01622000,
        bool,
        ISteamUGC_AddRequiredKeyValueTag,
        void* instance_ptr,
        app::UGCQueryHandle_t handle,
        app::InteropHelp_UTF8StringHandle* p_key,
        app::InteropHelp_UTF8StringHandle* p_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01622180,
        uint64_t,
        ISteamUGC_RequestUGCDetails,
        void* instance_ptr,
        app::PublishedFileId_t n_published_file_i_d,
        uint32_t un_max_age_seconds
    )
    IL2CPP_REGISTER_METHOD(
        0x01622230,
        uint64_t,
        ISteamUGC_CreateItem,
        void* instance_ptr,
        app::AppId_t n_consumer_app_id,
        app::EWorkshopFileType__Enum e_file_type
    )
    IL2CPP_REGISTER_METHOD(
        0x016222E0,
        uint64_t,
        ISteamUGC_StartItemUpdate,
        void* instance_ptr,
        app::AppId_t n_consumer_app_id,
        app::PublishedFileId_t n_published_file_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x01622390,
        bool,
        ISteamUGC_SetItemTitle,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::InteropHelp_UTF8StringHandle* pch_title
    )
    IL2CPP_REGISTER_METHOD(
        0x016224A0,
        bool,
        ISteamUGC_SetItemDescription,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::InteropHelp_UTF8StringHandle* pch_description
    )
    IL2CPP_REGISTER_METHOD(
        0x016225B0,
        bool,
        ISteamUGC_SetItemUpdateLanguage,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::InteropHelp_UTF8StringHandle* pch_language
    )
    IL2CPP_REGISTER_METHOD(
        0x016226C0,
        bool,
        ISteamUGC_SetItemMetadata,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::InteropHelp_UTF8StringHandle* pch_meta_data
    )
    IL2CPP_REGISTER_METHOD(
        0x016227D0,
        bool,
        ISteamUGC_SetItemVisibility,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::ERemoteStoragePublishedFileVisibility__Enum e_visibility
    )
    IL2CPP_REGISTER_METHOD(0x01622890, bool, ISteamUGC_SetItemTags, void* instance_ptr, app::UGCUpdateHandle_t update_handle, void* p_tags)
    IL2CPP_REGISTER_METHOD(
        0x01622950,
        bool,
        ISteamUGC_SetItemContent,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::InteropHelp_UTF8StringHandle* psz_content_folder
    )
    IL2CPP_REGISTER_METHOD(
        0x01622A60,
        bool,
        ISteamUGC_SetItemPreview,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::InteropHelp_UTF8StringHandle* psz_preview_file
    )
    IL2CPP_REGISTER_METHOD(0x01622B70, bool, ISteamUGC_SetAllowLegacyUpload, void* instance_ptr, app::UGCUpdateHandle_t handle, bool b_allow_legacy_upload)
    IL2CPP_REGISTER_METHOD(0x01622C30, bool, ISteamUGC_RemoveAllItemKeyValueTags, void* instance_ptr, app::UGCUpdateHandle_t handle)
    IL2CPP_REGISTER_METHOD(
        0x01622CE0,
        bool,
        ISteamUGC_RemoveItemKeyValueTags,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::InteropHelp_UTF8StringHandle* pch_key
    )
    IL2CPP_REGISTER_METHOD(
        0x01622DF0,
        bool,
        ISteamUGC_AddItemKeyValueTag,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::InteropHelp_UTF8StringHandle* pch_key,
        app::InteropHelp_UTF8StringHandle* pch_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01622F70,
        bool,
        ISteamUGC_AddItemPreviewFile,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::InteropHelp_UTF8StringHandle* psz_preview_file,
        app::EItemPreviewType__Enum type
    )
    IL2CPP_REGISTER_METHOD(
        0x01623090,
        bool,
        ISteamUGC_AddItemPreviewVideo,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::InteropHelp_UTF8StringHandle* psz_video_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x016231A0,
        bool,
        ISteamUGC_UpdateItemPreviewFile,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        uint32_t index,
        app::InteropHelp_UTF8StringHandle* psz_preview_file
    )
    IL2CPP_REGISTER_METHOD(
        0x016232C0,
        bool,
        ISteamUGC_UpdateItemPreviewVideo,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        uint32_t index,
        app::InteropHelp_UTF8StringHandle* psz_video_i_d
    )
    IL2CPP_REGISTER_METHOD(0x016233E0, bool, ISteamUGC_RemoveItemPreview, void* instance_ptr, app::UGCUpdateHandle_t handle, uint32_t index)
    IL2CPP_REGISTER_METHOD(
        0x016234A0,
        uint64_t,
        ISteamUGC_SubmitItemUpdate,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        app::InteropHelp_UTF8StringHandle* pch_change_note
    )
    IL2CPP_REGISTER_METHOD(
        0x016235A0,
        app::EItemUpdateStatus__Enum,
        ISteamUGC_GetItemUpdateProgress,
        void* instance_ptr,
        app::UGCUpdateHandle_t handle,
        uint64_t* pun_bytes_processed,
        uint64_t* pun_bytes_total
    )
    IL2CPP_REGISTER_METHOD(0x01623660, uint64_t, ISteamUGC_SetUserItemVote, void* instance_ptr, app::PublishedFileId_t n_published_file_i_d, bool b_vote_up)
    IL2CPP_REGISTER_METHOD(0x01623720, uint64_t, ISteamUGC_GetUserItemVote, void* instance_ptr, app::PublishedFileId_t n_published_file_i_d)
    IL2CPP_REGISTER_METHOD(
        0x016237D0,
        uint64_t,
        ISteamUGC_AddItemToFavorites,
        void* instance_ptr,
        app::AppId_t n_app_id,
        app::PublishedFileId_t n_published_file_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x01623880,
        uint64_t,
        ISteamUGC_RemoveItemFromFavorites,
        void* instance_ptr,
        app::AppId_t n_app_id,
        app::PublishedFileId_t n_published_file_i_d
    )
    IL2CPP_REGISTER_METHOD(0x01623930, uint64_t, ISteamUGC_SubscribeItem, void* instance_ptr, app::PublishedFileId_t n_published_file_i_d)
    IL2CPP_REGISTER_METHOD(0x016239E0, uint64_t, ISteamUGC_UnsubscribeItem, void* instance_ptr, app::PublishedFileId_t n_published_file_i_d)
    IL2CPP_REGISTER_METHOD(0x01623A90, uint32_t, ISteamUGC_GetNumSubscribedItems, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01623B30,
        uint32_t,
        ISteamUGC_GetSubscribedItems,
        void* instance_ptr,
        app::PublishedFileId_t__Array* pvec_published_file_i_d,
        uint32_t c_max_entries
    )
    IL2CPP_REGISTER_METHOD(0x01623BF0, uint32_t, ISteamUGC_GetItemState, void* instance_ptr, app::PublishedFileId_t n_published_file_i_d)
    IL2CPP_REGISTER_METHOD(
        0x01623CA0,
        bool,
        ISteamUGC_GetItemInstallInfo,
        void* instance_ptr,
        app::PublishedFileId_t n_published_file_i_d,
        uint64_t* pun_size_on_disk,
        void* pch_folder,
        uint32_t cch_folder_size,
        uint32_t* pun_time_stamp
    )
    IL2CPP_REGISTER_METHOD(
        0x01623D90,
        bool,
        ISteamUGC_GetItemDownloadInfo,
        void* instance_ptr,
        app::PublishedFileId_t n_published_file_i_d,
        uint64_t* pun_bytes_downloaded,
        uint64_t* pun_bytes_total
    )
    IL2CPP_REGISTER_METHOD(0x01623E60, bool, ISteamUGC_DownloadItem, void* instance_ptr, app::PublishedFileId_t n_published_file_i_d, bool b_high_priority)
    IL2CPP_REGISTER_METHOD(
        0x01623F20,
        bool,
        ISteamUGC_BInitWorkshopForGameServer,
        void* instance_ptr,
        app::DepotId_t un_workshop_depot_i_d,
        app::InteropHelp_UTF8StringHandle* psz_folder
    )
    IL2CPP_REGISTER_METHOD(0x01624020, void, ISteamUGC_SuspendDownloads, void* instance_ptr, bool b_suspend)
    IL2CPP_REGISTER_METHOD(
        0x016240D0,
        uint64_t,
        ISteamUGC_StartPlaytimeTracking,
        void* instance_ptr,
        app::PublishedFileId_t__Array* pvec_published_file_i_d,
        uint32_t un_num_published_file_i_ds
    )
    IL2CPP_REGISTER_METHOD(
        0x01624190,
        uint64_t,
        ISteamUGC_StopPlaytimeTracking,
        void* instance_ptr,
        app::PublishedFileId_t__Array* pvec_published_file_i_d,
        uint32_t un_num_published_file_i_ds
    )
    IL2CPP_REGISTER_METHOD(0x01624250, uint64_t, ISteamUGC_StopPlaytimeTrackingForAllItems, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x016242F0,
        uint64_t,
        ISteamUGC_AddDependency,
        void* instance_ptr,
        app::PublishedFileId_t n_parent_published_file_i_d,
        app::PublishedFileId_t n_child_published_file_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x016243A0,
        uint64_t,
        ISteamUGC_RemoveDependency,
        void* instance_ptr,
        app::PublishedFileId_t n_parent_published_file_i_d,
        app::PublishedFileId_t n_child_published_file_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x01624450,
        uint64_t,
        ISteamUGC_AddAppDependency,
        void* instance_ptr,
        app::PublishedFileId_t n_published_file_i_d,
        app::AppId_t n_app_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x01624500,
        uint64_t,
        ISteamUGC_RemoveAppDependency,
        void* instance_ptr,
        app::PublishedFileId_t n_published_file_i_d,
        app::AppId_t n_app_i_d
    )
    IL2CPP_REGISTER_METHOD(0x016245B0, uint64_t, ISteamUGC_GetAppDependencies, void* instance_ptr, app::PublishedFileId_t n_published_file_i_d)
    IL2CPP_REGISTER_METHOD(0x01624660, uint64_t, ISteamUGC_DeleteItem, void* instance_ptr, app::PublishedFileId_t n_published_file_i_d)
    IL2CPP_REGISTER_METHOD(0x01624710, int32_t, ISteamUser_GetHSteamUser, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016247B0, bool, ISteamUser_BLoggedOn, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01624850, uint64_t, ISteamUser_GetSteamID, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x016248F0,
        int32_t,
        ISteamUser_InitiateGameConnection,
        void* instance_ptr,
        app::Byte__Array* p_auth_blob,
        int32_t cb_max_auth_blob,
        app::CSteamID steam_i_d_game_server,
        uint32_t un_i_p_server,
        uint16_t us_port_server,
        bool b_secure
    )
    IL2CPP_REGISTER_METHOD(0x016249E0, void, ISteamUser_TerminateGameConnection, void* instance_ptr, uint32_t un_i_p_server, uint16_t us_port_server)
    IL2CPP_REGISTER_METHOD(
        0x01624A90,
        void,
        ISteamUser_TrackAppUsageEvent,
        void* instance_ptr,
        app::CGameID game_i_d,
        int32_t e_app_usage_event,
        app::InteropHelp_UTF8StringHandle* pch_extra_info
    )
    IL2CPP_REGISTER_METHOD(0x01624BA0, bool, ISteamUser_GetUserDataFolder, void* instance_ptr, void* pch_buffer, int32_t cub_buffer)
    IL2CPP_REGISTER_METHOD(0x01624C60, void, ISteamUser_StartVoiceRecording, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01624D00, void, ISteamUser_StopVoiceRecording, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01624DA0,
        app::EVoiceResult__Enum,
        ISteamUser_GetAvailableVoice,
        void* instance_ptr,
        uint32_t* pcb_compressed,
        void* pcb_uncompressed__deprecated,
        uint32_t n_uncompressed_voice_desired_sample_rate__deprecated
    )
    IL2CPP_REGISTER_METHOD(
        0x01624E60,
        app::EVoiceResult__Enum,
        ISteamUser_GetVoice,
        void* instance_ptr,
        bool b_want_compressed,
        app::Byte__Array* p_dest_buffer,
        uint32_t cb_dest_buffer_size,
        uint32_t* n_bytes_written,
        bool b_want_uncompressed__deprecated,
        void* p_uncompressed_dest_buffer__deprecated,
        uint32_t cb_uncompressed_dest_buffer_size__deprecated,
        void* n_uncompress_bytes_written__deprecated,
        uint32_t n_uncompressed_voice_desired_sample_rate__deprecated
    )
    IL2CPP_REGISTER_METHOD(
        0x01624F50,
        app::EVoiceResult__Enum,
        ISteamUser_DecompressVoice,
        void* instance_ptr,
        app::Byte__Array* p_compressed,
        uint32_t cb_compressed,
        app::Byte__Array* p_dest_buffer,
        uint32_t cb_dest_buffer_size,
        uint32_t* n_bytes_written,
        uint32_t n_desired_sample_rate
    )
    IL2CPP_REGISTER_METHOD(0x01625030, uint32_t, ISteamUser_GetVoiceOptimalSampleRate, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x016250D0,
        uint32_t,
        ISteamUser_GetAuthSessionTicket,
        void* instance_ptr,
        app::Byte__Array* p_ticket,
        int32_t cb_max_ticket,
        uint32_t* pcb_ticket
    )
    IL2CPP_REGISTER_METHOD(
        0x016251A0,
        app::EBeginAuthSessionResult__Enum,
        ISteamUser_BeginAuthSession,
        void* instance_ptr,
        app::Byte__Array* p_auth_ticket,
        int32_t cb_auth_ticket,
        app::CSteamID steam_i_d
    )
    IL2CPP_REGISTER_METHOD(0x01625270, void, ISteamUser_EndAuthSession, void* instance_ptr, app::CSteamID steam_i_d)
    IL2CPP_REGISTER_METHOD(0x01625320, void, ISteamUser_CancelAuthTicket, void* instance_ptr, app::HAuthTicket h_auth_ticket)
    IL2CPP_REGISTER_METHOD(
        0x016253D0,
        app::EUserHasLicenseForAppResult__Enum,
        ISteamUser_UserHasLicenseForApp,
        void* instance_ptr,
        app::CSteamID steam_i_d,
        app::AppId_t app_i_d
    )
    IL2CPP_REGISTER_METHOD(0x01625480, bool, ISteamUser_BIsBehindNAT, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01625520,
        void,
        ISteamUser_AdvertiseGame,
        void* instance_ptr,
        app::CSteamID steam_i_d_game_server,
        uint32_t un_i_p_server,
        uint16_t us_port_server
    )
    IL2CPP_REGISTER_METHOD(
        0x016255F0,
        uint64_t,
        ISteamUser_RequestEncryptedAppTicket,
        void* instance_ptr,
        app::Byte__Array* p_data_to_include,
        int32_t cb_data_to_include
    )
    IL2CPP_REGISTER_METHOD(
        0x016256B0,
        bool,
        ISteamUser_GetEncryptedAppTicket,
        void* instance_ptr,
        app::Byte__Array* p_ticket,
        int32_t cb_max_ticket,
        uint32_t* pcb_ticket
    )
    IL2CPP_REGISTER_METHOD(0x01625780, int32_t, ISteamUser_GetGameBadgeLevel, void* instance_ptr, int32_t n_series, bool b_foil)
    IL2CPP_REGISTER_METHOD(0x01625830, int32_t, ISteamUser_GetPlayerSteamLevel, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016258D0, uint64_t, ISteamUser_RequestStoreAuthURL, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_redirect_u_r_l)
    IL2CPP_REGISTER_METHOD(0x016259D0, bool, ISteamUser_BIsPhoneVerified, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01625A70, bool, ISteamUser_BIsTwoFactorEnabled, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01625B10, bool, ISteamUser_BIsPhoneIdentifying, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01625BB0, bool, ISteamUser_BIsPhoneRequiringVerification, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01625C50, uint64_t, ISteamUser_GetMarketEligibility, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01625CF0, uint64_t, ISteamUser_GetDurationControl, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01625D90, bool, ISteamUserStats_RequestCurrentStats, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01625E30, bool, ISteamUserStats_GetStat, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_name, int32_t* p_data)
    IL2CPP_REGISTER_METHOD(0x01625F40, bool, ISteamUserStats_GetStat0, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_name, float* p_data)
    IL2CPP_REGISTER_METHOD(0x01626050, bool, ISteamUserStats_SetStat, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_name, int32_t n_data)
    IL2CPP_REGISTER_METHOD(0x01626160, bool, ISteamUserStats_SetStat0, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_name, float f_data)
    IL2CPP_REGISTER_METHOD(
        0x01626270,
        bool,
        ISteamUserStats_UpdateAvgRateStat,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_name,
        float fl_count_this_session,
        double d_session_length
    )
    IL2CPP_REGISTER_METHOD(0x01626390, bool, ISteamUserStats_GetAchievement, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_name, bool* pb_achieved)
    IL2CPP_REGISTER_METHOD(0x016264B0, bool, ISteamUserStats_SetAchievement, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_name)
    IL2CPP_REGISTER_METHOD(0x016265B0, bool, ISteamUserStats_ClearAchievement, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_name)
    IL2CPP_REGISTER_METHOD(
        0x016266B0,
        bool,
        ISteamUserStats_GetAchievementAndUnlockTime,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_name,
        bool* pb_achieved,
        uint32_t* pun_unlock_time
    )
    IL2CPP_REGISTER_METHOD(0x016267E0, bool, ISteamUserStats_StoreStats, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01626880, int32_t, ISteamUserStats_GetAchievementIcon, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_name)
    IL2CPP_REGISTER_METHOD(
        0x01626980,
        void*,
        ISteamUserStats_GetAchievementDisplayAttribute,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_name,
        app::InteropHelp_UTF8StringHandle* pch_key
    )
    IL2CPP_REGISTER_METHOD(
        0x01626AF0,
        bool,
        ISteamUserStats_IndicateAchievementProgress,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_name,
        uint32_t n_cur_progress,
        uint32_t n_max_progress
    )
    IL2CPP_REGISTER_METHOD(0x01626C10, uint32_t, ISteamUserStats_GetNumAchievements, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01626CB0, void*, ISteamUserStats_GetAchievementName, void* instance_ptr, uint32_t i_achievement)
    IL2CPP_REGISTER_METHOD(0x01626D60, uint64_t, ISteamUserStats_RequestUserStats, void* instance_ptr, app::CSteamID steam_i_d_user)
    IL2CPP_REGISTER_METHOD(
        0x01626E10,
        bool,
        ISteamUserStats_GetUserStat,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name,
        int32_t* p_data
    )
    IL2CPP_REGISTER_METHOD(
        0x01626F30,
        bool,
        ISteamUserStats_GetUserStat0,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name,
        float* p_data
    )
    IL2CPP_REGISTER_METHOD(
        0x01627050,
        bool,
        ISteamUserStats_GetUserAchievement,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name,
        bool* pb_achieved
    )
    IL2CPP_REGISTER_METHOD(
        0x01627180,
        bool,
        ISteamUserStats_GetUserAchievementAndUnlockTime,
        void* instance_ptr,
        app::CSteamID steam_i_d_user,
        app::InteropHelp_UTF8StringHandle* pch_name,
        bool* pb_achieved,
        uint32_t* pun_unlock_time
    )
    IL2CPP_REGISTER_METHOD(0x016272C0, bool, ISteamUserStats_ResetAllStats, void* instance_ptr, bool b_achievements_too)
    IL2CPP_REGISTER_METHOD(
        0x01627370,
        uint64_t,
        ISteamUserStats_FindOrCreateLeaderboard,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_leaderboard_name,
        app::ELeaderboardSortMethod__Enum e_leaderboard_sort_method,
        app::ELeaderboardDisplayType__Enum e_leaderboard_display_type
    )
    IL2CPP_REGISTER_METHOD(0x01627490, uint64_t, ISteamUserStats_FindLeaderboard, void* instance_ptr, app::InteropHelp_UTF8StringHandle* pch_leaderboard_name)
    IL2CPP_REGISTER_METHOD(0x01627590, void*, ISteamUserStats_GetLeaderboardName, void* instance_ptr, app::SteamLeaderboard_t h_steam_leaderboard)
    IL2CPP_REGISTER_METHOD(0x01627640, int32_t, ISteamUserStats_GetLeaderboardEntryCount, void* instance_ptr, app::SteamLeaderboard_t h_steam_leaderboard)
    IL2CPP_REGISTER_METHOD(
        0x016276F0,
        app::ELeaderboardSortMethod__Enum,
        ISteamUserStats_GetLeaderboardSortMethod,
        void* instance_ptr,
        app::SteamLeaderboard_t h_steam_leaderboard
    )
    IL2CPP_REGISTER_METHOD(
        0x016277A0,
        app::ELeaderboardDisplayType__Enum,
        ISteamUserStats_GetLeaderboardDisplayType,
        void* instance_ptr,
        app::SteamLeaderboard_t h_steam_leaderboard
    )
    IL2CPP_REGISTER_METHOD(
        0x01627850,
        uint64_t,
        ISteamUserStats_DownloadLeaderboardEntries,
        void* instance_ptr,
        app::SteamLeaderboard_t h_steam_leaderboard,
        app::ELeaderboardDataRequest__Enum e_leaderboard_data_request,
        int32_t n_range_start,
        int32_t n_range_end
    )
    IL2CPP_REGISTER_METHOD(
        0x01627920,
        uint64_t,
        ISteamUserStats_DownloadLeaderboardEntriesForUsers,
        void* instance_ptr,
        app::SteamLeaderboard_t h_steam_leaderboard,
        app::CSteamID__Array* prg_users,
        int32_t c_users
    )
    IL2CPP_REGISTER_METHOD(
        0x016279F0,
        bool,
        ISteamUserStats_GetDownloadedLeaderboardEntry,
        void* instance_ptr,
        app::SteamLeaderboardEntries_t h_steam_leaderboard_entries,
        int32_t index,
        app::LeaderboardEntry_t* p_leaderboard_entry,
        app::Int32__Array* p_details,
        int32_t c_details_max
    )
    IL2CPP_REGISTER_METHOD(
        0x01627AE0,
        uint64_t,
        ISteamUserStats_UploadLeaderboardScore,
        void* instance_ptr,
        app::SteamLeaderboard_t h_steam_leaderboard,
        app::ELeaderboardUploadScoreMethod__Enum e_leaderboard_upload_score_method,
        int32_t n_score,
        app::Int32__Array* p_score_details,
        int32_t c_score_details_count
    )
    IL2CPP_REGISTER_METHOD(
        0x01627BD0,
        uint64_t,
        ISteamUserStats_AttachLeaderboardUGC,
        void* instance_ptr,
        app::SteamLeaderboard_t h_steam_leaderboard,
        app::UGCHandle_t h_u_g_c
    )
    IL2CPP_REGISTER_METHOD(0x01627C80, uint64_t, ISteamUserStats_GetNumberOfCurrentPlayers, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01627D20, uint64_t, ISteamUserStats_RequestGlobalAchievementPercentages, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01627DC0,
        int32_t,
        ISteamUserStats_GetMostAchievedAchievementInfo,
        void* instance_ptr,
        void* pch_name,
        uint32_t un_name_buf_len,
        float* pfl_percent,
        bool* pb_achieved
    )
    IL2CPP_REGISTER_METHOD(
        0x01627EB0,
        int32_t,
        ISteamUserStats_GetNextMostAchievedAchievementInfo,
        void* instance_ptr,
        int32_t i_iterator_previous,
        void* pch_name,
        uint32_t un_name_buf_len,
        float* pfl_percent,
        bool* pb_achieved
    )
    IL2CPP_REGISTER_METHOD(
        0x01627FB0,
        bool,
        ISteamUserStats_GetAchievementAchievedPercent,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_name,
        float* pfl_percent
    )
    IL2CPP_REGISTER_METHOD(0x016280C0, uint64_t, ISteamUserStats_RequestGlobalStats, void* instance_ptr, int32_t n_history_days)
    IL2CPP_REGISTER_METHOD(
        0x01628170,
        bool,
        ISteamUserStats_GetGlobalStat,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_stat_name,
        int64_t* p_data
    )
    IL2CPP_REGISTER_METHOD(
        0x01628280,
        bool,
        ISteamUserStats_GetGlobalStat0,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_stat_name,
        double* p_data
    )
    IL2CPP_REGISTER_METHOD(
        0x01628390,
        int32_t,
        ISteamUserStats_GetGlobalStatHistory,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_stat_name,
        app::Int64__Array* p_data,
        uint32_t cub_data
    )
    IL2CPP_REGISTER_METHOD(
        0x016284B0,
        int32_t,
        ISteamUserStats_GetGlobalStatHistory0,
        void* instance_ptr,
        app::InteropHelp_UTF8StringHandle* pch_stat_name,
        app::Double__Array* p_data,
        uint32_t cub_data
    )
    IL2CPP_REGISTER_METHOD(0x016285D0, uint32_t, ISteamUtils_GetSecondsSinceAppActive, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01628670, uint32_t, ISteamUtils_GetSecondsSinceComputerActive, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01628710, app::EUniverse__Enum, ISteamUtils_GetConnectedUniverse, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016287B0, uint32_t, ISteamUtils_GetServerRealTime, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01628850, void*, ISteamUtils_GetIPCountry, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016288F0, bool, ISteamUtils_GetImageSize, void* instance_ptr, int32_t i_image, uint32_t* pn_width, uint32_t* pn_height)
    IL2CPP_REGISTER_METHOD(
        0x016289C0,
        bool,
        ISteamUtils_GetImageRGBA,
        void* instance_ptr,
        int32_t i_image,
        app::Byte__Array* pub_dest,
        int32_t n_dest_buffer_size
    )
    IL2CPP_REGISTER_METHOD(0x01628A90, bool, ISteamUtils_GetCSERIPPort, void* instance_ptr, uint32_t* un_i_p, uint16_t* us_port)
    IL2CPP_REGISTER_METHOD(0x01628B50, uint8_t, ISteamUtils_GetCurrentBatteryPower, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01628BF0, uint32_t, ISteamUtils_GetAppID, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01628C90,
        void,
        ISteamUtils_SetOverlayNotificationPosition,
        void* instance_ptr,
        app::ENotificationPosition__Enum e_notification_position
    )
    IL2CPP_REGISTER_METHOD(0x01628D40, bool, ISteamUtils_IsAPICallCompleted, void* instance_ptr, app::SteamAPICall_t h_steam_a_p_i_call, bool* pb_failed)
    IL2CPP_REGISTER_METHOD(
        0x01628E10,
        app::ESteamAPICallFailure__Enum,
        ISteamUtils_GetAPICallFailureReason,
        void* instance_ptr,
        app::SteamAPICall_t h_steam_a_p_i_call
    )
    IL2CPP_REGISTER_METHOD(
        0x01628EC0,
        bool,
        ISteamUtils_GetAPICallResult,
        void* instance_ptr,
        app::SteamAPICall_t h_steam_a_p_i_call,
        void* p_callback,
        int32_t cub_callback,
        int32_t i_callback_expected,
        bool* pb_failed
    )
    IL2CPP_REGISTER_METHOD(0x01628FC0, uint32_t, ISteamUtils_GetIPCCallCount, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01629060, void, ISteamUtils_SetWarningMessageHook, void* instance_ptr, app::SteamAPIWarningMessageHook_t* p_function)
    IL2CPP_REGISTER_METHOD(0x01629110, bool, ISteamUtils_IsOverlayEnabled, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016291B0, bool, ISteamUtils_BOverlayNeedsPresent, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01629250, uint64_t, ISteamUtils_CheckFileSignature, void* instance_ptr, app::InteropHelp_UTF8StringHandle* sz_file_name)
    IL2CPP_REGISTER_METHOD(
        0x01629350,
        bool,
        ISteamUtils_ShowGamepadTextInput,
        void* instance_ptr,
        app::EGamepadTextInputMode__Enum e_input_mode,
        app::EGamepadTextInputLineMode__Enum e_line_input_mode,
        app::InteropHelp_UTF8StringHandle* pch_description,
        uint32_t un_char_max,
        app::InteropHelp_UTF8StringHandle* pch_existing_text
    )
    IL2CPP_REGISTER_METHOD(0x016294F0, uint32_t, ISteamUtils_GetEnteredGamepadTextLength, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01629590, bool, ISteamUtils_GetEnteredGamepadTextInput, void* instance_ptr, void* pch_text, uint32_t cch_text)
    IL2CPP_REGISTER_METHOD(0x01629650, void*, ISteamUtils_GetSteamUILanguage, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016296F0, bool, ISteamUtils_IsSteamRunningInVR, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01629790, void, ISteamUtils_SetOverlayNotificationInset, void* instance_ptr, int32_t n_horizontal_inset, int32_t n_vertical_inset)
    IL2CPP_REGISTER_METHOD(0x01629840, bool, ISteamUtils_IsSteamInBigPictureMode, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x016298E0, void, ISteamUtils_StartVRDashboard, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01629980, bool, ISteamUtils_IsVRHeadsetStreamingEnabled, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01629A20, void, ISteamUtils_SetVRHeadsetStreamingEnabled, void* instance_ptr, bool b_enabled)
    IL2CPP_REGISTER_METHOD(0x01629AD0, bool, ISteamUtils_IsSteamChinaLauncher, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(0x01629B70, bool, ISteamUtils_InitFilterText, void* instance_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01629C10,
        int32_t,
        ISteamUtils_FilterText,
        void* instance_ptr,
        void* pch_out_filtered_text,
        uint32_t n_byte_size_out_filtered_text,
        app::InteropHelp_UTF8StringHandle* pch_input_message,
        bool b_legal_only
    )
    IL2CPP_REGISTER_METHOD(0x01629D30, void, ISteamVideo_GetVideoURL, void* instance_ptr, app::AppId_t un_video_app_i_d)
    IL2CPP_REGISTER_METHOD(0x01629DE0, bool, ISteamVideo_IsBroadcasting, void* instance_ptr, int32_t* pn_num_viewers)
    IL2CPP_REGISTER_METHOD(0x01629E90, void, ISteamVideo_GetOPFSettings, void* instance_ptr, app::AppId_t un_video_app_i_d)
    IL2CPP_REGISTER_METHOD(
        0x01629F40,
        bool,
        ISteamVideo_GetOPFStringForApp,
        void* instance_ptr,
        app::AppId_t un_video_app_i_d,
        void* pch_buffer,
        int32_t* pn_buffer_size
    )
} // namespace app::classes::Steamworks::NativeMethods
