#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ISteamMatchmakingServerListResponse_InternalRefreshComplete.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/HServerListRequest.h>
#include <Modloader/app/structs/EMatchMakingServerResponse__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ISteamMatchmakingServerListResponse_InternalRefreshComplete * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01443A00, void, Invoke, (app::ISteamMatchmakingServerListResponse_InternalRefreshComplete * this_ptr, void* thisptr, app::HServerListRequest h_request, app::EMatchMakingServerResponse__Enum response))
    IL2CPP_REGISTER_METHOD(0x015FF090, app::IAsyncResult*, BeginInvoke, (app::ISteamMatchmakingServerListResponse_InternalRefreshComplete * this_ptr, void* thisptr, app::HServerListRequest h_request, app::EMatchMakingServerResponse__Enum response, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingServerListResponse_InternalRefreshComplete * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::ISteamMatchmakingServerListResponse_InternalRefreshComplete
