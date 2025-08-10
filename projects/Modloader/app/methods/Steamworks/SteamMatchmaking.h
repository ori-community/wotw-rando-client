#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppId_t.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/EChatEntryType__Enum.h>
#include <Modloader/app/structs/ELobbyComparison__Enum.h>
#include <Modloader/app/structs/ELobbyDistanceFilter__Enum.h>
#include <Modloader/app/structs/ELobbyType__Enum.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamMatchmaking {
    IL2CPP_REGISTER_METHOD(0x02786860, int32_t, GetFavoriteGameCount, )
    IL2CPP_REGISTER_METHOD(
        0x02786910,
        bool,
        GetFavoriteGame,
        int32_t i_game,
        app::AppId_t* pn_app_i_d,
        uint32_t* pn_i_p,
        uint16_t* pn_conn_port,
        uint16_t* pn_query_port,
        uint32_t* pun_flags,
        uint32_t* p_r_time32_last_played_on_server
    )
    IL2CPP_REGISTER_METHOD(
        0x02786A30,
        int32_t,
        AddFavoriteGame,
        app::AppId_t n_app_i_d,
        uint32_t n_i_p,
        uint16_t n_conn_port,
        uint16_t n_query_port,
        uint32_t un_flags,
        uint32_t r_time32_last_played_on_server
    )
    IL2CPP_REGISTER_METHOD(
        0x02786B40,
        bool,
        RemoveFavoriteGame,
        app::AppId_t n_app_i_d,
        uint32_t n_i_p,
        uint16_t n_conn_port,
        uint16_t n_query_port,
        uint32_t un_flags
    )
    IL2CPP_REGISTER_METHOD(0x02786C40, app::SteamAPICall_t, RequestLobbyList, )
    IL2CPP_REGISTER_METHOD(
        0x02786D70,
        void,
        AddRequestLobbyListStringFilter,
        app::String* pch_key_to_match,
        app::String* pch_value_to_match,
        app::ELobbyComparison__Enum e_comparison_type
    )
    IL2CPP_REGISTER_METHOD(
        0x027871C0,
        void,
        AddRequestLobbyListNumericalFilter,
        app::String* pch_key_to_match,
        int32_t n_value_to_match,
        app::ELobbyComparison__Enum e_comparison_type
    )
    IL2CPP_REGISTER_METHOD(0x027874A0, void, AddRequestLobbyListNearValueFilter, app::String* pch_key_to_match, int32_t n_value_to_be_close_to)
    IL2CPP_REGISTER_METHOD(0x02787780, void, AddRequestLobbyListFilterSlotsAvailable, int32_t n_slots_available)
    IL2CPP_REGISTER_METHOD(0x02787830, void, AddRequestLobbyListDistanceFilter, app::ELobbyDistanceFilter__Enum e_lobby_distance_filter)
    IL2CPP_REGISTER_METHOD(0x027878E0, void, AddRequestLobbyListResultCountFilter, int32_t c_max_results)
    IL2CPP_REGISTER_METHOD(0x02787990, void, AddRequestLobbyListCompatibleMembersFilter, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(0x02787A50, app::CSteamID, GetLobbyByIndex, int32_t i_lobby)
    IL2CPP_REGISTER_METHOD(0x02787B90, app::SteamAPICall_t, CreateLobby, app::ELobbyType__Enum e_lobby_type, int32_t c_max_members)
    IL2CPP_REGISTER_METHOD(0x02787CE0, app::SteamAPICall_t, JoinLobby, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(0x02787E20, void, LeaveLobby, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(0x02787EE0, bool, InviteUserToLobby, app::CSteamID steam_i_d_lobby, app::CSteamID steam_i_d_invitee)
    IL2CPP_REGISTER_METHOD(0x02787FB0, int32_t, GetNumLobbyMembers, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(0x02788070, app::CSteamID, GetLobbyMemberByIndex, app::CSteamID steam_i_d_lobby, int32_t i_member)
    IL2CPP_REGISTER_METHOD(0x027881C0, app::String*, GetLobbyData, app::CSteamID steam_i_d_lobby, app::String* pch_key)
    IL2CPP_REGISTER_METHOD(0x027884B0, bool, SetLobbyData, app::CSteamID steam_i_d_lobby, app::String* pch_key, app::String* pch_value)
    IL2CPP_REGISTER_METHOD(0x02788910, int32_t, GetLobbyDataCount, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(
        0x027889D0,
        bool,
        GetLobbyDataByIndex,
        app::CSteamID steam_i_d_lobby,
        int32_t i_lobby_data,
        app::String** pch_key,
        int32_t cch_key_buffer_size,
        app::String** pch_value,
        int32_t cch_value_buffer_size
    )
    IL2CPP_REGISTER_METHOD(0x02788C00, bool, DeleteLobbyData, app::CSteamID steam_i_d_lobby, app::String* pch_key)
    IL2CPP_REGISTER_METHOD(0x02788EF0, app::String*, GetLobbyMemberData, app::CSteamID steam_i_d_lobby, app::CSteamID steam_i_d_user, app::String* pch_key)
    IL2CPP_REGISTER_METHOD(0x02789200, void, SetLobbyMemberData, app::CSteamID steam_i_d_lobby, app::String* pch_key, app::String* pch_value)
    IL2CPP_REGISTER_METHOD(0x02789650, bool, SendLobbyChatMsg, app::CSteamID steam_i_d_lobby, app::Byte__Array* pv_msg_body, int32_t cub_msg_body)
    IL2CPP_REGISTER_METHOD(
        0x02789740,
        int32_t,
        GetLobbyChatEntry,
        app::CSteamID steam_i_d_lobby,
        int32_t i_chat_i_d,
        app::CSteamID* p_steam_i_d_user,
        app::Byte__Array* pv_data,
        int32_t cub_data,
        app::EChatEntryType__Enum* pe_chat_entry_type
    )
    IL2CPP_REGISTER_METHOD(0x02789860, bool, RequestLobbyData, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(
        0x02789920,
        void,
        SetLobbyGameServer,
        app::CSteamID steam_i_d_lobby,
        uint32_t un_game_server_i_p,
        uint16_t un_game_server_port,
        app::CSteamID steam_i_d_game_server
    )
    IL2CPP_REGISTER_METHOD(
        0x02789A10,
        bool,
        GetLobbyGameServer,
        app::CSteamID steam_i_d_lobby,
        uint32_t* pun_game_server_i_p,
        uint16_t* pun_game_server_port,
        app::CSteamID* psteam_i_d_game_server
    )
    IL2CPP_REGISTER_METHOD(0x02789B00, bool, SetLobbyMemberLimit, app::CSteamID steam_i_d_lobby, int32_t c_max_members)
    IL2CPP_REGISTER_METHOD(0x02789BD0, int32_t, GetLobbyMemberLimit, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(0x02789C90, bool, SetLobbyType, app::CSteamID steam_i_d_lobby, app::ELobbyType__Enum e_lobby_type)
    IL2CPP_REGISTER_METHOD(0x02789D60, bool, SetLobbyJoinable, app::CSteamID steam_i_d_lobby, bool b_lobby_joinable)
    IL2CPP_REGISTER_METHOD(0x02789E30, app::CSteamID, GetLobbyOwner, app::CSteamID steam_i_d_lobby)
    IL2CPP_REGISTER_METHOD(0x02789F70, bool, SetLobbyOwner, app::CSteamID steam_i_d_lobby, app::CSteamID steam_i_d_new_owner)
    IL2CPP_REGISTER_METHOD(0x0278A040, bool, SetLinkedLobby, app::CSteamID steam_i_d_lobby, app::CSteamID steam_i_d_lobby_dependent)
} // namespace app::classes::Steamworks::SteamMatchmaking
