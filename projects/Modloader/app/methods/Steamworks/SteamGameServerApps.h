#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/DepotId_t__Array.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamGameServerApps {
    IL2CPP_REGISTER_METHOD(0x027F46A0, bool, BIsSubscribed, )
    IL2CPP_REGISTER_METHOD(0x027F46C0, bool, BIsLowViolence, )
    IL2CPP_REGISTER_METHOD(0x027F46E0, bool, BIsCybercafe, )
    IL2CPP_REGISTER_METHOD(0x027F4700, bool, BIsVACBanned, )
    IL2CPP_REGISTER_METHOD(0x027F4720, app::String*, GetCurrentGameLanguage, )
    IL2CPP_REGISTER_METHOD(0x027F4750, app::String*, GetAvailableGameLanguages, )
    IL2CPP_REGISTER_METHOD(0x027F4780, bool, BIsSubscribedApp, app::AppId_t app_i_d)
    IL2CPP_REGISTER_METHOD(0x027F47B0, bool, BIsDlcInstalled, app::AppId_t app_i_d)
    IL2CPP_REGISTER_METHOD(0x027F47E0, uint32_t, GetEarliestPurchaseUnixTime, app::AppId_t n_app_i_d)
    IL2CPP_REGISTER_METHOD(0x027F4810, bool, BIsSubscribedFromFreeWeekend, )
    IL2CPP_REGISTER_METHOD(0x027F4830, int32_t, GetDLCCount, )
    IL2CPP_REGISTER_METHOD(
        0x027F4850,
        bool,
        BGetDLCDataByIndex,
        int32_t i_d_l_c,
        app::AppId_t* p_app_i_d,
        bool* pb_available,
        app::String** pch_name,
        int32_t cch_name_buffer_size
    )
    IL2CPP_REGISTER_METHOD(0x027F49A0, void, InstallDLC, app::AppId_t n_app_i_d)
    IL2CPP_REGISTER_METHOD(0x027F49D0, void, UninstallDLC, app::AppId_t n_app_i_d)
    IL2CPP_REGISTER_METHOD(0x027F4A00, void, RequestAppProofOfPurchaseKey, app::AppId_t n_app_i_d)
    IL2CPP_REGISTER_METHOD(0x027F4A30, bool, GetCurrentBetaName, app::String** pch_name, int32_t cch_name_buffer_size)
    IL2CPP_REGISTER_METHOD(0x027F4B50, bool, MarkContentCorrupt, bool b_missing_files_only)
    IL2CPP_REGISTER_METHOD(0x027F4B80, uint32_t, GetInstalledDepots, app::AppId_t app_i_d, app::DepotId_t__Array* pvec_depots, uint32_t c_max_depots)
    IL2CPP_REGISTER_METHOD(0x027F4BD0, uint32_t, GetAppInstallDir, app::AppId_t app_i_d, app::String** pch_folder, uint32_t cch_folder_buffer_size)
    IL2CPP_REGISTER_METHOD(0x027F4D00, bool, BIsAppInstalled, app::AppId_t app_i_d)
    IL2CPP_REGISTER_METHOD(0x027F4D30, app::CSteamID, GetAppOwner, )
    IL2CPP_REGISTER_METHOD(0x027F4DE0, app::String*, GetLaunchQueryParam, app::String* pch_key)
    IL2CPP_REGISTER_METHOD(0x027F4FF0, bool, GetDlcDownloadProgress, app::AppId_t n_app_i_d, uint64_t* pun_bytes_downloaded, uint64_t* pun_bytes_total)
    IL2CPP_REGISTER_METHOD(0x027F5040, int32_t, GetAppBuildId, )
    IL2CPP_REGISTER_METHOD(0x027F5060, void, RequestAllProofOfPurchaseKeys, )
    IL2CPP_REGISTER_METHOD(0x027F5080, app::SteamAPICall_t, GetFileDetails, app::String* psz_file_name)
    IL2CPP_REGISTER_METHOD(0x027F52A0, int32_t, GetLaunchCommandLine, app::String** psz_command_line, int32_t cub_command_line)
    IL2CPP_REGISTER_METHOD(0x027F53C0, bool, BIsSubscribedFromFamilySharing, )
} // namespace app::classes::Steamworks::SteamGameServerApps
