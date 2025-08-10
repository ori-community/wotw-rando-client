#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CGameID.h>
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EBeginAuthSessionResult__Enum.h>
#include <Modloader/app/structs/EUserHasLicenseForAppResult__Enum.h>
#include <Modloader/app/structs/EVoiceResult__Enum.h>
#include <Modloader/app/structs/HAuthTicket.h>
#include <Modloader/app/structs/HSteamUser.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamUser {
    IL2CPP_REGISTER_METHOD(0x0279D8F0, app::HSteamUser, GetHSteamUser, )
    IL2CPP_REGISTER_METHOD(0x0279D9A0, bool, BLoggedOn, )
    IL2CPP_REGISTER_METHOD(0x0279DA50, app::CSteamID, GetSteamID, )
    IL2CPP_REGISTER_METHOD(
        0x0279DB80,
        int32_t,
        InitiateGameConnection,
        app::Byte__Array* p_auth_blob,
        int32_t cb_max_auth_blob,
        app::CSteamID steam_i_d_game_server,
        uint32_t un_i_p_server,
        uint16_t us_port_server,
        bool b_secure
    )
    IL2CPP_REGISTER_METHOD(0x0279DCA0, void, TerminateGameConnection, uint32_t un_i_p_server, uint16_t us_port_server)
    IL2CPP_REGISTER_METHOD(0x0279DD70, void, TrackAppUsageEvent, app::CGameID game_i_d, int32_t e_app_usage_event, app::String* pch_extra_info)
    IL2CPP_REGISTER_METHOD(0x0279E050, bool, GetUserDataFolder, app::String** pch_buffer, int32_t cub_buffer)
    IL2CPP_REGISTER_METHOD(0x0279E200, void, StartVoiceRecording, )
    IL2CPP_REGISTER_METHOD(0x0279E2B0, void, StopVoiceRecording, )
    IL2CPP_REGISTER_METHOD(0x0279E360, app::EVoiceResult__Enum, GetAvailableVoice, uint32_t* pcb_compressed)
    IL2CPP_REGISTER_METHOD(
        0x0279E480,
        app::EVoiceResult__Enum,
        GetVoice,
        bool b_want_compressed,
        app::Byte__Array* p_dest_buffer,
        uint32_t cb_dest_buffer_size,
        uint32_t* n_bytes_written
    )
    IL2CPP_REGISTER_METHOD(
        0x0279E600,
        app::EVoiceResult__Enum,
        DecompressVoice,
        app::Byte__Array* p_compressed,
        uint32_t cb_compressed,
        app::Byte__Array* p_dest_buffer,
        uint32_t cb_dest_buffer_size,
        uint32_t* n_bytes_written,
        uint32_t n_desired_sample_rate
    )
    IL2CPP_REGISTER_METHOD(0x0279E720, uint32_t, GetVoiceOptimalSampleRate, )
    IL2CPP_REGISTER_METHOD(0x0279E7D0, app::HAuthTicket, GetAuthSessionTicket, app::Byte__Array* p_ticket, int32_t cb_max_ticket, uint32_t* pcb_ticket)
    IL2CPP_REGISTER_METHOD(
        0x0279E940,
        app::EBeginAuthSessionResult__Enum,
        BeginAuthSession,
        app::Byte__Array* p_auth_ticket,
        int32_t cb_auth_ticket,
        app::CSteamID steam_i_d
    )
    IL2CPP_REGISTER_METHOD(0x0279EA20, void, EndAuthSession, app::CSteamID steam_i_d)
    IL2CPP_REGISTER_METHOD(0x0279EAE0, void, CancelAuthTicket, app::HAuthTicket h_auth_ticket)
    IL2CPP_REGISTER_METHOD(0x0279EB90, app::EUserHasLicenseForAppResult__Enum, UserHasLicenseForApp, app::CSteamID steam_i_d, app::AppId_t app_i_d)
    IL2CPP_REGISTER_METHOD(0x0279EC60, bool, BIsBehindNAT, )
    IL2CPP_REGISTER_METHOD(0x0279ED10, void, AdvertiseGame, app::CSteamID steam_i_d_game_server, uint32_t un_i_p_server, uint16_t us_port_server)
    IL2CPP_REGISTER_METHOD(0x0279EDF0, app::SteamAPICall_t, RequestEncryptedAppTicket, app::Byte__Array* p_data_to_include, int32_t cb_data_to_include)
    IL2CPP_REGISTER_METHOD(0x0279EF50, bool, GetEncryptedAppTicket, app::Byte__Array* p_ticket, int32_t cb_max_ticket, uint32_t* pcb_ticket)
    IL2CPP_REGISTER_METHOD(0x0279F030, int32_t, GetGameBadgeLevel, int32_t n_series, bool b_foil)
    IL2CPP_REGISTER_METHOD(0x0279F100, int32_t, GetPlayerSteamLevel, )
    IL2CPP_REGISTER_METHOD(0x0279F1B0, app::SteamAPICall_t, RequestStoreAuthURL, app::String* pch_redirect_u_r_l)
    IL2CPP_REGISTER_METHOD(0x0279F4B0, bool, BIsPhoneVerified, )
    IL2CPP_REGISTER_METHOD(0x0279F560, bool, BIsTwoFactorEnabled, )
    IL2CPP_REGISTER_METHOD(0x0279F610, bool, BIsPhoneIdentifying, )
    IL2CPP_REGISTER_METHOD(0x0279F6C0, bool, BIsPhoneRequiringVerification, )
    IL2CPP_REGISTER_METHOD(0x0279F770, app::SteamAPICall_t, GetMarketEligibility, )
    IL2CPP_REGISTER_METHOD(0x0279F8A0, app::SteamAPICall_t, GetDurationControl, )
} // namespace app::classes::Steamworks::SteamUser
