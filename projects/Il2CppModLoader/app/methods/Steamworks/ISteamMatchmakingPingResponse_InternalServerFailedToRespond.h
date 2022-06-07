#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingPingResponse_InternalServerFailedToRespond {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond * this_ptr, void * thisptr))
    IL2CPP_REGISTER_METHOD(0x015FC480, app::IAsyncResult *, BeginInvoke, (app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond * this_ptr, void * thisptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ISteamMatchmakingPingResponse_InternalServerFailedToRespond * this_ptr, app::IAsyncResult * result))
}
