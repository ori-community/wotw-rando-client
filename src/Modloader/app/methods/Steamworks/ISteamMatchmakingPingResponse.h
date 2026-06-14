#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISteamMatchmakingPingResponse.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_ServerFailedToRespond.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_ServerResponded.h>
#include <Modloader/app/structs/gameserveritem_t.h>

namespace app::classes::Steamworks::ISteamMatchmakingPingResponse {
    IL2CPP_REGISTER_METHOD(
        0x015FBE40,
        void,
        ctor,
        app::ISteamMatchmakingPingResponse* this_ptr,
        app::ISteamMatchmakingPingResponse_ServerResponded* on_server_responded,
        app::ISteamMatchmakingPingResponse_ServerFailedToRespond* on_server_failed_to_respond
    )
    IL2CPP_REGISTER_METHOD(0x015FC320, void, Finalize, app::ISteamMatchmakingPingResponse* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x015FC430,
        void,
        InternalOnServerResponded,
        app::ISteamMatchmakingPingResponse* this_ptr,
        void* thisptr,
        app::gameserveritem_t* server
    )
    IL2CPP_REGISTER_METHOD(0x012B0FE0, void, InternalOnServerFailedToRespond, app::ISteamMatchmakingPingResponse* this_ptr, void* thisptr)
    IL2CPP_REGISTER_METHOD(0x015FC460, void*, op_Explicit, app::ISteamMatchmakingPingResponse* that)
} // namespace app::classes::Steamworks::ISteamMatchmakingPingResponse
