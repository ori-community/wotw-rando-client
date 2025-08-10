#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EAccountType__Enum.h>
#include <Modloader/app/structs/HSteamPipe.h>
#include <Modloader/app/structs/HSteamUser.h>
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamClient {
    IL2CPP_REGISTER_METHOD(0x027E3940, app::HSteamPipe, CreateSteamPipe, )
    IL2CPP_REGISTER_METHOD(0x027E3960, bool, BReleaseSteamPipe, app::HSteamPipe h_steam_pipe)
    IL2CPP_REGISTER_METHOD(0x027E3990, app::HSteamUser, ConnectToGlobalUser, app::HSteamPipe h_steam_pipe)
    IL2CPP_REGISTER_METHOD(0x027E39C0, app::HSteamUser, CreateLocalUser, app::HSteamPipe* ph_steam_pipe, app::EAccountType__Enum e_account_type)
    IL2CPP_REGISTER_METHOD(0x027E3A00, void, ReleaseUser, app::HSteamPipe h_steam_pipe, app::HSteamUser h_user)
    IL2CPP_REGISTER_METHOD(0x027E3A40, void*, GetISteamUser, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E3C70, void*, GetISteamGameServer, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E3EA0, void, SetLocalIPBinding, uint32_t un_i_p, uint16_t us_port)
    IL2CPP_REGISTER_METHOD(0x027E3EE0, void*, GetISteamFriends, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E4110, void*, GetISteamUtils, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E4330, void*, GetISteamMatchmaking, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E4560, void*, GetISteamMatchmakingServers, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E4790, void*, GetISteamGenericInterface, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E49C0, void*, GetISteamUserStats, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E4BF0, void*, GetISteamGameServerStats, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E4E20, void*, GetISteamApps, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E5050, void*, GetISteamNetworking, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E5280, void*, GetISteamRemoteStorage, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E54B0, void*, GetISteamScreenshots, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E56E0, void*, GetISteamGameSearch, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E5910, uint32_t, GetIPCCallCount, )
    IL2CPP_REGISTER_METHOD(0x027E5930, void, SetWarningMessageHook, app::SteamAPIWarningMessageHook_t* p_function)
    IL2CPP_REGISTER_METHOD(0x027E5960, bool, BShutdownIfAllPipesClosed, )
    IL2CPP_REGISTER_METHOD(0x027E5980, void*, GetISteamHTTP, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E5BB0, void*, GetISteamController, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E5DE0, void*, GetISteamUGC, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E6010, void*, GetISteamAppList, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E6240, void*, GetISteamMusic, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E6470, void*, GetISteamMusicRemote, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E66A0, void*, GetISteamHTMLSurface, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E68D0, void*, GetISteamInventory, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E6B00, void*, GetISteamVideo, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E6D30, void*, GetISteamParentalSettings, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E6F60, void*, GetISteamInput, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E7190, void*, GetISteamParties, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027E73C0, void*, GetISteamRemotePlay, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
} // namespace app::classes::Steamworks::SteamClient
