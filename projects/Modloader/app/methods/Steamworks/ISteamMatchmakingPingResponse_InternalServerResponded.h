#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_InternalServerResponded.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/gameserveritem_t.h>

namespace app::classes::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::ISteamMatchmakingPingResponse_InternalServerResponded* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x012E7480,
        void,
        Invoke,
        app::ISteamMatchmakingPingResponse_InternalServerResponded* this_ptr,
        void* thisptr,
        app::gameserveritem_t* server
    )
    IL2CPP_REGISTER_METHOD(
        0x015FC540,
        app::IAsyncResult*,
        BeginInvoke,
        app::ISteamMatchmakingPingResponse_InternalServerResponded* this_ptr,
        void* thisptr,
        app::gameserveritem_t* server,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::ISteamMatchmakingPingResponse_InternalServerResponded* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::Steamworks::ISteamMatchmakingPingResponse_InternalServerResponded
