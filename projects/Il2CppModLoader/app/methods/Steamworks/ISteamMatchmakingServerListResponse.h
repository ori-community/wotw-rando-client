#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingServerListResponse {
    IL2CPP_REGISTER_METHOD(0x015FE930, void, ctor, (app::ISteamMatchmakingServerListResponse * this_ptr, app::ISteamMatchmakingServerListResponse_ServerResponded * on_server_responded, app::ISteamMatchmakingServerListResponse_ServerFailedToRespond * on_server_failed_to_respond, app::ISteamMatchmakingServerListResponse_RefreshComplete * on_refresh_complete))
    IL2CPP_REGISTER_METHODINFO(0x04736C60, ISteamMatchmakingServerListResponse__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015FEEF0, void, Finalize, (app::ISteamMatchmakingServerListResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015FF000, void, InternalOnServerResponded, (app::ISteamMatchmakingServerListResponse * this_ptr, void * thisptr, app::HServerListRequest h_request, int32_t i_server))
    IL2CPP_REGISTER_METHODINFO(0x04795BE8, ISteamMatchmakingServerListResponse_InternalOnServerResponded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015FF030, void, InternalOnServerFailedToRespond, (app::ISteamMatchmakingServerListResponse * this_ptr, void * thisptr, app::HServerListRequest h_request, int32_t i_server))
    IL2CPP_REGISTER_METHODINFO(0x04707EE0, ISteamMatchmakingServerListResponse_InternalOnServerFailedToRespond__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015FF060, void, InternalOnRefreshComplete, (app::ISteamMatchmakingServerListResponse * this_ptr, void * thisptr, app::HServerListRequest h_request, app::EMatchMakingServerResponse__Enum response))
    IL2CPP_REGISTER_METHODINFO(0x04789748, ISteamMatchmakingServerListResponse_InternalOnRefreshComplete__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015FC460, void *, op_Explicit, (app::ISteamMatchmakingServerListResponse * that))
}
