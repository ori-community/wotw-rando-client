#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_PlayersFailedToRespond.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00611B10,
        app::IAsyncResult*,
        BeginInvoke,
        app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* this_ptr,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse_PlayersFailedToRespond
