#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISteamMatchmakingPingResponse_ServerResponded.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/gameserveritem_t.h>

namespace app::classes::Steamworks::ISteamMatchmakingPingResponse_ServerResponded {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ISteamMatchmakingPingResponse_ServerResponded * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::ISteamMatchmakingPingResponse_ServerResponded * this_ptr, app::gameserveritem_t* server))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::ISteamMatchmakingPingResponse_ServerResponded * this_ptr, app::gameserveritem_t* server, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingPingResponse_ServerResponded * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::ISteamMatchmakingPingResponse_ServerResponded
