#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::ISteamMatchmakingPingResponse {
    IL2CPP_REGISTER_METHOD(0x015FBE40, void, ctor, (app::ISteamMatchmakingPingResponse * this_ptr, app::ISteamMatchmakingPingResponse_ServerResponded * on_server_responded, app::ISteamMatchmakingPingResponse_ServerFailedToRespond * on_server_failed_to_respond))
    IL2CPP_REGISTER_METHODINFO(0x04750F88, ISteamMatchmakingPingResponse__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015FC320, void, Finalize, (app::ISteamMatchmakingPingResponse * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015FC430, void, InternalOnServerResponded, (app::ISteamMatchmakingPingResponse * this_ptr, void * thisptr, app::gameserveritem_t * server))
    IL2CPP_REGISTER_METHODINFO(0x04743B60, ISteamMatchmakingPingResponse_InternalOnServerResponded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012B0FE0, void, InternalOnServerFailedToRespond, (app::ISteamMatchmakingPingResponse * this_ptr, void * thisptr))
    IL2CPP_REGISTER_METHODINFO(0x0470EB30, ISteamMatchmakingPingResponse_InternalOnServerFailedToRespond__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015FC460, void *, op_Explicit, (app::ISteamMatchmakingPingResponse * that))
}
