#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_ServerFailedToRespond.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ISteamMatchmakingPingResponse_ServerFailedToRespond * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::ISteamMatchmakingPingResponse_ServerFailedToRespond * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::ISteamMatchmakingPingResponse_ServerFailedToRespond * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingPingResponse_ServerFailedToRespond * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::ISteamMatchmakingPingResponse_ServerFailedToRespond
