#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingServerListResponse_InternalServerResponded {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ISteamMatchmakingServerListResponse_InternalServerResponded * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01443A00, void, Invoke, (app::ISteamMatchmakingServerListResponse_InternalServerResponded * this_ptr, void * thisptr, app::HServerListRequest h_request, int32_t i_server))
    IL2CPP_REGISTER_METHOD(0x015FF270, app::IAsyncResult *, BeginInvoke, (app::ISteamMatchmakingServerListResponse_InternalServerResponded * this_ptr, void * thisptr, app::HServerListRequest h_request, int32_t i_server, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingServerListResponse_InternalServerResponded * this_ptr, app::IAsyncResult * result))
}
