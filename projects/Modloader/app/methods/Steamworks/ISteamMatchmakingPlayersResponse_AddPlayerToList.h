#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_AddPlayerToList.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ISteamMatchmakingPlayersResponse_AddPlayerToList * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015FCD30, void, Invoke, (app::ISteamMatchmakingPlayersResponse_AddPlayerToList * this_ptr, app::String* pch_name, int32_t n_score, float fl_time_played))
    IL2CPP_REGISTER_METHOD(0x015FD2E0, app::IAsyncResult*, BeginInvoke, (app::ISteamMatchmakingPlayersResponse_AddPlayerToList * this_ptr, app::String* pch_name, int32_t n_score, float fl_time_played, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingPlayersResponse_AddPlayerToList * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse_AddPlayerToList
