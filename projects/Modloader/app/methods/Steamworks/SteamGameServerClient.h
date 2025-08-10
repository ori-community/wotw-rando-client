#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EAccountType__Enum.h>
#include <Modloader/app/structs/HSteamPipe.h>
#include <Modloader/app/structs/HSteamUser.h>
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamGameServerClient {
    IL2CPP_REGISTER_METHOD(0x027F53E0, app::HSteamPipe, CreateSteamPipe, )
    IL2CPP_REGISTER_METHOD(0x027F5400, bool, BReleaseSteamPipe, app::HSteamPipe h_steam_pipe)
    IL2CPP_REGISTER_METHOD(0x027F5430, app::HSteamUser, ConnectToGlobalUser, app::HSteamPipe h_steam_pipe)
    IL2CPP_REGISTER_METHOD(0x027F5460, app::HSteamUser, CreateLocalUser, app::HSteamPipe* ph_steam_pipe, app::EAccountType__Enum e_account_type)
    IL2CPP_REGISTER_METHOD(0x027F54A0, void, ReleaseUser, app::HSteamPipe h_steam_pipe, app::HSteamUser h_user)
    IL2CPP_REGISTER_METHOD(0x027F54E0, void*, GetISteamUser, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F5710, void*, GetISteamGameServer, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F5940, void, SetLocalIPBinding, uint32_t un_i_p, uint16_t us_port)
    IL2CPP_REGISTER_METHOD(0x027F5980, void*, GetISteamFriends, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F5BB0, void*, GetISteamUtils, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F5DD0, void*, GetISteamMatchmaking, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F6000, void*, GetISteamMatchmakingServers, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F6230, void*, GetISteamGenericInterface, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F6460, void*, GetISteamUserStats, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F6690, void*, GetISteamGameServerStats, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F68C0, void*, GetISteamApps, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F6AF0, void*, GetISteamNetworking, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F6D20, void*, GetISteamRemoteStorage, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F6F50, void*, GetISteamScreenshots, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F7180, void*, GetISteamGameSearch, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F73B0, uint32_t, GetIPCCallCount, )
    IL2CPP_REGISTER_METHOD(0x027F73D0, void, SetWarningMessageHook, app::SteamAPIWarningMessageHook_t* p_function)
    IL2CPP_REGISTER_METHOD(0x027F7400, bool, BShutdownIfAllPipesClosed, )
    IL2CPP_REGISTER_METHOD(0x027F7420, void*, GetISteamHTTP, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F7650, void*, GetISteamController, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F7880, void*, GetISteamUGC, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F7AB0, void*, GetISteamAppList, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F7CE0, void*, GetISteamMusic, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F7F10, void*, GetISteamMusicRemote, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F8140, void*, GetISteamHTMLSurface, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F8370, void*, GetISteamInventory, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F85A0, void*, GetISteamVideo, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F87D0, void*, GetISteamParentalSettings, app::HSteamUser h_steamuser, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F8A00, void*, GetISteamInput, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F8C30, void*, GetISteamParties, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
    IL2CPP_REGISTER_METHOD(0x027F8E60, void*, GetISteamRemotePlay, app::HSteamUser h_steam_user, app::HSteamPipe h_steam_pipe, app::String* pch_version)
} // namespace app::classes::Steamworks::SteamGameServerClient
