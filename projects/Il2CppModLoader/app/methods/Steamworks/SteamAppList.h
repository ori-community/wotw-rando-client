#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Steamworks::SteamAppList {
    IL2CPP_REGISTER_METHOD(0x027E2260, uint32_t, GetNumInstalledApps, ())
    IL2CPP_REGISTER_METHOD(0x027E2310, uint32_t, GetInstalledApps, (app::AppId_t__Array * pvec_app_i_d, uint32_t un_max_app_i_ds))
    IL2CPP_REGISTER_METHOD(0x027E23E0, int32_t, GetAppName, (app::AppId_t n_app_i_d, app::String** pch_name, int32_t cch_name_max))
    IL2CPP_REGISTER_METHOD(0x027E2580, int32_t, GetAppInstallDir, (app::AppId_t n_app_i_d, app::String** pch_directory, int32_t cch_name_max))
    IL2CPP_REGISTER_METHOD(0x027E2720, int32_t, GetAppBuildId, (app::AppId_t n_app_i_d))
} // namespace app::classes::Steamworks::SteamAppList
