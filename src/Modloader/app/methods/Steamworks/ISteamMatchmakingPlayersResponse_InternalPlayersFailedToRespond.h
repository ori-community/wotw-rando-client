#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond* this_ptr, void* thisptr)
    IL2CPP_REGISTER_METHOD(
        0x015FD8F0,
        app::IAsyncResult*,
        BeginInvoke,
        app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond* this_ptr,
        void* thisptr,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        void,
        EndInvoke,
        app::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::Steamworks::ISteamMatchmakingPlayersResponse_InternalPlayersFailedToRespond
