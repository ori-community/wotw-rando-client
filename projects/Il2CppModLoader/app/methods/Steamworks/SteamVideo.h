#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Steamworks::SteamVideo {
    IL2CPP_REGISTER_METHOD(0x027A6430, void, GetVideoURL, (app::AppId_t un_video_app_i_d))
    IL2CPP_REGISTER_METHOD(0x027A64E0, bool, IsBroadcasting, (int32_t * pn_num_viewers))
    IL2CPP_REGISTER_METHOD(0x027A65A0, void, GetOPFSettings, (app::AppId_t un_video_app_i_d))
    IL2CPP_REGISTER_METHOD(0x027A6650, bool, GetOPFStringForApp, (app::AppId_t un_video_app_i_d, app::String** pch_buffer, int32_t* pn_buffer_size))
} // namespace app::classes::Steamworks::SteamVideo
