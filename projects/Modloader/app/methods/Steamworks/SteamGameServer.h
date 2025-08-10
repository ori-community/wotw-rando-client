#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EBeginAuthSessionResult__Enum.h>
#include <Modloader/app/structs/EUserHasLicenseForAppResult__Enum.h>
#include <Modloader/app/structs/HAuthTicket.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamGameServer {
    IL2CPP_REGISTER_METHOD(
        0x027F0650,
        bool,
        InitGameServer,
        uint32_t un_i_p,
        uint16_t us_game_port,
        uint16_t us_query_port,
        uint32_t un_flags,
        app::AppId_t n_game_app_id,
        app::String* pch_version_string
    )
    IL2CPP_REGISTER_METHOD(0x027F0970, void, SetProduct, app::String* psz_product)
    IL2CPP_REGISTER_METHOD(0x027F0C30, void, SetGameDescription, app::String* psz_game_description)
    IL2CPP_REGISTER_METHOD(0x027F0EF0, void, SetModDir, app::String* psz_mod_dir)
    IL2CPP_REGISTER_METHOD(0x027F11B0, void, SetDedicatedServer, bool b_dedicated)
    IL2CPP_REGISTER_METHOD(0x027F1270, void, LogOn, app::String* psz_token)
    IL2CPP_REGISTER_METHOD(0x027F1530, void, LogOnAnonymous, )
    IL2CPP_REGISTER_METHOD(0x027F15E0, void, LogOff, )
    IL2CPP_REGISTER_METHOD(0x027F1690, bool, BLoggedOn, )
    IL2CPP_REGISTER_METHOD(0x027F1740, bool, BSecure, )
    IL2CPP_REGISTER_METHOD(0x027F17F0, app::CSteamID, GetSteamID, )
    IL2CPP_REGISTER_METHOD(0x027F1920, bool, WasRestartRequested, )
    IL2CPP_REGISTER_METHOD(0x027F19D0, void, SetMaxPlayerCount, int32_t c_players_max)
    IL2CPP_REGISTER_METHOD(0x027F1A80, void, SetBotPlayerCount, int32_t c_botplayers)
    IL2CPP_REGISTER_METHOD(0x027F1B30, void, SetServerName, app::String* psz_server_name)
    IL2CPP_REGISTER_METHOD(0x027F1DF0, void, SetMapName, app::String* psz_map_name)
    IL2CPP_REGISTER_METHOD(0x027F20B0, void, SetPasswordProtected, bool b_password_protected)
    IL2CPP_REGISTER_METHOD(0x027F2170, void, SetSpectatorPort, uint16_t un_spectator_port)
    IL2CPP_REGISTER_METHOD(0x027F2230, void, SetSpectatorServerName, app::String* psz_spectator_server_name)
    IL2CPP_REGISTER_METHOD(0x027F24F0, void, ClearAllKeyValues, )
    IL2CPP_REGISTER_METHOD(0x027F25A0, void, SetKeyValue, app::String* p_key, app::String* p_value)
    IL2CPP_REGISTER_METHOD(0x027F29E0, void, SetGameTags, app::String* pch_game_tags)
    IL2CPP_REGISTER_METHOD(0x027F2CA0, void, SetGameData, app::String* pch_game_data)
    IL2CPP_REGISTER_METHOD(0x027F2F60, void, SetRegion, app::String* psz_region)
    IL2CPP_REGISTER_METHOD(
        0x027F3220,
        bool,
        SendUserConnectAndAuthenticate,
        uint32_t un_i_p_client,
        app::Byte__Array* pv_auth_blob,
        uint32_t cub_auth_blob_size,
        app::CSteamID* p_steam_i_d_user
    )
    IL2CPP_REGISTER_METHOD(0x027F3320, app::CSteamID, CreateUnauthenticatedUserConnection, )
    IL2CPP_REGISTER_METHOD(0x027F3450, void, SendUserDisconnect, app::CSteamID steam_i_d_user)
    IL2CPP_REGISTER_METHOD(0x027F3510, bool, BUpdateUserData, app::CSteamID steam_i_d_user, app::String* pch_player_name, uint32_t u_score)
    IL2CPP_REGISTER_METHOD(0x027F3810, app::HAuthTicket, GetAuthSessionTicket, app::Byte__Array* p_ticket, int32_t cb_max_ticket, uint32_t* pcb_ticket)
    IL2CPP_REGISTER_METHOD(
        0x027F3980,
        app::EBeginAuthSessionResult__Enum,
        BeginAuthSession,
        app::Byte__Array* p_auth_ticket,
        int32_t cb_auth_ticket,
        app::CSteamID steam_i_d
    )
    IL2CPP_REGISTER_METHOD(0x027F3A60, void, EndAuthSession, app::CSteamID steam_i_d)
    IL2CPP_REGISTER_METHOD(0x027F3B20, void, CancelAuthTicket, app::HAuthTicket h_auth_ticket)
    IL2CPP_REGISTER_METHOD(0x027F3BD0, app::EUserHasLicenseForAppResult__Enum, UserHasLicenseForApp, app::CSteamID steam_i_d, app::AppId_t app_i_d)
    IL2CPP_REGISTER_METHOD(0x027F3CA0, bool, RequestUserGroupStatus, app::CSteamID steam_i_d_user, app::CSteamID steam_i_d_group)
    IL2CPP_REGISTER_METHOD(0x027F3D70, void, GetGameplayStats, )
    IL2CPP_REGISTER_METHOD(0x027F3E20, app::SteamAPICall_t, GetServerReputation, )
    IL2CPP_REGISTER_METHOD(0x027F3F50, uint32_t, GetPublicIP, )
    IL2CPP_REGISTER_METHOD(0x027F4000, bool, HandleIncomingPacket, app::Byte__Array* p_data, int32_t cb_data, uint32_t src_i_p, uint16_t src_port)
    IL2CPP_REGISTER_METHOD(0x027F4100, int32_t, GetNextOutgoingPacket, app::Byte__Array* p_out, int32_t cb_max_out, uint32_t* p_net_adr, uint16_t* p_port)
    IL2CPP_REGISTER_METHOD(0x027F4200, void, EnableHeartbeats, bool b_active)
    IL2CPP_REGISTER_METHOD(0x027F42C0, void, SetHeartbeatInterval, int32_t i_heartbeat_interval)
    IL2CPP_REGISTER_METHOD(0x027F4370, void, ForceHeartbeat, )
    IL2CPP_REGISTER_METHOD(0x027F4420, app::SteamAPICall_t, AssociateWithClan, app::CSteamID steam_i_d_clan)
    IL2CPP_REGISTER_METHOD(0x027F4560, app::SteamAPICall_t, ComputeNewPlayerCompatibility, app::CSteamID steam_i_d_new_player)
} // namespace app::classes::Steamworks::SteamGameServer
