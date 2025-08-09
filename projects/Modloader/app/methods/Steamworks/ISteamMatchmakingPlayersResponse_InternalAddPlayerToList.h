#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_InternalAddPlayerToList.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x015FD3D0,
        void,
        Invoke,
        app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList* this_ptr,
        void* thisptr,
        void* pch_name,
        int32_t n_score,
        float fl_time_played
    )
    IL2CPP_REGISTER_METHOD(
        0x015FD7F0,
        app::IAsyncResult*,
        BeginInvoke,
        app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList* this_ptr,
        void* thisptr,
        void* pch_name,
        int32_t n_score,
        float fl_time_played,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse_InternalAddPlayerToList
