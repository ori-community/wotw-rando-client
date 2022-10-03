#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Steamworks::SteamMatchmakingServers {
    IL2CPP_REGISTER_METHOD(0x0278A110, app::HServerListRequest, RequestInternetServerList, (app::AppId_t i_app, app::MatchMakingKeyValuePair_t__Array* ppch_filters, uint32_t n_filters, app::ISteamMatchmakingServerListResponse* p_request_servers_response))
    IL2CPP_REGISTER_METHOD(0x0278A370, app::HServerListRequest, RequestLANServerList, (app::AppId_t i_app, app::ISteamMatchmakingServerListResponse* p_request_servers_response))
    IL2CPP_REGISTER_METHOD(0x0278A4D0, app::HServerListRequest, RequestFriendsServerList, (app::AppId_t i_app, app::MatchMakingKeyValuePair_t__Array* ppch_filters, uint32_t n_filters, app::ISteamMatchmakingServerListResponse* p_request_servers_response))
    IL2CPP_REGISTER_METHOD(0x0278A730, app::HServerListRequest, RequestFavoritesServerList, (app::AppId_t i_app, app::MatchMakingKeyValuePair_t__Array* ppch_filters, uint32_t n_filters, app::ISteamMatchmakingServerListResponse* p_request_servers_response))
    IL2CPP_REGISTER_METHOD(0x0278A990, app::HServerListRequest, RequestHistoryServerList, (app::AppId_t i_app, app::MatchMakingKeyValuePair_t__Array* ppch_filters, uint32_t n_filters, app::ISteamMatchmakingServerListResponse* p_request_servers_response))
    IL2CPP_REGISTER_METHOD(0x0278ABF0, app::HServerListRequest, RequestSpectatorServerList, (app::AppId_t i_app, app::MatchMakingKeyValuePair_t__Array* ppch_filters, uint32_t n_filters, app::ISteamMatchmakingServerListResponse* p_request_servers_response))
    IL2CPP_REGISTER_METHOD(0x0278AE50, void, ReleaseRequest, (app::HServerListRequest h_server_list_request))
    IL2CPP_REGISTER_METHOD(0x0278AF10, app::gameserveritem_t*, GetServerDetails, (app::HServerListRequest h_request, int32_t i_server))
    IL2CPP_REGISTER_METHOD(0x0278B0F0, void, CancelQuery, (app::HServerListRequest h_request))
    IL2CPP_REGISTER_METHOD(0x0278B1B0, void, RefreshQuery, (app::HServerListRequest h_request))
    IL2CPP_REGISTER_METHOD(0x0278B270, bool, IsRefreshing, (app::HServerListRequest h_request))
    IL2CPP_REGISTER_METHOD(0x0278B330, int32_t, GetServerCount, (app::HServerListRequest h_request))
    IL2CPP_REGISTER_METHOD(0x0278B3F0, void, RefreshServer, (app::HServerListRequest h_request, int32_t i_server))
    IL2CPP_REGISTER_METHOD(0x0278B4C0, app::HServerQuery, PingServer, (uint32_t un_i_p, uint16_t us_port, app::ISteamMatchmakingPingResponse* p_request_servers_response))
    IL2CPP_REGISTER_METHOD(0x0278B630, app::HServerQuery, PlayerDetails, (uint32_t un_i_p, uint16_t us_port, app::ISteamMatchmakingPlayersResponse* p_request_servers_response))
    IL2CPP_REGISTER_METHOD(0x0278B7A0, app::HServerQuery, ServerRules, (uint32_t un_i_p, uint16_t us_port, app::ISteamMatchmakingRulesResponse* p_request_servers_response))
    IL2CPP_REGISTER_METHOD(0x0278B910, void, CancelServerQuery, (app::HServerQuery h_server_query))
} // namespace app::classes::Steamworks::SteamMatchmakingServers
