#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ISteamMatchmakingPingResponse_VTable.h>

namespace app::classes::Steamworks::ISteamMatchmakingPingResponse_VTable {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ISteamMatchmakingPingResponse_VTable * this_ptr))
}
